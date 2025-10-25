#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class ShareLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShareLevelLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~ShareLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x2193c8
     * @note[short] MacOS (Intel): 0x26e170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27405c
     * @note[short] Android
     */
    static ShareLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x21ae64
     * @note[short] MacOS (Intel): 0x26fa70
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x275560
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int btnID, cocos2d::SEL_MenuHandler callback, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (ARM): 0x2194cc
     * @note[short] MacOS (Intel): 0x26e2c0
     * @note[short] Windows: 0x4769e0
     * @note[short] iOS: 0x274118
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] Windows: 0x84620
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x477c40
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21a7ec
     * @note[short] MacOS (Intel): 0x26f3c0
     * @note[short] Windows: 0x477d90
     * @note[short] iOS: 0x274ff8
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21aae0
     * @note[short] MacOS (Intel): 0x26f680
     * @note[short] Windows: 0x477ab0
     * @note[short] iOS: 0x27526c
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x21a0b8
     * @note[short] MacOS (Intel): 0x26f010
     * @note[short] Windows: 0x4776a0
     * @note[short] Android
     */
    void setupStars();
    GJGameLevel* m_level;
    int m_starsRequested;
    cocos2d::CCArray* m_starButtons;
    cocos2d::CCSprite* m_difficultySprite;
};
