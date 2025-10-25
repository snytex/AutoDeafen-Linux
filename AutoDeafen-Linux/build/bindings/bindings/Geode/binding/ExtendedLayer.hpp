#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ExtendedLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ExtendedLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExtendedLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ExtendedLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ExtendedLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x322be4
     * @note[short] MacOS (Intel): 0x394410
     * @note[short] Windows: 0x3ec90
     * @note[short] iOS: 0x12fc48
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x322be8
     * @note[short] MacOS (Intel): 0x394420
     * @note[short] Windows: 0x3ecb0
     * @note[short] iOS: 0x12fc4c
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
    BoomScrollLayerDelegate* m_delegate;
};
