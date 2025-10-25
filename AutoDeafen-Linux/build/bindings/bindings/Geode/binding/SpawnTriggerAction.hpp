#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SpawnTriggerAction {
public:
    static constexpr auto CLASS_NAME = "SpawnTriggerAction";

    /**
     * @note[short] Android
     */
    bool isFinished();

    /**
     * @note[short] Android
     */
    TodoReturn step(float p0);
    bool m_finished;
    bool m_disabled;
    double m_duration;
    double m_deltaTime;
    int m_targetGroupID;
    int m_triggerUniqueID;
    int m_controlID;
    bool m_spawnOrdered;
    GameObject* m_gameObject;
    gd::vector<int> m_remapKeys;
};
