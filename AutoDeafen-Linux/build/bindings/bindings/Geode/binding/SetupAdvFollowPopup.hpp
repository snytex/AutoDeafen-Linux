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
#include "SelectPremadeDelegate.hpp"

class SetupAdvFollowPopup : public SetupTriggerPopup, public SelectPremadeDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x3ea770
     * @note[short] Android
     */
    static SetupAdvFollowPopup* create(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x28ef40
     * @note[short] MacOS (Intel): 0x2f5f20
     * @note[short] Windows: 0x287920
     * @note[short] iOS: 0x66f68
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x28e4e4
     * @note[short] MacOS (Intel): 0x2f54b0
     * @note[short] Windows: 0x3ed950
     * @note[short] iOS: 0x667d4
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x28e684
     * @note[short] MacOS (Intel): 0x2f55f0
     * @note[short] Windows: 0x3eda40
     * @note[short] iOS: 0x66934
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x28e914
     * @note[short] MacOS (Intel): 0x2f5870
     * @note[short] Windows: 0x3edd80
     * @note[short] iOS: 0x66b14
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x28eb1c
     * @note[short] MacOS (Intel): 0x2f5aa0
     * @note[short] Windows: 0x3ee030
     * @note[short] iOS: 0x66cd4
     * @note[short] Android
     */
    virtual void selectPremadeClosed(SelectPremadeLayer* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x28aed4
     * @note[short] MacOS (Intel): 0x2f11d0
     * @note[short] Windows: 0x3ea890
     * @note[short] Android
     */
    bool init(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x3ede30
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3edf00
     * @note[short] Android
     */
    void onPremade(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3ede60
     * @note[short] Android
     */
    void updateMode(int p0);
};
