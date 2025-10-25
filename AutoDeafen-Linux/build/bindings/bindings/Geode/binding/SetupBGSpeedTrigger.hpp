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

class SetupBGSpeedTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupBGSpeedTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupBGSpeedTrigger, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupBGSpeedTrigger* create(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x455408
     * @note[short] MacOS (Intel): 0x4f4910
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);
};
