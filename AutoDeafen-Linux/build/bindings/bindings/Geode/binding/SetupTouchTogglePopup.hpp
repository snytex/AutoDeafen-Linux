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

class SetupTouchTogglePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTouchTogglePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTouchTogglePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x24ba90
     * @note[short] MacOS (Intel): 0x2a4f80
     * @note[short] Windows: 0x44b5e0
     * @note[short] iOS: 0x24a11c
     * @note[short] Android
     */
    static SetupTouchTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x24cb44
     * @note[short] MacOS (Intel): 0x2a6270
     * @note[short] Windows: 0x44c350
     * @note[short] iOS: 0x24af20
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x24ce10
     * @note[short] MacOS (Intel): 0x2a65b0
     * @note[short] Windows: 0x44c880
     * @note[short] iOS: 0x24b160
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24cd0c
     * @note[short] MacOS (Intel): 0x2a6490
     * @note[short] Windows: 0x44c760
     * @note[short] iOS: 0x24b0c4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x24bc30
     * @note[short] MacOS (Intel): 0x2a51e0
     * @note[short] Windows: 0x44b720
     * @note[short] iOS: 0x24a1a0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x44c6a0
     * @note[short] Android
     */
    void onControlMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44c540
     * @note[short] Android
     */
    void onDualTouchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44c4b0
     * @note[short] Android
     */
    void onHoldMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24c740
     * @note[short] MacOS (Intel): 0x2a5dd0
     * @note[short] Windows: 0x3fbf70
     * @note[short] iOS: 0x24abf0
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44c5d0
     * @note[short] Android
     */
    void onTouchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3fc130
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Windows: 0x3fc0b0
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    int m_groupID;
    bool m_holdMode;
    int m_toggleMode;
    int m_playerMode;
    CCMenuItemToggler* m_toggleOnToggler;
    CCMenuItemToggler* m_toggleOffToggler;
    bool m_dualMode;
    CCMenuItemToggler* m_p1OnlyToggler;
    CCMenuItemToggler* m_p2OnlyToggler;
};
