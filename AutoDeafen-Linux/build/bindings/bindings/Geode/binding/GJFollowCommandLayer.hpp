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

class GJFollowCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJFollowCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJFollowCommandLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x268d00
     * @note[short] Android
     */
    static GJFollowCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x267ae4
     * @note[short] MacOS (Intel): 0x2c39d0
     * @note[short] Windows: 0x26a130
     * @note[short] iOS: 0x13a72c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x268494
     * @note[short] MacOS (Intel): 0x2c45a0
     * @note[short] Windows: 0x26b1a0
     * @note[short] iOS: 0x13aed4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x268044
     * @note[short] MacOS (Intel): 0x2c3fe0
     * @note[short] Windows: 0x26a850
     * @note[short] iOS: 0x13ac1c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2661e4
     * @note[short] MacOS (Intel): 0x2c1fb0
     * @note[short] Windows: 0x268e30
     * @note[short] iOS: 0x139368
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x267498
     * @note[short] MacOS (Intel): 0x2c33a0
     * @note[short] Windows: 0x26a790
     * @note[short] iOS: 0x13a3b8
     * @note[short] Android
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x267554
     * @note[short] MacOS (Intel): 0x2c3460
     * @note[short] Windows: 0x26a7f0
     * @note[short] iOS: 0x13a420
     * @note[short] Android
     */
    void onUpdateGroupID2(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26a440
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26a5d0
     * @note[short] Android
     */
    void sliderXModChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26a610
     * @note[short] Android
     */
    void sliderYModChanged(cocos2d::CCObject* sender);

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
     * @note[short] Windows: 0x26ae80
     * @note[short] Android
     */
    void updateTargetGroupID();

    /**
     * @note[short] Windows: 0x26af50
     * @note[short] Android
     */
    void updateTargetGroupID2();

    /**
     * @note[short] Windows: 0x26ad60
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] Windows: 0x26adf0
     * @note[short] Android
     */
    void updateTextInputLabel2();

    /**
     * @note[short] Windows: 0x26b020
     * @note[short] Android
     */
    void updateXMod();

    /**
     * @note[short] Windows: 0x26a650
     * @note[short] Android
     */
    void updateXModLabel();

    /**
     * @note[short] Windows: 0x26b0a0
     * @note[short] Android
     */
    void updateYMod();

    /**
     * @note[short] Windows: 0x26a6f0
     * @note[short] Android
     */
    void updateYModLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    CCTextInputNode* m_xModInput;
    CCTextInputNode* m_yModInput;
    Slider* m_xModSlider;
    Slider* m_yModSlider;
    float m_xMod;
    float m_yMod;
    CCTextInputNode* m_targetIDInput;
    int m_targetGroupID;
    CCTextInputNode* m_followIDInput;
    int m_followGroupID;
};
