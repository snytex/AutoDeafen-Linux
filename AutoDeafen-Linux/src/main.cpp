#include "Geode/ui/Popup.hpp"
#include "Geode/utils/VersionInfo.hpp"
#include "Geode/utils/async.hpp"
#include <Geode/binding/MenuLayer.hpp>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

#include <Geode/Geode.hpp>
#include <Geode/binding/CCMenuItemToggler.hpp>
#include <Geode/binding/GJGameLevel.hpp>
#include <Geode/cocos/cocoa/CCObject.h>
#include <Geode/loader/Log.hpp>
#include <Geode/modify/GManager.hpp>
#include <Geode/modify/LoadingLayer.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/PauseLayer.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <Geode/ui/GeodeUI.hpp>
#include <Geode/ui/TextInput.hpp>
#include <Geode/utils/VersionInfo.hpp>
#include <Geode/utils/web.hpp>
#include <cocos2d.h>

using namespace geode::prelude;

static async::TaskHolder<web::WebResponse> g_updateTask;
const bool isDev = false;

class updatePopup : public geode::Popup {
protected:
  std::string m_current;
  std::string m_latest;

  bool init() override {
    if (!Popup::init(240.0f, 160.0f, "GJ_square02.png"))
      return false;

    CCPoint topLeftCorner = ccp(0, m_size.height);
    this->setTitle("Update available!");

    auto menu = CCMenu::create();
    menu->setPosition({0, 0});
    m_mainLayer->addChild(menu);

    auto topLabel = CCLabelBMFont::create("AutoDeafen", "goldFont.fnt");
    topLabel->setAnchorPoint({0.5, 0.5});
    topLabel->setScale(1.0f);
    topLabel->setPosition(topLeftCorner + ccp(120, 5));

    auto downloadBtnSprite = ButtonSprite::create("Download");
    auto downloadBtn = CCMenuItemSpriteExtra::create(
        downloadBtnSprite, this, menu_selector(updatePopup::onDownload));

    downloadBtn->setPosition(m_size.width / 2, m_size.height / 2 + 10.f);
    menu->addChild(downloadBtn);

    auto versionText = fmt::format("v{} -> v{}", m_current, m_latest);
    auto versionLabel =
        CCLabelBMFont::create(versionText.c_str(), "chatFont.fnt");

    versionLabel->setScale(0.6f);
    versionLabel->setPosition(m_size.width / 2, m_size.height / 2 - 25.f);
    versionLabel->setColor({200, 200, 200});

    m_mainLayer->addChild(versionLabel);
    m_mainLayer->addChild(topLabel);

    return true;
  }

public:
  static updatePopup *create(std::string current, std::string latest) {
    auto ret = new updatePopup();
    // ret->setTitle("AutoDeafen");
    ret->m_current = current;
    ret->m_latest = latest;
    if (ret && ret->init()) {
      ret->autorelease();
      return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
  }

  void onDownload(CCObject *) {
    geode::utils::web::openLinkInBrowser(
        "https://github.com/snytex/AutoDeafen-Linux");
  }
};

bool isUpdated() {
  log::info("[AUTODEAFEN UPDATE] isUpdate() called");

  auto req = web::WebRequest();
  std::string url = "https://raw.githubusercontent.com/snytex/AutoDeafen-Linux/"
                    "refs/heads/master/version.txt";

  log::info("[AUTODEAFEN UPDATE] Spawning web request to: {}", url);

  g_updateTask.spawn(req.get(url), [](web::WebResponse res) {
    log::info("[AUTODEAFEN UPDATE] Web callback fired");
    if (!res.ok()) {
      log::error("[AUTODEAFEN UPDATE] Request failed. Status code: {}",
                 res.code());
      return;
    }
    log::info("[AUTODEAFEN UPDATE] Request ok, reading body");
    auto latest = res.string().unwrapOr("");
    log::info("[AUTODEAFEN UPDATE] Raw response body: '{}'", latest);

    // Strip whitespace/newlines from the fetched version string
    latest.erase(
        std::remove_if(latest.begin(), latest.end(),
                       [](unsigned char c) { return std::isspace(c); }),
        latest.end());

    // Strip leading 'v' if present, to normalize both sides
    if (!latest.empty() && latest[0] == 'v')
      latest = latest.substr(1);

    log::info("[AUTODEAFEN UPDATE] Cleaned latest: '{}'", latest);

    auto current = Mod::get()->getVersion().toNonVString();
    log::info("[AUTODEAFEN UPDATE] Current mod version: '{}'", current);
    log::info("[AUTODEAFEN UPDATE] Are they equal? {}", latest == current);

    if (latest.empty()) {
      log::error("[AUTODEAFEN UPDATE] latest is empty, aborting popup");
      return;
    }

    if (latest == current) {
      log::info("[AUTODEAFEN UPDATE] Already up to date, no popup needed");
      return;
    }

    log::info(
        "[AUTODEAFEN UPDATE] Update needed! Queuing popup on main thread...");
    Loader::get()->queueInMainThread([latest, current]() {
      log::info(
          "[AUTODEAFEN UPDATE] Main thread callback fired, creating popup...");
      auto popup = updatePopup::create(current, latest);
      log::info("[AUTODEAFEN UPDATE] Popup created: {}", popup != nullptr);
      if (popup) {
        log::info("[AUTODEAFEN UPDATE] Calling popup->show()");
        popup->show();
        log::info("[AUTODEAFEN UPDATE] popup->show() returned");
      }
    });
  });

  log::info("[AUTODEAFEN UPDATE] g_updateTask.spawn() returned");
  return false;
}

struct AutoDeafenLevel {
  bool enabled = false;
  short
      levelType; // 0 = Normal, 1 = Local/Editor, 2 = Daily/Weekly, 3 = gauntlet
  int id = 0;
  short percentage = 50;
  AutoDeafenLevel(bool a, short b, int c, short d)
      : enabled(a), levelType(b), id(c), percentage(d) {}
  AutoDeafenLevel() = default;
};

AutoDeafenLevel currentlyLoadedLevel;
std::vector<AutoDeafenLevel> loadedAutoDeafenLevels;

bool hasDeafenedThisAttempt = false;
bool hasDied = false;
bool isCurrentlyDeafened = false; // tracks our belief of Discord's deafen state
bool lastConnectionSuccess = false; // for the status indicator in ConfigLayer

short getLevelType(GJGameLevel *level) {
  if (level->m_levelType != GJLevelType::Saved)
    return 1;
  if (level->m_dailyID > 0)
    return 2;
  if (level->m_gauntletLevel)
    return 3;
  return 0;
}

void runEmptyDebugs() {
  log::info("{}", "Running debugs");
  log::info("{}", "Loaded levels are:");
  for (AutoDeafenLevel level : loadedAutoDeafenLevels) {
    log::info("Id {} of type {} with enabled {} and percentage {}", level.id,
              level.levelType, level.enabled, level.percentage);
  }
  log::info("{}", "Currently loaded level is:");
  log::info("Id {} of type {} with enabled {} and percentage {}",
            currentlyLoadedLevel.id, currentlyLoadedLevel.levelType,
            currentlyLoadedLevel.enabled, currentlyLoadedLevel.percentage);
}

void saveFile() {
  auto path = Mod::get()->getSaveDir();
  path /= ".autodeafen";

  log::info("{}", "Saving .autodeafen file to " + path.string());

  std::ofstream file(path, std::ios::binary);
  if (file.is_open()) {
    file.write("ad1", sizeof("ad1"));

    for (AutoDeafenLevel const &a : loadedAutoDeafenLevels) {
      if (a.percentage > 100 || a.percentage < 0 || a.levelType > 3 ||
          a.levelType < 0 || a.id < 0) {
        log::warn("{}{}{}{}{}"
                  "Deleted corrupted autodeafen save entry ",
                  a.id, " with percentage ", a.percentage, " and levelType ",
                  a.levelType);
        continue;
      }

      file.write(reinterpret_cast<const char *>(&a.enabled), sizeof(bool));
      file.write(reinterpret_cast<const char *>(&a.levelType), sizeof(short));
      file.write(reinterpret_cast<const char *>(&a.id), sizeof(int));
      file.write(reinterpret_cast<const char *>(&a.percentage), sizeof(short));

      if (!file) {
        log::error("{}", "An error occurred when writing .autodeafen file.");
        break;
      }
    }
    file.close();
    log::debug("Successfully saved .autodeafen file.");
  } else {
    log::error("AutoDeafen file failed when trying to open and save.");
  }
}

void loadFile() {
  auto path = Mod::get()->getSaveDir();
  path /= ".autodeafen";

  log::info("{}", "Loading .autodeafen file from " + path.string());

  std::ifstream file(path, std::ios::binary);
  if (file.is_open()) {
    loadedAutoDeafenLevels.clear();

    char header[4];
    file.read(header, sizeof("ad1"));

    if (strncmp(header, "ad1", 4) == 0) {
      log::info("Loading autodeafen file version 1.");
      while (true) {
        AutoDeafenLevel level;
        if (!file.read(reinterpret_cast<char *>(&level.enabled), sizeof(bool)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.levelType),
                       sizeof(short)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.id), sizeof(int)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.percentage),
                       sizeof(short)))
          break;
        loadedAutoDeafenLevels.push_back(level);
      }
    }

    log::info("Successfully loaded .autodeafen file.");
    file.close();
  } else {
    log::warn("AutoDeafen file failed when trying to open and load (probably "
              "just doesn't exist). Will create a new one on exit.");
  }
}

