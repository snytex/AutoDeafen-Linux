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

class SetupMGTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMGTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMGTrigger, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x40f3e0
     * @note[short] Android
     */
    static SetupMGTrigger* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x454a5c
     * @note[short] MacOS (Intel): 0x4f3d90
     * @note[short] Windows: 0x4104d0
     * @note[short] iOS: 0x2f2ad8
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x4551e4
     * @note[short] MacOS (Intel): 0x4f45f0
     * @note[short] Windows: 0x410bc0
     * @note[short] iOS: 0x2f3144
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x454fcc
     * @note[short] MacOS (Intel): 0x4f4390
     * @note[short] Windows: 0x410830
     * @note[short] iOS: 0x2f2f84
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x454ce8
     * @note[short] MacOS (Intel): 0x4f4050
     * @note[short] Windows: 0x3fedf0
     * @note[short] iOS: 0x2f2d1c
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x453360
     * @note[short] MacOS (Intel): 0x4f2600
     * @note[short] Windows: 0x40f500
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x3ff1b0
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3fed30
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void posFromSliderValue(float p0);

    /**
     * @note[short] Windows: 0x26a440
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void sliderValueFromPos(int p0);

    /**
     * @note[short] Windows: 0x410730
     * @note[short] Android
     */
    void sliderYChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3ff0a0
     * @note[short] Android
     */
    void toggleEasingRateVisibility();

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
     * @note[short] Windows: 0x3ff270
     * @note[short] Android
     */
    void updateEasingLabel();

    /**
     * @note[short] Windows: 0x3feec0
     * @note[short] Android
     */
    void updateEasingRateLabel();

    /**
     * @note[short] Android
     */
    void updateMoveCommandEasing();

    /**
     * @note[short] Android
     */
    void updateMoveCommandEasingRate();

    /**
     * @note[short] Windows: 0x410ad0
     * @note[short] Android
     */
    void updateMoveCommandPosY();

    /**
     * @note[short] Windows: 0x410780
     * @note[short] Android
     */
    void updateValueYLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_mgEasingLabel;
    EasingType m_mgEasingType;
    float m_mgEasingRate;
    CCMenuItemSpriteExtra* m_mgEasingRateButton;
    cocos2d::CCLabelBMFont* m_mgEasingRateLabel;
    CCTextInputNode* m_offsetYInput;
    Slider* m_offsetYSlider;
    int m_offsetY;
};
