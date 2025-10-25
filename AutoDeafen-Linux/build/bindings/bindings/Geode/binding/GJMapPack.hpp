#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMapPack : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMapPack";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMapPack, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJMapPack();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~GJMapPack();

    /**
     * @note[short] MacOS (ARM): 0x478e24
     * @note[short] MacOS (Intel): 0x51c560
     * @note[short] Windows: 0x16d210
     * @note[short] iOS: 0x99770
     * @note[short] Android
     */
    static GJMapPack* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a1910
     * @note[short] MacOS (Intel): 0x5490c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb2d50
     * @note[short] Android
     */
    static GJMapPack* create();

    /**
     * @note[short] MacOS (ARM): 0x4a1d4c
     * @note[short] MacOS (Intel): 0x549550
     * @note[short] Windows: 0x16dd70
     * @note[short] iOS: 0xb2fdc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4a1dac
     * @note[short] MacOS (Intel): 0x5495d0
     * @note[short] Windows: 0x16e080
     * @note[short] iOS: 0xb303c
     * @note[short] Android
     */
    int completedMaps();

    /**
     * @note[short] MacOS (ARM): 0x4a1e70
     * @note[short] MacOS (Intel): 0x549680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb30d4
     * @note[short] Android
     */
    bool hasCompletedMapPack();

    /**
     * @note[short] MacOS (ARM): 0x4a1ac8
     * @note[short] MacOS (Intel): 0x5492a0
     * @note[short] Windows: 0x16ddd0
     * @note[short] Android: Rebinded
     */
    void parsePackColors(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4a19b4
     * @note[short] MacOS (Intel): 0x549180
     * @note[short] Android: Rebinded
     */
    void parsePackLevels(gd::string p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int totalMaps();
    cocos2d::CCArray* m_levels;
    int m_packID;
    GJDifficulty m_difficulty;
    int m_stars;
    int m_coins;
    gd::string m_packName;
    gd::string m_levelStrings;
    cocos2d::ccColor3B m_textColour;
    cocos2d::ccColor3B m_barColour;
    int m_MId;
    bool m_isGauntlet;
};
