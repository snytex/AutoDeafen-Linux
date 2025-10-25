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

class GJRotateCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJRotateCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRotateCommandLayer, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static GJRotateCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x6cc8
     * @note[short] MacOS (Intel): 0x45d0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x7988
     * @note[short] MacOS (Intel): 0x5520
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7534
     * @note[short] MacOS (Intel): 0x4f80
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7148
     * @note[short] MacOS (Intel): 0x4af0
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x461c
     * @note[short] MacOS (Intel): 0x1d60
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
    void onFollowRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLockRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdateGroupID2(cocos2d::CCObject* sender);

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
    void sliderTimesChanged(cocos2d::CCObject* sender);

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
    void updateCommandTimes();

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

    /**
     * @note[short] Android
     */
    void updateTargetGroupID();

    /**
     * @note[short] Android
     */
    void updateTargetGroupID2();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel2();

    /**
     * @note[short] Android
     */
    void updateTimesLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_rotateEasingLabel;
    EasingType m_rotateEasingType;
    float m_rotateEasingRate;
    CCMenuItemSpriteExtra* m_rotateEasingRateButton;
    cocos2d::CCLabelBMFont* m_rotateEasingRateLabel;
    CCTextInputNode* m_degreesInput;
    CCTextInputNode* m_timesInput;
    Slider* m_degreesSlider;
    Slider* m_timesSlider;
    float m_degrees;
    int m_times360;
    CCTextInputNode* m_targetIDInput;
    bool m_disableTextChanged;
    int m_targetGroupID;
    CCTextInputNode* m_centerIDInput;
    int m_centerGroupID;
    bool m_lockObjectRotation;
    bool m_followP1;
    bool m_followP2;
    CCMenuItemToggler* m_followP1Toggler;
    CCMenuItemToggler* m_followP2Toggler;
};
