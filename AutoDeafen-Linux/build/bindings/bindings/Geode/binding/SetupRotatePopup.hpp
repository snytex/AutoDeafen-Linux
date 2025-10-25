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

class SetupRotatePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotatePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotatePopup, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupRotatePopup* create(EnhancedGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4d7138
     * @note[short] MacOS (Intel): 0x585460
     * @note[short] Windows: 0x42acd0
     * @note[short] iOS: 0x267a44
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4d71b4
     * @note[short] MacOS (Intel): 0x5854e0
     * @note[short] Windows: 0x42ad70
     * @note[short] iOS: 0x267ac0
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4d6c50
     * @note[short] MacOS (Intel): 0x584ec0
     * @note[short] Windows: 0x42a770
     * @note[short] iOS: 0x267614
     * @note[short] Android
     */
    bool init(EnhancedGameObject* p0, cocos2d::CCArray* p1);
};
