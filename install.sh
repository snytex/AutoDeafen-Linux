#!/usr/bin/env bash
set -e

exec 3>&1 4>&2
exec 1>/dev/null 2>&1

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

print() {
  echo -e "$1" >&3
}


# ------------------------------
# Detect package manager
# ------------------------------
detect_pkg_manager() {
  if command -v pacman &>/dev/null; then
    # Prefer yay for AUR access, fall back to pacman
    if command -v yay &>/dev/null; then
      PKG_MANAGER="yay"
      PKG_INSTALL="yay -S --noconfirm --needed"
    else
      PKG_MANAGER="pacman"
      PKG_INSTALL="sudo pacman -S --noconfirm --needed"
    fi
  elif command -v apt &>/dev/null; then
    PKG_MANAGER="apt"
    PKG_INSTALL="sudo apt install -y"
    sudo apt update -qq
  elif command -v dnf &>/dev/null; then
    PKG_MANAGER="dnf"
    PKG_INSTALL="sudo dnf install -y"
  elif command -v zypper &>/dev/null; then
    PKG_MANAGER="zypper"
    PKG_INSTALL="sudo zypper install -y"
  elif command -v xbps-install &>/dev/null; then
    PKG_MANAGER="xbps"
    PKG_INSTALL="sudo xbps-install -y"
  elif command -v apk &>/dev/null; then
    PKG_MANAGER="apk"
    PKG_INSTALL="sudo apk add"
  else
    exec 1>&3 2>&4
    echo -e "${RED}[!]${NC} Unsupported distro: no known package manager found."
    exit 1
  fi
}

# Map package names per distro (pnpm handled separately)
pkg_name() {
  local pkg="$1"
  case "$PKG_MANAGER" in
    xbps)
      case "$pkg" in
        npm) echo "nodejs" ;;
        *)   echo "$pkg" ;;
      esac
      ;;
    apk)
      case "$pkg" in
        npm) echo "nodejs npm" ;;
        *)   echo "$pkg" ;;
      esac
      ;;
    *)
      echo "$pkg"
      ;;
  esac
}

# Install pnpm via npm (most portable cross-distro method)
install_pnpm() {
  print "${BLUE}[+]${NC} Installing pnpm via npm..."
  sudo npm install -g pnpm
}

# ------------------------------
# Install required packages
# ------------------------------
detect_pkg_manager
print "${BLUE}[+]${NC} Using package manager: $PKG_MANAGER"

packages=(git npm jq)

for pkg in "${packages[@]}"; do
  if ! command -v "$pkg" &>/dev/null; then
    print "${BLUE}[+]${NC} Installing $pkg..."
    $PKG_INSTALL $(pkg_name "$pkg")
    clear
  fi
done

# pnpm: install via npm if not present (avoids distro repo gaps)
if ! command -v pnpm &>/dev/null; then
  install_pnpm
  clear
fi

# killall is from psmisc — install if missing (mainly Debian/Ubuntu minimal installs)
if ! command -v killall &>/dev/null; then
  print "${BLUE}[+]${NC} Installing psmisc (killall)..."
  $PKG_INSTALL $(pkg_name "psmisc")
fi

# ------------------------------
# Clone repositories
# ------------------------------
print "${BLUE}[+]${NC} Cloning Vencord..."
git clone https://github.com/Vendicated/Vencord.git

print "${BLUE}[+]${NC} Cloning AutoDeafen-Linux..."
git clone https://github.com/snytex/AutoDeafen-Linux.git

print "${BLUE}[+]${NC} Downloading AutoDeafen geode..."
curl -L -o snytex.autodeafen.geode \
  "https://github.com/snytex/AutoDeafen-Linux/releases/download/v1.1.3/snytex.autodeafen.geode"

clear

# ------------------------------
# Install Mod
# ------------------------------
exec 1>&3 2>&4

GD_DIR_NATIVE="$HOME/.local/share/Steam/steamapps/common/Geometry Dash"
GD_DIR_FLATPAK="$HOME/.var/app/com.valvesoftware.Steam/.local/share/Steam/steamapps/common/Geometry Dash"

echo -e "${BLUE}Select Geometry Dash installation path:${NC}"

select gdPath in "Native Steam ($GD_DIR_NATIVE)" "Flatpak Steam ($GD_DIR_FLATPAK)" "Custom Path"; do
  exec 1>/dev/null 2>&1

  case "$REPLY" in
  1)
    GD_PATH="$GD_DIR_NATIVE"
    break
    ;;
  2)
    GD_PATH="$GD_DIR_FLATPAK"
    break
    ;;
  3)
    exec 1>&3 2>&4
    read -p "Enter custom Geometry Dash path: " GD_PATH
    exec 1>/dev/null 2>&1
    break
    ;;
  *)
    exec 1>&3 2>&4
    echo -e "${RED}Invalid selection${NC}"
    exec 1>/dev/null 2>&1
    ;;
  esac
