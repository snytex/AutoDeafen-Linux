#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class OpacityEffectAction {
public:
    static constexpr auto CLASS_NAME = "OpacityEffectAction";

    /**
     * @note[short] Android
     */
    void step(float delta);
    float m_duration;
    float m_fromValue;
    float m_toValue;
    bool m_finished;
    bool m_disabled;
    float m_deltaTime;
    int m_targetGroupID;
    float m_currentValue;
    int m_triggerUniqueID;
    int m_controlID;
    float m_deltaTimeRelated;
    float m_durationRelated;
};
