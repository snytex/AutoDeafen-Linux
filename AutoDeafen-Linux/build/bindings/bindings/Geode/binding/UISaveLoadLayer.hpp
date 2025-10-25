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

class UISaveLoadLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UISaveLoadLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UISaveLoadLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UISaveLoadLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UISaveLoadLayer* create(UIOptionsLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x248bb8
     * @note[short] MacOS (Intel): 0x2a1cf0
     * @note[short] Windows: 0x29c940
     * @note[short] Android
     */
    bool init(UIOptionsLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x2494ec
     * @note[short] MacOS (Intel): 0x2a25d0
     * @note[short] Windows: 0x29d120
     * @note[short] Android
     */
    void onLoad(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2492ac
     * @note[short] MacOS (Intel): 0x2a23a0
     * @note[short] Windows: 0x29ce90
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);
    UIOptionsLayer* m_optionsLayer;
};
