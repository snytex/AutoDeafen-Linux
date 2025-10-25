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

class SetupObjectOptions2Popup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectOptions2Popup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectOptions2Popup, SetupTriggerPopup)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     SetupObjectOptions2Popup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupObjectOptions2Popup* create(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x29e2d8
     * @note[short] MacOS (Intel): 0x307200
     * @note[short] Windows: 0x3e9380
     * @note[short] iOS: 0x45758
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29de30
     * @note[short] MacOS (Intel): 0x306cd0
     * @note[short] Windows: 0x3e8e80
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);
};
