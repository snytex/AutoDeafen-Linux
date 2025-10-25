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

class SetupTransformPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTransformPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTransformPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x44c920
     * @note[short] Android
     */
    static SetupTransformPopup* create(TransformTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x45a9dc
     * @note[short] MacOS (Intel): 0x4faa20
     * @note[short] Windows: 0x44ca30
     * @note[short] Android
     */
    bool init(TransformTriggerGameObject* p0, cocos2d::CCArray* p1);
};
