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

class GradientTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "GradientTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GradientTriggerObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GradientTriggerObject();

    /**
     * @note[short] MacOS (ARM): 0x151ee4
     * @note[short] MacOS (Intel): 0x18ab00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GradientTriggerObject* create();

    /**
     * @note[short] MacOS (ARM): 0x151fc0
     * @note[short] MacOS (Intel): 0x18abe0
     * @note[short] Windows: 0x480b40
     * @note[short] iOS: 0x373678
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1533c4
     * @note[short] MacOS (Intel): 0x18c520
     * @note[short] Windows: 0x4811d0
     * @note[short] iOS: 0x373c10
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x152014
     * @note[short] MacOS (Intel): 0x18ac40
     * @note[short] Windows: 0x480bc0
     * @note[short] iOS: 0x3736cc
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    int m_blendingLayer;
    int m_blendingMode;
    int m_gradientID;
    int m_upBottomLeftID;
    int m_downBottomRightID;
    int m_leftTopLeftID;
    int m_rightTopRightID;
    bool m_vertexMode;
    bool m_disable;
    bool m_disableAll;
    float m_previewOpacity;
};
