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
#include "FLAlertLayerProtocol.hpp"
#include "GameRateDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class FollowRewardPage : public FLAlertLayer, public FLAlertLayerProtocol, public GameRateDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "FollowRewardPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FollowRewardPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x3897ec
     * @note[short] MacOS (Intel): 0x40d090
     * @note[short] Windows: 0x137fc0
     * @note[short] iOS: 0x41c360
     * @note[short] Android
     */
    static FollowRewardPage* create();

    /**
     * @note[short] MacOS (ARM): 0x3898fc
     * @note[short] MacOS (Intel): 0x40d200
     * @note[short] Windows: 0x1380e0
     * @note[short] iOS: 0x41c428
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x38b854
     * @note[short] MacOS (Intel): 0x40f3b0
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x41dd84
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x38b7d8
     * @note[short] MacOS (Intel): 0x40f340
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x41dd08
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x38b5c0
     * @note[short] MacOS (Intel): 0x40f110
     * @note[short] Windows: 0x867a0
     * @note[short] iOS: 0x41db00
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x38b744
     * @note[short] MacOS (Intel): 0x40f290
     * @note[short] Windows: 0x13b5f0
     * @note[short] iOS: 0x41dc74
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x38b5b0
     * @note[short] MacOS (Intel): 0x40f0f0
     * @note[short] Windows: 0x13a330
     * @note[short] iOS: 0x41daf0
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x38aee8
     * @note[short] MacOS (Intel): 0x40e9e0
     * @note[short] Windows: 0x139e00
     * @note[short] iOS: 0x41d79c
     * @note[short] Android
     */
    virtual void updateRate();

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x38b228
     * @note[short] MacOS (Intel): 0x40ed30
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x38a858
     * @note[short] MacOS (Intel): 0x40e310
     * @note[short] Windows: 0x13a340
     * @note[short] iOS: 0x41d1d8
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x38ae04
     * @note[short] MacOS (Intel): 0x40e910
     * @note[short] Windows: 0x13b510
     * @note[short] Android
     */
    void switchToOpenedState(CCMenuItemSpriteExtra* p0);
    cocos2d::CCArray* m_chests;
    bool m_videoPlaying;
};
