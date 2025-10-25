#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJLocalScore : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJLocalScore";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJLocalScore, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x4a1ebc
     * @note[short] MacOS (Intel): 0x5496e0
     * @note[short] Android
     */
    static GJLocalScore* create(int p0, int p1);

    /**
     * @note[short] Android
     */
    bool init(int p0, int p1);
    int m_points;
    LevelLeaderboardType m_type;
    bool m_unk040;
};
