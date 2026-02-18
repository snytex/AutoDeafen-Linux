#include <cstring>
#include <fstream>
#include <iostream>
#include <vector>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

#include <Geode/Geode.hpp>
#include <Geode/binding/CCMenuItemToggler.hpp>
#include <Geode/binding/GJGameLevel.hpp>
#include <Geode/cocos/cocoa/CCObject.h>
#include <Geode/modify/GManager.hpp>
#include <Geode/modify/LoadingLayer.hpp>
#include <Geode/modify/PauseLayer.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <Geode/ui/GeodeUI.hpp>

#include <Geode/ui/TextInput.hpp>
#include <cocos2d.h>

using namespace geode::prelude;

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
    file.write("ad1", sizeof("ad1")); // File Header - autodeafen file version 1

    for (AutoDeafenLevel const &a : loadedAutoDeafenLevels) {

      if (a.percentage > 100 || a.percentage < 0 || a.levelType > 3 ||
          a.levelType < 0 || a.id < 0) {
        log::warn("{}{}{}{}{}"
                  "Deleted corrupted autodeafen save entry ",
                  a.id, " with percentage ", a.percentage, " and levelType ",
                  a.levelType);
        continue; // To "uncorrupt" the save, in case it's already corrupted
                  // from before I fixed it
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
        if (!file.read(reinterpret_cast<char *>(&level.levelType), sizeof(short)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.id), sizeof(int)))
          break;
        if (!file.read(reinterpret_cast<char *>(&level.percentage), sizeof(short)))
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
        lvl.percentage == defaultPercentage) // Don't bother wasting file size
                                             // if it's the default already
      && lvl.percentage <= 100 // This should never happen, so if it does, it
                               // shouldn't be on the list!
      && lvl.levelType <= 3 && lvl.id >= 0)

    loadedAutoDeafenLevels.push_back(lvl);
  if (Mod::get()->getSettingValue<bool>("Additional Debugging")) {
    runEmptyDebugs();
  }
}

void triggerDeafenKeybind() {
  if (!currentlyLoadedLevel.enabled)
    return;

  WSADATA wsaData;
  if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
    std::cerr << "WSAStartup failed\n";
    return;
  }

  SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  if (sock == INVALID_SOCKET) {
    std::cerr << "Socket creation failed\n";
    WSACleanup();
    return;
  }

  sockaddr_in serv_addr{};
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_port = htons(8787);
  inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr);

  if (connect(sock, (sockaddr *)&serv_addr, sizeof(serv_addr)) ==
      SOCKET_ERROR) {
    std::cerr << "Connection failed\n";
    closesocket(sock);
    WSACleanup();
    return;
  }

  const char *msg = "toggle\n";
  send(sock, msg, (int)strlen(msg), 0);

  closesocket(sock);
  WSACleanup();

  log::info("Sent TCP signal to deafen.");
}

