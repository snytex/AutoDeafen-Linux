#!/usr/bin/env bash
set -euo pipefail

# ==============================================================================
# AutoDeafen-Linux — graphical installer
# Wraps the same steps as install.sh but drives them through zenity (GNOME/GTK)
# or kdialog (KDE) dialogs. Long-running work is shown in the terminal it was
# launched from; user choices and results use native dialogs.
# ==============================================================================

APP_TITLE="AutoDeafen-Linux Installer"
GEODE_VERSION="v1.1.3"

RED='\033[0;31m'; GREEN='\033[0;32m'; YELLOW='\033[1;33m'; BLUE='\033[0;34m'; NC='\033[0m'
log() { echo -e "$1"; }

# If launched without a terminal (e.g. double-clicked in a file manager),
# relaunch inside one so sudo prompts and build output are visible.
if { [[ ! -t 0 ]] || [[ ! -t 1 ]]; } && [[ -z "${AD_IN_TERMINAL:-}" ]]; then
  SELF="$(readlink -f "$0")"
  for term in konsole gnome-terminal kitty alacritty xterm x-terminal-emulator; do
    command -v "$term" &>/dev/null || continue
    case "$term" in
      gnome-terminal) exec env AD_IN_TERMINAL=1 "$term" -- bash "$SELF" ;;
      kitty)          exec env AD_IN_TERMINAL=1 "$term" --hold bash "$SELF" ;;
      *)              exec env AD_IN_TERMINAL=1 "$term" -e bash "$SELF" ;;
    esac
  done
fi

VENCORD_DIR="$HOME/Vencord"
TMP_DIR=""

GD_DIR_NATIVE="$HOME/.local/share/Steam/steamapps/common/Geometry Dash"
GD_DIR_FLATPAK="$HOME/.var/app/com.valvesoftware.Steam/.local/share/Steam/steamapps/common/Geometry Dash"

# ------------------------------
# GUI backend abstraction
# ------------------------------
GUI=""
detect_gui() {
  if command -v zenity &>/dev/null; then GUI="zenity"
  elif command -v kdialog &>/dev/null; then GUI="kdialog"
  else GUI=""
  fi
}

ui_info() { # title text
  case "$GUI" in
    zenity)  zenity --info --title="$1" --width=440 --text="$2" ;;
    kdialog) kdialog --title "$1" --msgbox "$2" ;;
    *)       log "${BLUE}[i]${NC} $2" ;;
  esac
}

ui_error() { # title text
  case "$GUI" in
    zenity)  zenity --error --title="$1" --width=440 --text="$2" ;;
    kdialog) kdialog --title "$1" --error "$2" ;;
    *)       log "${RED}[!]${NC} $2" >&2 ;;
  esac
}

ui_question() { # title text -> 0 (yes) / 1 (no)
  case "$GUI" in
    zenity)  zenity --question --title="$1" --width=440 --text="$2" ;;
    kdialog) kdialog --title "$1" --yesno "$2" ;;
    *)       local a; read -rp "$2 [y/N] " a; [[ "$a" =~ ^[Yy] ]] ;;
  esac
}

ui_menu() { # title text opt1 opt2 ... -> echoes chosen option (empty on cancel)
  local title="$1" text="$2"; shift 2
  case "$GUI" in
    zenity)
      zenity --list --title="$title" --text="$text" --hide-header \
        --column="Option" "$@" --width=440 --height=320
      ;;
    kdialog)
      local args=() o
      for o in "$@"; do args+=("$o" "$o"); done
      kdialog --title "$title" --menu "$text" "${args[@]}"
      ;;
    *)
      local o; select o in "$@"; do echo "$o"; break; done
      ;;
  esac
}

ui_dir() { # title -> echoes directory (empty on cancel)
  case "$GUI" in
    zenity)  zenity --file-selection --directory --title="$1" ;;
    kdialog) kdialog --title "$1" --getexistingdirectory "$HOME" ;;
    *)       local d; read -rp "$1: " d; echo "$d" ;;
  esac
}

# ------------------------------
# Pulsating progress (zenity only; kdialog/none fall back to terminal output)
# ------------------------------
PROGRESS_PID=""
PROGRESS_FIFO=""
progress_start() { # title
  if [[ "$GUI" == "zenity" ]]; then
    PROGRESS_FIFO="$(mktemp -u)"
    mkfifo "$PROGRESS_FIFO"
    zenity --progress --pulsate --no-cancel --auto-close \
      --title="$1" --text="Starting..." --width=440 < "$PROGRESS_FIFO" &
    PROGRESS_PID=$!
    exec 5>"$PROGRESS_FIFO"
  fi
}
progress_status() { # text
  log "${BLUE}[+]${NC} $1"
  if [[ "$GUI" == "zenity" && -n "$PROGRESS_PID" ]]; then
    echo "# $1" >&5 || true
  fi
}
progress_stop() {
  if [[ "$GUI" == "zenity" && -n "$PROGRESS_PID" ]]; then
    echo "100" >&5 2>/dev/null || true
    exec 5>&- || true
    wait "$PROGRESS_PID" 2>/dev/null || true
    rm -f "$PROGRESS_FIFO" 2>/dev/null || true
    PROGRESS_PID=""
  fi
}

