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

class EditTriggersPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditTriggersPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditTriggersPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x2874a0
     * @note[short] Android
     */
    static EditTriggersPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x231fb4
     * @note[short] MacOS (Intel): 0x288da0
     * @note[short] Windows: 0x287910
     * @note[short] iOS: 0x2d2e64
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x231fb8
     * @note[short] MacOS (Intel): 0x288db0
     * @note[short] Windows: 0x287920
     * @note[short] iOS: 0x2d2e68
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x231cd4
     * @note[short] MacOS (Intel): 0x288ae0
     * @note[short] Windows: 0x2875b0
     * @note[short] iOS: 0x2d2c04
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};
