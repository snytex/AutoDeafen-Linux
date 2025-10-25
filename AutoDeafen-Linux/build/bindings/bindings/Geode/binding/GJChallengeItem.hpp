#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChallengeItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJChallengeItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChallengeItem, cocos2d::CCObject)

    /**
     * @note[short] Android
     */
    static GJChallengeItem* create();

    /**
     * @note[short] MacOS (ARM): 0x8286c
     * @note[short] MacOS (Intel): 0x8f100
     * @note[short] Windows: 0x1f1520
     * @note[short] iOS: 0x340380
     * @note[short] Android: Rebinded
     */
    static GJChallengeItem* create(GJChallengeType challengeType, int goal, int reward, int timeLeft, gd::string questName);

    /**
     * @note[short] MacOS (ARM): 0x82678
     * @note[short] MacOS (Intel): 0x8ef00
     * @note[short] Android: Rebinded
     */
    static GJChallengeItem* createFromString(gd::string string);

    /**
     * @note[short] MacOS (ARM): 0x82a9c
     * @note[short] MacOS (Intel): 0x8f320
     * @note[short] iOS: 0x340598
     * @note[short] Android
     */
    static GJChallengeItem* createWithCoder(DS_Dictionary* dsdict);

    /**
     * @note[short] MacOS (ARM): 0x82c58
     * @note[short] MacOS (Intel): 0x8f4c0
     * @note[short] Windows: 0x1f16a0
     * @note[short] iOS: 0x340730
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dsdict);

    /**
     * @note[short] MacOS (ARM): 0x82d34
     * @note[short] MacOS (Intel): 0x8f590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x34080c
     * @note[short] Android: Out of line
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x82af0
     * @note[short] MacOS (Intel): 0x8f360
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dsdict);

    /**
     * @note[short] Android
     */
    void incrementCount(int add);

    /**
     * @note[short] Android: Rebinded
     */
    bool init(GJChallengeType challengeType, int goal, int reward, int timeLeft, gd::string questName);

    /**
     * @note[short] Android
     */
    void setCount(int value);
    GJChallengeType m_challengeType;
    geode::SeedValueRSV m_count;
    geode::SeedValueRSV m_reward;
    geode::SeedValueRSV m_goal;
    int m_timeLeft;
    bool m_canClaim;
    int m_position;
    gd::string m_name;
};
