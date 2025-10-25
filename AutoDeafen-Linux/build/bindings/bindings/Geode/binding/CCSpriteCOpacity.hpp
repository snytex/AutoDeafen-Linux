#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpriteCOpacity : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpriteCOpacity";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpriteCOpacity, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x3de600
     * @note[short] MacOS (Intel): 0x46f410
     * @note[short] Windows: 0x483c0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Android
     */
    static CCSpriteCOpacity* createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] Android
     */
    static CCSpriteCOpacity* createWithSpriteFrameName(char const* p0);
};
