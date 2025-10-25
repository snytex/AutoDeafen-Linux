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

class SetupRandAdvTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandAdvTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandAdvTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x30a6c8
     * @note[short] MacOS (Intel): 0x37a4e0
     * @note[short] Windows: 0x424f50
     * @note[short] iOS: 0x32990
     * @note[short] Android
     */
    static SetupRandAdvTriggerPopup* create(RandTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x30bc4c
     * @note[short] MacOS (Intel): 0x37be30
     * @note[short] Windows: 0x425b10
     * @note[short] iOS: 0x33a20
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30bc44
     * @note[short] MacOS (Intel): 0x37be10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33a18
     * @note[short] Android: Out of line
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    void addChance(int p0, int p1);

    /**
     * @note[short] Android
     */
    void addChanceToObject(RandTriggerGameObject* p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x426550
     * @note[short] Android
     */
    void callRemoveFromGroup(float p0);

    /**
     * @note[short] MacOS (ARM): 0x30a864
     * @note[short] MacOS (Intel): 0x37a720
     * @note[short] Windows: 0x425090
     * @note[short] iOS: 0x32a80
     * @note[short] Android
     */
    bool init(RandTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x426790
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4266c0
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void removeGroupID(int p0);

    /**
     * @note[short] Android
     */
    void removeGroupIDFromObject(RandTriggerGameObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x30b24c
     * @note[short] MacOS (Intel): 0x37b190
     * @note[short] Windows: 0x425bd0
     * @note[short] iOS: 0x33350
     * @note[short] Android
     */
    void updateGroupIDButtons();
    bool m_performedAction;
    cocos2d::CCArray* m_groupButtons;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_chanceInput;
    int m_groupToRemove;
    bool m_removingGroup;
};
