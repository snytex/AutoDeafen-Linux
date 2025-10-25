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

class SetupAdvFollowEditPhysicsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowEditPhysicsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowEditPhysicsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x3ef5a0
     * @note[short] Android
     */
    static SetupAdvFollowEditPhysicsPopup* create(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x2902dc
     * @note[short] MacOS (Intel): 0x2f7630
     * @note[short] Windows: 0x3f0440
     * @note[short] iOS: 0x68054
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x28f6cc
     * @note[short] MacOS (Intel): 0x2f6760
     * @note[short] Windows: 0x3ef6b0
     * @note[short] Android
     */
    bool init(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
};
