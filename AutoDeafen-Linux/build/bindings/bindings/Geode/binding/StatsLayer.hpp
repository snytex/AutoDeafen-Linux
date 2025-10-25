#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class StatsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "StatsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StatsLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     StatsLayer();

    /**
     * @note[short] MacOS (ARM): 0x8e198
     * @note[short] MacOS (Intel): 0x9b220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x241ac4
     * @note[short] Android
     */
    static StatsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x8e310
     * @note[short] MacOS (Intel): 0x9b450
     * @note[short] Windows: 0x4af100
     * @note[short] iOS: 0x241bac
     * @note[short] Android
     */
    virtual void customSetup();
};
