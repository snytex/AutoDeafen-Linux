#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SliderThumb.hpp"

class SliderTouchLogic : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "SliderTouchLogic";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderTouchLogic, cocos2d::CCMenu)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SliderTouchLogic();

    /**
     * @note[short] MacOS (ARM): 0x289840
     * @note[short] MacOS (Intel): 0x2ef7b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2eec80
     * @note[short] Android
     */
    static SliderTouchLogic* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, float p4);

    /**
     * @note[short] MacOS (ARM): 0x289cc8
     * @note[short] MacOS (Intel): 0x2efc70
     * @note[short] Windows: 0x714b0
     * @note[short] iOS: 0x2eeeb0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x289edc
     * @note[short] MacOS (Intel): 0x2efea0
     * @note[short] Windows: 0x715a0
     * @note[short] iOS: 0x2eefa8
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x289e2c
     * @note[short] MacOS (Intel): 0x2efde0
     * @note[short] Windows: 0x71560
     * @note[short] iOS: 0x2eef58
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x28a160
     * @note[short] MacOS (Intel): 0x2f01a0
     * @note[short] Windows: 0x716d0
     * @note[short] iOS: 0x2ef108
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x28998c
     * @note[short] MacOS (Intel): 0x2ef8f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2eedc4
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, float p4);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setMaxOffset(float offset);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setRotated(bool rotated);
    float m_unknownUnused;
    float m_length;
    SliderThumb* m_thumb;
    Slider* m_slider;
    bool m_activateThumb;
    cocos2d::CCPoint m_position;
    bool m_rotated;
};