# ------------------------------
# Failure / cleanup handling
# ------------------------------
on_error() {
  local code=$?
  progress_stop
  ui_error "$APP_TITLE" "Installation failed (exit ${code}).\n\nCheck the terminal for the full error.\nFor help, DM @snytexx on Discord."
  [[ -n "$TMP_DIR" && -d "$TMP_DIR" ]] && rm -rf "$TMP_DIR"
  exit "$code"
}
trap on_error ERR

# ------------------------------
# Package manager
# ------------------------------
detect_pkg_manager() {
  if command -v pacman &>/dev/null; then
    if command -v yay &>/dev/null; then
      PKG_MANAGER="yay"; PKG_INSTALL="yay -S --noconfirm --needed"
    else
      PKG_MANAGER="pacman"; PKG_INSTALL="sudo pacman -S --noconfirm --needed"
    fi
  elif command -v apt &>/dev/null; then
    PKG_MANAGER="apt"; PKG_INSTALL="sudo apt install -y"; sudo apt update -qq
  elif command -v dnf &>/dev/null; then
    PKG_MANAGER="dnf"; PKG_INSTALL="sudo dnf install -y"
  elif command -v zypper &>/dev/null; then
    PKG_MANAGER="zypper"; PKG_INSTALL="sudo zypper install -y"
  elif command -v xbps-install &>/dev/null; then
    PKG_MANAGER="xbps"; PKG_INSTALL="sudo xbps-install -y"
  elif command -v apk &>/dev/null; then
    PKG_MANAGER="apk"; PKG_INSTALL="sudo apk add"
  else
    ui_error "$APP_TITLE" "Unsupported distro: no known package manager found."
    exit 1
  fi
}

pkg_name() {
  local pkg="$1"
  case "$PKG_MANAGER" in
    xbps) [[ "$pkg" == npm ]] && echo "nodejs" || echo "$pkg" ;;
    apk)  [[ "$pkg" == npm ]] && echo "nodejs npm" || echo "$pkg" ;;
    *)    echo "$pkg" ;;
  esac
}

# ==============================================================================
# Start
# ==============================================================================
detect_gui
detect_pkg_manager

# Make sure we have a dialog tool; offer to install zenity if not.
if [[ -z "$GUI" ]]; then
  log "${YELLOW}[!]${NC} No graphical dialog tool (zenity/kdialog) found."
  read -rp "Install zenity now to continue with the GUI installer? [Y/n] " a
  if [[ ! "$a" =~ ^[Nn] ]]; then
    $PKG_INSTALL "$(pkg_name zenity)"
    detect_gui
  fi
  if [[ -z "$GUI" ]]; then
    log "${RED}[!]${NC} No GUI available. Use the terminal installer instead: ./install.sh"
    exit 1
  fi
fi

ui_info "$APP_TITLE" "Welcome!\n\nThis will install the AutoDeafen mod for Geometry Dash and the Vencord plugin that deafens Discord for you.\n\nA few graphical prompts will appear. Package installs and builds may ask for your password in the terminal."

# ------------------------------
# Prerequisites (may need sudo — kept out of the progress dialog)
# ------------------------------
log "${BLUE}[+]${NC} Using package manager: $PKG_MANAGER"
for pkg in git npm jq; do
  if ! command -v "$pkg" &>/dev/null; then
    log "${BLUE}[+]${NC} Installing $pkg..."
    $PKG_INSTALL $(pkg_name "$pkg")
  fi
done
if ! command -v pnpm &>/dev/null; then
  log "${BLUE}[+]${NC} Installing pnpm..."
  sudo npm install -g pnpm
fi
if ! command -v killall &>/dev/null; then
  log "${BLUE}[+]${NC} Installing psmisc (killall)..."
  $PKG_INSTALL $(pkg_name psmisc)
fi

# ------------------------------
# Choose Geometry Dash path
# ------------------------------
GD_PATH=""
while true; do
  choice="$(ui_menu "$APP_TITLE" "Select your Geometry Dash installation:" \
    "Native Steam" "Flatpak Steam" "Custom path...")" || exit 1
  case "$choice" in
    "Native Steam")   GD_PATH="$GD_DIR_NATIVE" ;;
    "Flatpak Steam")  GD_PATH="$GD_DIR_FLATPAK" ;;
    "Custom path...") GD_PATH="$(ui_dir "Select your Geometry Dash folder")" || GD_PATH="" ;;
    "") exit 1 ;;
  esac
  if [[ -n "$GD_PATH" && -d "$GD_PATH" ]]; then
    break
  fi
  ui_error "$APP_TITLE" "Geometry Dash folder not found:\n${GD_PATH:-<none selected>}\n\nMake sure GD is installed, then try again."
