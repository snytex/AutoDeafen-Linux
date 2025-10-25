#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x633e04
     * @note[short] MacOS (Intel): 0x715690
     * @note[short] Windows: 0x7da0
     * @note[short] iOS: 0xb9e4c
     * @note[short] Android
     */
    static AchievementManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x633ef4
     * @note[short] MacOS (Intel): 0x7157a0
     * @note[short] Windows: 0x7e60
     * @note[short] iOS: 0xb9ecc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x682554
     * @note[short] MacOS (Intel): 0x76ef60
     * @note[short] Windows: 0x3a1c0
     * @note[short] iOS: 0xeb6d8
     * @note[short] Android
     */
    gd::string achievementForUnlock(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x681c8c
     * @note[short] MacOS (Intel): 0x76e740
     * @note[short] Windows: 0x7ef0
     * @note[short] iOS: 0xeb16c
     * @note[short] Android: Rebinded
     */
    void addAchievement(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, int p5);

    /**
     * @note[short] MacOS (ARM): 0x633f7c
     * @note[short] MacOS (Intel): 0x715830
     * @note[short] Windows: 0x8410
     * @note[short] iOS: 0xb9f54
     * @note[short] Android
     */
    void addManualAchievements();

    /**
     * @note[short] Android
     */
    TodoReturn areAchievementsEarned(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkAchFromUnlock(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x681ff4
     * @note[short] MacOS (Intel): 0x76ea20
     * @note[short] iOS: 0xeb448
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x682060
     * @note[short] MacOS (Intel): 0x76ea90
     * @note[short] iOS: 0xeb498
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] Android
     */
    TodoReturn getAchievementRewardDict();

    /**
     * @note[short] MacOS (ARM): 0x6822dc
     * @note[short] MacOS (Intel): 0x76ed50
     * @note[short] Windows: 0x39d70
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAchievementsWithID(char const* p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getAllAchievements();

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getAllAchievementsSorted(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    bool isAchievementAvailable(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x682198
     * @note[short] MacOS (Intel): 0x76ec00
     * @note[short] Windows: 0x39a70
     * @note[short] iOS: 0xeb53c
     * @note[short] Android
     */
    bool isAchievementEarned(char const* ach);

    /**
     * @note[short] MacOS (ARM): 0x68248c
     * @note[short] MacOS (Intel): 0x76eec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xeb63c
     * @note[short] Android: Rebinded
     */
    int limitForAchievement(gd::string id);

    /**
     * @note[short] MacOS (ARM): 0x682bcc
     * @note[short] MacOS (Intel): 0x76f700
     * @note[short] iOS: 0xeba9c
     * @note[short] Android
     */
    void notifyAchievement(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Windows: 0x3a470
     * @note[short] Android
     */
    void notifyAchievementWithID(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn percentageForCount(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x6821b4
     * @note[short] MacOS (Intel): 0x76ec20
     * @note[short] Windows: 0x39a90
     * @note[short] iOS: 0xeb558
     * @note[short] Android
     */
    int percentForAchievement(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x682d28
     * @note[short] MacOS (Intel): 0x76f830
     * @note[short] iOS: 0xebb58
     * @note[short] Android
     */
    void reportAchievementWithID(char const* p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    void reportPlatformAchievementWithID(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    void resetAchievement(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetAchievements();

    /**
     * @note[short] Android
     */
    TodoReturn setup();

    /**
     * @note[short] Android
     */
    void storeAchievementUnlocks();
    cocos2d::CCArray* m_allAchievements;
    cocos2d::CCDictionary* m_platformAchievements;
    cocos2d::CCDictionary* m_achievementUnlocks;
    void* m_unkPtrUnused;
    cocos2d::CCDictionary* m_reportedAchievements;
    bool m_dontNotify;
    cocos2d::CCArray* m_allAchievementsSorted;
    int m_order;
    cocos2d::CCDictionary* m_unAchieved;
};
