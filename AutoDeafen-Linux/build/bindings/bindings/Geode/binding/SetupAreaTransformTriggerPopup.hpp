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

class SetupAreaTransformTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTransformTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTransformTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupAreaTransformTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x428ba8
     * @note[short] MacOS (Intel): 0x4c1f30
     * @note[short] Windows: 0x3f6420
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
};