void saveLevel(AutoDeafenLevel lvl) {
  log::info("Saving level {}", lvl.id);

  for (auto &level : loadedAutoDeafenLevels) {
    if (level.id == lvl.id && level.levelType == lvl.levelType) {
      level.percentage = lvl.percentage;
      level.enabled = lvl.enabled;
      return;
    }
  }

  bool const &enabledByDefault =
      Mod::get()->getSettingValue<bool>("Enabled by Default");
  short const &defaultPercentage = static_cast<short>(
      Mod::get()->getSettingValue<int64_t>("Default Percentage") & 0xFFFF);

  if (!(lvl.enabled == enabledByDefault &&
        lvl.percentage == defaultPercentage) &&
      lvl.percentage <= 100 && lvl.levelType <= 3 && lvl.id >= 0)
    loadedAutoDeafenLevels.push_back(lvl);

  if (Mod::get()->getSettingValue<bool>("Additional Debugging")) {
    runEmptyDebugs();
  }
}

// Sends a message to the Vencord TCP server. Returns true on success.
bool sendToVencord(const char *msg) {
  WSADATA wsaData;
  if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
    lastConnectionSuccess = false;
    return false;
  }

  SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  if (sock == INVALID_SOCKET) {
    WSACleanup();
    lastConnectionSuccess = false;
    return false;
  }

  sockaddr_in serv_addr{};
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_port = htons(8787);
  inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr);

  if (connect(sock, (sockaddr *)&serv_addr, sizeof(serv_addr)) ==
      SOCKET_ERROR) {
    closesocket(sock);
    WSACleanup();
    lastConnectionSuccess = false;
    log::warn("AutoDeafen: failed to connect to Vencord (port 8787). Is the "
              "Vencord plugin running?");
    return false;
  }

  send(sock, msg, (int)strlen(msg), 0);
  closesocket(sock);
  WSACleanup();
  lastConnectionSuccess = true;
  log::info("AutoDeafen: sent '{}' to Vencord.", msg);
  return true;
}

