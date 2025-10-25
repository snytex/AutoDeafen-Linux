#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupInstantCollisionTriggerPopup.hpp"

class SetupCollisionStateTriggerPopup : public SetupInstantCollisionTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCollisionStateTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCollisionStateTriggerPopup, SetupInstantCollisionTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupCollisionStateTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x314c08
     * @note[short] MacOS (Intel): 0x384de0
     * @note[short] Windows: 0x402cf0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};
