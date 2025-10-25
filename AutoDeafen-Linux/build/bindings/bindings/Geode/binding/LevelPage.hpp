#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class LevelPage : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelPage, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelPage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~LevelPage();

    /**
     * @note[short] MacOS (ARM): 0x39b290
     * @note[short] MacOS (Intel): 0x41fda0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fa19c
     * @note[short] Android
     */
    static LevelPage* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x39fd40
     * @note[short] MacOS (Intel): 0x424bf0
     * @note[short] Windows: 0x309700
     * @note[short] iOS: 0x3fdab4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x39fe48
     * @note[short] MacOS (Intel): 0x424d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fdbb0
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x39fe50
     * @note[short] MacOS (Intel): 0x424d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fdbb8
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x39fe58
     * @note[short] MacOS (Intel): 0x424d50
     * @note[short] Windows: 0x71210
     * @note[short] iOS: 0x3fdbc0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x39fe74
     * @note[short] MacOS (Intel): 0x424d90
     * @note[short] Windows: 0x9b1a0
     * @note[short] iOS: 0x3fdbdc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x39fa78
     * @note[short] MacOS (Intel): 0x424940
     * @note[short] Windows: 0x308c10
     * @note[short] iOS: 0x3fd88c
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x39cb1c
     * @note[short] MacOS (Intel): 0x4215a0
     * @note[short] Windows: 0x307810
     * @note[short] iOS: 0x3fb304
     * @note[short] Android
     */
    void addSecretCoin();

    /**
     * @note[short] MacOS (ARM): 0x39ed88
     * @note[short] MacOS (Intel): 0x423b10
     * @note[short] Windows: 0x307f20
     * @note[short] iOS: 0x3fcd1c
     * @note[short] Android
     */
    void addSecretDoor();

    /**
     * @note[short] MacOS (ARM): 0x39dc80
     * @note[short] MacOS (Intel): 0x422900
     * @note[short] Windows: 0x305070
     * @note[short] iOS: 0x3fbe78
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x39d69c
     * @note[short] MacOS (Intel): 0x422200
     * @note[short] Windows: 0x309260
     * @note[short] iOS: 0x3fbac4
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39d360
     * @note[short] MacOS (Intel): 0x421ef0
     * @note[short] Windows: 0x308cf0
     * @note[short] iOS: 0x3fb8bc
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39f3a0
     * @note[short] MacOS (Intel): 0x424140
     * @note[short] Windows: 0x308130
     * @note[short] iOS: 0x3fd2c8
     * @note[short] Android
     */
    void onSecretDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39e83c
     * @note[short] MacOS (Intel): 0x423570
     * @note[short] Windows: 0x307150
     * @note[short] iOS: 0x3fc938
     * @note[short] Android
     */
    void onTheTower(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39ef58
     * @note[short] MacOS (Intel): 0x423cf0
     * @note[short] Windows: 0x307a50
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] Windows: 0x309160
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x39b524
     * @note[short] MacOS (Intel): 0x420050
     * @note[short] Windows: 0x305d00
     * @note[short] iOS: 0x3fa3a0
     * @note[short] Android
     */
    void updateDynamicPage(GJGameLevel* p0);
    bool m_isBusy;
    GJGameLevel* m_level;
    cocos2d::CCMenu* m_levelMenu;
    cocos2d::extension::CCScale9Sprite* m_levelDisplay;
    cocos2d::CCLabelBMFont* m_normalProgressLabel;
    cocos2d::CCLabelBMFont* m_practiceProgressLabel;
    cocos2d::CCLabelBMFont* m_nameLabel;
    cocos2d::CCLabelBMFont* m_starsLabel;
    float m_progressWidth;
    cocos2d::CCSprite* m_normalProgressBar;
    cocos2d::CCSprite* m_practiceProgressBar;
    cocos2d::CCSprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCSize m_levelDisplaySize;
    cocos2d::CCArray* m_coins;
    cocos2d::CCArray* m_dynamicObjects;
    cocos2d::CCArray* m_levelObjects;
    cocos2d::CCArray* m_progressObjects;
    GameObject* m_coinObject;
    cocos2d::CCSprite* m_secretDoor;
};
