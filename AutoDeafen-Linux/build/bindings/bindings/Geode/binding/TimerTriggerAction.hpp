#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TimerTriggerAction {
public:
    static constexpr auto CLASS_NAME = "TimerTriggerAction";
    bool m_disabled;
    float m_time;
    float m_targetTime;
    int m_targetGroupID;
    int m_triggerUniqueID;
    int m_controlID;
    int m_itemID;
    bool m_multiActivate;
    gd::vector<int> m_remapKeys;
};
