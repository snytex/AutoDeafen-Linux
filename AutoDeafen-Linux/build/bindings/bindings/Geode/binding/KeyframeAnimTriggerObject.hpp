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

class KeyframeAnimTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeAnimTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeAnimTriggerObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static KeyframeAnimTriggerObject* create();

    /**
     * @note[short] MacOS (ARM): 0x16bc30
     * @note[short] MacOS (Intel): 0x1aa550
     * @note[short] Windows: 0x498a40
     * @note[short] iOS: 0x37f844
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x16c950
     * @note[short] MacOS (Intel): 0x1ab5c0
     * @note[short] Windows: 0x498eb0
     * @note[short] iOS: 0x37fc84
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x16bc80
     * @note[short] MacOS (Intel): 0x1aa5a0
     * @note[short] Windows: 0x498ab0
     * @note[short] iOS: 0x37f894
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    float m_timeMod;
    float m_positionXMod;
    float m_positionYMod;
    float m_rotationMod;
    float m_scaleXMod;
    float m_scaleYMod;
};
