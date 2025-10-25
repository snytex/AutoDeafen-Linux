#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGroundLayer.hpp"

class GJFlyGroundLayer : public GJGroundLayer {
public:
    static constexpr auto CLASS_NAME = "GJFlyGroundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJFlyGroundLayer, GJGroundLayer)

    /**
     * @note[short] Android
     */
    static GJFlyGroundLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x50757c
     * @note[short] MacOS (Intel): 0x5d3a00
     * @note[short] Android
     */
    virtual bool init();
};
