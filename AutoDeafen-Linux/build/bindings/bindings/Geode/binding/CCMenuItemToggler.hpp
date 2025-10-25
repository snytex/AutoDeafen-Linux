#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMenuItemToggler : public cocos2d::CCMenuItem {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemToggler";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemToggler, cocos2d::CCMenuItem)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCMenuItemToggler();

    /**
     * @note[short] MacOS (ARM): 0x4f880
     * @note[short] MacOS (Intel): 0x59c70
     * @note[short] Windows: 0x451e0
     * @note[short] iOS: 0x19452c
     * @note[short] Android
     */
    static CCMenuItemToggler* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemToggler* createWithSize(const char* spr1, const char* spr2, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemToggler* createWithStandardSprites(cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    /**
     * @note[short] MacOS (ARM): 0x4ffc4
     * @note[short] MacOS (Intel): 0x5a330
     * @note[short] Windows: 0x45490
     * @note[short] iOS: 0x19494c
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS (ARM): 0x4ff84
     * @note[short] MacOS (Intel): 0x5a300
     * @note[short] Windows: 0x45440
     * @note[short] iOS: 0x19490c
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] MacOS (ARM): 0x50004
     * @note[short] MacOS (Intel): 0x5a360
     * @note[short] Windows: 0x454e0
     * @note[short] iOS: 0x19498c
     * @note[short] Android
     */
    virtual void unselected();

    /**
     * @note[short] MacOS (ARM): 0x50044
     * @note[short] MacOS (Intel): 0x5a390
     * @note[short] Windows: 0x45530
     * @note[short] iOS: 0x1949cc
     * @note[short] Android
     */
    virtual void setEnabled(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4ff68
     * @note[short] MacOS (Intel): 0x5a2e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1948f0
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* activeItem();

    /**
     * @note[short] MacOS (ARM): 0x4f964
     * @note[short] MacOS (Intel): 0x59d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1945fc
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* off, cocos2d::CCNode* on, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isOn();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isToggled();

    /**
     * @note[short] MacOS (ARM): 0x4fbbc
     * @note[short] MacOS (Intel): 0x59f80
     * @note[short] Windows: 0x45580
     * @note[short] iOS: 0x1947ac
     * @note[short] Android
     */
    void normalTouch(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4fcac
     * @note[short] MacOS (Intel): 0x5a050
     * @note[short] Windows: 0x455a0
     * @note[short] iOS: 0x1947c0
     * @note[short] Android
     */
    void selectedTouch(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setClickable(bool on);

    /**
     * @note[short] MacOS (ARM): 0x4fe70
     * @note[short] MacOS (Intel): 0x5a1f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1948ac
     * @note[short] Android
     */
    void setSizeMult(float mult);

    /**
     * @note[short] MacOS (ARM): 0x4fd98
     * @note[short] MacOS (Intel): 0x5a120
     * @note[short] Windows: 0x455c0
     * @note[short] iOS: 0x1947d4
     * @note[short] Android
     */
    void toggle(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void toggleWithCallback(bool on);

    /**
Update the sizing of this toggle's image

 If you for example have a `ButtonSprite` on this toggle and change the

 text, you need to call `updateSprite` afterwards to fix the toggle's

 content size

 @note Geode addit     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateSprite();
    CCMenuItemSpriteExtra* m_offButton;
    CCMenuItemSpriteExtra* m_onButton;
    bool m_toggled;
    bool m_notClickable;
};
