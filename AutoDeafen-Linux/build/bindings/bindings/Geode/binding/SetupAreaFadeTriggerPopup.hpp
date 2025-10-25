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

class SetupAreaFadeTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaFadeTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaFadeTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupAreaFadeTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x42a2a4
     * @note[short] MacOS (Intel): 0x4c3d00
     * @note[short] Windows: 0x3f7430
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
};
