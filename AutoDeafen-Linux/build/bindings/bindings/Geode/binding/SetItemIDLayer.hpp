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

class SetItemIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetItemIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetItemIDLayer, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetItemIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x8f4a0
     * @note[short] MacOS (Intel): 0x9c7f0
     * @note[short] Windows: 0x3e9ed0
     * @note[short] iOS: 0x4122e8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8f3ac
     * @note[short] MacOS (Intel): 0x9c700
     * @note[short] Windows: 0x3e9de0
     * @note[short] iOS: 0x4121f4
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x8f2a4
     * @note[short] MacOS (Intel): 0x9c5e0
     * @note[short] Windows: 0x3e9c40
     * @note[short] iOS: 0x4120ec
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8eba0
     * @note[short] MacOS (Intel): 0x9bdd0
     * @note[short] Windows: 0x3e94e0
     * @note[short] iOS: 0x411ae0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    void updateEditorLabel();
};
