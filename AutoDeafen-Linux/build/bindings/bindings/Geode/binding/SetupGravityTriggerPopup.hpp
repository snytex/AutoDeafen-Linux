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

class SetupGravityTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGravityTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGravityTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupGravityTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x41a934
     * @note[short] MacOS (Intel): 0x4b22c0
     * @note[short] Windows: 0x411950
     * @note[short] iOS: 0x419a94
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x41a4d4
     * @note[short] MacOS (Intel): 0x4b1e10
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};
