#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameObjectEditorState {
public:
    static constexpr auto CLASS_NAME = "GameObjectEditorState";

    /**
     * @note[short] MacOS (ARM): 0xaa8c
     * @note[short] MacOS (Intel): 0x9370
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadValues(GameObject* obj);
    cocos2d::CCPoint m_position;
    float m_scaleX;
    float m_scaleY;
    float m_rotationX;
    float m_rotationY;
};
