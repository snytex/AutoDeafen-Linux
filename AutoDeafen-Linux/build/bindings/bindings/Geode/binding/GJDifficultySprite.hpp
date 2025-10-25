#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJDifficultySprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJDifficultySprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDifficultySprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x24a2c0
     * @note[short] MacOS (Intel): 0x2a3530
     * @note[short] Windows: 0x29d8d0
     * @note[short] iOS: 0x2e5348
     * @note[short] Android
     */
    static GJDifficultySprite* create(int p0, GJDifficultyName p1);

    /**
     * @note[short] MacOS (ARM): 0x24a464
     * @note[short] MacOS (Intel): 0x2a3680
     * @note[short] Windows: 0x29d9b0
     * @note[short] iOS: 0x2e5474
     * @note[short] Android
     */
    static gd::string getDifficultyFrame(int p0, GJDifficultyName p1);

    /**
     * @note[short] MacOS (ARM): 0x24a3cc
     * @note[short] MacOS (Intel): 0x2a3610
     * @note[short] Android
     */
    bool init(int p0, GJDifficultyName p1);

    /**
     * @note[short] MacOS (ARM): 0x24a5b0
     * @note[short] MacOS (Intel): 0x2a37c0
     * @note[short] Windows: 0x29da90
     * @note[short] iOS: 0x2e5534
     * @note[short] Android
     */
    void updateDifficultyFrame(int p0, GJDifficultyName p1);

    /**
     * @note[short] MacOS (ARM): 0x24a728
     * @note[short] MacOS (Intel): 0x2a3940
     * @note[short] Windows: 0x29dbb0
     * @note[short] iOS: 0x2e56ac
     * @note[short] Android
     */
    void updateFeatureState(GJFeatureState p0);

    /**
     * @note[short] MacOS (ARM): 0x24a6f0
     * @note[short] MacOS (Intel): 0x2a38f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e5674
     * @note[short] Android
     */
    void updateFeatureStateFromLevel(GJGameLevel* level);
    GJFeatureState m_featureState;
};
