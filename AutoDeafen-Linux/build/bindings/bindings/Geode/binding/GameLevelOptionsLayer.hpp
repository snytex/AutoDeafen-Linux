#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class GameLevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameLevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameLevelOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): 0x246194
     * @note[short] MacOS (Intel): 0x29ebd0
     * @note[short] Windows: 0x2993c0
     * @note[short] iOS: 0x2e20cc
     * @note[short] Android
     */
    static GameLevelOptionsLayer* create(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x2463b8
     * @note[short] MacOS (Intel): 0x29eeb0
     * @note[short] Windows: 0x299520
     * @note[short] iOS: 0x2e2200
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x246424
     * @note[short] MacOS (Intel): 0x29ef20
     * @note[short] Windows: 0x2995a0
     * @note[short] iOS: 0x2e226c
     * @note[short] Android
     */
    virtual void didToggle(int p0);

    /**
     * @note[short] MacOS (ARM): 0x246350
     * @note[short] MacOS (Intel): 0x29ee50
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);
    GJGameLevel* m_level;
};
