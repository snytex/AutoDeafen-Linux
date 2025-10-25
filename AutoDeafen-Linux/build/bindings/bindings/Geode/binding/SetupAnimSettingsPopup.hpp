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

class SetupAnimSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x3f2500
     * @note[short] Android
     */
    static SetupAnimSettingsPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x8e0ac
     * @note[short] MacOS (Intel): 0x9b140
     * @note[short] Windows: 0x3f2e90
     * @note[short] iOS: 0x2e797c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8d8d0
     * @note[short] MacOS (Intel): 0x9a7f0
     * @note[short] Windows: 0x3f2610
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    void updateAnimSettings();
};
