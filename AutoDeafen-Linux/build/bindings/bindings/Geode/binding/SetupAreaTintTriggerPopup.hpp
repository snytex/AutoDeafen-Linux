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
#include "HSVWidgetDelegate.hpp"

class SetupAreaTintTriggerPopup : public SetupAreaMoveTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTintTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTintTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupAreaTintTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x42b9a4
     * @note[short] MacOS (Intel): 0x4c58d0
     * @note[short] Windows: 0x3f8840
     * @note[short] iOS: 0x3c694
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x42bc94
     * @note[short] MacOS (Intel): 0x4c5bd0
     * @note[short] Windows: 0x3f8b50
     * @note[short] iOS: 0x3c800
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x42b8b4
     * @note[short] MacOS (Intel): 0x4c57e0
     * @note[short] Windows: 0x3f8680
     * @note[short] iOS: 0x3c5cc
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x42bae8
     * @note[short] MacOS (Intel): 0x4c5a50
     * @note[short] Windows: 0x3f8a60
     * @note[short] iOS: 0x3c7d4
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);

    /**
     * @note[short] MacOS (ARM): 0x42ad84
     * @note[short] MacOS (Intel): 0x4c4b30
     * @note[short] Windows: 0x3f7c40
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x3f89e0
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3f8a80
     * @note[short] Android
     */
    void updateHSVButton();
    CCMenuItemSpriteExtra* m_hsvButton;
    cocos2d::ccHSVValue m_hsvValue;
    bool m_hsvChanged;
};
