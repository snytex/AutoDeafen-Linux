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

class SetupObjectTogglePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectTogglePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectTogglePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x2f5348
     * @note[short] MacOS (Intel): 0x3624f0
     * @note[short] Windows: 0x411b70
     * @note[short] iOS: 0x1a5e38
     * @note[short] Android
     */
    static SetupObjectTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x2f5e64
     * @note[short] MacOS (Intel): 0x3631a0
     * @note[short] Windows: 0x40c730
     * @note[short] iOS: 0x1a66f8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f5dec
     * @note[short] MacOS (Intel): 0x363120
     * @note[short] Windows: 0x4125e0
     * @note[short] iOS: 0x1a6688
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x2f54d8
     * @note[short] MacOS (Intel): 0x362720
     * @note[short] Windows: 0x411c90
     * @note[short] iOS: 0x1a5f18
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);
};
