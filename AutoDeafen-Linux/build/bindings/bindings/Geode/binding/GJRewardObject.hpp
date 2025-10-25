#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRewardObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x656b0
     * @note[short] MacOS (Intel): 0x71c80
     * @note[short] Windows: 0x1f0880
     * @note[short] iOS: 0x33315c
     * @note[short] Android
     */
    static GJRewardObject* create(SpecialRewardItem p0, int p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x81edc
     * @note[short] MacOS (Intel): 0x8e760
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJRewardObject* create();

    /**
     * @note[short] MacOS (ARM): 0x65638
     * @note[short] MacOS (Intel): 0x71c10
     * @note[short] Windows: 0x1f0810
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardObject* createItemUnlock(UnlockType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x81f64
     * @note[short] MacOS (Intel): 0x8e800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33fd24
     * @note[short] Android
     */
    static GJRewardObject* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x82084
     * @note[short] MacOS (Intel): 0x8e910
     * @note[short] Windows: 0x1f08f0
     * @note[short] iOS: 0x33fdd0
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x82104
     * @note[short] MacOS (Intel): 0x8e990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33fe50
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x81f38
     * @note[short] MacOS (Intel): 0x8e7c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(SpecialRewardItem specialRewardItem, int total, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x81f48
     * @note[short] MacOS (Intel): 0x8e7e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isSpecialType();
    SpecialRewardItem m_specialRewardItem;
    UnlockType m_unlockType;
    int m_itemID;
    int m_total;
};
