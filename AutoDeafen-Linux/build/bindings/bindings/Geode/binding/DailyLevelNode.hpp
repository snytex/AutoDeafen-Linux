#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"

class DailyLevelNode : public cocos2d::CCNode, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "DailyLevelNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DailyLevelNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x1d30c0
     * @note[short] MacOS (Intel): 0x2201c0
     * @note[short] iOS: 0x1bc7c8
     * @note[short] Android
     */
    static DailyLevelNode* create(GJGameLevel* p0, DailyLevelPage* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x1d4660
     * @note[short] MacOS (Intel): 0x2216d0
     * @note[short] Windows: 0xd1c30
     * @note[short] iOS: 0x1bda58
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1d3884
     * @note[short] MacOS (Intel): 0x2209a0
     * @note[short] Windows: 0xd0c90
     * @note[short] iOS: 0x1bcd9c
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, DailyLevelPage* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x1d4358
     * @note[short] MacOS (Intel): 0x221400
     * @note[short] Windows: 0xd18f0
     * @note[short] iOS: 0x1bd830
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d4470
     * @note[short] MacOS (Intel): 0x221500
     * @note[short] Windows: 0xd1a10
     * @note[short] iOS: 0x1bd928
     * @note[short] Android
     */
    void onSkipLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd1890
     * @note[short] Android
     */
    void showSkipButton();

    /**
     * @note[short] Android: Rebinded
     */
    void updateTimeLabel(gd::string p0);
    GJGameLevel* m_level;
    DailyLevelPage* m_page;
    cocos2d::CCLabelBMFont* m_timeLabel;
    cocos2d::CCPoint m_unkPoint;
    CCMenuItemSpriteExtra* m_skipButton;
    bool m_unkBool;
    bool m_needsDownloading;
};
