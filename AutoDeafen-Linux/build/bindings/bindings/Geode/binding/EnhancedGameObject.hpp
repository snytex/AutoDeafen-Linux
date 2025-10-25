#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class EnhancedGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EnhancedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnhancedGameObject, GameObject)

    /**
     * @note[short] Windows: 0x188580
     * @note[short] Android: Rebinded
     */
     EnhancedGameObject();

    /**
     * @note[short] Android
     */
    static EnhancedGameObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x4ec86c
     * @note[short] MacOS (Intel): 0x5b42e0
     * @note[short] Windows: 0x1a1ff0
     * @note[short] iOS: 0x262680
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x4ec1fc
     * @note[short] MacOS (Intel): 0x5b3b10
     * @note[short] Windows: 0x1a19b0
     * @note[short] iOS: 0x2620bc
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x4ed9e8
     * @note[short] MacOS (Intel): 0x5b7190
     * @note[short] Windows: 0x1a3af0
     * @note[short] iOS: 0x26389c
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4ec4b0
     * @note[short] MacOS (Intel): 0x5b3df0
     * @note[short] Windows: 0x1a1cc0
     * @note[short] iOS: 0x26234c
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x4eda50
     * @note[short] MacOS (Intel): 0x5b71f0
     * @note[short] Windows: 0x1a3c50
     * @note[short] iOS: 0x263904
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x4ec328
     * @note[short] MacOS (Intel): 0x5b3c80
     * @note[short] Windows: 0x1a1b00
     * @note[short] iOS: 0x2621e8
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4ec278
     * @note[short] MacOS (Intel): 0x5b3bb0
     * @note[short] Windows: 0x1a1a60
     * @note[short] iOS: 0x262138
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x4ec428
     * @note[short] MacOS (Intel): 0x5b3d50
     * @note[short] Windows: 0x1a1bf0
     * @note[short] iOS: 0x2622c8
     * @note[short] Android
     */
    virtual void animationTriggered();

    /**
     * @note[short] MacOS (ARM): 0x4ec334
     * @note[short] MacOS (Intel): 0x5b3c90
     * @note[short] Windows: 0x1a1b10
     * @note[short] iOS: 0x2621f4
     * @note[short] Android
     */
    virtual void activatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4ec394
     * @note[short] MacOS (Intel): 0x5b3ce0
     * @note[short] Windows: 0x1a1b70
     * @note[short] iOS: 0x26224c
     * @note[short] Android
     */
    virtual bool hasBeenActivatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4ec408
     * @note[short] MacOS (Intel): 0x5b3d30
     * @note[short] Windows: 0x1a1bd0
     * @note[short] iOS: 0x2622a8
     * @note[short] Android
     */
    virtual bool hasBeenActivated();

    /**
     * @note[short] MacOS (ARM): 0x4ec438
     * @note[short] MacOS (Intel): 0x5b3d70
     * @note[short] Windows: 0x1a1c50
     * @note[short] iOS: 0x2622d8
     * @note[short] Android
     */
    virtual void saveActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x4ec104
     * @note[short] MacOS (Intel): 0x5b3810
     * @note[short] Windows: 0x1a1850
     * @note[short] iOS: 0x261f88
     * @note[short] Android
     */
    virtual bool canAllowMultiActivate();

    /**
     * @note[short] MacOS (ARM): 0x199ae8
     * @note[short] MacOS (Intel): 0x1e1cd0
     * @note[short] Windows: 0x188660
     * @note[short] iOS: 0x26466c
     * @note[short] Android
     */
    virtual bool getHasSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x199af0
     * @note[short] MacOS (Intel): 0x1e1ce0
     * @note[short] Windows: 0x188670
     * @note[short] iOS: 0x264674
     * @note[short] Android
     */
    virtual bool getHasRotateAction();

    /**
     * @note[short] MacOS (ARM): 0x4ec304
     * @note[short] MacOS (Intel): 0x5b3c60
     * @note[short] Windows: 0x1a1ae0
     * @note[short] iOS: 0x2621c4
     * @note[short] Android
     */
    virtual bool canMultiActivate(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4ec2b0
     * @note[short] MacOS (Intel): 0x5b3bf0
     * @note[short] Windows: 0x1a1aa0
     * @note[short] iOS: 0x262170
     * @note[short] Android
     */
    virtual void powerOnObject(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4ec2c4
     * @note[short] MacOS (Intel): 0x5b3c10
     * @note[short] Windows: 0x1a1ac0
     * @note[short] iOS: 0x262184
     * @note[short] Android
     */
    virtual void powerOffObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void stateSensitiveOff(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x1f7c7c
     * @note[short] MacOS (Intel): 0x2499e0
     * @note[short] Windows: 0x1a4e30
     * @note[short] iOS: 0x347598
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1f903c
     * @note[short] MacOS (Intel): 0x24b920
     * @note[short] Windows: 0x1a6af0
     * @note[short] iOS: 0x348938
     * @note[short] Android
     */
    virtual void updateAnimateOnTrigger(bool p0);

    /**
     * @note[short] Android
     */
    void createRotateAction(float angle, int clockwiseDirection);

    /**
     * @note[short] Windows: 0x1a1800
     * @note[short] Android
     */
    bool init(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn previewAnimateOnTrigger();

    /**
     * @note[short] Android
     */
    TodoReturn refreshRotateAction();

    /**
     * @note[short] Android
     */
    TodoReturn resetSyncedAnimation();

    /**
     * @note[short] Android
     */
    TodoReturn resumeAudio();

    /**
     * @note[short] Android
     */
    TodoReturn resumeAudioDelayed();

    /**
     * @note[short] Windows: 0x1a6bf0
     * @note[short] Android
     */
    void setupAnimationVariables();

    /**
     * @note[short] Android
     */
    TodoReturn triggerAnimation();

    /**
     * @note[short] Android
     */
    TodoReturn updateRotateAction(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateState(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4e3b94
     * @note[short] MacOS (Intel): 0x5a9770
     * @note[short] Windows: 0x1a3970
     * @note[short] iOS: 0x25e724
     * @note[short] Android
     */
    void updateUserCoin();

    /**
     * @note[short] Android
     */
    TodoReturn waitForAnimationTrigger();
    bool m_poweredOn;
    int m_state;
    int m_animationRandomizedStartValue;
    float m_animationStart;
    float m_unk540;
    float m_unk544;
    bool m_unk548;
    float m_randomFrameTime;
    bool m_visible;
    bool m_shouldNotHideAnimFreeze;
    bool m_usesSpecialAnimation;
    float m_frameTime;
    short m_frames;
    bool m_hasCustomAnimation;
    bool m_hasCustomRotation;
    bool m_disableRotation;
    float m_rotationSpeed;
    float m_rotationAngle;
    float m_rotationDelta;
    float m_rotationAnimationSpeed;
    bool m_animationRandomizedStart;
    float m_animationSpeed;
    bool m_animationShouldUseSpeed;
    bool m_animateOnTrigger;
    bool m_disableDelayedLoop;
    bool m_disableAnimShine;
    int m_singleFrame;
    bool m_animationOffset;
    bool m_animationTriggered;
    int m_unkAnimationInt;
    int m_maybeAnimationVariableXInt;
    int m_maybeAnimationVariableYInt;
    bool m_animateOnlyWhenActive;
    bool m_isNoMultiActivate;
    bool m_isMultiActivate;
    bool m_activated;
    bool m_activatedByPlayer1;
    bool m_activatedByPlayer2;
    bool m_hasUniqueCoin;
};
