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
#include "GJRewardDelegate.hpp"

class RewardsPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RewardsPage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~RewardsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c46cc
     * @note[short] Android
     */
    static RewardsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x1be17c
     * @note[short] MacOS (Intel): 0x2094b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static char const* getRewardFrame(int type, int state);

    /**
     * @note[short] MacOS (ARM): 0x1bd4e4
     * @note[short] MacOS (Intel): 0x208720
     * @note[short] Windows: 0x3b5120
     * @note[short] iOS: 0x1c4798
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1bec8c
     * @note[short] MacOS (Intel): 0x209fc0
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x1c5bcc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1bec10
     * @note[short] MacOS (Intel): 0x209f50
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x1c5b50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1beab8
     * @note[short] MacOS (Intel): 0x209df0
     * @note[short] Windows: 0x3ae2e0
     * @note[short] iOS: 0x1c5a10
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1bec08
     * @note[short] MacOS (Intel): 0x209f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c5b48
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1be754
     * @note[short] MacOS (Intel): 0x209a70
     * @note[short] Windows: 0x3b6120
     * @note[short] iOS: 0x1c57bc
     * @note[short] Android
     */
    virtual void rewardsStatusFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1be9b4
     * @note[short] MacOS (Intel): 0x209d00
     * @note[short] Windows: 0x3b6370
     * @note[short] iOS: 0x1c597c
     * @note[short] Android
     */
    virtual void rewardsStatusFailed();

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3b6920
     * @note[short] iOS: 0x1c5274
     * @note[short] Android
     */
    void onFreeStuff(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1be1a4
     * @note[short] MacOS (Intel): 0x2094d0
     * @note[short] Windows: 0x3b5fe0
     * @note[short] Android
     */
    void onReward(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void tryGetRewards();

    /**
     * @note[short] MacOS (ARM): 0x1becc4
     * @note[short] MacOS (Intel): 0x20a000
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void unlockLayerClosed(RewardUnlockLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1be2c4
     * @note[short] MacOS (Intel): 0x2095d0
     * @note[short] iOS: 0x1c53ac
     * @note[short] Android
     */
    void updateTimers(float p0);
    cocos2d::CCLabelBMFont* m_leftLabel;
    cocos2d::CCLabelBMFont* m_rightLabel;
    CCMenuItemSpriteExtra* m_leftChest;
    CCMenuItemSpriteExtra* m_rightChest;
    bool m_leftOpen;
    bool m_rightOpen;
    RewardUnlockLayer* m_openLayer;
};
