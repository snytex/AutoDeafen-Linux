#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SavedObjectStateRef {
public:
    static constexpr auto CLASS_NAME = "SavedObjectStateRef";
    GameObject* m_gameObject;
    double m_unkDouble1;
    double m_unkDouble2;
    float m_unkFloat1;
    float m_unkFloat2;
    float m_addToCustomScaleX;
    float m_addToCustomScaleY;
    float m_unkFloat3;
    float m_unkFloat4;
};
