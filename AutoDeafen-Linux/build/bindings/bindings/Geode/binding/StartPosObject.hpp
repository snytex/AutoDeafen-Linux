#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class StartPosObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "StartPosObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StartPosObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static StartPosObject* create();

    /**
     * @note[short] MacOS (ARM): 0x16d800
     * @note[short] MacOS (Intel): 0x1ac6e0
     * @note[short] Windows: 0x499450
     * @note[short] iOS: 0x380370
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x16d93c
     * @note[short] MacOS (Intel): 0x1ac830
     * @note[short] Windows: 0x4995b0
     * @note[short] iOS: 0x38046c
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x16d940
     * @note[short] MacOS (Intel): 0x1ac840
     * @note[short] Windows: 0x4995c0
     * @note[short] iOS: 0x380470
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x16d8dc
     * @note[short] MacOS (Intel): 0x1ac7d0
     * @note[short] Windows: 0x499510
     * @note[short] iOS: 0x380430
     * @note[short] Android: Rebinded
     */
    void loadSettingsFromString(gd::string objectString);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setSettings(LevelSettingsObject* settings);
    LevelSettingsObject* m_startSettings;
};
