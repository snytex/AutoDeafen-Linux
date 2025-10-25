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

class SetupRandTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x501514
     * @note[short] MacOS (Intel): 0x5cce60
     * @note[short] Windows: 0x427720
     * @note[short] iOS: 0x1ca8d0
     * @note[short] Android
     */
    static SetupRandTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x5028bc
     * @note[short] MacOS (Intel): 0x5ce3b0
     * @note[short] Windows: 0x4285e0
     * @note[short] iOS: 0x1cb858
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x502ddc
     * @note[short] MacOS (Intel): 0x5ce990
     * @note[short] Windows: 0x4290c0
     * @note[short] iOS: 0x1cbc54
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x502b44
     * @note[short] MacOS (Intel): 0x5ce6a0
     * @note[short] Windows: 0x4288e0
     * @note[short] iOS: 0x1cbad0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x5016b0
     * @note[short] MacOS (Intel): 0x5cd0b0
     * @note[short] Windows: 0x427860
     * @note[short] iOS: 0x1ca9c0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x502228
     * @note[short] MacOS (Intel): 0x5cdd00
     * @note[short] Windows: 0x428890
     * @note[short] iOS: 0x1cb520
     * @note[short] Android
     */
    void onTargetID2Arrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5022d0
     * @note[short] MacOS (Intel): 0x5cddc0
     * @note[short] Windows: 0x428840
     * @note[short] iOS: 0x1cb4cc
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x428730
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26b120
     * @note[short] Android
     */
    void updateChance();

    /**
     * @note[short] Windows: 0x428770
     * @note[short] Android
     */
    void updateChanceLabel(bool p0);

    /**
     * @note[short] Windows: 0x428f20
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Windows: 0x428ff0
     * @note[short] Android
     */
    void updateTargetID2();

    /**
     * @note[short] Windows: 0x428bc0
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] Windows: 0x428d70
     * @note[short] Android
     */
    void updateTextInputLabel2();
    CCTextInputNode* m_chanceInput;
    Slider* m_chanceSlider;
    float m_chancePercent;
    CCTextInputNode* m_groupID1Input;
    CCTextInputNode* m_groupID2Input;
    int m_groupID1;
    int m_groupID2;
};
