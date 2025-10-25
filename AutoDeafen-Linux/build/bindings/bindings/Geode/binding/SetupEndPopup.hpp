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

class SetupEndPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEndPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEndPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x404dc0
     * @note[short] Android
     */
    static SetupEndPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x57aac8
     * @note[short] MacOS (Intel): 0x653460
     * @note[short] Windows: 0x4058b0
     * @note[short] iOS: 0x2acca4
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x57ad48
     * @note[short] MacOS (Intel): 0x653780
     * @note[short] Windows: 0x3fc200
     * @note[short] iOS: 0x2ace98
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x57ac44
     * @note[short] MacOS (Intel): 0x653630
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x2acdfc
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x57ac60
     * @note[short] MacOS (Intel): 0x653670
     * @note[short] Windows: 0x405b60
     * @note[short] iOS: 0x2ace18
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x579f20
     * @note[short] MacOS (Intel): 0x6527b0
     * @note[short] Windows: 0x404ef0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x405a80
     * @note[short] Android
     */
    void onLockY(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4059c0
     * @note[short] Android
     */
    void onMultiActivate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4059f0
     * @note[short] Android
     */
    void onReversed(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x405b10
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x405cd0
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Windows: 0x405c50
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    bool m_reversed;
    bool m_lockY;
    int m_groupID;
    bool m_multiActivate;
};
