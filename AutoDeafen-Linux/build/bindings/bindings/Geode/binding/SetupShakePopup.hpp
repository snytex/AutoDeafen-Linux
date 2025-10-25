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

class SetupShakePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShakePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShakePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x43c850
     * @note[short] Android
     */
    static SetupShakePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x576bd0
     * @note[short] MacOS (Intel): 0x64eeb0
     * @note[short] Windows: 0x43d6d0
     * @note[short] iOS: 0x3a292c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x577234
     * @note[short] MacOS (Intel): 0x64f590
     * @note[short] Windows: 0x43e120
     * @note[short] iOS: 0x3a2e60
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x576f14
     * @note[short] MacOS (Intel): 0x64f210
     * @note[short] Windows: 0x43dd60
     * @note[short] iOS: 0x3a2c1c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x575d0c
     * @note[short] MacOS (Intel): 0x64df80
     * @note[short] Windows: 0x43c980
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x43d8a0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26b120
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Windows: 0x26a500
     * @note[short] Android
     */
    void updateDurLabel(bool p0);

    /**
     * @note[short] Windows: 0x43dce0
     * @note[short] Android
     */
    void updateInterval();

    /**
     * @note[short] Windows: 0x43dc10
     * @note[short] Android
     */
    void updateIntervalLabel(bool p0);

    /**
     * @note[short] Windows: 0x43db90
     * @note[short] Android
     */
    void updateShake();

    /**
     * @note[short] Windows: 0x43dac0
     * @note[short] Android
     */
    void updateShakeLabel(bool p0);
    CCTextInputNode* m_durationInput;
    Slider* m_durationSlider;
    float m_duration;
    CCTextInputNode* m_strengthInput;
    Slider* m_strengthSlider;
    float m_strength;
    CCTextInputNode* m_intervalInput;
    Slider* m_intervalSlider;
    float m_interval;
};
