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

class SetupPlayerControlPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPlayerControlPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPlayerControlPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x44f720
     * @note[short] Android
     */
    static SetupPlayerControlPopup* create(PlayerControlGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4b9c68
     * @note[short] MacOS (Intel): 0x563c90
     * @note[short] Windows: 0x44f830
     * @note[short] Android
     */
    bool init(PlayerControlGameObject* p0, cocos2d::CCArray* p1);
};
