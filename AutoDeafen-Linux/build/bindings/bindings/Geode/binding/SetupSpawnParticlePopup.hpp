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

class SetupSpawnParticlePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSpawnParticlePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSpawnParticlePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x44fdd0
     * @note[short] Android
     */
    static SetupSpawnParticlePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4ba358
     * @note[short] MacOS (Intel): 0x5644d0
     * @note[short] Windows: 0x44fee0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};
