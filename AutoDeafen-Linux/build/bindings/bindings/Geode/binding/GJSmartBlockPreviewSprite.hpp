#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartBlockPreviewSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreviewSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreviewSprite, cocos2d::CCNode)

    /**
     * @note[short] Android
     */
    static GJSmartBlockPreviewSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x3927f0
     * @note[short] MacOS (Intel): 0x416d80
     * @note[short] Windows: 0x77db0
     * @note[short] iOS: 0xd46c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3927f4
     * @note[short] MacOS (Intel): 0x416d90
     * @note[short] Windows: 0x2af2b0
     * @note[short] iOS: 0xd470
     * @note[short] Android
     */
    virtual void visit();
};
