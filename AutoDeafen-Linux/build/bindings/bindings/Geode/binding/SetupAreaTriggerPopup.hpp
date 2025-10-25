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

class SetupAreaTriggerPopup : public SetupAreaMoveTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupAreaTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x42c188
     * @note[short] MacOS (Intel): 0x4c6330
     * @note[short] Windows: 0x3f8c00
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);
};
