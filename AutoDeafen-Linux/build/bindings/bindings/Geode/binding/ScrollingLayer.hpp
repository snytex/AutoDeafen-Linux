#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ScrollingLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ScrollingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ScrollingLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x629f88
     * @note[short] MacOS (Intel): 0x70aae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1bacb4
     * @note[short] Android: Out of line
     */
     ScrollingLayer();

    /**
     * @note[short] MacOS (ARM): 0x629898
     * @note[short] MacOS (Intel): 0x70a2c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ba74c
     * @note[short] Android
     */
    static ScrollingLayer* create(cocos2d::CCSize size, cocos2d::CCPoint position, float factor);

    /**
     * @note[short] MacOS (ARM): 0x629b24
     * @note[short] MacOS (Intel): 0x70a580
     * @note[short] Windows: 0x70ee0
     * @note[short] iOS: 0x1ba978
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x629bc8
     * @note[short] MacOS (Intel): 0x70a650
     * @note[short] Windows: 0x70fa0
     * @note[short] iOS: 0x1baa1c
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x629cdc
     * @note[short] MacOS (Intel): 0x70a7a0
     * @note[short] Windows: 0x70ff0
     * @note[short] iOS: 0x1baaa4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x629e38
     * @note[short] MacOS (Intel): 0x70a940
     * @note[short] Windows: 0x710e0
     * @note[short] iOS: 0x1bab64
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x629f34
     * @note[short] MacOS (Intel): 0x70aa60
     * @note[short] Windows: 0x711f0
     * @note[short] iOS: 0x1bac60
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x629f6c
     * @note[short] MacOS (Intel): 0x70aaa0
     * @note[short] Windows: 0x71210
     * @note[short] iOS: 0x1bac98
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x70df0
     * @note[short] iOS: 0x1ba8bc
     * @note[short] Android
     */
    cocos2d::CCRect getViewRect();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCSize size, cocos2d::CCPoint position, float factor);

    /**
     * @note[short] MacOS (ARM): 0x629ca4
     * @note[short] MacOS (Intel): 0x70a760
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setStartOffset(cocos2d::CCPoint offset);
    cocos2d::CCPoint m_position;
    cocos2d::CCSize m_size;
    cocos2d::CCPoint m_touchStartPosition;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_startOffset;
    float m_scrollFactor;
    int m_touchID;
    cocos2d::CCLayer* m_contentLayer;
    cocos2d::CCLayer* m_parentLayer;
};
