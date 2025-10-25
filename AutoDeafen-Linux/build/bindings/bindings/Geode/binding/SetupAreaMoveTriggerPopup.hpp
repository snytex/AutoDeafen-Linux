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

class SetupAreaMoveTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaMoveTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaMoveTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupAreaMoveTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x428708
     * @note[short] MacOS (Intel): 0x4c1860
     * @note[short] Windows: 0x3f63f0
     * @note[short] iOS: 0x3a584
     * @note[short] Android
     */
    virtual void updateInputValue(int p0, float& p1);

    /**
     * @note[short] MacOS (ARM): 0x4282f8
     * @note[short] MacOS (Intel): 0x4c14b0
     * @note[short] Windows: 0x3f5d20
     * @note[short] iOS: 0x3a22c
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x4286d4
     * @note[short] MacOS (Intel): 0x4c1830
     * @note[short] Windows: 0x3f63c0
     * @note[short] iOS: 0x3a550
     * @note[short] Android
     */
    virtual void updateInputNode(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x428598
     * @note[short] MacOS (Intel): 0x4c16f0
     * @note[short] Windows: 0x3f6240
     * @note[short] iOS: 0x3a440
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x42864c
     * @note[short] MacOS (Intel): 0x4c17c0
     * @note[short] Windows: 0x3f6360
     * @note[short] iOS: 0x3a4c8
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4286a0
     * @note[short] MacOS (Intel): 0x4c1800
     * @note[short] Windows: 0x3f6390
     * @note[short] iOS: 0x3a51c
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x426d30
     * @note[short] MacOS (Intel): 0x4bfbb0
     * @note[short] Windows: 0x3f46f0
     * @note[short] iOS: 0x38fd4
     * @note[short] Android
     */
    void addAreaDefaultControls(int p0);

    /**
     * @note[short] Android
     */
    void getModeValues(int p0, int& p1, bool& p2, bool& p3);

    /**
     * @note[short] MacOS (ARM): 0x42602c
     * @note[short] MacOS (Intel): 0x4bec20
     * @note[short] Windows: 0x3f3850
     * @note[short] iOS: 0x38410
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x3f60e0
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x427fe0
     * @note[short] MacOS (Intel): 0x4c11b0
     * @note[short] Windows: 0x3f5d70
     * @note[short] iOS: 0x39fd0
     * @note[short] Android
     */
    void onNextFreeEffectID(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3f5de0
     * @note[short] Android
     */
    void onSpecialTarget(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3f5e80
     * @note[short] Android
     */
    void updateEnterTargetIDState();
    cocos2d::CCArray* m_modeButtons;
    cocos2d::CCArray* m_targetButtons;
};
