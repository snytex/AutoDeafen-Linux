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

class SetupCameraOffsetTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraOffsetTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraOffsetTrigger, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x5732f0
     * @note[short] MacOS (Intel): 0x64b110
     * @note[short] Windows: 0x3fd690
     * @note[short] iOS: 0x192364
     * @note[short] Android
     */
    static SetupCameraOffsetTrigger* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x57505c
     * @note[short] MacOS (Intel): 0x64d090
     * @note[short] Windows: 0x3fe9f0
     * @note[short] iOS: 0x193bc8
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x575a68
     * @note[short] MacOS (Intel): 0x64dbc0
     * @note[short] Windows: 0x3ffc80
     * @note[short] iOS: 0x194458
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5757e8
     * @note[short] MacOS (Intel): 0x64d890
     * @note[short] Windows: 0x3ff6f0
     * @note[short] iOS: 0x194230
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x57542c
     * @note[short] MacOS (Intel): 0x64d460
     * @note[short] Windows: 0x3fedf0
     * @note[short] iOS: 0x193f00
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x57347c
     * @note[short] MacOS (Intel): 0x64b350
     * @note[short] Windows: 0x3fd7b0
     * @note[short] iOS: 0x192440
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);

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
     * @note[short] Windows: 0x3ff610
     * @note[short] Android
     */
    void onTargetMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    int posFromSliderValue(float p0);

    /**
     * @note[short] Windows: 0x26a440
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    float sliderValueFromPos(int p0);

    /**
     * @note[short] Windows: 0x3ff410
     * @note[short] Android
     */
    void sliderXChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3ff460
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
     * @note[short] Windows: 0x3ffaa0
     * @note[short] Android
     */
    void updateMoveCommandPosX();

    /**
     * @note[short] Windows: 0x3ffb90
     * @note[short] Android
     */
    void updateMoveCommandPosY();

    /**
     * @note[short] Windows: 0x3ff4b0
     * @note[short] Android
     */
    void updateValueXLabel();

    /**
     * @note[short] Windows: 0x3ff560
     * @note[short] Android
     */
    void updateValueYLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_cameraEasingLabel;
    EasingType m_cameraEasingType;
    float m_cameraEasingRate;
    CCMenuItemSpriteExtra* m_cameraEasingRateButton;
    cocos2d::CCLabelBMFont* m_cameraEasingRateLabel;
    CCTextInputNode* m_offsetXInput;
    CCTextInputNode* m_offsetYInput;
    Slider* m_offsetXSlider;
    Slider* m_offsetYSlider;
    int m_offsetX;
    int m_offsetY;
    int m_targetMode;
    CCMenuItemToggler* m_xOnlyToggler;
    CCMenuItemToggler* m_yOnlyToggler;
};
