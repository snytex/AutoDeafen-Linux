#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRewardItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardItem, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x821c4
     * @note[short] MacOS (Intel): 0x8ea60
     * @note[short] Windows: 0x1f0980
     * @note[short] iOS: 0x33feac
     * @note[short] Android
     */
    static GJRewardItem* create();

    /**
     * @note[short] Windows: 0x1f0cc0
     * @note[short] Android: Rebinded
     */
    static GJRewardItem* create(int chestID, int timeRemaining, gd::string p2);

    /**
     * @note[short] MacOS (ARM): 0x6add0
     * @note[short] MacOS (Intel): 0x774e0
     * @note[short] Windows: 0x1f0ad0
     * @note[short] Android
     */
    static GJRewardItem* createSpecial(GJRewardType p0, int p1, int p2, SpecialRewardItem p3, int p4, SpecialRewardItem p5, int p6, int p7, int p8);

    /**
     * @note[short] MacOS (ARM): 0x824d0
     * @note[short] MacOS (Intel): 0x8ed80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x34011c
     * @note[short] Android
     */
    static GJRewardItem* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x7fad0
     * @note[short] MacOS (Intel): 0x8be90
     * @note[short] Windows: 0x1f09c0
     * @note[short] Android
     */
    static GJRewardItem* createWithObject(GJRewardType p0, GJRewardObject* p1);

    /**
     * @note[short] MacOS (ARM): 0x65720
     * @note[short] MacOS (Intel): 0x71cf0
     * @note[short] Windows: 0x1f0a50
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardItem* createWithObjects(GJRewardType type, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpecialRewardItem getNextShardType(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x67cb0
     * @note[short] MacOS (Intel): 0x74100
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpecialRewardItem getRandomNonMaxShardType();

    /**
     * @note[short] MacOS (ARM): 0x82470
     * @note[short] MacOS (Intel): 0x8ed30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpecialRewardItem getRandomShardType();

    /**
     * @note[short] MacOS (ARM): 0x6610c
     * @note[short] MacOS (Intel): 0x72720
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isShardType(SpecialRewardItem type);

    /**
     * @note[short] Windows: 0x1f0ff0
     * @note[short] Android
     */
    static gd::string rewardItemToStat(SpecialRewardItem p0);

    /**
     * @note[short] MacOS (ARM): 0x82604
     * @note[short] MacOS (Intel): 0x8ee90
     * @note[short] Windows: 0x1f1250
     * @note[short] iOS: 0x3401b0
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x82670
     * @note[short] MacOS (Intel): 0x8eef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x34021c
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x6a208
     * @note[short] MacOS (Intel): 0x769d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getRewardCount(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x66274
     * @note[short] MacOS (Intel): 0x72840
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJRewardObject* getRewardObjectForType(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x821f4
     * @note[short] MacOS (Intel): 0x8ea90
     * @note[short] Windows: 0x1f0d90
     * @note[short] Android: Rebinded
     */
    bool init(int chestID, int timeRemaining, gd::string p2);
    int m_chestID;
    int m_timeRemaining;
    GJRewardType m_rewardType;
    cocos2d::CCArray* m_rewardObjects;
    bool m_unk;
};
