#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UIButtonConfig {
public:
    static constexpr auto CLASS_NAME = "UIButtonConfig";

    /**
     * @note[short] Windows: 0x1779e0
     * @note[short] Android
     */
    void reset();

    /**
     * @note[short] Windows: 0x177a50
     * @note[short] Android
     */
    void resetOneBtn();
    int m_width;
    int m_height;
    float m_deadzone;
    float m_scale;
    int m_opacity;
    float m_radius;
    bool m_modeB;
    bool m_snap;
    cocos2d::CCPoint m_position;
    bool m_oneButton;
    bool m_player2;
    bool m_split;
};
