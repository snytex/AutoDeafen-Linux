#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GravityEffectSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GravityEffectSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GravityEffectSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GravityEffectSprite();

    /**
     * @note[short] MacOS (ARM): 0x9d8c0
     * @note[short] MacOS (Intel): 0xacad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x119108
     * @note[short] Android
     */
    static GravityEffectSprite* create();

    /**
     * @note[short] MacOS (ARM): 0xae348
     * @note[short] MacOS (Intel): 0xbfa30
     * @note[short] Windows: 0x3a4390
     * @note[short] iOS: 0x126114
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0xae56c
     * @note[short] MacOS (Intel): 0xbfc90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x126338
     * @note[short] Android: Out of line
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0xa97a4
     * @note[short] MacOS (Intel): 0xba240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x121f34
     * @note[short] Android
     */
    void updateSpritesColor(cocos2d::ccColor3B color);
};
