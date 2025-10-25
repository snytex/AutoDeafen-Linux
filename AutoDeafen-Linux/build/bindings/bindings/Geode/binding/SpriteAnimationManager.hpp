#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SpriteAnimationManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SpriteAnimationManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SpriteAnimationManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpriteAnimationManager();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SpriteAnimationManager();

    /**
     * @note[short] Windows: 0x745f0
     * @note[short] Android
     */
    void animationFinished();

    /**
     * @note[short] Windows: 0x74640
     * @note[short] Android
     */
    void callAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x62a3ac
     * @note[short] MacOS (Intel): 0x70af50
     * @note[short] Windows: 0x72fa0
     * @note[short] Android: Rebinded
     */
    static void createAnimations(gd::string p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    static SpriteAnimationManager* createWithOwner(CCAnimatedSprite* p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x62d2cc
     * @note[short] MacOS (Intel): 0x70e340
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x324994
     * @note[short] Android
     */
    void doCleanup();

    /**
     * @note[short] Windows: 0x73f30
     * @note[short] Android: Rebinded
     */
    void executeAnimation(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void finishAnimation(gd::string p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    int getAnimType(gd::string p0);

    /**
     * @note[short] Windows: 0x74720
     * @note[short] Android: Rebinded
     */
    int getPrio(gd::string p0);

    /**
     * @note[short] Windows: 0x72360
     * @note[short] Android: Rebinded
     */
    bool initWithOwner(CCAnimatedSprite* p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x62b214
     * @note[short] MacOS (Intel): 0x70bf30
     * @note[short] Windows: 0x725d0
     * @note[short] Android: Rebinded
     */
    void loadAnimations(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x62d020
     * @note[short] MacOS (Intel): 0x70e0d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void offsetCurrentAnimation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x62cb2c
     * @note[short] MacOS (Intel): 0x70dbc0
     * @note[short] Windows: 0x74420
     * @note[short] Android
     */
    void overridePrio();

    /**
     * @note[short] Android: Rebinded
     */
    void playSound(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void playSoundForAnimation(gd::string p0);

    /**
     * @note[short] Windows: 0x74510
     * @note[short] Android: Rebinded
     */
    void queueAnimation(gd::string p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetAnimState();

    /**
     * @note[short] MacOS (ARM): 0x62c1e8
     * @note[short] MacOS (Intel): 0x70d190
     * @note[short] Windows: 0x73dd0
     * @note[short] Android: Rebinded
     */
    void runAnimation(gd::string p0);

    /**
     * @note[short] Android
     */
    void runQueuedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x62cd30
     * @note[short] MacOS (Intel): 0x70ddb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopAnimations();

    /**
     * @note[short] Windows: 0x73b60
     * @note[short] Android: Rebinded
     */
    void storeAnimation(cocos2d::CCAnimate* p0, cocos2d::CCAnimate* p1, gd::string p2, int p3, spriteMode p4, cocos2d::CCSpriteFrame* p5);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    void storeSoundForAnimation(cocos2d::CCString* p0, gd::string p1, float p2);

    /**
     * @note[short] Android: Rebinded
     */
    void switchToFirstFrameOfAnimation(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x62bfac
     * @note[short] MacOS (Intel): 0x70cf30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateAnimationSpeed(float p0);
    CCAnimatedSprite* m_sprite;
    cocos2d::CCDictionary* m_priorityDict;
    cocos2d::CCDictionary* m_typeDict;
    cocos2d::CCDictionary* m_soundDict;
    gd::string m_queuedAnimation;
    float m_speed;
    cocos2d::CCDictionary* m_animateDict;
    cocos2d::CCDictionary* m_frameDict;
    gd::string m_currentAnimation;
    gd::string m_nextAnimation;
};
