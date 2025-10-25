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

class SetupCameraRotatePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraRotatePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraRotatePopup, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupCameraRotatePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x414080
     * @note[short] MacOS (Intel): 0x4aad80
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x414790
     * @note[short] MacOS (Intel): 0x4ab540
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x414568
     * @note[short] MacOS (Intel): 0x4ab2d0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x4142ec
     * @note[short] MacOS (Intel): 0x4ab000
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x412998
     * @note[short] MacOS (Intel): 0x4a9690
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void sliderDegreesChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void toggleEasingRateVisibility();

    /**
     * @note[short] Android
     */
    void updateCommandDegrees();

    /**
     * @note[short] Android
     */
    void updateDegreesLabel();

    /**
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Android
     */
    void updateDurLabel(bool p0);

    /**
     * @note[short] Android
     */
    void updateEasingLabel();

    /**
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
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_cameraEasingLabel;
    EasingType m_cameraEasingType;
    float m_cameraEasingRate;
    CCMenuItemSpriteExtra* m_cameraEasingRateButton;
    cocos2d::CCLabelBMFont* m_cameraEasingRateLabel;
    CCTextInputNode* m_degreesInput;
    Slider* m_degreesSlider;
    float m_degrees;
};