// Non-blocking connection check for the status indicator.
bool checkVencordConnection() {
  WSADATA wsaData;
  if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    return false;

  SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  if (sock == INVALID_SOCKET) {
    WSACleanup();
    return false;
  }

  u_long nonblocking = 1;
  ioctlsocket(sock, FIONBIO, &nonblocking);

  sockaddr_in addr{};
  addr.sin_family = AF_INET;
  addr.sin_port = htons(8787);
  inet_pton(AF_INET, "127.0.0.1", &addr.sin_addr);

  connect(sock, (sockaddr *)&addr,
          sizeof(addr)); // returns SOCKET_ERROR / WSAEWOULDBLOCK

  fd_set writeSet, exceptSet;
  FD_ZERO(&writeSet);
  FD_ZERO(&exceptSet);
  FD_SET(sock, &writeSet);
  FD_SET(sock, &exceptSet);

  timeval tv{0, 150000}; // 150ms timeout
  int result = select(0, nullptr, &writeSet, &exceptSet, &tv);

  bool connected =
      (result > 0 && FD_ISSET(sock, &writeSet) && !FD_ISSET(sock, &exceptSet));
  closesocket(sock);
  WSACleanup();
  lastConnectionSuccess = connected;
  return connected;
}

// Only deafens if we are not already deafened and the level has AutoDeafen
// enabled.
void sendDeafen() {
  if (!currentlyLoadedLevel.enabled)
    return;
  if (isCurrentlyDeafened)
    return;
  if (sendToVencord("deafen\n"))
    isCurrentlyDeafened = true;
}

