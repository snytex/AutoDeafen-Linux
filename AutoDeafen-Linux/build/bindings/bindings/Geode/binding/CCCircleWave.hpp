#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCircleWave : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCCircleWave";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCircleWave, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x134bb4
     * @note[short] MacOS (Intel): 0x167ae0
     * @note[short] Windows: 0x42800
     * @note[short] iOS: 0x16f678
     * @note[short] Android
     */
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);

    /**
     * @note[short] MacOS (ARM): 0x134bac
     * @note[short] MacOS (Intel): 0x167ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16f670
     * @note[short] Android
     */
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn);

    /**
     * @note[short] MacOS (ARM): 0x134e8c
     * @note[short] MacOS (Intel): 0x167e30
     * @note[short] Windows: 0x42af0
     * @note[short] iOS: 0x16f8d0
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x135348
     * @note[short] MacOS (Intel): 0x1682f0
     * @note[short] Windows: 0x42f00
     * @note[short] iOS: 0x16fc40
     * @note[short] Android
     */
    virtual void removeMeAndCleanup();

    /**
     * @note[short] MacOS (ARM): 0x135210
     * @note[short] MacOS (Intel): 0x1681b0
     * @note[short] Windows: 0x42dd0
     * @note[short] iOS: 0x16fb18
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x134f9c
     * @note[short] MacOS (Intel): 0x167f30
     * @note[short] Windows: 0x42b70
     * @note[short] iOS: 0x16f9e0
     * @note[short] Android
     */
    virtual void updateTweenAction(float p0, char const* p1);

    /**
     * @note[short] Android
     */
    TodoReturn baseSetup(float p0);

    /**
     * @note[short] MacOS (ARM): 0x134f0c
     * @note[short] MacOS (Intel): 0x167ea0
     * @note[short] Android
     */
    TodoReturn followObject(cocos2d::CCNode* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x134c88
     * @note[short] MacOS (Intel): 0x167bd0
     * @note[short] Windows: 0x428b0
     * @note[short] iOS: 0x16f708
     * @note[short] Android
     */
    bool init(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);

    /**
     * @note[short] MacOS (ARM): 0x134ec0
     * @note[short] MacOS (Intel): 0x167e60
     * @note[short] Windows: 0x42b30
     * @note[short] Android
     */
    TodoReturn updatePosition(float p0);
    cocos2d::CCNode* m_target;
    float m_width;
    float m_radius;
    float m_opacity;
    cocos2d::ccColor3B m_color;
    cocos2d::CCPoint m_position;
    CircleMode m_circleMode;
    int m_lineWidth;
    float m_opacityMod;
    bool m_blendAdditive;
    CCCircleWaveDelegate* m_delegate;
};
