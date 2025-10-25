#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "BoomListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Android
     */
    static BoomListLayer* create(BoomListView* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x3cc55c
     * @note[short] MacOS (Intel): 0x45b5a0
     * @note[short] Android
     */
    bool init(BoomListView* p0, char const* p1);
};
