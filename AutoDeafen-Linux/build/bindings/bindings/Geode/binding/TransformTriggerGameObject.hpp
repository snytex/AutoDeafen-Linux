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

class TransformTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TransformTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TransformTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static TransformTriggerGameObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x1847d4
     * @note[short] MacOS (Intel): 0x1c7c90
     * @note[short] Windows: 0x4a3630
     * @note[short] iOS: 0x38a2c0
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x1847f8
     * @note[short] MacOS (Intel): 0x1c7cc0
     * @note[short] Windows: 0x4a3650
     * @note[short] iOS: 0x38a2e4
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x184ac0
     * @note[short] MacOS (Intel): 0x1c80a0
     * @note[short] Windows: 0x4a3950
     * @note[short] iOS: 0x38a574
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);
    float m_objectScaleX;
    float m_objectScaleY;
    float m_property450;
    float m_property451;
    bool m_onlyMove;
    bool m_divideX;
    bool m_divideY;
    bool m_relativeRotation;
    bool m_relativeScale;
};