done

# Check if GD path exists
if [ ! -d "$GD_PATH" ]; then
  exec 1>&3 2>&4
  echo -e "${RED}[!]${NC} Geometry Dash directory not found at: $GD_PATH"
  echo -e "${RED}[!]${NC} Please make sure Geometry Dash is installed."
  exit 1
fi

# Create geode/mods directory if it doesn't exist
print "${BLUE}[+]${NC} Creating geode mods directory..."
mkdir -p "$GD_PATH/geode/mods"

# Copy the mod
print "${BLUE}[+]${NC} Installing AutoDeafen mod..."
cp snytex.autodeafen.geode "$GD_PATH/geode/mods/"

clear

# Move AutoDeafen plugin into Vencord
print "${BLUE}[+]${NC} Moving AutoDeafen plugin into Vencord..."
mv AutoDeafen-Linux/Vencord/src/userplugins Vencord/src/

cd Vencord

# ------------------------------
# Choose client
# ------------------------------
exec 1>&3 2>&4
clear

echo -e "${BLUE}Which Client do you want to use?${NC}"

select client in "Vesktop" "Discord"; do
  exec 1>/dev/null 2>&1
  clear

  case "$client" in
  Vesktop)
    print "${BLUE}[+]${NC} Setting up Vencord for Vesktop..."

    # Kill Vesktop if running
    killall -9 vesktop 2>/dev/null || true
    sleep 1

    # Vesktop state.json path
    VESKTOP_STATE="$HOME/.config/vesktop/state.json"

    # Save current directory (Vencord root)
    VENCORD_DIR="$(pwd)"

    # ------------------------------
    # Install and build Vencord
    # ------------------------------
    print "${BLUE}[+]${NC} Installing Vencord dependencies..."
    pnpm install

    print "${BLUE}[+]${NC} Building Vencord..."
    pnpm build

    # ------------------------------
    # Update Vesktop state.json
    # ------------------------------
    if [ -f "$VESKTOP_STATE" ]; then
      jq --arg path "$VENCORD_DIR/dist" '.vencordDir = $path' "$VESKTOP_STATE" \
        >"$VESKTOP_STATE.tmp" && mv "$VESKTOP_STATE.tmp" "$VESKTOP_STATE"
      print "${BLUE}[+]${NC} Vencord path set in Vesktop config"
    else
      print "${YELLOW}[!]${NC} Vesktop state.json not found; start Vesktop at least once first."
    fi

    # ------------------------------
    # Launch Vesktop to initialize, then close it
    # ------------------------------
    print "${YELLOW}[!]${NC} Initializing Vesktop (will open briefly)..."
    print "${RED}[!]${NC} ${RED}DO NOT CLOSE THIS SCRIPT - Vesktop will close automatically${NC}"

    vesktop &
    VESKTOP_PID=$!
    sleep 5
    kill $VESKTOP_PID 2>/dev/null || killall -9 vesktop 2>/dev/null || true
    sleep 2

    # ------------------------------
    # Build userplugins
    # ------------------------------
    print "${BLUE}[+]${NC} Building plugins..."
    cd src/userplugins
    pnpm build
    cd ../..

    break
    ;;

  Discord)
    print "${BLUE}[+]${NC} Injecting Vencord into Discord..."

    killall -9 Discord 2>/dev/null || true
    pnpm install
    pnpm build

    exec 1>&3 2>&4
    sudo pnpm inject
    exec 1>/dev/null 2>&1

    break
    ;;

  *)
    exec 1>&3 2>&4
    echo -e "${RED}Invalid selection${NC}"
    exec 1>/dev/null 2>&1
    ;;
  esac
done

# ------------------------------
# Cleanup
# ------------------------------
cd $VENCORD_DIR/../

print "${BLUE}[+]${NC} Cleaning up..."
rm -rf AutoDeafen-Linux
rm -f snytex.autodeafen.geode

# Restore output
exec 1>&3 2>&4

echo ""
echo -e "${GREEN}[✓]${NC} AutoDeafen mod installed to Geometry Dash"
echo -e "${GREEN}[✓]${NC} Vencord has been installed. You may now launch it and enable the plugin."
echo -e "${GREEN}[✓]${NC} Thanks for using this script! For help, DM @snytexx on Discord."