done

# ------------------------------
# Choose client
# ------------------------------
CLIENT="$(ui_menu "$APP_TITLE" "Which Discord client do you use?" "Vesktop" "Discord")" || exit 1
[[ -z "$CLIENT" ]] && exit 1

# ------------------------------
# Handle an existing Vencord folder (before any cloning)
# ------------------------------
REPLACE_VENCORD=0
CLONE_VENCORD=1
if [[ -d "$VENCORD_DIR" ]]; then
  if ui_question "$APP_TITLE" "A Vencord folder already exists at:\n$VENCORD_DIR\n\nReplace it with a fresh copy?\n\nChoose No to keep the existing one and just (re)install the plugin into it."; then
    REPLACE_VENCORD=1
  else
    CLONE_VENCORD=0
  fi
fi

# ==============================================================================
# Install
# ==============================================================================
TMP_DIR="$(mktemp -d)"
progress_start "$APP_TITLE"

if [[ "$REPLACE_VENCORD" == 1 ]]; then
  progress_status "Removing existing Vencord folder..."
  rm -rf "$VENCORD_DIR"
fi

if [[ "$CLONE_VENCORD" == 1 ]]; then
  progress_status "Cloning Vencord..."
  git clone https://github.com/Vendicated/Vencord.git "$VENCORD_DIR"
fi

progress_status "Cloning AutoDeafen-Linux..."
git clone https://github.com/snytex/AutoDeafen-Linux.git "$TMP_DIR/AutoDeafen-Linux"

progress_status "Downloading AutoDeafen geode mod..."
curl -fL -o "$TMP_DIR/snytex.autodeafen.geode" \
  "https://github.com/snytex/AutoDeafen-Linux/releases/download/${GEODE_VERSION}/snytex.autodeafen.geode"

progress_status "Installing mod into Geometry Dash..."
mkdir -p "$GD_PATH/geode/mods"
cp "$TMP_DIR/snytex.autodeafen.geode" "$GD_PATH/geode/mods/"

progress_status "Installing AutoDeafen plugin into Vencord..."
rm -rf "$VENCORD_DIR/src/userplugins"
mkdir -p "$VENCORD_DIR/src"
mv "$TMP_DIR/AutoDeafen-Linux/Vencord/src/userplugins" "$VENCORD_DIR/src/"

cd "$VENCORD_DIR"

progress_status "Installing Vencord dependencies (this can take a while)..."
pnpm install

progress_status "Building Vencord..."
pnpm build

case "$CLIENT" in
  Vesktop)
    progress_status "Configuring Vesktop..."
    killall -9 vesktop 2>/dev/null || true
    sleep 1

    VESKTOP_STATE="$HOME/.config/vesktop/state.json"
    if [[ -f "$VESKTOP_STATE" ]]; then
      jq --arg path "$VENCORD_DIR/dist" '.vencordDir = $path' "$VESKTOP_STATE" \
        > "$VESKTOP_STATE.tmp" && mv "$VESKTOP_STATE.tmp" "$VESKTOP_STATE"
    fi

    progress_status "Initializing Vesktop (opens briefly)..."
    vesktop &
    VESKTOP_PID=$!
    sleep 5
    kill "$VESKTOP_PID" 2>/dev/null || killall -9 vesktop 2>/dev/null || true
    sleep 2

    progress_status "Building plugins..."
    ( cd src/userplugins && pnpm build )

    if [[ ! -f "$VESKTOP_STATE" ]]; then
      progress_stop
      ui_info "$APP_TITLE" "Vesktop config not found yet.\n\nStart Vesktop once, then in Vencord settings set the custom Vencord location to:\n$VENCORD_DIR/dist"
      progress_start "$APP_TITLE"
    fi
    ;;

  Discord)
    progress_status "Preparing to inject into Discord..."
    killall -9 Discord 2>/dev/null || true
    progress_stop
    log "${BLUE}[+]${NC} Injecting Vencord into Discord (may ask for your password)..."
    sudo pnpm inject
    ;;
esac

progress_stop

# ------------------------------
# Cleanup
# ------------------------------
rm -rf "$TMP_DIR"
TMP_DIR=""

ui_info "$APP_TITLE" "Done!\n\n✓ AutoDeafen mod installed to Geometry Dash\n✓ Vencord + AutoDeafen plugin installed ($CLIENT)\n\nLaunch your client and enable the GDAutoDeafen plugin in Vencord settings.\n\nThanks for using AutoDeafen! For help, DM @snytexx on Discord."
log "${GREEN}[✓]${NC} Installation complete."
