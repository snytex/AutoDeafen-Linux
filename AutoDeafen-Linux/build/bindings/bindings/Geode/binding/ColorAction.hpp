#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorAction : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "ColorAction";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorAction, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x268edc
     * @note[short] MacOS (Intel): 0x2c5030
     * @note[short] Windows: 0x251b40
     * @note[short] iOS: 0x10ea4
     * @note[short] Android
     */
    static ColorAction* create();

    /**
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B p0, bool p1, int p2);

    /**
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4, int p5, float p6, float p7);

    /**
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4);

    /**
     * @note[short] Android
     */
    TodoReturn getCopy();

    /**
     * @note[short] Android
     */
    bool init(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2, double p3, bool p4, int p5, float p6, float p7);

    /**
     * @note[short] Android
     */
    bool isInUse();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void loadFromState(CAState& state);

    /**
     * @note[short] Android
     */
    TodoReturn resetAction();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void saveToState(CAState& state);

    /**
     * @note[short] Windows: 0x252800
     * @note[short] Android: Rebinded
     */
    void setupFromMap(gd::map<gd::string, gd::string>& p0);

    /**
     * @note[short] MacOS (ARM): 0x26b258
     * @note[short] MacOS (Intel): 0x2c7390
     * @note[short] Windows: 0x252720
     * @note[short] Android: Rebinded
     */
    void setupFromString(gd::string p0);

    /**
     * @note[short] Windows: 0x251c30
     * @note[short] Android
     */
    void step(float p0);

    /**
     * @note[short] Android
     */
    void updateCustomColor(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1);
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
    int m_controlID;
    bool m_legacyHSV;
    ColorActionSprite* m_colorSprite;
    InheritanceNode* m_inheritanceNode;
    float m_actionDelay;
    float m_stepInterval;
};
