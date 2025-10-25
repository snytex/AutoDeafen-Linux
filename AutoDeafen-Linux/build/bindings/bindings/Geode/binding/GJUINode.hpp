#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUINode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUINode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUINode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x41d2c0
     * @note[short] MacOS (Intel): 0x4b5100
     * @note[short] Windows: 0x4b5d30
     * @note[short] Android
     */
    static GJUINode* create(UIButtonConfig& p0);

    /**
     * @note[short] MacOS (ARM): 0x4200f4
     * @note[short] MacOS (Intel): 0x4b8390
     * @note[short] Windows: 0x4b6870
     * @note[short] iOS: 0x4ed2c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    int activeRangeTouchTest(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0x4b6540
     * @note[short] Android
     */
    int activeTouchTest(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    float getButtonScale();

    /**
     * @note[short] Android
     */
    int getOpacity();

    /**
     * @note[short] MacOS (ARM): 0x41f110
     * @note[short] MacOS (Intel): 0x4b7150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4e370
     * @note[short] Android
     */
    void highlightButton(int p0);

    /**
     * @note[short] MacOS (ARM): 0x41f568
     * @note[short] MacOS (Intel): 0x4b76c0
     * @note[short] Windows: 0x4b5e10
     * @note[short] Android
     */
    bool init(UIButtonConfig& p0);

    /**
     * @note[short] Android
     */
    void loadFromConfig(UIButtonConfig& p0);

    /**
     * @note[short] Android
     */
    void resetState();

    /**
     * @note[short] Windows: 0x4b60c0
     * @note[short] Android
     */
    void saveToConfig(UIButtonConfig& p0);

    /**
     * @note[short] Android
     */
    void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x41f018
     * @note[short] MacOS (Intel): 0x4b7070
     * @note[short] Windows: 0x4b67e0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleHighlight(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void toggleModeB(bool p0);

    /**
     * @note[short] Windows: 0x4b6720
     * @note[short] Android
     */
    void touchEnded();

    /**
     * @note[short] Windows: 0x4b6430
     * @note[short] Android
     */
    int touchTest(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x41fdb8
     * @note[short] MacOS (Intel): 0x4b8000
     * @note[short] Windows: 0x4b6170
     * @note[short] Android
     */
    void updateButtonFrames();

    /**
     * @note[short] Windows: 0x4b6330
     * @note[short] Android
     */
    void updateButtonPositions();

    /**
     * @note[short] Android
     */
    void updateButtonScale(float p0);

    /**
     * @note[short] Android
     */
    void updateDeadzone(int p0);

    /**
     * @note[short] Android
     */
    void updateDragRadius(float p0);

    /**
     * @note[short] Windows: 0x4b62c0
     * @note[short] Android
     */
    void updateHeight(float p0);

    /**
     * @note[short] Android
     */
    void updateRangePos(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void updateSize(float p0, float p1);

    /**
     * @note[short] Windows: 0x4b6250
     * @note[short] Android
     */
    void updateWidth(float p0);
    cocos2d::CCSprite* m_firstSprite;
    cocos2d::CCSprite* m_secondSprite;
    cocos2d::CCRect m_rect;
    int m_touchID;
    cocos2d::CCPoint m_touchDelta;
    cocos2d::CCPoint m_touchPosition;
    float m_radius;
    float m_deadzone;
    bool m_drawLines;
    bool m_modeB;
    bool m_snap;
    bool m_swiping;
    bool m_moving;
    bool m_player2;
    bool m_oneButton;
    bool m_split;
    PlayerButton m_currentButton;
};
