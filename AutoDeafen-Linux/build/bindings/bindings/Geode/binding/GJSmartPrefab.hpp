#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartPrefab : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJSmartPrefab";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartPrefab, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x2ae230
     * @note[short] Android
     */
    static GJSmartPrefab* create();

    /**
     * @note[short] MacOS (ARM): 0x391654
     * @note[short] MacOS (Intel): 0x415c60
     * @note[short] Windows: 0x2ae2b0
     * @note[short] iOS: 0xc604
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x3914f4
     * @note[short] MacOS (Intel): 0x415b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xc550
     * @note[short] Android: Out of line
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x3914fc
     * @note[short] MacOS (Intel): 0x415b20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xc558
     * @note[short] Android
     */
    static GJSmartPrefab* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] Android
     */
    bool init();
    gd::string m_prefabKey;
    gd::string m_prefabData;
    int m_prefabID;
    int m_prefabChance;
};