// Only undeafens if we are currently deafened.
// If TCP fails we reset the state anyway — Vencord wasn't running,
// so Discord couldn't have been deafened in the first place.
void sendUndeafen() {
  if (!isCurrentlyDeafened)
    return;
  sendToVencord("undeafen\n");
  isCurrentlyDeafened = false; // reset regardless of TCP result
}

// Resets all per-level attempt state. Called on PlayLayer::init and resetLevel.
void resetAttemptState() {
  hasDeafenedThisAttempt = false;
  hasDied = false;
}

class $modify(PlayerObject) {
  void playerDestroyed(bool p0) {
    if (auto playLayer = PlayLayer::get()) {
      if (auto level = playLayer->m_level) {
        if (playLayer->m_player1 != nullptr && this == playLayer->m_player1 &&
            !(level->isPlatformer())) {
          if (!playLayer->m_isPracticeMode ||
              (playLayer->m_isPracticeMode &&
               Mod::get()->getSettingValue<bool>("Enabled in Practice Mode"))) {
            if (hasDeafenedThisAttempt && !hasDied) {
              hasDied = true;
              sendUndeafen();
            }
          }
        }
      }
    }
    PlayerObject::playerDestroyed(p0);
  }
};

class $modify(GManager) {
  void save() {
    GManager::save();
    if (currentlyLoadedLevel.id != 0 || currentlyLoadedLevel.levelType != 0)
      saveLevel(currentlyLoadedLevel);
    saveFile();
  }
};

class $modify(LoadingLayer) {
  bool init(bool p0) {
    if (!LoadingLayer::init(p0))
      return false;
    static bool s_loaded = false;
    if (!s_loaded) {
      loadFile();
      s_loaded = true;
    }
    return true;
  }
};

class $modify(PlayLayer) {
  bool init(GJGameLevel *level, bool p1, bool p2) {
    if (!PlayLayer::init(level, p1, p2))
      return false;

    // Always reset state when entering a level, regardless of whether the
    // level is found in the saved list or not.
    resetAttemptState();
    isCurrentlyDeafened = false;

    int id = m_level->m_levelID.value();
    short levelType = getLevelType(level);
    if (levelType == 1)
      id = m_level->m_M_ID;

    for (AutoDeafenLevel savedLevel : loadedAutoDeafenLevels) {
      if (savedLevel.id == id && savedLevel.levelType == levelType) {
        currentlyLoadedLevel = savedLevel;
        return true;
      }
    }

    currentlyLoadedLevel = AutoDeafenLevel(
        Mod::get()->getSettingValue<bool>("Enabled by Default"), levelType, id,
        static_cast<short>(
            Mod::get()->getSettingValue<int64_t>("Default Percentage") &
            0xFFFF));

    return true;
  }

  void resetLevel() {
    PlayLayer::resetLevel();
    resetAttemptState();
    // Do NOT reset isCurrentlyDeafened here — playerDestroyed handles
    // undeafening before resetLevel is called. If somehow we're still deafened
    // here, the next sendDeafen() check will prevent a double-deafen.
  }

