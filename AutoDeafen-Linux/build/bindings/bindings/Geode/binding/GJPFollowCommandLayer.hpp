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

class GJPFollowCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJPFollowCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPFollowCommandLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x282da0
     * @note[short] Android
     */
    static GJPFollowCommandLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x2e7324
     * @note[short] MacOS (Intel): 0x353270
     * @note[short] Windows: 0x284790
     * @note[short] iOS: 0x16384c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x2e7e78
     * @note[short] MacOS (Intel): 0x354000
     * @note[short] Windows: 0x2855f0
     * @note[short] iOS: 0x16412c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e78a0
     * @note[short] MacOS (Intel): 0x353890
     * @note[short] Windows: 0x284d20
     * @note[short] iOS: 0x163d48
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2e54c8
     * @note[short] MacOS (Intel): 0x351320
     * @note[short] Windows: 0x282ed0
     * @note[short] iOS: 0x161fb0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x2e6c28
     * @note[short] MacOS (Intel): 0x352bb0
     * @note[short] Windows: 0x284cc0
     * @note[short] iOS: 0x163474
     * @note[short] Android
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26a440
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x284b20
     * @note[short] Android
     */
    void sliderXModChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x284b50
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
     * @note[short] Android
     */
    void updateMaxSpeed();

    /**
     * @note[short] Android
     */
    void updateMaxSpeedLabel();

    /**
     * @note[short] Android
     */
    void updateOffsetLabel();

    /**
     * @note[short] Android
     */
    void updatePlayerOffset();

    /**
     * @note[short] Windows: 0x285420
     * @note[short] Android
     */
    void updateTargetGroupID();

    /**
     * @note[short] Windows: 0x285390
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] Windows: 0x2854f0
     * @note[short] Android
     */
    void updateXMod();

    /**
     * @note[short] Windows: 0x284b80
     * @note[short] Android
     */
    void updateXModLabel();

    /**
     * @note[short] Windows: 0x285570
     * @note[short] Android
     */
    void updateYMod();

    /**
     * @note[short] Windows: 0x284c20
     * @note[short] Android
     */
    void updateYModLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    CCTextInputNode* m_speedInput;
    CCTextInputNode* m_delayInput;
    CCTextInputNode* m_offsetInput;
    CCTextInputNode* m_maxSpeedInput;
    Slider* m_speedSlider;
    Slider* m_delaySlider;
    float m_delay;
    float m_speed;
    int m_offset;
    float m_maxSpeed;
    CCTextInputNode* m_targetIDInput;
    int m_targetGroupID;
};
