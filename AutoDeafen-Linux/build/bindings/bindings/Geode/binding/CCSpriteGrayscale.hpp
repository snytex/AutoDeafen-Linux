#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpriteWithHue.hpp"

class CCSpriteGrayscale : public CCSpriteWithHue {
public:
    static constexpr auto CLASS_NAME = "CCSpriteGrayscale";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpriteGrayscale, CCSpriteWithHue)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpriteGrayscale();

    /**
     * @note[short] MacOS (ARM): 0x50cabc
     * @note[short] MacOS (Intel): 0x5d95c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    static CCSpriteGrayscale* create(gd::string const& file, cocos2d::CCRect const& rect);

    /**
     * @note[short] MacOS (ARM): 0x50c9f0
     * @note[short] MacOS (Intel): 0x5d9500
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    static CCSpriteGrayscale* create(gd::string const& file);

    /**
     * @note[short] MacOS (ARM): 0x50cda8
     * @note[short] MacOS (Intel): 0x5d9860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a7110
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x50cea4
     * @note[short] MacOS (Intel): 0x5d9940
     * @note[short] Windows: 0x49020
     * @note[short] iOS: 0x1a71fc
     * @note[short] Android: Rebinded
     */
    static CCSpriteGrayscale* createWithSpriteFrameName(gd::string const& frameName);

    /**
     * @note[short] MacOS (ARM): 0x50ccb4
     * @note[short] MacOS (Intel): 0x5d9790
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x50cb9c
     * @note[short] MacOS (Intel): 0x5d9690
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x50c9cc
     * @note[short] MacOS (Intel): 0x5d94e0
     * @note[short] Windows: 0x48fc0
     * @note[short] iOS: 0x1a7100
     * @note[short] Android
     */
    virtual gd::string getShaderName();

    /**
     * @note[short] MacOS (ARM): 0x50c890
     * @note[short] MacOS (Intel): 0x5d92d0
     * @note[short] Windows: 0x48e00
     * @note[short] iOS: 0x1a702c
     * @note[short] Android
     */
    virtual const char* shaderBody();
};
