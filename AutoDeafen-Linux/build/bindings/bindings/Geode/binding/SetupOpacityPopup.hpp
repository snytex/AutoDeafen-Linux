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

class SetupOpacityPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOpacityPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOpacityPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x412730
     * @note[short] Android
     */
    static SetupOpacityPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4e708
     * @note[short] MacOS (Intel): 0x58780
     * @note[short] Windows: 0x413660
     * @note[short] iOS: 0x280e8
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x4ec00
     * @note[short] MacOS (Intel): 0x58d80
     * @note[short] Windows: 0x3f2480
     * @note[short] iOS: 0x284f4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e9c0
     * @note[short] MacOS (Intel): 0x58ae0
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x28374
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x4e9dc
     * @note[short] MacOS (Intel): 0x58b20
     * @note[short] Windows: 0x413a50
     * @note[short] iOS: 0x28390
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x4d5e0
     * @note[short] MacOS (Intel): 0x57560
     * @note[short] Windows: 0x412860
     * @note[short] iOS: 0x272b0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4e1b0
     * @note[short] MacOS (Intel): 0x581c0
     * @note[short] Windows: 0x4137f0
     * @note[short] iOS: 0x27dbc
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x413840
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x413e50
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Windows: 0x413c90
     * @note[short] Android
     */
    void updateDurLabel(bool p0);

    /**
     * @note[short] Android
     */
    void updateOpacity();

    /**
     * @note[short] Windows: 0x413d60
     * @note[short] Android
     */
    void updateOpacityLabel();

    /**
     * @note[short] Windows: 0x413ee0
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Windows: 0x413dd0
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_fadeTimeInput;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    Slider* m_fadeTimeSlider;
    Slider* m_opacitySlider;
    float m_opacity;
    float m_fadeTime;
    int m_groupID;
};
