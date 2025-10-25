#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorAction2 {
public:
    static constexpr auto CLASS_NAME = "ColorAction2";

    /**
     * @note[short] Android: Rebinded
     */
     ColorAction2(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4, int p5, float p6, float p7);

    /**
     * @note[short] Android
     */
    TodoReturn resetAction();

    /**
     * @note[short] Android
     */
    TodoReturn step(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateCustomColor(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1);
    bool m_stepFinished;
    bool m_paused;
    cocos2d::ccColor3B m_color;
    float m_currentOpacity;
    float m_deltaTime;
    cocos2d::ccColor3B m_fromColor;
    cocos2d::ccColor3B m_toColor;
    float m_duration;
    bool m_blending;
    int m_playerColor;
    int m_colorID;
    float m_fromOpacity;
    float m_toOpacity;
    cocos2d::ccHSVValue m_copyHSV;
    int m_copyID;
    bool m_copyColorCalculated;
    bool m_copyOpacity;
    bool m_copyColorLoop;
    int m_uniqueID;
    bool m_legacyHSV;
    ColorActionSprite* m_colorSprite;
    float m_actionDelay;
    float m_stepInterval;
};
