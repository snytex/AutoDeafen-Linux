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

class TimerTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TimerTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TimerTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static TimerTriggerGameObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x18bdc8
     * @note[short] MacOS (Intel): 0x1d1230
     * @note[short] Windows: 0x4a6690
     * @note[short] iOS: 0x38cf2c
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x18d660
     * @note[short] MacOS (Intel): 0x1d3110
     * @note[short] Windows: 0x4a6e70
     * @note[short] iOS: 0x38d63c
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x18bed0
     * @note[short] MacOS (Intel): 0x1d1340
     * @note[short] Windows: 0x4a67a0
     * @note[short] iOS: 0x38cfdc
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);
    double m_startTime;
    double m_targetTime;
    bool m_stopTimeEnabled;
    bool m_dontOverride;
    bool m_ignoreTimeWarp;
    float m_timeMod;
    bool m_startPaused;
    bool m_multiActivate;
    int m_controlType;
};
