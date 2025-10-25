#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRotationControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJRotationControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRotationControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f4734
     * @note[short] Android: Out of line
     */
     GJRotationControl();

    /**
     * @note[short] MacOS (ARM): 0xd254
     * @note[short] MacOS (Intel): 0xbe40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bf3bc
     * @note[short] Android
     */
    static GJRotationControl* create();

    /**
     * @note[short] MacOS (ARM): 0x49058
     * @note[short] MacOS (Intel): 0x51c10
     * @note[short] Windows: 0x1277e0
     * @note[short] iOS: 0x3f27d4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x49620
     * @note[short] MacOS (Intel): 0x52210
     * @note[short] Windows: 0x127c40
     * @note[short] iOS: 0x3f2ba8
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x492bc
     * @note[short] MacOS (Intel): 0x51e80
     * @note[short] Windows: 0x127980
     * @note[short] iOS: 0x3f29dc
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x493d0
     * @note[short] MacOS (Intel): 0x51fa0
     * @note[short] Windows: 0x127a80
     * @note[short] iOS: 0x3f2adc
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4950c
     * @note[short] MacOS (Intel): 0x52100
     * @note[short] Windows: 0x127c20
     * @note[short] iOS: 0x3f2b58
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x49604
     * @note[short] MacOS (Intel): 0x521d0
     * @note[short] Windows: 0x71210
     * @note[short] iOS: 0x3f2b8c
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x46460
     * @note[short] MacOS (Intel): 0x4e840
     * @note[short] Windows: 0x127900
     * @note[short] iOS: 0x3f0188
     * @note[short] Android
     */
    void finishTouch();

    /**
     * @note[short] MacOS (ARM): 0x4914c
     * @note[short] MacOS (Intel): 0x51d00
     * @note[short] Android
     */
    void setAngle(float p0);

    /**
     * @note[short] MacOS (ARM): 0x491cc
     * @note[short] MacOS (Intel): 0x51d80
     * @note[short] Android
     */
    void updateSliderPosition(cocos2d::CCPoint p0);
    cocos2d::CCPoint m_cursorDifference;
    cocos2d::CCPoint m_controlPosition;
    cocos2d::CCSprite* m_controlSprite;
    float m_startingRotation;
    float m_currentRotation;
    int m_touchID;
    GJRotationControlDelegate* m_delegate;
};
