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

class LevelAreaInnerLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaInnerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaInnerLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelAreaInnerLayer();

    /**
     * @note[short] MacOS (ARM): 0x213514
     * @note[short] MacOS (Intel): 0x267c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x345028
     * @note[short] Android
     */
    static LevelAreaInnerLayer* create(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x2132c4
     * @note[short] MacOS (Intel): 0x267950
     * @note[short] Windows: 0x2be1d0
     * @note[short] iOS: 0x344f48
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x21538c
     * @note[short] MacOS (Intel): 0x269bf0
     * @note[short] Windows: 0x2c0550
     * @note[short] iOS: 0x3467b8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x215164
     * @note[short] MacOS (Intel): 0x2699c0
     * @note[short] Windows: 0x2bf9a0
     * @note[short] iOS: 0x346614
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x21533c
     * @note[short] MacOS (Intel): 0x269ba0
     * @note[short] Windows: 0x2c0500
     * @note[short] iOS: 0x346768
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2135d4
     * @note[short] MacOS (Intel): 0x267d00
     * @note[short] Windows: 0x2be2e0
     * @note[short] iOS: 0x3450dc
     * @note[short] Android
     */
    bool init(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x2143a0
     * @note[short] MacOS (Intel): 0x268b80
     * @note[short] Windows: 0x2c04a0
     * @note[short] iOS: 0x345c0c
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2143f8
     * @note[short] MacOS (Intel): 0x268bd0
     * @note[short] Windows: 0x2bffd0
     * @note[short] iOS: 0x345c64
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2146cc
     * @note[short] MacOS (Intel): 0x268e70
     * @note[short] Windows: 0x2bfa30
     * @note[short] iOS: 0x345ecc
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21453c
     * @note[short] MacOS (Intel): 0x268d00
     * @note[short] Windows: 0x2bf2c0
     * @note[short] Android
     */
    void onNextFloor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2c02c0
     * @note[short] Android
     */
    void onOnlineVault(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2c0190
     * @note[short] iOS: 0x3466a8
     * @note[short] Android
     */
    bool playStep1();

    /**
     * @note[short] MacOS (ARM): 0x214c58
     * @note[short] MacOS (Intel): 0x269470
     * @note[short] Windows: 0x2bf3c0
     * @note[short] iOS: 0x346294
     * @note[short] Android
     */
    void showFloor1CompleteDialog();

    /**
     * @note[short] Windows: 0x2bff30
     * @note[short] Android
     */
    void tryResumeTowerMusic();

    /**
     * @note[short] Android
     */
    void tryShowAd();
    CCMenuItemSpriteExtra* m_nextFloorButton;
    bool m_enteringLevel;
    int m_levelID;
    bool m_exiting;
};
