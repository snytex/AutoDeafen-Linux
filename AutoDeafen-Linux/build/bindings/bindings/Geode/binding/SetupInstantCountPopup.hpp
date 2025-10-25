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

class SetupInstantCountPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCountPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCountPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x5047c4
     * @note[short] MacOS (Intel): 0x5d0770
     * @note[short] Windows: 0x40a520
     * @note[short] iOS: 0x1bdc18
     * @note[short] Android
     */
    static SetupInstantCountPopup* create(CountTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x505b58
     * @note[short] MacOS (Intel): 0x5d1dc0
     * @note[short] Windows: 0x40b590
     * @note[short] iOS: 0x1bebe0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x506090
     * @note[short] MacOS (Intel): 0x5d23f0
     * @note[short] Windows: 0x402140
     * @note[short] iOS: 0x1befc0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x505e14
     * @note[short] MacOS (Intel): 0x5d2100
     * @note[short] Windows: 0x40b740
     * @note[short] iOS: 0x1bee80
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x504958
     * @note[short] MacOS (Intel): 0x5d09c0
     * @note[short] Windows: 0x40a660
     * @note[short] iOS: 0x1bdd00
     * @note[short] Android
     */
    bool init(CountTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x40ba90
     * @note[short] Android
     */
    void onCountType(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x401660
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5055c8
     * @note[short] MacOS (Intel): 0x5d1780
     * @note[short] Windows: 0x404580
     * @note[short] iOS: 0x1be868
     * @note[short] Android
     */
    void onTargetCountArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x505658
     * @note[short] MacOS (Intel): 0x5d1830
     * @note[short] Windows: 0x40b700
     * @note[short] iOS: 0x1be8b4
     * @note[short] Android
     */
    void onTargetID2Arrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x505520
     * @note[short] MacOS (Intel): 0x5d16c0
     * @note[short] Windows: 0x4045c0
     * @note[short] iOS: 0x1be814
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x401eb0
     * @note[short] Android
     */
    void updateCountTextInputLabel();

    /**
     * @note[short] Windows: 0x401f30
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] Windows: 0x4048d0
     * @note[short] Android
     */
    void updateItemIDInputLabel();

    /**
     * @note[short] Windows: 0x404aa0
     * @note[short] Android
     */
    void updateTargetCount();

    /**
     * @note[short] Windows: 0x40b9c0
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Windows: 0x404950
     * @note[short] Android
     */
    void updateTargetIDInputLabel();
    CCTextInputNode* m_itemIDInput;
    CCTextInputNode* m_targetIDInput;
    CCTextInputNode* m_targetCountInput;
    int m_itemID;
    int m_targetID;
    int m_targetCount;
    bool m_activateGroup;
    int m_mode;
    CCMenuItemToggler* m_equalsToggler;
    CCMenuItemToggler* m_largerToggler;
    CCMenuItemToggler* m_smallerToggler;
};
