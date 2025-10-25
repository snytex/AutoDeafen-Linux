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

class SetupSequenceTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSequenceTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSequenceTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x42b000
     * @note[short] Android
     */
    static SetupSequenceTriggerPopup* create(SequenceTriggerGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x430be8
     * @note[short] MacOS (Intel): 0x4cb860
     * @note[short] Windows: 0x42c340
     * @note[short] iOS: 0x1d4388
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x42f9c4
     * @note[short] MacOS (Intel): 0x4ca480
     * @note[short] Windows: 0x42b130
     * @note[short] iOS: 0x1d32c8
     * @note[short] Android
     */
    bool init(SequenceTriggerGameObject* p0);

    /**
     * @note[short] Windows: 0x42c990
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x42cad0
     * @note[short] Android
     */
    void onChangeOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x42cbb0
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x430ccc
     * @note[short] MacOS (Intel): 0x4cb950
     * @note[short] Windows: 0x42c910
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4308b0
     * @note[short] MacOS (Intel): 0x4cb510
     * @note[short] Windows: 0x42c430
     * @note[short] iOS: 0x1d4070
     * @note[short] Android
     */
    void updateGroupIDButtons();
    CCMenuItemSpriteExtra* m_selectedButton;
    bool m_unk3b0;
    bool m_unk3b1;
    cocos2d::CCArray* m_groupButtons;
    int m_unk3c0;
    bool m_unk3c4;
};
