#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCLightStrip : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCLightStrip";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCLightStrip, cocos2d::CCNode)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     CCLightStrip();

    /**
     * @note[short] MacOS (ARM): 0x451a40
     * @note[short] MacOS (Intel): 0x4f0a80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCLightStrip* create(float width, float toWidth, float toHeight, float duration, float delay);

    /**
     * @note[short] MacOS (ARM): 0x452008
     * @note[short] MacOS (Intel): 0x4f10a0
     * @note[short] Windows: 0x43cb0
     * @note[short] iOS: 0x358a4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x452160
     * @note[short] MacOS (Intel): 0x4f1230
     * @note[short] Windows: 0x43e70
     * @note[short] iOS: 0x359fc
     * @note[short] Android
     */
    virtual void updateTweenAction(float value, char const* keyword);

    /**
     * @note[short] MacOS (ARM): 0x451ef0
     * @note[short] MacOS (Intel): 0x4f0f60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(float width, float toWidth, float toHeight, float duration, float delay);
    float m_objectWidth;
    float m_toWidth;
    float m_toHeight;
    float m_duration;
    cocos2d::ccColor4B m_color;
    float m_opacity;
    float m_width;
    float m_height;
};
