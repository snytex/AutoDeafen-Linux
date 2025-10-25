#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelOptionsLayer.hpp"

class LevelOptionsLayer2 : public LevelOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer2, LevelOptionsLayer)

    /**
     * @note[short] MacOS (ARM): 0x20ba34
     * @note[short] MacOS (Intel): 0x25f960
     * @note[short] Android
     */
    static LevelOptionsLayer2* create(LevelSettingsObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x20beb4
     * @note[short] MacOS (Intel): 0x25fec0
     * @note[short] Windows: 0x30fe20
     * @note[short] iOS: 0x1814e4
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x20bdb8
     * @note[short] MacOS (Intel): 0x25fdc0
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);
};
