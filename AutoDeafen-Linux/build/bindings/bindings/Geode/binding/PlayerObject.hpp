#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJPointDouble.hpp"
#include "GameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"

class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerObject, GameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     PlayerObject();

    /**
     * @note[short] MacOS (ARM): 0x36a89c
     * @note[short] MacOS (Intel): 0x3e88e0
     * @note[short] Windows: 0x370960
     * @note[short] iOS: 0x21836c
     * @note[short] Android
     */
    static PlayerObject* create(int player, int ship, GJBaseGameLayer* gameLayer, cocos2d::CCLayer* layer, bool playLayer);

    /**
     * @note[short] MacOS (ARM): 0x36cf1c
     * @note[short] MacOS (Intel): 0x3eb270
     * @note[short] Windows: 0x373010
     * @note[short] iOS: 0x21a2d0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void setScaleX(float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void setScaleY(float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x3856d8
     * @note[short] MacOS (Intel): 0x407b70
     * @note[short] Windows: 0x3868b0
     * @note[short] iOS: 0x22bf7c
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x388728
     * @note[short] MacOS (Intel): 0x40b0f0
     * @note[short] Windows: 0x38caf0
     * @note[short] iOS: 0x22e710
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void setRotation(float angle);

    /**
     * @note[short] MacOS (ARM): 0x386714
     * @note[short] MacOS (Intel): 0x408d60
     * @note[short] Windows: 0x387d60
     * @note[short] iOS: 0x22cf10
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x38612c
     * @note[short] MacOS (Intel): 0x408740
     * @note[short] Windows: 0x387580
     * @note[short] iOS: 0x22c9d0
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x3886b0
     * @note[short] MacOS (Intel): 0x40b040
     * @note[short] Windows: 0x38ca00
     * @note[short] iOS: 0x22e698
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void setFlipY(bool flip);

    /**
     * @note[short] MacOS (ARM): 0x37ed44
     * @note[short] MacOS (Intel): 0x400590
     * @note[short] Windows: 0x3810b0
     * @note[short] iOS: 0x227340
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x386910
     * @note[short] MacOS (Intel): 0x408f30
     * @note[short] Windows: 0x387e90
     * @note[short] iOS: 0x22d014
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x387ab4
     * @note[short] MacOS (Intel): 0x40a260
     * @note[short] Windows: 0x38a8c0
     * @note[short] iOS: 0x22dcc0
     * @note[short] Android
     */
    virtual OBB2D* getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x387ae0
     * @note[short] MacOS (Intel): 0x40a280
     * @note[short] Windows: 0x38a8e0
     * @note[short] iOS: 0x22dcec
     * @note[short] Android
     */
    virtual float getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x3887fc
     * @note[short] MacOS (Intel): 0x40b1e0
     * @note[short] Windows: 0x38cb10
     * @note[short] iOS: 0x22e720
     * @note[short] Android
     */
    virtual void animationFinished(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x3724d8
     * @note[short] MacOS (Intel): 0x3f17c0
     * @note[short] Windows: 0x38a300
     * @note[short] iOS: 0x21e810
     * @note[short] Android
     */
    void activateStreak();

    /**
     * @note[short] MacOS (ARM): 0x36cbc8
     * @note[short] MacOS (Intel): 0x3eaed0
     * @note[short] Windows: 0x372900
     * @note[short] iOS: 0x21a044
     * @note[short] Android
     */
    void addAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x381fec
     * @note[short] MacOS (Intel): 0x404180
     * @note[short] Android
     */
    TodoReturn addToTouchedRings(RingObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addToYVelocity(double p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x372c98
     * @note[short] MacOS (Intel): 0x3f2020
     * @note[short] Windows: 0x376ef0
     * @note[short] iOS: 0x21ecec
     * @note[short] Android
     */
    void animatePlatformerJump(float p0);

    /**
     * @note[short] MacOS (ARM): 0x374f48
     * @note[short] MacOS (Intel): 0x3f49e0
     * @note[short] Windows: 0x38a150
     * @note[short] iOS: 0x2208a8
     * @note[short] Android
     */
    void boostPlayer(float p0);

    /**
     * @note[short] MacOS (ARM): 0x386e2c
     * @note[short] MacOS (Intel): 0x409440
     * @note[short] Windows: 0x389910
     * @note[short] iOS: 0x22d2f8
     * @note[short] Android
     */
    void bumpPlayer(float p0, int p1, bool p2, GameObject* p3);

    /**
     * @note[short] Android
     */
    TodoReturn buttonDown(PlayerButton p0);

    /**
     * @note[short] Android
     */
    TodoReturn canStickToGround();

    /**
     * @note[short] Android
     */
    TodoReturn checkSnapJumpToObject(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x3751b8
     * @note[short] MacOS (Intel): 0x3f4c90
     * @note[short] Windows: 0x37bb80
     * @note[short] iOS: 0x220ae4
     * @note[short] Android
     */
    void collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x37a504
     * @note[short] MacOS (Intel): 0x3fb520
     * @note[short] iOS: 0x224e30
     * @note[short] Android
     */
    void collidedWithObject(float p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0x376dd8
     * @note[short] MacOS (Intel): 0x3f6de0
     * @note[short] Windows: 0x37bc40
     * @note[short] Android
     */
    int collidedWithObjectInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x375274
     * @note[short] MacOS (Intel): 0x3f4d30
     * @note[short] iOS: 0x220b8c
     * @note[short] Android
     */
    void collidedWithSlope(float dt, GameObject* object, bool forced);

    /**
     * @note[short] MacOS (ARM): 0x375914
     * @note[short] MacOS (Intel): 0x3f5410
     * @note[short] Windows: 0x3799e0
     * @note[short] Android
     */
    void collidedWithSlopeInternal(float dt, GameObject* object, bool forced);

    /**
     * @note[short] Android
     */
    TodoReturn convertToClosestRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x3877bc
     * @note[short] MacOS (Intel): 0x409ed0
     * @note[short] Windows: 0x38a710
     * @note[short] iOS: 0x22da24
     * @note[short] Android
     */
    void copyAttributes(PlayerObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x382128
     * @note[short] MacOS (Intel): 0x4042d0
     * @note[short] Windows: 0x382830
     * @note[short] iOS: 0x229880
     * @note[short] Android
     */
    void createFadeOutDartStreak();

    /**
     * @note[short] MacOS (ARM): 0x36c034
     * @note[short] MacOS (Intel): 0x3ea2a0
     * @note[short] Windows: 0x372180
     * @note[short] iOS: 0x2195f4
     * @note[short] Android
     */
    void createRobot(int p0);

    /**
     * @note[short] MacOS (ARM): 0x36c378
     * @note[short] MacOS (Intel): 0x3ea650
     * @note[short] Windows: 0x372540
     * @note[short] iOS: 0x2198e4
     * @note[short] Android
     */
    void createSpider(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3709e8
     * @note[short] MacOS (Intel): 0x3efb60
     * @note[short] iOS: 0x21d328
     * @note[short] Android
     */
    void deactivateParticle();

    /**
     * @note[short] MacOS (ARM): 0x36cd60
     * @note[short] MacOS (Intel): 0x3eb090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21a1dc
     * @note[short] Android
     */
    void deactivateStreak(bool stop);

    /**
     * @note[short] iOS: 0x22bf34
     * @note[short] Android
     */
    TodoReturn destroyFromHitHead();

    /**
     * @note[short] MacOS (ARM): 0x37aabc
     * @note[short] MacOS (Intel): 0x3fbb50
     * @note[short] Windows: 0x37de00
     * @note[short] iOS: 0x2252b8
     * @note[short] Android
     */
    void didHitHead();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void disableCustomGlowColor();

    /**
     * @note[short] MacOS (ARM): 0x386af4
     * @note[short] MacOS (Intel): 0x409140
     * @note[short] Windows: 0x389620
     * @note[short] Android
     */
    void disablePlayerControls();

    /**
     * @note[short] MacOS (ARM): 0x3807b8
     * @note[short] MacOS (Intel): 0x402500
     * @note[short] Windows: 0x385170
     * @note[short] iOS: 0x2286b8
     * @note[short] Android
     */
    void disableSwingFire();

    /**
     * @note[short] MacOS (ARM): 0x371620
     * @note[short] MacOS (Intel): 0x3f0850
     * @note[short] Windows: 0x3826e0
     * @note[short] iOS: 0x21dd68
     * @note[short] Android
     */
    void doReversePlayer(bool p0);
	inline void enableCustomGlowColor(cocos2d::ccColor3B const& color) {
        m_hasCustomGlowColor = true;
        m_glowColor = color;
    }

    /**
     * @note[short] MacOS (ARM): 0x386b50
     * @note[short] MacOS (Intel): 0x4091a0
     * @note[short] Windows: 0x389770
     * @note[short] Android
     */
    void enablePlayerControls();

    /**
     * @note[short] Android
     */
    void exitPlatformerAnimateJump();

    /**
     * @note[short] MacOS (ARM): 0x38071c
     * @note[short] MacOS (Intel): 0x402470
     * @note[short] Windows: 0x38a400
     * @note[short] iOS: 0x22861c
     * @note[short] Android
     */
    void fadeOutStreak2(float p0);

    /**
     * @note[short] MacOS (ARM): 0x37c04c
     * @note[short] MacOS (Intel): 0x3fd3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void flashPlayer(float p0, float p1, cocos2d::ccColor3B mainColor, cocos2d::ccColor3B secondColor);

    /**
     * @note[short] MacOS (ARM): 0x372910
     * @note[short] MacOS (Intel): 0x3f1c30
     * @note[short] Windows: 0x384440
     * @note[short] iOS: 0x21eb30
     * @note[short] Android
     */
    void flipGravity(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    float flipMod();

    /**
     * @note[short] MacOS (ARM): 0x372c80
     * @note[short] MacOS (Intel): 0x3f1ff0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void gameEventTriggered(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x38294c
     * @note[short] MacOS (Intel): 0x404b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x229efc
     * @note[short] Android
     */
    GameObjectType getActiveMode();

    /**
     * @note[short] Android
     */
    TodoReturn getCurrentXVelocity();

    /**
     * @note[short] Android
     */
    TodoReturn getModifiedSlopeYVel();

    /**
     * @note[short] Android
     */
    TodoReturn getOldPosition(float p0);

    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B getSecondColor();

    /**
     * @note[short] iOS: 0x21a2c8
     * @note[short] Android
     */
    TodoReturn getYVelocity();

    /**
     * @note[short] Android
     */
    TodoReturn gravityDown();

    /**
     * @note[short] Android
     */
    TodoReturn gravityUp();

    /**
     * @note[short] Android
     */
    TodoReturn handlePlayerCommand(int p0);

    /**
     * @note[short] Windows: 0x379310
     * @note[short] Android
     */
    TodoReturn handleRotatedCollisionInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3, bool p4, bool p5);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    TodoReturn handleRotatedObjectCollision(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);

    /**
     * @note[short] Android
     */
    TodoReturn handleRotatedSlopeCollision(float p0, GameObject* p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn hardFlipGravity();

    /**
     * @note[short] MacOS (ARM): 0x37951c
     * @note[short] MacOS (Intel): 0x3fa390
     * @note[short] Windows: 0x3861a0
     * @note[short] iOS: 0x224188
     * @note[short] Android
     */
    void hitGround(GameObject* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn hitGroundNoJump(GameObject* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3728d8
     * @note[short] MacOS (Intel): 0x3f1bf0
     * @note[short] Windows: 0x376e10
     * @note[short] iOS: 0x21eaf8
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] MacOS (ARM): 0x36a954
     * @note[short] MacOS (Intel): 0x3e8970
     * @note[short] Windows: 0x370a00
     * @note[short] iOS: 0x218410
     * @note[short] Android
     */
    bool init(int player, int ship, GJBaseGameLayer* gameLayer, cocos2d::CCLayer* layer, bool playLayer);

    /**
     * @note[short] Android
     */
    bool isBoostValid(float p0);

    /**
     * @note[short] MacOS (ARM): 0x37097c
     * @note[short] MacOS (Intel): 0x3efb00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21d2cc
     * @note[short] Android
     */
    bool isFlying();

    /**
     * @note[short] MacOS (ARM): 0x37b8c8
     * @note[short] MacOS (Intel): 0x3fcbc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x225fa0
     * @note[short] Android
     */
    bool isInBasicMode();

    /**
     * @note[short] MacOS (ARM): 0x36f5a8
     * @note[short] MacOS (Intel): 0x3ee1c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21c1bc
     * @note[short] Android
     */
    bool isInNormalMode();

    /**
     * @note[short] iOS: 0x22415c
     * @note[short] Android
     */
    bool isSafeFlip(float p0);

    /**
     * @note[short] iOS: 0x22d9b8
     * @note[short] Android
     */
    bool isSafeHeadTest();

    /**
     * @note[short] Android
     */
    bool isSafeMode(float p0);

    /**
     * @note[short] Android
     */
    bool isSafeSpiderFlip(float p0);

    /**
     * @note[short] Windows: 0x3759e0
     * @note[short] Android
     */
    TodoReturn levelFlipFinished();

    /**
     * @note[short] MacOS (ARM): 0x3709bc
     * @note[short] MacOS (Intel): 0x3efb30
     * @note[short] Windows: 0x385760
     * @note[short] iOS: 0x21d2fc
     * @note[short] Android
     */
    bool levelFlipping();

    /**
     * @note[short] MacOS (ARM): 0x372640
     * @note[short] MacOS (Intel): 0x3f1930
     * @note[short] Android
     */
    void levelWillFlip();

    /**
     * @note[short] Android
     */
    TodoReturn limitDashRotation(float& p0);

    /**
     * @note[short] MacOS (ARM): 0x3880ac
     * @note[short] MacOS (Intel): 0x40a910
     * @note[short] Windows: 0x38bc30
     * @note[short] iOS: 0x22e1c0
     * @note[short] Android
     */
    void loadFromCheckpoint(PlayerCheckpoint* p0);

    /**
     * @note[short] MacOS (ARM): 0x3869b4
     * @note[short] MacOS (Intel): 0x408fe0
     * @note[short] Windows: 0x389540
     * @note[short] iOS: 0x22d0b8
     * @note[short] Android
     */
    void lockPlayer();

    /**
     * @note[short] Android
     */
    TodoReturn logValues();

    /**
     * @note[short] Android
     */
    void modeDidChange();

    /**
     * @note[short] Android
     */
    TodoReturn performSlideCheck();

    /**
     * @note[short] MacOS (ARM): 0x3725a0
     * @note[short] MacOS (Intel): 0x3f18a0
     * @note[short] Windows: 0x38a8f0
     * @note[short] iOS: 0x21e8b8
     * @note[short] Android
     */
    void placeStreakPoint();

    /**
     * @note[short] Windows: 0x389cc0
     * @note[short] Android
     */
    void playBumpEffect(int p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn playBurstEffect();

    /**
     * @note[short] MacOS (ARM): 0x1b7870
     * @note[short] MacOS (Intel): 0x2024c0
     * @note[short] Windows: 0x36e2b0
     * @note[short] iOS: 0x60a60
     * @note[short] Android
     */
    void playCompleteEffect(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1af8ac
     * @note[short] MacOS (Intel): 0x1fa350
     * @note[short] Windows: 0x3691a0
     * @note[short] iOS: 0x5b138
     * @note[short] Android
     */
    void playDeathEffect();

    /**
     * @note[short] Windows: 0x38b740
     * @note[short] Android
     */
    void playDynamicSpiderRun();

    /**
     * @note[short] MacOS (ARM): 0x380548
     * @note[short] MacOS (Intel): 0x402270
     * @note[short] Windows: 0x381f10
     * @note[short] iOS: 0x22853c
     * @note[short] Android
     */
    void playerDestroyed(bool p0);

    /**
     * @note[short] Android
     */
    bool playerIsFalling(float p0);

    /**
     * @note[short] Windows: 0x3846a0
     * @note[short] Android
     */
    bool playerIsFallingBugged();

    /**
     * @note[short] Android
     */
    TodoReturn playerIsMovingUp();

    /**
     * @note[short] Android
     */
    TodoReturn playerTeleported();

    /**
     * @note[short] MacOS (ARM): 0x386d90
     * @note[short] MacOS (Intel): 0x4093c0
     * @note[short] iOS: 0x22d27c
     * @note[short] Android
     */
    TodoReturn playingEndEffect();

    /**
     * @note[short] MacOS (ARM): 0x37fe98
     * @note[short] MacOS (Intel): 0x401bb0
     * @note[short] Windows: 0x381650
     * @note[short] iOS: 0x227ff8
     * @note[short] Android
     */
    void playSpawnEffect();

    /**
     * @note[short] MacOS (ARM): 0x37b928
     * @note[short] MacOS (Intel): 0x3fcc20
     * @note[short] Windows: 0x37f340
     * @note[short] iOS: 0x225fe0
     * @note[short] Android
     */
    void playSpiderDashEffect(cocos2d::CCPoint from, cocos2d::CCPoint to);

    /**
     * @note[short] MacOS (ARM): 0x373790
     * @note[short] MacOS (Intel): 0x3f2c40
     * @note[short] Windows: 0x3777f0
     * @note[short] iOS: 0x21f410
     * @note[short] Android
     */
    void postCollision(float p0);

    /**
     * @note[short] MacOS (ARM): 0x373634
     * @note[short] MacOS (Intel): 0x3f2a40
     * @note[short] iOS: 0x21f300
     * @note[short] Android
     */
    void preCollision();

    /**
     * @note[short] MacOS (ARM): 0x379014
     * @note[short] MacOS (Intel): 0x3f9dd0
     * @note[short] Windows: 0x3794b0
     * @note[short] iOS: 0x223cb4
     * @note[short] Android
     */
    bool preSlopeCollision(float p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0x387134
     * @note[short] MacOS (Intel): 0x409750
     * @note[short] Windows: 0x389ac0
     * @note[short] iOS: 0x22d548
     * @note[short] Android
     */
    void propellPlayer(float p0, bool p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x380a44
     * @note[short] MacOS (Intel): 0x4027d0
     * @note[short] Windows: 0x382110
     * @note[short] iOS: 0x228864
     * @note[short] Android
     */
    bool pushButton(PlayerButton p0);

    /**
     * @note[short] Android
     */
    TodoReturn pushDown();

    /**
     * @note[short] Android
     */
    void pushPlayer(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn redirectDash(float p0);

    /**
     * @note[short] Windows: 0x389ed0
     * @note[short] Android
     */
    TodoReturn redirectPlayerForce(float p0, float p1, float p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0x386970
     * @note[short] MacOS (Intel): 0x408fa0
     * @note[short] Windows: 0x389370
     * @note[short] iOS: 0x22d074
     * @note[short] Android
     */
    void releaseAllButtons();

    /**
     * @note[short] MacOS (ARM): 0x381b48
     * @note[short] MacOS (Intel): 0x403c40
     * @note[short] Windows: 0x3823a0
     * @note[short] iOS: 0x229640
     * @note[short] Android
     */
    bool releaseButton(PlayerButton p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x37f7d8
     * @note[short] MacOS (Intel): 0x4013f0
     * @note[short] Windows: 0x38c400
     * @note[short] iOS: 0x227a2c
     * @note[short] Android
     */
    void removePendingCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x380510
     * @note[short] MacOS (Intel): 0x402230
     * @note[short] Android
     */
    void removePlacedCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x372390
     * @note[short] MacOS (Intel): 0x3f1660
     * @note[short] Windows: 0x375a70
     * @note[short] iOS: 0x21e6d8
     * @note[short] Android
     */
    void resetAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x373520
     * @note[short] MacOS (Intel): 0x3f2900
     * @note[short] iOS: 0x21f2a0
     * @note[short] Android
     */
    void resetCollisionLog(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetCollisionValues();

    /**
     * @note[short] MacOS (ARM): 0x383208
     * @note[short] MacOS (Intel): 0x405460
     * @note[short] Windows: 0x385550
     * @note[short] iOS: 0x22a544
     * @note[short] Android
     */
    void resetPlayerIcon();

    /**
     * @note[short] Android
     */
    TodoReturn resetStateVariables();

    /**
     * @note[short] MacOS (ARM): 0x3723f4
     * @note[short] MacOS (Intel): 0x3f16d0
     * @note[short] Windows: 0x375870
     * @note[short] iOS: 0x21e73c
     * @note[short] Android
     */
    void resetStreak();

    /**
     * @note[short] MacOS (ARM): 0x37f644
     * @note[short] MacOS (Intel): 0x4010d0
     * @note[short] Windows: 0x3824b0
     * @note[short] iOS: 0x22798c
     * @note[short] Android
     */
    void resetTouchedRings(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn reverseMod();

    /**
     * @note[short] MacOS (ARM): 0x382044
     * @note[short] MacOS (Intel): 0x4041e0
     * @note[short] Windows: 0x382600
     * @note[short] iOS: 0x2297ac
     * @note[short] Android
     */
    void reversePlayer(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x380dec
     * @note[short] MacOS (Intel): 0x402c50
     * @note[short] Windows: 0x382dd0
     * @note[short] iOS: 0x228ac0
     * @note[short] Android
     */
    void ringJump(RingObject* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x37f1a8
     * @note[short] MacOS (Intel): 0x400c30
     * @note[short] Windows: 0x383fc0
     * @note[short] iOS: 0x227648
     * @note[short] Android
     */
    void rotateGameplay(int p0, int p1, bool p2, float p3, float p4, bool p5, bool p6);

    /**
     * @note[short] Windows: 0x37b5c0
     * @note[short] Android
     */
    TodoReturn rotateGameplayObject(GameObject* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void rotateGameplayOnly(bool param);

    /**
     * @note[short] Android
     */
    TodoReturn rotatePreSlopeObjects();

    /**
     * @note[short] MacOS (ARM): 0x3732c0
     * @note[short] MacOS (Intel): 0x3f26a0
     * @note[short] Windows: 0x3775c0
     * @note[short] iOS: 0x21f098
     * @note[short] Android
     */
    void runBallRotation(float p0);

    /**
     * @note[short] Windows: 0x3776f0
     * @note[short] Android
     */
    void runBallRotation2();

    /**
     * @note[short] MacOS (ARM): 0x3731e8
     * @note[short] MacOS (Intel): 0x3f25b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void runNormalRotation();

    /**
     * @note[short] MacOS (ARM): 0x36f618
     * @note[short] MacOS (Intel): 0x3ee220
     * @note[short] Windows: 0x377490
     * @note[short] iOS: 0x21c204
     * @note[short] Android
     */
    void runNormalRotation(bool p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x371934
     * @note[short] MacOS (Intel): 0x3f0b00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21df28
     * @note[short] Android
     */
    void runRotateAction(bool p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x387f00
     * @note[short] MacOS (Intel): 0x40a6b0
     * @note[short] Windows: 0x38b980
     * @note[short] Android
     */
    void saveToCheckpoint(PlayerCheckpoint* p0);

    /**
     * @note[short] MacOS (ARM): 0x36dd8c
     * @note[short] MacOS (Intel): 0x3ec3a0
     * @note[short] Windows: 0x387610
     * @note[short] iOS: 0x21af40
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x36c84c
     * @note[short] MacOS (Intel): 0x3eab20
     * @note[short] Windows: 0x372a50
     * @note[short] iOS: 0x219cd4
     * @note[short] Android
     */
    void setupStreak();

    /**
     * @note[short] MacOS (ARM): 0x36c5dc
     * @note[short] MacOS (Intel): 0x3ea920
     * @note[short] Windows: 0x372fa0
     * @note[short] iOS: 0x219b38
     * @note[short] Android
     */
    void setYVelocity(double velocity, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();

    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle2();

    /**
     * @note[short] Android
     */
    TodoReturn spawnDualCircle();

    /**
     * @note[short] Android
     */
    TodoReturn spawnFromPlayer(PlayerObject* p0, bool p1);

    /**
     * @note[short] Windows: 0x381930
     * @note[short] Android
     */
    void spawnPortalCircle(cocos2d::ccColor3B p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x3802e0
     * @note[short] MacOS (Intel): 0x401fe0
     * @note[short] Android
     */
    void spawnScaleCircle();

    /**
     * @note[short] Android
     */
    TodoReturn specialGroundHit();

    /**
     * @note[short] Android
     */
    TodoReturn speedDown();

    /**
     * @note[short] Android
     */
    TodoReturn speedUp();

    /**
     * @note[short] MacOS (ARM): 0x3727c8
     * @note[short] MacOS (Intel): 0x3f1ae0
     * @note[short] Windows: 0x37e510
     * @note[short] iOS: 0x21ea64
     * @note[short] Android
     */
    void spiderTestJump(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x37ad3c
     * @note[short] MacOS (Intel): 0x3fbe50
     * @note[short] Windows: 0x37e5c0
     * @note[short] iOS: 0x225474
     * @note[short] Android
     */
    void spiderTestJumpInternal(bool p0);

    /**
     * @note[short] Android
     */
    void spiderTestJumpX(bool p0);

    /**
     * @note[short] Android
     */
    void spiderTestJumpY(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x37e290
     * @note[short] MacOS (Intel): 0x3ffa00
     * @note[short] Windows: 0x37fae0
     * @note[short] iOS: 0x226cc0
     * @note[short] Android
     */
    void startDashing(DashRingObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn stopBurstEffect();

    /**
     * @note[short] MacOS (ARM): 0x370c60
     * @note[short] MacOS (Intel): 0x3efe00
     * @note[short] Windows: 0x380820
     * @note[short] iOS: 0x21d57c
     * @note[short] Android
     */
    void stopDashing();

    /**
     * @note[short] Windows: 0x375af0
     * @note[short] iOS: 0x21ea18
     * @note[short] Android
     */
    void stopParticles();

    /**
     * @note[short] MacOS (ARM): 0x37314c
     * @note[short] MacOS (Intel): 0x3f2500
     * @note[short] Windows: 0x3772d0
     * @note[short] iOS: 0x21effc
     * @note[short] Android
     */
    void stopPlatformerJumpAnimation();

    /**
     * @note[short] MacOS (ARM): 0x3731d8
     * @note[short] MacOS (Intel): 0x3f2590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21f088
     * @note[short] Android
     */
    void stopRotation(bool p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x387654
     * @note[short] MacOS (Intel): 0x409d20
     * @note[short] iOS: 0x22d978
     * @note[short] Android
     */
    void stopStreak2();

    /**
     * @note[short] Android
     */
    void storeCollision(PlayerCollisionDirection p0, int p1);

    /**
     * @note[short] Windows: 0x382000
     * @note[short] Android
     */
    bool switchedDirTo(PlayerButton p0);

    /**
     * @note[short] MacOS (ARM): 0x37f824
     * @note[short] MacOS (Intel): 0x401440
     * @note[short] Windows: 0x3860a0
     * @note[short] iOS: 0x227a78
     * @note[short] Android
     */
    void switchedToMode(GameObjectType p0);

    /**
     * @note[short] Android
     */
    TodoReturn testForMoving(float p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0x383410
     * @note[short] MacOS (Intel): 0x405680
     * @note[short] Windows: 0x384a90
     * @note[short] iOS: 0x22a6e8
     * @note[short] Android
     */
    void toggleBirdMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x384438
     * @note[short] MacOS (Intel): 0x406780
     * @note[short] Windows: 0x385200
     * @note[short] iOS: 0x22b254
     * @note[short] Android
     */
    void toggleDartMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3829b4
     * @note[short] MacOS (Intel): 0x404b70
     * @note[short] Windows: 0x384760
     * @note[short] iOS: 0x229f4c
     * @note[short] Android
     */
    void toggleFlyMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x37fd54
     * @note[short] MacOS (Intel): 0x401a30
     * @note[short] Windows: 0x3890a0
     * @note[short] iOS: 0x227ec0
     * @note[short] Android
     */
    void toggleGhostEffect(GhostType p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void togglePlatformerMode(bool val);

    /**
     * @note[short] MacOS (ARM): 0x37f99c
     * @note[short] MacOS (Intel): 0x401590
     * @note[short] Windows: 0x38a970
     * @note[short] iOS: 0x227b9c
     * @note[short] Android
     */
    void togglePlayerScale(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x384e24
     * @note[short] MacOS (Intel): 0x407240
     * @note[short] Windows: 0x385960
     * @note[short] iOS: 0x22b984
     * @note[short] Android
     */
    void toggleRobotMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x384a4c
     * @note[short] MacOS (Intel): 0x406e60
     * @note[short] Windows: 0x3857e0
     * @note[short] iOS: 0x22b698
     * @note[short] Android
     */
    void toggleRollMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x38525c
     * @note[short] MacOS (Intel): 0x4076c0
     * @note[short] Windows: 0x385ce0
     * @note[short] iOS: 0x22bc7c
     * @note[short] Android
     */
    void toggleSpiderMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x383a5c
     * @note[short] MacOS (Intel): 0x405d60
     * @note[short] Windows: 0x384d90
     * @note[short] iOS: 0x22ab80
     * @note[short] Android
     */
    void toggleSwingMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x37219c
     * @note[short] MacOS (Intel): 0x3f1460
     * @note[short] Windows: 0x3756d0
     * @note[short] iOS: 0x21e598
     * @note[short] Android
     */
    void toggleVisibility(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x388410
     * @note[short] MacOS (Intel): 0x40ad70
     * @note[short] iOS: 0x22e4ec
     * @note[short] Android
     */
    void touchedObject(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x371f50
     * @note[short] MacOS (Intel): 0x3f1170
     * @note[short] Windows: 0x38c480
     * @note[short] iOS: 0x21e35c
     * @note[short] Android
     */
    void tryPlaceCheckpoint();

    /**
     * @note[short] Windows: 0x37b8b0
     * @note[short] Android
     */
    void unrotateGameplayObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn unrotatePreSlopeObjects();

    /**
     * @note[short] MacOS (ARM): 0x36cbb8
     * @note[short] MacOS (Intel): 0x3eaeb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21a034
     * @note[short] Android
     */
    void updateCheckpointMode(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x371e70
     * @note[short] MacOS (Intel): 0x3f10a0
     * @note[short] iOS: 0x21e288
     * @note[short] Android
     */
    void updateCheckpointTest();

    /**
     * @note[short] MacOS (ARM): 0x379b88
     * @note[short] MacOS (Intel): 0x3faae0
     * @note[short] Windows: 0x37e1c0
     * @note[short] iOS: 0x224768
     * @note[short] Android
     */
    void updateCollide(PlayerCollisionDirection p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    void updateCollideBottom(float p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    void updateCollideLeft(float p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    void updateCollideRight(float p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    void updateCollideTop(float p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0x370a18
     * @note[short] MacOS (Intel): 0x3efb90
     * @note[short] Windows: 0x380ef0
     * @note[short] Android
     */
    void updateDashAnimation();

    /**
     * @note[short] MacOS (ARM): 0x37dbd0
     * @note[short] MacOS (Intel): 0x3ff300
     * @note[short] Windows: 0x380390
     * @note[short] iOS: 0x2266ac
     * @note[short] Android
     */
    void updateDashArt();

    /**
     * @note[short] MacOS (ARM): 0x371df0
     * @note[short] MacOS (Intel): 0x3f0ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x21e210
     * @note[short] Android
     */
    void updateEffects(float param);

    /**
     * @note[short] MacOS (ARM): 0x386264
     * @note[short] MacOS (Intel): 0x4088a0
     * @note[short] Windows: 0x3876a0
     * @note[short] iOS: 0x22ca94
     * @note[short] Android
     */
    void updateGlowColor();

    /**
     * @note[short] MacOS (ARM): 0x388d0c
     * @note[short] MacOS (Intel): 0x40b720
     * @note[short] Windows: 0x38d0c0
     * @note[short] iOS: 0x22ea40
     * @note[short] Android
     */
    void updateInternalActions(float p0);

    /**
     * @note[short] MacOS (ARM): 0x36ddf4
     * @note[short] MacOS (Intel): 0x3ec410
     * @note[short] Windows: 0x375b90
     * @note[short] iOS: 0x21afa8
     * @note[short] Android
     */
    void updateJump(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateJumpVariables();

    /**
     * @note[short] Android
     */
    TodoReturn updateLastGroundObject(GameObject* p0);

    /**
     * @note[short] Windows: 0x374350
     * @note[short] Android
     */
    void updateMove(float p0);

    /**
     * @note[short] MacOS (ARM): 0x3823c4
     * @note[short] MacOS (Intel): 0x404530
     * @note[short] Windows: 0x382a30
     * @note[short] iOS: 0x229afc
     * @note[short] Android
     */
    void updatePlayerArt();

    /**
     * @note[short] MacOS (ARM): 0x3837cc
     * @note[short] MacOS (Intel): 0x405aa0
     * @note[short] Windows: 0x388550
     * @note[short] iOS: 0x22a960
     * @note[short] Android
     */
    void updatePlayerBirdFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x384808
     * @note[short] MacOS (Intel): 0x406bf0
     * @note[short] Windows: 0x388c50
     * @note[short] iOS: 0x22b4dc
     * @note[short] Android
     */
    void updatePlayerDartFrame(int p0);

    /**
     * @note[short] Android
     */
    void updatePlayerForce(cocos2d::CCPoint p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x38412c
     * @note[short] MacOS (Intel): 0x406480
     * @note[short] Windows: 0x387ec0
     * @note[short] iOS: 0x22afe0
     * @note[short] Android
     */
    void updatePlayerFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x382204
     * @note[short] MacOS (Intel): 0x4043a0
     * @note[short] Windows: 0x38a510
     * @note[short] iOS: 0x22995c
     * @note[short] Android
     */
    void updatePlayerGlow();

    /**
     * @note[short] MacOS (ARM): 0x382fcc
     * @note[short] MacOS (Intel): 0x405210
     * @note[short] Windows: 0x388320
     * @note[short] iOS: 0x22a390
     * @note[short] Android
     */
    void updatePlayerJetpackFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x386940
     * @note[short] MacOS (Intel): 0x408f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22d044
     * @note[short] Android
     */
    void updatePlayerRobotFrame(int id);

    /**
     * @note[short] MacOS (ARM): 0x384bec
     * @note[short] MacOS (Intel): 0x406ff0
     * @note[short] Windows: 0x3887f0
     * @note[short] iOS: 0x22b7d4
     * @note[short] Android
     */
    void updatePlayerRollFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3827c8
     * @note[short] MacOS (Intel): 0x4049a0
     * @note[short] Windows: 0x38a490
     * @note[short] iOS: 0x2fe6a8
     * @note[short] Android
     */
    void updatePlayerScale();

    /**
     * @note[short] MacOS (ARM): 0x382d90
     * @note[short] MacOS (Intel): 0x404fc0
     * @note[short] Windows: 0x3880f0
     * @note[short] iOS: 0x22a1dc
     * @note[short] Android
     */
    void updatePlayerShipFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x386958
     * @note[short] MacOS (Intel): 0x408f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22d05c
     * @note[short] Android
     */
    void updatePlayerSpiderFrame(int id);

    /**
     * @note[short] MacOS (ARM): 0x36be6c
     * @note[short] MacOS (Intel): 0x3ea100
     * @note[short] Windows: 0x388e80
     * @note[short] iOS: 0x21945c
     * @note[short] Android: Rebinded
     */
    void updatePlayerSpriteExtra(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x383e58
     * @note[short] MacOS (Intel): 0x4061a0
     * @note[short] Windows: 0x388a20
     * @note[short] iOS: 0x22ada0
     * @note[short] Android
     */
    void updatePlayerSwingFrame(int p0);

    /**
     * @note[short] Windows: 0x38b350
     * @note[short] Android
     */
    void updateRobotAnimationSpeed();

    /**
     * @note[short] MacOS (ARM): 0x371b20
     * @note[short] MacOS (Intel): 0x3f0d20
     * @note[short] Windows: 0x377370
     * @note[short] Android
     */
    void updateRotation(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x37a378
     * @note[short] MacOS (Intel): 0x3fb360
     * @note[short] Windows: 0x37b1f0
     * @note[short] iOS: 0x224ca4
     * @note[short] Android
     */
    void updateRotation(float p0);

    /**
     * @note[short] Windows: 0x37ae10
     * @note[short] Android
     */
    void updateShipRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x36bf50
     * @note[short] MacOS (Intel): 0x3ea1d0
     * @note[short] Windows: 0x388f90
     * @note[short] iOS: 0x219528
     * @note[short] Android: Rebinded
     */
    void updateShipSpriteExtra(gd::string p0);

    /**
     * @note[short] Android
     */
    void updateSlopeRotation(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateSlopeYVelocity(float p0);

    /**
     * @note[short] MacOS (ARM): 0x371d78
     * @note[short] MacOS (Intel): 0x3f0f70
     * @note[short] iOS: 0x21e1a0
     * @note[short] Android
     */
    void updateSpecial(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateStateVariables();

    /**
     * @note[short] Android
     */
    TodoReturn updateStaticForce(float p0, float p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x36ce30
     * @note[short] MacOS (Intel): 0x3eb160
     * @note[short] Windows: 0x372f30
     * @note[short] iOS: 0x21a244
     * @note[short] Android
     */
    void updateStreakBlend(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateStreaks(float p0);

    /**
     * @note[short] MacOS (ARM): 0x382814
     * @note[short] MacOS (Intel): 0x4049f0
     * @note[short] Windows: 0x385040
     * @note[short] iOS: 0x229e5c
     * @note[short] Android
     */
    void updateSwingFire();

    /**
     * @note[short] MacOS (ARM): 0x36c61c
     * @note[short] MacOS (Intel): 0x3ea990
     * @note[short] Windows: 0x38afc0
     * @note[short] iOS: 0x219b6c
     * @note[short] Android
     */
    void updateTimeMod(float p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn usingWallLimitedMode();

    /**
     * @note[short] Android
     */
    TodoReturn yStartDown();

    /**
     * @note[short] Android
     */
    TodoReturn yStartUp();
    cocos2d::CCNode* m_mainLayer;
    bool m_wasTeleported;
    bool m_fixGravityBug;
    bool m_reverseSync;
    double m_yVelocityBeforeSlope;
    double m_dashX;
    double m_dashY;
    double m_dashAngle;
    double m_dashStartTime;
    DashRingObject* m_dashRing;
    double m_slopeStartTime;
    bool m_justPlacedStreak;
    cocos2d::CCNode* m_maybeLastGroundObject;
    cocos2d::CCDictionary* m_collisionLogTop;
    cocos2d::CCDictionary* m_collisionLogBottom;
    cocos2d::CCDictionary* m_collisionLogLeft;
    cocos2d::CCDictionary* m_collisionLogRight;
    int m_lastCollisionBottom;
    int m_lastCollisionTop;
    int m_lastCollisionLeft;
    int m_lastCollisionRight;
    int m_unk50C;
    int m_unk510;
    GameObject* m_currentSlope2;
    GameObject* m_preLastGroundObject;
    float m_slopeAngle;
    bool m_slopeSlidingMaybeRotated;
    bool m_quickCheckpointMode;
    GameObject* m_collidedObject;
    GameObject* m_lastGroundObject;
    GameObject* m_collidingWithLeft;
    GameObject* m_collidingWithRight;
    int m_maybeSavedPlayerFrame;
    double m_scaleXRelated2;
    double m_groundYVelocity;
    double m_yVelocityRelated;
    double m_scaleXRelated3;
    double m_scaleXRelated4;
    double m_scaleXRelated5;
    bool m_isCollidingWithSlope;
    cocos2d::CCSprite* m_dashFireSprite;
    bool m_isBallRotating;
    bool m_unk669;
    GameObject* m_currentSlope3;
    GameObject* m_currentSlope;
    double unk_584;
    int m_collidingWithSlopeId;
    bool m_slopeFlipGravityRelated;
    cocos2d::CCArray* m_particleSystems;
    float m_slopeAngleRadians;
    gd::unordered_map<int, GJPointDouble> m_rotateObjectsRelated;
    gd::unordered_map<int, GameObject*> m_maybeRotatedObjectsMap;
    float m_rotationSpeed;
    float m_rotateSpeed;
    bool m_isRotating;
    bool m_isBallRotating2;
    bool m_hasGlow;
    bool m_isHidden;
    GhostType m_ghostType;
    GhostTrailEffect* m_ghostTrail;
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCSprite* m_iconSpriteSecondary;
    cocos2d::CCSprite* m_iconSpriteWhitener;
    cocos2d::CCSprite* m_iconGlow;
    cocos2d::CCSprite* m_vehicleSprite;
    cocos2d::CCSprite* m_vehicleSpriteSecondary;
    cocos2d::CCSprite* m_birdVehicle;
    cocos2d::CCSprite* m_vehicleSpriteWhitener;
    cocos2d::CCSprite* m_vehicleGlow;
    PlayerFireBoostSprite* m_swingFireMiddle;
    PlayerFireBoostSprite* m_swingFireBottom;
    PlayerFireBoostSprite* m_swingFireTop;
    cocos2d::CCSprite* m_dashSpritesContainer;
    cocos2d::CCMotionStreak* m_regularTrail;
    cocos2d::CCMotionStreak* m_shipStreak;
    HardStreak* m_waveTrail;
    double m_speedMultiplier;
    double m_yStart;
    double m_gravity;
    float m_trailingParticleLife;
    float m_unk648;
    double m_gameModeChangedTime;
    bool m_padRingRelated;
    bool m_maybeReducedEffects;
    bool m_maybeIsFalling;
    bool m_shouldTryPlacingCheckpoint;
    bool m_playEffects;
    bool m_maybeCanRunIntoBlocks;
    bool m_hasGroundParticles;
    bool m_hasShipParticles;
    bool m_isOnGround3;
    bool m_checkpointTimeout;
    double m_lastCheckpointTime;
    double m_lastJumpTime;
    double m_lastFlipTime;
    double m_flashTime;
    float m_flashRelated;
    float m_flashRelated1;
    cocos2d::ccColor3B m_colorRelated2;
    cocos2d::ccColor3B m_flashRelated3;
    double m_lastSpiderFlipTime;
    bool m_unkBool5;
    bool m_maybeIsVehicleGlowing;
    bool m_switchWaveTrailColor;
    bool m_practiceDeathEffect;
    double m_accelerationOrSpeed;
    double m_snapDistance;
    bool m_ringJumpRelated;
    gd::unordered_set<int> m_ringRelatedSet;
    GameObject* m_objectSnappedTo;
    CheckpointObject* m_pendingCheckpoint;
    int m_onFlyCheckpointTries;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    bool m_maybeSpriteRelated;
    cocos2d::CCParticleSystemQuad* m_playerGroundParticles;
    cocos2d::CCParticleSystemQuad* m_trailingParticles;
    cocos2d::CCParticleSystemQuad* m_shipClickParticles;
    cocos2d::CCParticleSystemQuad* m_vehicleGroundParticles;
    cocos2d::CCParticleSystemQuad* m_ufoClickParticles;
    cocos2d::CCParticleSystemQuad* m_robotBurstParticles;
    cocos2d::CCParticleSystemQuad* m_dashParticles;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles1;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles2;
    bool m_useLandParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles1;
    float m_landParticlesAngle;
    float m_landParticleRelatedY;
    int m_playerStreak;
    float m_streakStrokeWidth;
    bool m_disableStreakTint;
    bool m_alwaysShowStreak;
    ShipStreak m_shipStreakType;
    double m_slopeRotation;
    double m_currentSlopeYVelocity;
    double m_unk3d0;
    double m_blackOrbRelated;
    bool m_unk3e0;
    bool m_unk3e1;
    bool m_isAccelerating;
    bool m_isCurrentSlopeTop;
    double m_collidedTopMinY;
    double m_collidedBottomMaxY;
    double m_collidedLeftMaxX;
    double m_collidedRightMinX;
    bool m_fadeOutStreak;
    bool m_canPlaceCheckpoint;
    cocos2d::ccColor3B m_colorRelated;
    cocos2d::ccColor3B m_secondColorRelated;
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    bool m_maybeIsColliding;
    bool m_jumpBuffered;
    bool m_stateRingJump;
    bool m_wasJumpBuffered;
    bool m_wasRobotJump;
    unsigned char m_stateJumpBuffered;
    bool m_stateRingJump2;
    bool m_touchedRing;
    bool m_touchedCustomRing;
    bool m_touchedGravityPortal;
    bool m_maybeTouchedBreakableBlock;
    geode::SeedValueRSV m_jumpRelatedAC2;
    bool m_touchedPad;
    double m_yVelocity;
    double m_fallSpeed;
    bool m_isOnSlope;
    bool m_wasOnSlope;
    float m_slopeVelocity;
    bool m_maybeUpsideDownSlope;
    bool m_isShip;
    bool m_isBird;
    bool m_isBall;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isUpsideDown;
    bool m_isDead;
    bool m_isOnGround;
    bool m_isGoingLeft;
    bool m_isSideways;
    bool m_isSwing;
    int m_reverseRelated;
    double m_maybeReverseSpeed;
    double m_maybeReverseAcceleration;
    float m_xVelocityRelated2;
    bool m_isDashing;
    int m_unk9e8;
    int m_groundObjectMaterial;
    float m_vehicleSize;
    float m_playerSpeed;
    cocos2d::CCPoint m_shipRotation;
    cocos2d::CCPoint m_lastPortalPos;
    float m_unkUnused3;
    bool m_isOnGround2;
    double m_lastLandTime;
    float m_platformerVelocityRelated;
    bool m_maybeIsBoosted;
    double m_scaleXRelatedTime;
    bool m_decreaseBoostSlide;
    bool m_unkA29;
    bool m_isLocked;
    bool m_controlsDisabled;
    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    gd::unordered_set<int> m_touchedRings;
    GameObject* m_lastActivatedPortal;
    bool m_hasEverJumped;
    bool m_hasEverHitRing;
    cocos2d::ccColor3B m_playerColor1;
    cocos2d::ccColor3B m_playerColor2;
    cocos2d::CCPoint m_position;
    bool m_isSecondPlayer;
    bool m_unkA99;
    double m_totalTime;
    bool m_isBeingSpawnedByDualPortal;
    float m_unkAAC;
    float m_unkAngle1;
    float m_yVelocityRelated3;
    bool m_defaultMiniIcon;
    bool m_swapColors;
    bool m_switchDashFireColor;
    int m_followRelated;
    gd::vector<float> m_playerFollowFloats;
    float m_unk838;
    int m_stateOnGround;
    unsigned char m_stateUnk;
    unsigned char m_stateNoStickX;
    unsigned char m_stateNoStickY;
    unsigned char m_stateUnk2;
    int m_stateBoostX;
    int m_stateBoostY;
    int m_maybeStateForce2;
    int m_stateScale;
    double m_platformerXVelocity;
    bool m_holdingRight;
    bool m_holdingLeft;
    bool m_leftPressedFirst;
    double m_scaleXRelated;
    bool m_maybeHasStopped;
    float m_xVelocityRelated;
    bool m_maybeGoingCorrectSlopeDirection;
    bool m_isSliding;
    double m_maybeSlopeForce;
    bool m_isOnIce;
    double m_physDeltaRelated;
    bool m_isOnGround4;
    int m_maybeSlidingTime;
    double m_maybeSlidingStartTime;
    double m_changedDirectionsTime;
    double m_slopeEndTime;
    bool m_isMoving;
    bool m_platformerMovingLeft;
    bool m_platformerMovingRight;
    bool m_isSlidingRight;
    double m_maybeChangedDirectionAngle;
    double m_unkUnused2;
    bool m_isPlatformer;
    int m_stateNoAutoJump;
    int m_stateDartSlide;
    int m_stateHitHead;
    int m_stateFlipGravity;
    float m_gravityMod;
    int m_stateForce;
    cocos2d::CCPoint m_stateForceVector;
    bool m_affectedByForces;
    gd::map<int, bool> m_jumpPadRelated;
    float m_somethingPlayerSpeedTime;
    float m_playerSpeedAC;
    bool m_fixRobotJump;
    gd::map<int, bool> m_holdingButtons;
    bool m_inputsLocked;
    gd::string m_currentRobotAnimation;
    bool m_gv0123;
    int m_iconRequestID;
    cocos2d::CCSpriteBatchNode* m_robotBatchNode;
    cocos2d::CCSpriteBatchNode* m_spiderBatchNode;
    cocos2d::CCArray* m_unk958;
    PlayerFireBoostSprite* m_robotFire;
    int m_unkUnused;
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCLayer* m_parentLayer;
    GJActionManager* m_actionManager;
    bool m_isOutOfBounds;
    float m_fallStartY;
    bool m_disablePlayerSqueeze;
    bool m_robotAnimation1Enabled;
    bool m_robotAnimation2Enabled;
    bool m_spiderAnimationEnabled;
    bool m_ignoreDamage;
    bool m_enable22Changes;
};
