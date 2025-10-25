#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAreaMoveTriggerPopup.hpp"

class SetupAreaRotateTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaRotateTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaRotateTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupAreaRotateTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4297c8
     * @note[short] MacOS (Intel): 0x4c2f00
     * @note[short] Windows: 0x3f6ce0
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
};
