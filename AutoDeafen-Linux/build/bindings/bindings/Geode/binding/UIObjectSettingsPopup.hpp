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

class UIObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIObjectSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x451310
     * @note[short] Android
     */
    static UIObjectSettingsPopup* create(UISettingsGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4bc2fc
     * @note[short] MacOS (Intel): 0x566bc0
     * @note[short] Windows: 0x451f60
     * @note[short] iOS: 0x403440
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bb8b4
     * @note[short] MacOS (Intel): 0x565f70
     * @note[short] Windows: 0x451420
     * @note[short] Android
     */
    bool init(UISettingsGameObject* p0, cocos2d::CCArray* p1);
};
