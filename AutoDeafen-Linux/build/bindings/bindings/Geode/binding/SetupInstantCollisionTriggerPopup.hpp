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

class SetupInstantCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCollisionTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupInstantCollisionTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x314a58
     * @note[short] MacOS (Intel): 0x384b90
     * @note[short] Windows: 0x402bc0
     * @note[short] iOS: 0x231200
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x314748
     * @note[short] MacOS (Intel): 0x384880
     * @note[short] Windows: 0x402990
     * @note[short] iOS: 0x230f18
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x314130
     * @note[short] MacOS (Intel): 0x384160
     * @note[short] Windows: 0x402270
     * @note[short] iOS: 0x2309b4
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateSpecialNodes();
};
