#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMenuItemSpriteExtra : public cocos2d::CCMenuItemSprite {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemSpriteExtra";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemSpriteExtra, cocos2d::CCMenuItemSprite)

    /**
     * @note[short] MacOS (ARM): 0x4bbf4
     * @note[short] MacOS (Intel): 0x54e80
     * @note[short] Windows: 0x449f0
     * @note[short] iOS: 0x16ecb8
     * @note[short] Android: Out of line
     */
     CCMenuItemSpriteExtra();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~CCMenuItemSpriteExtra();

    /**
     * @note[short] MacOS (ARM): 0x2105c0
     * @note[short] MacOS (Intel): 0x264b80
     * @note[short] Windows: 0x44b40
     * @note[short] iOS: 0x214364
     * @note[short] Android
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite, cocos2d::CCNode* disabledSprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): 0x210804
     * @note[short] MacOS (Intel): 0x264d90
     * @note[short] Windows: 0x44d40
     * @note[short] iOS: 0x214594
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS (ARM): 0x210964
     * @note[short] MacOS (Intel): 0x264f10
     * @note[short] Windows: 0x44e50
     * @note[short] iOS: 0x214674
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] MacOS (ARM): 0x210bb4
     * @note[short] MacOS (Intel): 0x265190
     * @note[short] Windows: 0x45070
     * @note[short] iOS: 0x21484c
     * @note[short] Android
     */
    virtual void unselected();

    /**
     * @note[short] MacOS (ARM): 0x210678
     * @note[short] MacOS (Intel): 0x264c10
     * @note[short] Windows: 0x44be0
     * @note[short] iOS: 0x214408
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* sprite, cocos2d::CCNode* disabledSprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] MacOS (ARM): 0x2107fc
     * @note[short] MacOS (Intel): 0x264d80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21458c
     * @note[short] Android
     */
    void setSizeMult(float mult);

    /**
Set a new image for this button

 Prefer using this over `setNormalImage` as the latter does not actually

 handle any of the special sizing operations `CCMenuItemSpriteExtra` has

 @param sprite The sprite to replace this button's sprite with

 @note Geode addit     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setSprite(cocos2d::CCSprite* sprite);

    /**
Update the sizing of this button's image

 If you for example have a `ButtonSprite` on this button and change the

 text, you need to call `updateSprite` afterwards to fix the button's

 content size

 @note Geode addit     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateSprite();

    /**
     * @note[short] Android
     */
    void useAnimationType(MenuAnimationType p0);
    float m_scaleMultiplier;
    float m_baseScale;
    bool m_animationEnabled;
    bool m_colorEnabled;
    float m_volume;
    gd::string m_activateSound;
    gd::string m_selectSound;
    float m_colorDip;
    cocos2d::CCPoint m_offset;
    float m_duration;
    float m_unselectedDuration;
    MenuAnimationType m_animationType;
    cocos2d::CCPoint m_startPosition;
    IconType m_iconType;
};