  void postUpdate(float p0) {
    PlayLayer::postUpdate(p0);

    if (this->m_isPracticeMode &&
        !Mod::get()->getSettingValue<bool>("Enabled in Practice Mode")) {
      return;
    }

    if (!currentlyLoadedLevel.enabled)
      return;

    int percent = PlayLayer::getCurrentPercentInt();
    if (percent >= currentlyLoadedLevel.percentage && percent != 100) {
      if (!hasDeafenedThisAttempt) {
        hasDeafenedThisAttempt = true;
        sendDeafen();
      }
    } else if (percent < currentlyLoadedLevel.percentage &&
               isCurrentlyDeafened) {
      // Percentage dropped below threshold (e.g. switched to an earlier
      // startpos)
      hasDeafenedThisAttempt = false;
      sendUndeafen();
    }
  }

  void levelComplete() {
    PlayLayer::levelComplete();
    if (hasDeafenedThisAttempt) {
      hasDeafenedThisAttempt = false;
      sendUndeafen();
    }
  }

  void onQuit() {
    PlayLayer::onQuit();

    if (hasDeafenedThisAttempt) {
      hasDeafenedThisAttempt = false;
      sendUndeafen();
    }

    saveLevel(currentlyLoadedLevel);
    currentlyLoadedLevel = AutoDeafenLevel();
    isCurrentlyDeafened = false;
  }
};

bool currentlyInMenu = false;

// NiekBeats
class ConfigLayer : public geode::Popup {
protected:
  CCMenuItemToggler *enabledButton = nullptr;
  TextInput *percentageInput = nullptr;
  CCLabelBMFont *statusLabel = nullptr;

  bool init() override {
    if (!Popup::init(300.f, 200.f, "GJ_square02.png"))
      return false;

    this->setKeyboardEnabled(true);
    currentlyInMenu = true;

    CCPoint topLeftCorner = ccp(0, m_size.height);

    auto topLabel = CCLabelBMFont::create("AutoDeafen", "goldFont.fnt");
    topLabel->setAnchorPoint({0.5, 0.5});
    topLabel->setScale(1.0f);
    topLabel->setPosition(topLeftCorner + ccp(142, 5));

    auto enabledLabel = CCLabelBMFont::create("Enabled", "bigFont.fnt");
    enabledLabel->setAnchorPoint({0, 0.5});
    enabledLabel->setScale(0.7f);
    enabledLabel->setPosition(topLeftCorner + ccp(60, -60));

    enabledButton = CCMenuItemToggler::create(
        CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png"),
        CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png"), this,
        menu_selector(ConfigLayer::toggleEnabled));
    enabledButton->setPosition(enabledLabel->getPosition() + ccp(140, 0));
    enabledButton->setScale(0.85f);
    enabledButton->setClickable(true);
    enabledButton->toggle(currentlyLoadedLevel.enabled);

    percentageInput = TextInput::create(100.f, "%");
    percentageInput->setFilter("0123456789");
    percentageInput->setPosition(enabledButton->getPosition() + ccp(0, -40));
    percentageInput->setScale(0.85f);
    percentageInput->setMaxCharCount(2);
    percentageInput->setEnabled(true);
    percentageInput->setString(std::to_string(currentlyLoadedLevel.percentage));

    auto percentageLabel = CCLabelBMFont::create("Percent", "bigFont.fnt");
    percentageLabel->setAnchorPoint({0, 0.5});
    percentageLabel->setScale(0.7f);
    percentageLabel->setPosition(topLeftCorner + ccp(60, -100));

    // Connection status indicator
    bool connected = checkVencordConnection();
    statusLabel = CCLabelBMFont::create(connected ? "Discord: Connected"
                                                  : "Discord: Disconnected",
                                        "chatFont.fnt");
    statusLabel->setAnchorPoint({0.5f, 0.5f});
    statusLabel->setScale(0.55f);
    statusLabel->setPosition(ccp(m_size.width / 2.f, 22.f));
    statusLabel->setColor(connected ? ccc3(0, 220, 80) : ccc3(220, 60, 60));

    auto menu = CCMenu::create();
    menu->setPosition({0, 0});
    menu->addChild(enabledButton);
    menu->addChild(percentageInput);

    auto versionLabel = CCLabelBMFont::create(
        fmt::format("{}", Mod::get()->getVersion()).c_str(), "chatFont.fnt");
    versionLabel->setAnchorPoint({1.f, 0.f});
    versionLabel->setScale(0.4f);
    versionLabel->setPosition(ccp(m_size.width - 8.f, 8.f));
    versionLabel->setColor(ccc3(130, 130, 130));

    m_mainLayer->addChild(topLabel);
    m_mainLayer->addChild(enabledLabel);
    m_mainLayer->addChild(percentageLabel);
    m_mainLayer->addChild(statusLabel);
    m_mainLayer->addChild(versionLabel);
    m_mainLayer->addChild(menu);

    return true;
  }

