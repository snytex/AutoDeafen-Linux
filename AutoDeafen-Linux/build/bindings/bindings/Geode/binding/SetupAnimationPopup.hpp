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

class SetupAnimationPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimationPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimationPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x34ade8
     * @note[short] MacOS (Intel): 0x3c1850
     * @note[short] Windows: 0x3f0fb0
     * @note[short] iOS: 0x3bb768
     * @note[short] Android
     */
    static SetupAnimationPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x34bdd0
     * @note[short] MacOS (Intel): 0x3c29f0
     * @note[short] Windows: 0x3f1ed0
     * @note[short] iOS: 0x3bc428
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x34c158
     * @note[short] MacOS (Intel): 0x3c2e10
     * @note[short] Windows: 0x3f2480
     * @note[short] iOS: 0x3bc6dc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34bfb0
     * @note[short] MacOS (Intel): 0x3c2c20
     * @note[short] Windows: 0x3f2060
     * @note[short] iOS: 0x3bc600
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x34af78
     * @note[short] MacOS (Intel): 0x3c1a90
     * @note[short] Windows: 0x3f10e0
     * @note[short] iOS: 0x3bb84c
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x34bb10
     * @note[short] MacOS (Intel): 0x3c26f0
     * @note[short] Windows: 0x3f1fd0
     * @note[short] iOS: 0x3bc2bc
     * @note[short] Android
     */
    void onAnimationIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34ba68
     * @note[short] MacOS (Intel): 0x3c2630
     * @note[short] Windows: 0x3f2010
     * @note[short] iOS: 0x3bc268
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34beac
     * @note[short] MacOS (Intel): 0x3c2ae0
     * @note[short] Windows: 0x3f23e0
     * @note[short] Android
     */
    void updateAnimationID();

    /**
     * @note[short] MacOS (ARM): 0x34bcc0
     * @note[short] MacOS (Intel): 0x3c28d0
     * @note[short] Windows: 0x3f2290
     * @note[short] Android
     */
    void updateAnimationTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x34bf2c
     * @note[short] MacOS (Intel): 0x3c2b80
     * @note[short] Windows: 0x3f2310
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x34bbb0
     * @note[short] MacOS (Intel): 0x3c27b0
     * @note[short] Windows: 0x3f2210
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_targetIDInput;
    CCTextInputNode* m_animationIDInput;
    int m_targetID;
    int m_animationID;
};
