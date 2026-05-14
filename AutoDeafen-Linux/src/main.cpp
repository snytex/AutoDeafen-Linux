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
#include <Geode/binding/Slider.hpp>
#include <Geode/binding/SliderThumb.hpp>
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

    latest.erase(
        std::remove_if(latest.begin(), latest.end(),
                       [](unsigned char c) { return std::isspace(c); }),
        latest.end());

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
  short deafenPercentage = 50;
  short undeafenPercentage = 100;
  AutoDeafenLevel(bool a, short b, int c, short d, short e)
      : enabled(a), levelType(b), id(c), deafenPercentage(d),
        undeafenPercentage(e) {}
  AutoDeafenLevel() = default;
};

AutoDeafenLevel currentlyLoadedLevel;
std::vector<AutoDeafenLevel> loadedAutoDeafenLevels;

bool hasDeafenedThisAttempt = false;
bool hasUndeafenedViaThreshold = false;
bool hasDied = false;
bool isCurrentlyDeafened = false;
bool lastConnectionSuccess = false;

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
              level.levelType, level.enabled, level.deafenPercentage);
  }
  log::info("{}", "Currently loaded level is:");
  log::info("Id {} of type {} with enabled {} and percentage {}",
            currentlyLoadedLevel.id, currentlyLoadedLevel.levelType,
            currentlyLoadedLevel.enabled,
            currentlyLoadedLevel.deafenPercentage);
}

// Format "ad2": adds undeafenPercentage field. "ad1" is read for backwards
// compat.
void saveFile() {
  auto path = Mod::get()->getSaveDir();
  path /= ".autodeafen";

  log::info("{}", "Saving .autodeafen file to " + path.string());

  std::ofstream file(path, std::ios::binary);
  if (file.is_open()) {
    file.write("ad2", sizeof("ad2"));

    for (AutoDeafenLevel const &a : loadedAutoDeafenLevels) {
      if (a.deafenPercentage > 100 || a.deafenPercentage < 0 ||
          a.levelType > 3 || a.levelType < 0 || a.id < 0) {
        log::warn("Deleted corrupted autodeafen save entry {} percentage {} "
                  "levelType {}",
                  a.id, a.deafenPercentage, a.levelType);
        continue;
      }

      file.write(reinterpret_cast<const char *>(&a.enabled), sizeof(bool));
      file.write(reinterpret_cast<const char *>(&a.levelType), sizeof(short));
      file.write(reinterpret_cast<const char *>(&a.id), sizeof(int));
      file.write(reinterpret_cast<const char *>(&a.deafenPercentage),
                 sizeof(short));
      file.write(reinterpret_cast<const char *>(&a.undeafenPercentage),
                 sizeof(short));

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
    file.read(header, sizeof("ad2"));

    if (strncmp(header, "ad2", 4) == 0) {
      log::info("Loading autodeafen file version 2.");
      while (true) {
        AutoDeafenLevel level;
        if (!file.read(reinterpret_cast<char *>(&level.enabled), sizeof(bool)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.levelType),
                       sizeof(short)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.id), sizeof(int)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.deafenPercentage),
                       sizeof(short)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.undeafenPercentage),
                       sizeof(short)))
          break;
        loadedAutoDeafenLevels.push_back(level);
      }
    } else if (strncmp(header, "ad1", 4) == 0) {
      log::info(
          "Loading autodeafen file version 1 (will upgrade on next save).");
      while (true) {
        AutoDeafenLevel level;
        level.undeafenPercentage = 100;
        if (!file.read(reinterpret_cast<char *>(&level.enabled), sizeof(bool)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.levelType),
                       sizeof(short)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.id), sizeof(int)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.deafenPercentage),
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
      level.deafenPercentage = lvl.deafenPercentage;
      level.undeafenPercentage = lvl.undeafenPercentage;
      level.enabled = lvl.enabled;
      return;
    }
  }

  bool const &enabledByDefault =
      Mod::get()->getSettingValue<bool>("Enabled by Default");
  short const &defaultPercentage = static_cast<short>(
      Mod::get()->getSettingValue<int64_t>("Default Percentage") & 0xFFFF);

  if (!(lvl.enabled == enabledByDefault &&
        lvl.deafenPercentage == defaultPercentage) &&
      lvl.deafenPercentage <= 100 && lvl.levelType <= 3 && lvl.id >= 0)
    loadedAutoDeafenLevels.push_back(lvl);

  if (Mod::get()->getSettingValue<bool>("Additional Debugging")) {
    runEmptyDebugs();
  }
}

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

  connect(sock, (sockaddr *)&addr, sizeof(addr));

  fd_set writeSet, exceptSet;
  FD_ZERO(&writeSet);
  FD_ZERO(&exceptSet);
  FD_SET(sock, &writeSet);
  FD_SET(sock, &exceptSet);

  timeval tv{0, 150000};
  int result = select(0, nullptr, &writeSet, &exceptSet, &tv);

  bool connected =
      (result > 0 && FD_ISSET(sock, &writeSet) && !FD_ISSET(sock, &exceptSet));
  closesocket(sock);
  WSACleanup();
  lastConnectionSuccess = connected;
  return connected;
}

