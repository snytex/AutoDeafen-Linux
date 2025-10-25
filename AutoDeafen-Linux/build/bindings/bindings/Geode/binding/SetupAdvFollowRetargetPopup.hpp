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

class SetupAdvFollowRetargetPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowRetargetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowRetargetPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x3f0510
     * @note[short] Android
     */
    static SetupAdvFollowRetargetPopup* create(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x290a24
     * @note[short] MacOS (Intel): 0x2f7ef0
     * @note[short] Windows: 0x3ed950
     * @note[short] iOS: 0x68638
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x290bc4
     * @note[short] MacOS (Intel): 0x2f8030
     * @note[short] Windows: 0x3f0c60
     * @note[short] iOS: 0x68798
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x2904a0
     * @note[short] MacOS (Intel): 0x2f78a0
     * @note[short] Windows: 0x3f0620
     * @note[short] Android
     */
    bool init(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
};
