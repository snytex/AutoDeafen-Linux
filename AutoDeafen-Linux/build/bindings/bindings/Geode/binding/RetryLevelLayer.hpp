#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "RewardedVideoDelegate.hpp"

class RetryLevelLayer : public GJDropDownLayer, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "RetryLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RetryLevelLayer, GJDropDownLayer)

    /**
     * @note[short] Android
     */
    static RetryLevelLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x4485ec
     * @note[short] MacOS (Intel): 0x4e64b0
     * @note[short] Windows: 0x3b4c40
     * @note[short] iOS: 0x1b5c44
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x448540
     * @note[short] MacOS (Intel): 0x4e63e0
     * @note[short] Windows: 0x3b4ad0
     * @note[short] iOS: 0x1b5bf8
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x4474c4
     * @note[short] MacOS (Intel): 0x4e5300
     * @note[short] Windows: 0x3b3d00
     * @note[short] iOS: 0x1b4fb4
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x44805c
     * @note[short] MacOS (Intel): 0x4e5ec0
     * @note[short] Windows: 0x3b48a0
     * @note[short] iOS: 0x1b5aa8
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x44816c
     * @note[short] MacOS (Intel): 0x4e5fc0
     * @note[short] Windows: 0x3b49c0
     * @note[short] iOS: 0x1b5bb0
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x448530
     * @note[short] MacOS (Intel): 0x4e63c0
     * @note[short] Windows: 0x3b4a00
     * @note[short] iOS: 0x1b5be8
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool shouldOffsetRewardCurrency();

    /**
     * @note[short] MacOS (ARM): 0x4485e4
     * @note[short] MacOS (Intel): 0x4e6490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b5c3c
     * @note[short] Android: Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Android
     */
    const char* getEndText();

    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3b4b20
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3b4460
     * @note[short] Android
     */
    TodoReturn setupLastProgress();
    cocos2d::CCMenu* m_mainMenu;
    bool m_unk1e8;
    bool m_unk1e9;
};
