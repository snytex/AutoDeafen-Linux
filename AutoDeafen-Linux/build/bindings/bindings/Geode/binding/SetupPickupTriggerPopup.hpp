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

class SetupPickupTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPickupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPickupTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x41e7f0
     * @note[short] Android
     */
    static SetupPickupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4f578
     * @note[short] MacOS (Intel): 0x598b0
     * @note[short] Windows: 0x40c610
     * @note[short] iOS: 0x47158
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f5b0
     * @note[short] MacOS (Intel): 0x598f0
     * @note[short] Windows: 0x41f090
     * @note[short] iOS: 0x47190
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ee48
     * @note[short] MacOS (Intel): 0x59080
     * @note[short] Windows: 0x41e900
     * @note[short] iOS: 0x46b80
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4f518
     * @note[short] MacOS (Intel): 0x59840
     * @note[short] Windows: 0x41f020
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateState();
};
