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

class SetupAudioTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAudioTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAudioTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x40e62c
     * @note[short] MacOS (Intel): 0x4a4700
     * @note[short] Windows: 0x42e390
     * @note[short] iOS: 0x182804
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x40d928
     * @note[short] MacOS (Intel): 0x4a3830
     * @note[short] Windows: 0x42d3b0
     * @note[short] Android
     */
    void addProxVolControls(int p0);

    /**
     * @note[short] Windows: 0x42cff0
     * @note[short] Android
     */
    void addTimeControls(int p0, float p1);

    /**
     * @note[short] Windows: 0x42e240
     * @note[short] Android
     */
    void onProxMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x42e310
     * @note[short] Android
     */
    void updateSpecialGroup();
    cocos2d::CCArray* m_proximityButtons;
};