class $modify(PlayerObject) {
  void playerDestroyed(bool p0) {
    if (auto playLayer = PlayLayer::get()) {
      if (auto level = playLayer->m_level) {
        if (playLayer->m_player1 != nullptr &&
            this == (playLayer->m_player1) && !(level->isPlatformer())) {
          if (!playLayer->m_isPracticeMode ||
              (playLayer->m_isPracticeMode &&
               Mod::get()->getSettingValue<bool>("Enabled in Practice Mode"))) {
            if (hasDeafenedThisAttempt && !hasDied) {
              hasDied = true;
              triggerDeafenKeybind();
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
    // Persist current level settings even if the game closes while in-level.
    if (currentlyLoadedLevel.id != 0 || currentlyLoadedLevel.levelType != 0)
      saveLevel(currentlyLoadedLevel);
    saveFile();
  }
};

class $modify(LoadingLayer) {
  bool init(bool p0) {
    if (!LoadingLayer::init(p0)) {
      return false;
    }
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
    if (!PlayLayer::init(level, p1, p2)) {
      return false;
    }

    int id = m_level->m_levelID.value();
    short levelType = getLevelType(level);
    if (levelType == 1)
      id = m_level->m_M_ID;
    for (AutoDeafenLevel level : loadedAutoDeafenLevels)
      if (level.id == id && level.levelType == levelType) {
        currentlyLoadedLevel = level;
        return true;
      }

    currentlyLoadedLevel = AutoDeafenLevel(
        Mod::get()->getSettingValue<bool>("Enabled by Default"), levelType, id,
        static_cast<short>(
            Mod::get()->getSettingValue<int64_t>("Default Percentage") &
            0xFFFF));
    hasDeafenedThisAttempt = false;

    return true;
  }

  void resetLevel() {
    PlayLayer::resetLevel();
    hasDied = false;
    hasDeafenedThisAttempt = false;
  }

  void postUpdate(float p0) {
    PlayLayer::postUpdate(p0);
    if (this->m_isPracticeMode &&
        !Mod::get()->getSettingValue<bool>("Enabled in Practice Mode")) {
      return;
    }

    int percent = PlayLayer::getCurrentPercentInt();
    if (percent >= currentlyLoadedLevel.percentage && percent != 100 &&
        !hasDeafenedThisAttempt) {
      hasDeafenedThisAttempt = true;
      triggerDeafenKeybind();
    }
  }

  void levelComplete() {
    PlayLayer::levelComplete();
    if (hasDeafenedThisAttempt) {
      hasDeafenedThisAttempt = false;
      triggerDeafenKeybind();
    }
  }

  void onQuit() {
    PlayLayer::onQuit();

    if (hasDeafenedThisAttempt) {
      hasDeafenedThisAttempt = false;
      ::triggerDeafenKeybind();
    }

    saveLevel(currentlyLoadedLevel);
    currentlyLoadedLevel = AutoDeafenLevel();
  }
};

bool currentlyInMenu = false;

class ConfigLayer : public geode::Popup {
protected:
  CCMenuItemToggler *enabledButton = nullptr;
  TextInput *percentageInput = nullptr;

  bool init() override {
    if (!Popup::init(300.f, 200.f, "GJ_square02.png")) {
      return false;
    }

    this->setKeyboardEnabled(true);
    currentlyInMenu = true;

    auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();

    CCPoint topLeftCorner = ccp(0, m_size.height);
    CCPoint topMiddle = ccp(m_size.width / 2.f, m_size.height);

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

    auto menu = CCMenu::create();
    menu->setPosition({0, 0});

    menu->addChild(enabledButton);
    menu->addChild(percentageInput);

    m_mainLayer->addChild(topLabel);
    m_mainLayer->addChild(enabledLabel);
    m_mainLayer->addChild(percentageLabel);
    m_mainLayer->addChild(menu);

    return true;
  }

  void toggleEnabled(CCObject *sender) {
    currentlyLoadedLevel.enabled = !currentlyLoadedLevel.enabled;
  }

  void onClose(CCObject *a) override {
    Popup::onClose(a);
    if (percentageInput != nullptr)
      currentlyLoadedLevel.percentage = stoi(percentageInput->getString());
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
    auto winSize = CCDirector::sharedDirector()->getWinSize();

    CCSprite *sprite =
        CCSprite::createWithSpriteFrameName("GJ_musicOffBtn_001.png");

    auto btn = CCMenuItemSpriteExtra::create(
        sprite, this, menu_selector(ConfigLayer::openMenu));
    auto menu = this->getChildByID("right-button-menu");

    menu->addChild(btn);
    menu->updateLayout();
  }

  void onResume(CCObject *sender) {
    if (!currentlyInMenu) {
      PauseLayer::onResume(sender);
    }
  }

  void onRestart(CCObject *sender) {
    if (!currentlyInMenu) {
      PauseLayer::onRestart(sender);
    }
    if (hasDeafenedThisAttempt) {
      triggerDeafenKeybind();
    }
  }

  void onRestartFull(CCObject *sender) {
    if (!currentlyInMenu) {
      PauseLayer::onRestartFull(sender);
    }
    if (hasDeafenedThisAttempt) {
      triggerDeafenKeybind();
    }
  }

  void onQuit(CCObject *sender) {
    if (!currentlyInMenu) {
      PauseLayer::onQuit(sender);
    }
    if (hasDeafenedThisAttempt) {
      triggerDeafenKeybind();
    }
  }

  void onPracticeMode(CCObject *sender) {
    if (!currentlyInMenu) {
      PauseLayer::onPracticeMode(sender);
    }
  }

  void onSettings(CCObject *sender) {
    if (!currentlyInMenu) {
      PauseLayer::onSettings(sender);
    }
  }
};
