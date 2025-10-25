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

class SetupForceBlockPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupForceBlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupForceBlockPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x458970
     * @note[short] Android
     */
    static SetupForceBlockPopup* create(ForceBlockGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4c30bc
     * @note[short] MacOS (Intel): 0x56e580
     * @note[short] Windows: 0x4591a0
     * @note[short] iOS: 0x408c84
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4c2a88
     * @note[short] MacOS (Intel): 0x56de60
     * @note[short] Windows: 0x458a80
     * @note[short] Android
     */
    bool init(ForceBlockGameObject* p0, cocos2d::CCArray* p1);
};
