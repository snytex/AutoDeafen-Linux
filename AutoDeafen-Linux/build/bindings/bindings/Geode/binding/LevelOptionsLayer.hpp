#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class LevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] Android
     */
    static LevelOptionsLayer* create(LevelSettingsObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x20bbd0
     * @note[short] MacOS (Intel): 0x25fbc0
     * @note[short] Windows: 0x30fb80
     * @note[short] iOS: 0x181230
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x20bbe8
     * @note[short] MacOS (Intel): 0x25fbe0
     * @note[short] Windows: 0x30fba0
     * @note[short] iOS: 0x181248
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x20b58c
     * @note[short] MacOS (Intel): 0x25f470
     * @note[short] Windows: 0x30f4e0
     * @note[short] iOS: 0x180d58
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x20bc04
     * @note[short] MacOS (Intel): 0x25fc00
     * @note[short] Windows: 0x30fbc0
     * @note[short] iOS: 0x181264
     * @note[short] Android
     */
    virtual void didToggle(int p0);

    /**
     * @note[short] MacOS (ARM): 0x20b534
     * @note[short] MacOS (Intel): 0x25f420
     * @note[short] Windows: 0x30f470
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x20b9f4
     * @note[short] MacOS (Intel): 0x25f920
     * @note[short] Windows: 0x30f9a0
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
    LevelSettingsObject* m_settingsObject;
};