void sendDeafen() {
  if (!currentlyLoadedLevel.enabled)
    return;
  if (isCurrentlyDeafened)
    return;
  if (sendToVencord("deafen\n"))
    isCurrentlyDeafened = true;
}

void sendUndeafen() {
  if (!isCurrentlyDeafened)
    return;
  sendToVencord("undeafen\n");
  isCurrentlyDeafened = false;
}

void resetAttemptState() {
  hasDeafenedThisAttempt = false;
  hasUndeafenedViaThreshold = false;
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

    short defaultPct = static_cast<short>(
        Mod::get()->getSettingValue<int64_t>("Default Percentage") & 0xFFFF);
    currentlyLoadedLevel =
        AutoDeafenLevel(Mod::get()->getSettingValue<bool>("Enabled by Default"),
                        levelType, id, defaultPct, (short)100);

    return true;
  }

  void resetLevel() {
    PlayLayer::resetLevel();
    resetAttemptState();
  }

  void postUpdate(float p0) {
    PlayLayer::postUpdate(p0);

    if (this->m_isPracticeMode &&
        !Mod::get()->getSettingValue<bool>("Enabled in Practice Mode"))
      return;

    if (!currentlyLoadedLevel.enabled)
      return;

    int percent = PlayLayer::getCurrentPercentInt();

    if (!hasDeafenedThisAttempt && !hasUndeafenedViaThreshold &&
        percent >= currentlyLoadedLevel.deafenPercentage && percent != 100) {
      hasDeafenedThisAttempt = true;
      sendDeafen();
    }

    if (hasDeafenedThisAttempt && !hasUndeafenedViaThreshold &&
        isCurrentlyDeafened && currentlyLoadedLevel.undeafenPercentage < 100 &&
        percent >= currentlyLoadedLevel.undeafenPercentage) {
      hasUndeafenedViaThreshold = true;
      sendUndeafen();
    }

    // Dropped below deafen threshold (e.g. switched startpos)
    if (percent < currentlyLoadedLevel.deafenPercentage &&
        isCurrentlyDeafened && !hasUndeafenedViaThreshold) {
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

class ConfigLayer : public geode::Popup {
protected:
  CCMenuItemToggler *m_enabledToggle = nullptr;
  TextInput *m_deafenInput = nullptr;
  TextInput *m_undeafenInput = nullptr;
  Slider *m_deafenSlider = nullptr;
  Slider *m_undeafenSlider = nullptr;

  bool init() override {
    if (!Popup::init(290.f, 240.f, "GJ_square02.png"))
      return false;

    this->setKeyboardEnabled(true);
    currentlyInMenu = true;

    float W = m_size.width;  // 290
    float H = m_size.height; // 240
    float cx = W / 2.f;      // 145

    // ---- Title ----
    auto titleLabel = CCLabelBMFont::create("AutoDeafen", "goldFont.fnt");
    titleLabel->setAnchorPoint({0.5f, 0.5f});
    titleLabel->setScale(0.9f);
    titleLabel->setPosition(ccp(cx, H - 16.f));
    m_mainLayer->addChild(titleLabel);

    // ---- Enable toggle button ----
    auto offSpr = ButtonSprite::create("AutoDeafen: OFF", 180, 0, 0.55f, false,
                                       "bigFont.fnt", "GJ_button_04.png", 28.f);
    auto onSpr = ButtonSprite::create("AutoDeafen: ON", 180, 0, 0.55f, false,
                                      "bigFont.fnt", "GJ_button_01.png", 28.f);
    m_enabledToggle = CCMenuItemToggler::create(
        offSpr, onSpr, this, menu_selector(ConfigLayer::onToggleEnabled));
    m_enabledToggle->setPosition(ccp(cx, H - 55.f));
    m_enabledToggle->toggle(currentlyLoadedLevel.enabled);

    auto btnMenu = CCMenu::create();
    btnMenu->setPosition({0, 0});
    btnMenu->addChild(m_enabledToggle);
    m_mainLayer->addChild(btnMenu);

    // ---- Deafen section ----
    float deafenRowY = H - 102.f; // label + input row
    float deafenSldY = H - 128.f; // slider

    auto deafenLabel = CCLabelBMFont::create("Deafen at", "bigFont.fnt");
    deafenLabel->setAnchorPoint({0.f, 0.5f});
    deafenLabel->setScale(0.48f);
    deafenLabel->setPosition(ccp(30.f, deafenRowY));
    m_mainLayer->addChild(deafenLabel);

    m_deafenInput = TextInput::create(50.f, "0-100");
    m_deafenInput->setFilter("0123456789");
    m_deafenInput->setMaxCharCount(3);
    m_deafenInput->setString(
        std::to_string(currentlyLoadedLevel.deafenPercentage));
    m_deafenInput->setScale(0.72f);
    m_deafenInput->setPosition(ccp(W - 88.f, deafenRowY));
    m_deafenInput->setCallback([this](const std::string &text) {
      try {
        int val = std::clamp(std::stoi(text), 0, 100);
        currentlyLoadedLevel.deafenPercentage = (short)val;
        if (m_deafenSlider)
          m_deafenSlider->setValue(val / 100.f);
      } catch (...) {
      }
    });
    m_mainLayer->addChild(m_deafenInput);

    auto pct1 = CCLabelBMFont::create("%", "bigFont.fnt");
    pct1->setAnchorPoint({0.f, 0.5f});
    pct1->setScale(0.38f);
    pct1->setPosition(ccp(W - 60.f, deafenRowY));
    m_mainLayer->addChild(pct1);

    m_deafenSlider =
        Slider::create(this, menu_selector(ConfigLayer::onDeafenSlider), 0.8f);
    m_deafenSlider->setPosition(ccp(cx, deafenSldY));
    m_deafenSlider->setValue(currentlyLoadedLevel.deafenPercentage / 100.f);
    m_mainLayer->addChild(m_deafenSlider);

    // ---- Undeafen section ----
    float undeafenRowY = H - 162.f;
    float undeafenSldY = H - 188.f;

    auto undeafenLabel = CCLabelBMFont::create("Undeafen at", "bigFont.fnt");
    undeafenLabel->setAnchorPoint({0.f, 0.5f});
    undeafenLabel->setScale(0.48f);
    undeafenLabel->setPosition(ccp(30.f, undeafenRowY));
    m_mainLayer->addChild(undeafenLabel);

    m_undeafenInput = TextInput::create(50.f, "0-100");
    m_undeafenInput->setFilter("0123456789");
    m_undeafenInput->setMaxCharCount(3);
    m_undeafenInput->setString(
        std::to_string(currentlyLoadedLevel.undeafenPercentage));
    m_undeafenInput->setScale(0.72f);
    m_undeafenInput->setPosition(ccp(W - 88.f, undeafenRowY));
    m_undeafenInput->setCallback([this](const std::string &text) {
      try {
        int val = std::clamp(std::stoi(text), 0, 100);
        currentlyLoadedLevel.undeafenPercentage = (short)val;
        if (m_undeafenSlider)
          m_undeafenSlider->setValue(val / 100.f);
      } catch (...) {
      }
    });
    m_mainLayer->addChild(m_undeafenInput);

    auto pct2 = CCLabelBMFont::create("%", "bigFont.fnt");
    pct2->setAnchorPoint({0.f, 0.5f});
    pct2->setScale(0.38f);
    pct2->setPosition(ccp(W - 60.f, undeafenRowY));
    m_mainLayer->addChild(pct2);

    m_undeafenSlider = Slider::create(
        this, menu_selector(ConfigLayer::onUndeafenSlider), 0.8f);
    m_undeafenSlider->setPosition(ccp(cx, undeafenSldY));
    m_undeafenSlider->setValue(currentlyLoadedLevel.undeafenPercentage / 100.f);
    m_mainLayer->addChild(m_undeafenSlider);

    // ---- Connection status ----
    bool connected = checkVencordConnection();
    auto statusLabel = CCLabelBMFont::create(
        connected ? "Discord: Connected" : "Discord: Disconnected",
        "chatFont.fnt");
    statusLabel->setAnchorPoint({0.5f, 0.5f});
    statusLabel->setScale(0.52f);
    statusLabel->setPosition(ccp(cx, 22.f));
    statusLabel->setColor(connected ? ccc3(0, 210, 80) : ccc3(210, 60, 60));
    m_mainLayer->addChild(statusLabel);

    // ---- Version ----
    auto versionLabel = CCLabelBMFont::create(
        fmt::format("{}", Mod::get()->getVersion()).c_str(), "chatFont.fnt");
    versionLabel->setAnchorPoint({1.f, 0.f});
    versionLabel->setScale(0.38f);
    versionLabel->setPosition(ccp(W - 8.f, 8.f));
    versionLabel->setColor(ccc3(120, 120, 120));
    m_mainLayer->addChild(versionLabel);

    return true;
  }

  void onToggleEnabled(CCObject *) {
    currentlyLoadedLevel.enabled = !currentlyLoadedLevel.enabled;

    if (auto playLayer = PlayLayer::get()) {
      int percent = playLayer->getCurrentPercentInt();
      if (!currentlyLoadedLevel.enabled && isCurrentlyDeafened) {
        sendUndeafen();
      } else if (currentlyLoadedLevel.enabled &&
                 percent >= currentlyLoadedLevel.deafenPercentage) {
        hasDeafenedThisAttempt = true;
        sendDeafen();
      }
    }
  }

  void onDeafenSlider(CCObject *sender) {
    auto thumb = static_cast<SliderThumb *>(sender);
    int val = (int)std::round(thumb->getValue() * 100.f);
    val = std::clamp(val, 0, 100);
    currentlyLoadedLevel.deafenPercentage = (short)val;
    if (m_deafenInput)
      m_deafenInput->setString(std::to_string(val));
  }

  void onUndeafenSlider(CCObject *sender) {
    auto thumb = static_cast<SliderThumb *>(sender);
    int val = (int)std::round(thumb->getValue() * 100.f);
    val = std::clamp(val, 0, 100);
    currentlyLoadedLevel.undeafenPercentage = (short)val;
    if (m_undeafenInput)
      m_undeafenInput->setString(std::to_string(val));
  }

  void onClose(CCObject *a) override {
    saveLevel(currentlyLoadedLevel);
    saveFile();
    currentlyInMenu = false;
    Popup::onClose(a);
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
