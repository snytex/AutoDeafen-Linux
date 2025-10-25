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

class CustomizeObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     CustomizeObjectSettingsPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CustomizeObjectSettingsPopup* create(GameObject* p0, cocos2d::CCArray* p1, CustomizeObjectLayer* p2);

    /**
     * @note[short] MacOS (ARM): 0x19f0d4
     * @note[short] MacOS (Intel): 0x1e7d20
     * @note[short] Windows: 0xa9e50
     * @note[short] iOS: 0x54abc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19f054
     * @note[short] MacOS (Intel): 0x1e7cb0
     * @note[short] Windows: 0xa9da0
     * @note[short] iOS: 0x54a3c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19ec84
     * @note[short] MacOS (Intel): 0x1e7880
     * @note[short] Windows: 0xa99f0
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1, CustomizeObjectLayer* p2);
    CustomizeObjectLayer* m_customizeLayer;
    bool m_settingsChanged;
};
