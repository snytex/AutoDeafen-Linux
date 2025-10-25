#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"
#include "SpritePartDelegate.hpp"

class AnimatedGameObject : public EnhancedGameObject, public AnimatedSpriteDelegate, public SpritePartDelegate {
public:
    static constexpr auto CLASS_NAME = "AnimatedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedGameObject, EnhancedGameObject)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     AnimatedGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~AnimatedGameObject();

    /**
     * @note[short] MacOS (ARM): 0x167618
     * @note[short] MacOS (Intel): 0x1a5410
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37bfe0
     * @note[short] Android
     */
    static AnimatedGameObject* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x168658
     * @note[short] MacOS (Intel): 0x1a64b0
     * @note[short] Windows: 0x48b5e0
     * @note[short] iOS: 0x37cdc0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x16a064
     * @note[short] MacOS (Intel): 0x1a80d0
     * @note[short] Windows: 0x48d150
     * @note[short] iOS: 0x37de10
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x16a004
     * @note[short] MacOS (Intel): 0x1a8060
     * @note[short] Windows: 0x48cc50
     * @note[short] iOS: 0x37ddb8
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x16855c
     * @note[short] MacOS (Intel): 0x1a63a0
     * @note[short] Windows: 0x48b430
     * @note[short] iOS: 0x37cce0
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS (ARM): 0x1685a0
     * @note[short] MacOS (Intel): 0x1a63e0
     * @note[short] Windows: 0x48b500
     * @note[short] iOS: 0x37cd24
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x168724
     * @note[short] MacOS (Intel): 0x1a6590
     * @note[short] Windows: 0x48b6b0
     * @note[short] iOS: 0x37ce8c
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x168758
     * @note[short] MacOS (Intel): 0x1a65c0
     * @note[short] Windows: 0x48b6f0
     * @note[short] iOS: 0x37cec0
     * @note[short] Android
     */
    virtual void animationFinished(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x169858
     * @note[short] MacOS (Intel): 0x1a7930
     * @note[short] Windows: 0x48c9d0
     * @note[short] iOS: 0x37d924
     * @note[short] Android: Rebinded
     */
    virtual void displayFrameChanged(cocos2d::CCObject* p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x169d08
     * @note[short] MacOS (Intel): 0x1a7df0
     * @note[short] Windows: 0x48cca0
     * @note[short] iOS: 0x37dd48
     * @note[short] Android
     */
    static gd::string animationForID(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x169ff4
     * @note[short] MacOS (Intel): 0x1a8050
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float getTweenTime(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x16773c
     * @note[short] MacOS (Intel): 0x1a5560
     * @note[short] Windows: 0x48a360
     * @note[short] iOS: 0x37c0a4
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x169b90
     * @note[short] MacOS (Intel): 0x1a7c90
     * @note[short] Windows: 0x48cb20
     * @note[short] iOS: 0x37dbe8
     * @note[short] Android
     */
    void playAnimation(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1678d8
     * @note[short] MacOS (Intel): 0x1a5700
     * @note[short] iOS: 0x37c240
     * @note[short] Android
     */
    void setupAnimatedSize(int p0);

    /**
     * @note[short] MacOS (ARM): 0x167a68
     * @note[short] MacOS (Intel): 0x1a58c0
     * @note[short] Windows: 0x48a8f0
     * @note[short] iOS: 0x37c3e4
     * @note[short] Android
     */
    void setupChildSprites();

    /**
     * @note[short] MacOS (ARM): 0x16834c
     * @note[short] MacOS (Intel): 0x1a6160
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37cadc
     * @note[short] Android
     */
    void updateChildSpriteColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x1683cc
     * @note[short] MacOS (Intel): 0x1a61e0
     * @note[short] Windows: 0x48b1c0
     * @note[short] iOS: 0x37cb5c
     * @note[short] Android
     */
    void updateObjectAnimation();
    CCAnimatedSprite* m_animatedSprite;
    cocos2d::CCSprite* m_childSprite;
    CCSpritePart* m_eyeSpritePart;
    bool m_finishedAnimating;
    bool m_playingAnimation;
    gd::string m_currentAnimation;
    bool m_notGrounded;
    int m_animationID;
};
