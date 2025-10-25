#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AdvancedFollowInstance {
public:
    static constexpr auto CLASS_NAME = "AdvancedFollowInstance";
    GameObject* m_gameObject;
    int m_group;
    int m_objectKey;
    int m_controlId;
    int m_otherObjectKey;
    int m_relatedToGJGameStateUnkUint7;
    bool m_finished;
    bool m_doStart;
    bool m_started;
    bool m_processed;
};
