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

class SetupCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCollisionTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x400520
     * @note[short] Android
     */
    static SetupCollisionTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x3139c4
     * @note[short] MacOS (Intel): 0x383820
     * @note[short] Windows: 0x4014d0
     * @note[short] iOS: 0x230460
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x313f38
     * @note[short] MacOS (Intel): 0x383eb0
     * @note[short] Windows: 0x402140
     * @note[short] iOS: 0x23086c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x313ccc
     * @note[short] MacOS (Intel): 0x383bc0
     * @note[short] Windows: 0x401ac0
     * @note[short] iOS: 0x23072c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3125a4
     * @note[short] MacOS (Intel): 0x382240
     * @note[short] Windows: 0x400660
     * @note[short] iOS: 0x22f360
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x401960
     * @note[short] Android
     */
    void onActivateOnExit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x401660
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3131dc
     * @note[short] MacOS (Intel): 0x382f70
     * @note[short] Windows: 0x4019f0
     * @note[short] iOS: 0x22fec8
     * @note[short] Android
     */
    void onItemID2Arrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31313c
     * @note[short] MacOS (Intel): 0x382eb0
     * @note[short] Windows: 0x401a30
     * @note[short] iOS: 0x22fe7c
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31327c
     * @note[short] MacOS (Intel): 0x383030
     * @note[short] Windows: 0x401a70
     * @note[short] iOS: 0x22ff14
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4016f0
     * @note[short] Android
     */
    void onTargetP1(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4017b0
     * @note[short] Android
     */
    void onTargetP2(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x401870
     * @note[short] Android
     */
    void onTargetPP(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x401f30
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] Windows: 0x401fd0
     * @note[short] Android
     */
    void updateItemID2();

    /**
     * @note[short] Windows: 0x401e10
     * @note[short] Android
     */
    void updateItemID2InputLabel();

    /**
     * @note[short] Windows: 0x401d40
     * @note[short] Android
     */
    void updateItemIDInputLabel();

    /**
     * @note[short] Windows: 0x402070
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Windows: 0x401eb0
     * @note[short] Android
     */
    void updateTargetIDInputLabel();
    CCTextInputNode* m_blockAInput;
    CCTextInputNode* m_blockBInput;
    CCTextInputNode* m_targetIDInput;
    int m_blockAID;
    int m_blockBID;
    int m_targetID;
    bool m_activateGroup;
    bool m_triggerOnExit;
    bool m_targetP1;
    bool m_targetP2;
    bool m_targetPP;
};
