#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class ShaderGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ShaderGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShaderGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static ShaderGameObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x1537ec
     * @note[short] MacOS (Intel): 0x18c9a0
     * @note[short] Windows: 0x481460
     * @note[short] iOS: 0x373f2c
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x1573c4
     * @note[short] MacOS (Intel): 0x191760
     * @note[short] Windows: 0x4826e0
     * @note[short] iOS: 0x374f24
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x153844
     * @note[short] MacOS (Intel): 0x18ca10
     * @note[short] Windows: 0x4814c0
     * @note[short] iOS: 0x373f7c
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);
    float m_speed;
    float m_strength;
    float m_outer;
    float m_timeOff;
    float m_waveWidth;
    float m_targetX;
    float m_targetY;
    float m_fadeIn;
    float m_fadeOut;
    float m_screenOffsetX;
    float m_screenOffsetY;
    bool m_invert;
    float m_inner;
    float m_maxSize;
    bool m_flip;
    bool m_rotate;
    bool m_dual;
    bool m_useX;
    bool m_useY;
    bool m_snapGrid;
    bool m_hardEdges;
    bool m_disableAll;
    int m_zLayerMin;
    int m_zLayerMax;
    bool m_animate;
    bool m_relative;
    bool m_editorDisabled;
};
