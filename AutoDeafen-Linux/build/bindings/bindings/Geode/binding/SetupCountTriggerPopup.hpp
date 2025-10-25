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

class SetupCountTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCountTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCountTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x24dd00
     * @note[short] MacOS (Intel): 0x2a7700
     * @note[short] Windows: 0x4031a0
     * @note[short] iOS: 0xf6b70
     * @note[short] Android
     */
    static SetupCountTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x24f140
     * @note[short] MacOS (Intel): 0x2a8e10
     * @note[short] Windows: 0x404390
     * @note[short] iOS: 0xf7c00
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x24f618
     * @note[short] MacOS (Intel): 0x2a93a0
     * @note[short] Windows: 0x404b30
     * @note[short] iOS: 0xf7fd0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f3f4
     * @note[short] MacOS (Intel): 0x2a9140
     * @note[short] Windows: 0x404650
     * @note[short] iOS: 0xf7e90
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x24de94
     * @note[short] MacOS (Intel): 0x2a7950
     * @note[short] Windows: 0x4032e0
     * @note[short] iOS: 0xf6c58
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x401660
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24eba4
     * @note[short] MacOS (Intel): 0x2a87d0
     * @note[short] Windows: 0x4045c0
     * @note[short] iOS: 0xf787c
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4044f0
     * @note[short] Android
     */
    void onMultiActivate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24ec4c
     * @note[short] MacOS (Intel): 0x2a8890
     * @note[short] Windows: 0x404580
     * @note[short] iOS: 0xf78d0
     * @note[short] Android
     */
    void onTargetCountArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24ecdc
     * @note[short] MacOS (Intel): 0x2a8940
     * @note[short] Windows: 0x404610
     * @note[short] iOS: 0xf791c
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
     * @note[short] Windows: 0x4049d0
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
    bool m_multiActivate;
};
