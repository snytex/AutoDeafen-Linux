#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TouchToggleAction {
public:
    static constexpr auto CLASS_NAME = "TouchToggleAction";
    bool m_disabled;
    int m_targetGroupID;
    bool m_holdMode;
    TouchTriggerType m_touchTriggerType;
    TouchTriggerControl m_touchTriggerControl;
    int m_triggerUniqueID;
    int m_controlID;
    bool m_dualMode;
    gd::vector<int> m_remapKeys;
};
