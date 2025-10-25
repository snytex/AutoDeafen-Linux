#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupGameplayOffsetPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGameplayOffsetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGameplayOffsetPopup, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupGameplayOffsetPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x697480
     * @note[short] MacOS (Intel): 0x783140
     * @note[short] Windows: 0x42a630
     * @note[short] iOS: 0x1a29f8
     * @note[short] Android
     */
    virtual void updateInputValue(int p0, float& p1);

    /**
     * @note[short] MacOS (ARM): 0x697468
     * @note[short] MacOS (Intel): 0x783120
     * @note[short] Windows: 0x42a610
     * @note[short] iOS: 0x1a29e0
     * @note[short] Android
     */
    virtual void updateInputNode(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x697418
     * @note[short] MacOS (Intel): 0x7830d0
     * @note[short] Windows: 0x42a5c0
     * @note[short] iOS: 0x1a2990
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x697450
     * @note[short] MacOS (Intel): 0x783100
     * @note[short] Windows: 0x42a5f0
     * @note[short] iOS: 0x1a29c8
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x697384
     * @note[short] MacOS (Intel): 0x783030
     * @note[short] Windows: 0x42a510
     * @note[short] iOS: 0x1a290c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x696c90
     * @note[short] MacOS (Intel): 0x782840
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    void onDefaultValues(cocos2d::CCObject* sender);
};
