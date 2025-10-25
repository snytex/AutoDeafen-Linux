#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAnimatedSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCAnimatedSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimatedSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x3feb0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCAnimatedSprite();

    /**
     * @note[short] MacOS (ARM): 0x2d3784
     * @note[short] MacOS (Intel): 0x33d360
     * @note[short] Windows: 0x41140
     * @note[short] iOS: 0x2fe214
     * @note[short] Android: Rebinded
     */
     ~CCAnimatedSprite();

    /**
     * @note[short] MacOS (ARM): 0x2d24c0
     * @note[short] MacOS (Intel): 0x33c020
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCAnimatedSprite* createWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x2d3624
     * @note[short] MacOS (Intel): 0x33d1f0
     * @note[short] Windows: 0x41070
     * @note[short] iOS: 0x2fe154
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x2d36d4
     * @note[short] MacOS (Intel): 0x33d2a0
     * @note[short] Windows: 0x410d0
     * @note[short] iOS: 0x2fe1b4
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x2d360c
     * @note[short] MacOS (Intel): 0x33d1d0
     * @note[short] Windows: 0x41050
     * @note[short] iOS: 0x2fe13c
     * @note[short] Android
     */
    virtual void animationFinished(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x2d35d8
     * @note[short] MacOS (Intel): 0x33d1a0
     * @note[short] Windows: 0x41010
     * @note[short] iOS: 0x2fe108
     * @note[short] Android
     */
    virtual void animationFinishedO(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x2d2ebc
     * @note[short] MacOS (Intel): 0x33ca60
     * @note[short] Android
     */
    void cleanupSprite();

    /**
     * @note[short] MacOS (ARM): 0x2d2594
     * @note[short] MacOS (Intel): 0x33c100
     * @note[short] Windows: 0x3ffc0
     * @note[short] Android
     */
    bool initWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x2d2790
     * @note[short] MacOS (Intel): 0x33c2f0
     * @note[short] Windows: 0x401e0
     * @note[short] Android
     */
    void loadType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x2d3058
     * @note[short] MacOS (Intel): 0x33cc20
     * @note[short] Windows: 0x40c80
     * @note[short] iOS: 0x2fdcf0
     * @note[short] Android: Rebinded
     */
    void runAnimation(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x2d30f0
     * @note[short] MacOS (Intel): 0x33cca0
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    void runAnimationForced(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x2d359c
     * @note[short] MacOS (Intel): 0x33d160
     * @note[short] Android
     */
    void stopTween();

    /**
     * @note[short] MacOS (ARM): 0x2d2f4c
     * @note[short] MacOS (Intel): 0x33cb00
     * @note[short] Windows: 0x40b10
     * @note[short] Android
     */
    void switchToMode(spriteMode p0);

    /**
     * @note[short] MacOS (ARM): 0x2d31c4
     * @note[short] MacOS (Intel): 0x33cd60
     * @note[short] Windows: 0x40cf0
     * @note[short] iOS: 0x2fde3c
     * @note[short] Android: Rebinded
     */
    void tweenToAnimation(gd::string p0, float p1);

    /**
     * @note[short] Windows: 0x40fc0
     * @note[short] Android
     */
    void tweenToAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x2d3194
     * @note[short] MacOS (Intel): 0x33cd30
     * @note[short] Android
     */
    void willPlayAnimation();
    gd::string m_unkString1;
    gd::string m_unkString2;
    SpriteAnimationManager* m_animationManager;
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCSprite* m_fbfSprite;
    CCPartAnimSprite* m_paSprite;
    spriteMode m_spriteMode;
    gd::string m_currentAnim;
    AnimatedSpriteDelegate* m_delegate;
};
