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

class SetupKeyframeAnimPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupKeyframeAnimPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupKeyframeAnimPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x40c970
     * @note[short] Android
     */
    static SetupKeyframeAnimPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x1a3d5c
     * @note[short] MacOS (Intel): 0x1ecdd0
     * @note[short] Windows: 0x40ca80
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};
