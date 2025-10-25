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

class SetupStaticCameraPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupStaticCameraPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupStaticCameraPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x447580
     * @note[short] Android
     */
    static SetupStaticCameraPopup* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x3185bc
     * @note[short] MacOS (Intel): 0x388d20
     * @note[short] Windows: 0x448090
     * @note[short] iOS: 0x1d207c
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x318650
     * @note[short] MacOS (Intel): 0x388db0
     * @note[short] Windows: 0x42a510
     * @note[short] iOS: 0x1d2094
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317c2c
     * @note[short] MacOS (Intel): 0x3881c0
     * @note[short] Windows: 0x447690
     * @note[short] iOS: 0x1d1858
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x4480b0
     * @note[short] Android
     */
    void updateState();
};
