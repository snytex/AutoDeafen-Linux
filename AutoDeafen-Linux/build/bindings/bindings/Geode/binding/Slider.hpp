#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SliderTouchLogic.hpp"

class Slider : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "Slider";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(Slider, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x28a3b0
     * @note[short] MacOS (Intel): 0x2f0420
     * @note[short] Windows: 0x71720
     * @note[short] iOS: 0x2ef18c
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, char const* bar, char const* groove, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] MacOS (ARM): 0x28a198
     * @note[short] MacOS (Intel): 0x2f01e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef140
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler);

    /**
     * @note[short] MacOS (ARM): 0x28a29c
     * @note[short] MacOS (Intel): 0x2f0300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef168
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, float scale);

    /**
     * @note[short] MacOS (ARM): 0x28aa38
     * @note[short] MacOS (Intel): 0x2f0b80
     * @note[short] Windows: 0x71d10
     * @note[short] iOS: 0x2ef61c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x28aa78
     * @note[short] MacOS (Intel): 0x2f0c00
     * @note[short] Windows: 0x71d50
     * @note[short] iOS: 0x2ef65c
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x28aa58
     * @note[short] MacOS (Intel): 0x2f0bc0
     * @note[short] Windows: 0x71d30
     * @note[short] iOS: 0x2ef63c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] iOS: 0x2ef448
     * @note[short] Android
     */
    void disableSlider();

    /**
     * @note[short] Android
     */
    void disableTouch();

    /**
     * @note[short] iOS: 0x2ef530
     * @note[short] Android
     */
    void enableSlider();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool getLiveDragging();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    SliderThumb* getThumb();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    float getValue();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void hideGroove(bool visibility);

    /**
     * @note[short] MacOS (ARM): 0x28a4c0
     * @note[short] MacOS (Intel): 0x2f0540
     * @note[short] Windows: 0x71850
     * @note[short] iOS: 0x2ef29c
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setBarVisibility(bool visibility);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setLiveDragging(bool activateThumb);

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

    /**
     * @note[short] MacOS (ARM): 0x28a7d8
     * @note[short] MacOS (Intel): 0x2f0880
     * @note[short] Windows: 0x71c00
     * @note[short] iOS: 0x2ef504
     * @note[short] Android
     */
    void setValue(float val);

    /**
     * @note[short] Android
     */
    TodoReturn sliderBegan();

    /**
     * @note[short] Android
     */
    TodoReturn sliderEnded();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateBar();
    SliderTouchLogic* m_touchLogic;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_groove;
    float m_width;
    float m_height;
    SliderDelegate* m_delegate;
    void* m_unknown2;
};
