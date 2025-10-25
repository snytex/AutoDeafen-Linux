#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCContentLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "CCContentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCContentLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCContentLayer();

    /**
     * @note[short] Android
     */
    static CCContentLayer* create(cocos2d::ccColor4B const& p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x6bea40
     * @note[short] MacOS (Intel): 0x7ad2b0
     * @note[short] Windows: 0x42f70
     * @note[short] iOS: 0x1921c4
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
};
