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

class SetupTimeWarpPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimeWarpPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimeWarpPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x45090c
     * @note[short] MacOS (Intel): 0x4ef5f0
     * @note[short] Windows: 0x44ad30
     * @note[short] Android
     */
    static SetupTimeWarpPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x450fe4
     * @note[short] MacOS (Intel): 0x4efdd0
     * @note[short] Windows: 0x44b2c0
     * @note[short] iOS: 0x14b950
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x451134
     * @note[short] MacOS (Intel): 0x4eff60
     * @note[short] Windows: 0x287920
     * @note[short] iOS: 0x14ba8c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x450a9c
     * @note[short] MacOS (Intel): 0x4ef830
     * @note[short] Windows: 0x44ae50
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x450eb8
     * @note[short] MacOS (Intel): 0x4efc70
     * @note[short] Windows: 0x44b3d0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4510c8
     * @note[short] MacOS (Intel): 0x4efed0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTimeWarp();

    /**
     * @note[short] MacOS (ARM): 0x450f94
     * @note[short] MacOS (Intel): 0x4efd80
     * @note[short] Windows: 0x44b4a0
     * @note[short] Android
     */
    void updateTimeWarpLabel();
    cocos2d::CCLabelBMFont* m_timeWarpLabel;
    Slider* m_timeWarpSlider;
    float m_timeWarpMod;
};