  void toggleEnabled(CCObject *sender) {
    currentlyLoadedLevel.enabled = !currentlyLoadedLevel.enabled;

    if (auto playLayer = PlayLayer::get()) {
      int percent = playLayer->getCurrentPercentInt();
      log::info("Toggle changed. Current game percent is: {}", percent);

      if (!currentlyLoadedLevel.enabled && isCurrentlyDeafened) {
        log::info("Trying to undeafen");
        sendUndeafen();
      } else if (currentlyLoadedLevel.enabled &&
                 percent >= currentlyLoadedLevel.percentage) {
        log::info("Trying to deafen");
        hasDeafenedThisAttempt = true;
        sendDeafen();
      }
    }
  }

  void onClose(CCObject *a) override {
    Popup::onClose(a);
    if (percentageInput != nullptr) {
      try {
        int val = std::stoi(percentageInput->getString());
        currentlyLoadedLevel.percentage =
            static_cast<short>(std::clamp(val, 0, 100));
      } catch (...) {
        // Empty or non-numeric input. keep the existing percentage
      }
    }
    saveLevel(currentlyLoadedLevel);
    saveFile();
    currentlyInMenu = false;
  }

  static ConfigLayer *create() {
    auto ret = new ConfigLayer();
    if (ret && ret->init()) {
      ret->autorelease();
      return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
  }

public:
  void openMenu(CCObject *) {
    auto layer = create();
    layer->show();
  }
};

class $modify(PauseLayer) {
  void customSetup() {
    PauseLayer::customSetup();

    CCSprite *sprite =
        CCSprite::createWithSpriteFrameName("GJ_musicOffBtn_001.png");
    auto btn = CCMenuItemSpriteExtra::create(
        sprite, this, menu_selector(ConfigLayer::openMenu));
    auto menu = this->getChildByID("right-button-menu");
    menu->addChild(btn);
    menu->updateLayout();
  }

  void onResume(CCObject *sender) {
    if (!currentlyInMenu)
      PauseLayer::onResume(sender);
  }

  void onRestart(CCObject *sender) {
    // Capture before calling original — resetLevel may be called inside.
    bool shouldUndeafen = hasDeafenedThisAttempt;
    if (!currentlyInMenu)
      PauseLayer::onRestart(sender);
    if (shouldUndeafen)
      sendUndeafen();
  }

  void onRestartFull(CCObject *sender) {
    bool shouldUndeafen = hasDeafenedThisAttempt;
    if (!currentlyInMenu)
      PauseLayer::onRestartFull(sender);
    if (shouldUndeafen)
      sendUndeafen();
  }

  void onQuit(CCObject *sender) {
    if (!currentlyInMenu)
      PauseLayer::onQuit(sender);
    // PlayLayer::onQuit (hooked above) handles the undeafen.
  }

  void onPracticeMode(CCObject *sender) {
    if (!currentlyInMenu)
      PauseLayer::onPracticeMode(sender);
  }

  void onSettings(CCObject *sender) {
    if (!currentlyInMenu)
      PauseLayer::onSettings(sender);
  }
};

class $modify(UpdateLayer, MenuLayer) {
  bool init() {
    log::info("[AUTODEAFEN UPDATE] MenuLayer::init hooked!");
    if (!MenuLayer::init())
      return false;

    static bool s_checkedUpdate = false;
    log::info("[AUTODEAFEN UPDATE] s_checkedUpdate = {}", s_checkedUpdate);
    if (!s_checkedUpdate) {
      s_checkedUpdate = true;
      log::info("[AUTODEAFEN UPDATE] Calling isUpdated() from init...");
      isUpdated();
    }

    return true;
  }
};
