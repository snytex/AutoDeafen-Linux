#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementNotifier : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementNotifier";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementNotifier, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x6beb0c
     * @note[short] MacOS (Intel): 0x7ad380
     * @note[short] Windows: 0x3ab20
     * @note[short] iOS: 0x21720c
     * @note[short] Android
     */
    static AchievementNotifier* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x6beb88
     * @note[short] MacOS (Intel): 0x7ad410
     * @note[short] Windows: 0x3abd0
     * @note[short] iOS: 0x21727c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6bed20
     * @note[short] MacOS (Intel): 0x7ad5a0
     * @note[short] Windows: 0x3ae40
     * @note[short] iOS: 0x2173fc
     * @note[short] Android
     */
    void achievementDisplayFinished();

    /**
     * @note[short] MacOS (ARM): 0x6bebb4
     * @note[short] MacOS (Intel): 0x7ad440
     * @note[short] Windows: 0x3ac00
     * @note[short] iOS: 0x2172a8
     * @note[short] Android
     */
    void notifyAchievement(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x6bec08
     * @note[short] MacOS (Intel): 0x7ad490
     * @note[short] Windows: 0x3ace0
     * @note[short] iOS: 0x2172fc
     * @note[short] Android
     */
    void showNextAchievement();

    /**
     * @note[short] MacOS (ARM): 0x6bed64
     * @note[short] MacOS (Intel): 0x7ad5f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x217440
     * @note[short] Android
     */
    void willSwitchToScene(cocos2d::CCScene* scene);
    cocos2d::CCScene* m_nextScene;
    cocos2d::CCArray* m_achievementBarArray;
    AchievementBar* m_activeAchievementBar;
};
