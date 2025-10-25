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

class SetupItemEditTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupItemEditTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupItemEditTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x4524d0
     * @note[short] Android
     */
    static SetupItemEditTriggerPopup* create(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4bed30
     * @note[short] MacOS (Intel): 0x569870
     * @note[short] Windows: 0x454ce0
     * @note[short] iOS: 0x405594
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4beb50
     * @note[short] MacOS (Intel): 0x569690
     * @note[short] Windows: 0x454a40
     * @note[short] iOS: 0x4053d4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bc978
     * @note[short] MacOS (Intel): 0x567390
     * @note[short] Windows: 0x4525f0
     * @note[short] iOS: 0x4038d4
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x4537e0
     * @note[short] Android
     */
    void onOpButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4bdbf4
     * @note[short] MacOS (Intel): 0x568890
     * @note[short] Windows: 0x453eb0
     * @note[short] Android
     */
    void updateFormulaLabel();

    /**
     * @note[short] Windows: 0x453c50
     * @note[short] Android
     */
    void updateOpButton(CCMenuItemSpriteExtra* p0, int p1, int p2);
    cocos2d::CCLabelBMFont* m_formulaLabel;
};
