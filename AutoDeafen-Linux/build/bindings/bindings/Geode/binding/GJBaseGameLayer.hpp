#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGameState.hpp"
#include "PlayerButtonCommand.hpp"
#include "TriggerEffectDelegate.hpp"

class GJBaseGameLayer : public cocos2d::CCLayer, public TriggerEffectDelegate {
public:
    static constexpr auto CLASS_NAME = "GJBaseGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBaseGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x2c7b10
     * @note[short] Android: Rebinded
     */
     GJBaseGameLayer();

    /**
     * @note[short] MacOS (ARM): 0xe02d8
     * @note[short] MacOS (Intel): 0xfd6a0
     * @note[short] Windows: 0x200540
     * @note[short] iOS: 0x1dae3c
     * @note[short] Android: Rebinded
     */
     ~GJBaseGameLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GJBaseGameLayer* get();

    /**
     * @note[short] MacOS (ARM): 0x119128
     * @note[short] MacOS (Intel): 0x141f90
     * @note[short] Windows: 0x232100
     * @note[short] iOS: 0x200aec
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0xe0fb8
     * @note[short] MacOS (Intel): 0xfe730
     * @note[short] Windows: 0x201cc0
     * @note[short] iOS: 0x1db7ec
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x126ac4
     * @note[short] MacOS (Intel): 0x152a70
     * @note[short] Windows: 0x240950
     * @note[short] iOS: 0x20a398
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void postUpdate(float p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void checkForEnd();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void testTime();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateVerifyDamage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateAttemptTime(float p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateVisibility(float p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void playerTookDamage(PlayerObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x118f10
     * @note[short] MacOS (Intel): 0x141d40
     * @note[short] Windows: 0x231ce0
     * @note[short] iOS: 0x200918
     * @note[short] Android
     */
    virtual TodoReturn opacityForObject(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void addToSpeedObjects(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xf9cf8
     * @note[short] MacOS (Intel): 0x11b120
     * @note[short] Windows: 0x213c90
     * @note[short] iOS: 0x1ecfb0
     * @note[short] Android
     */
    virtual void objectsCollided(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1076d8
     * @note[short] MacOS (Intel): 0x12c570
     * @note[short] Windows: 0x21e5c0
     * @note[short] iOS: 0x1f3a00
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2);

    /**
     * @note[short] MacOS (ARM): 0x107844
     * @note[short] MacOS (Intel): 0x12c710
     * @note[short] Windows: 0x21e7a0
     * @note[short] iOS: 0x1f3b6c
     * @note[short] Android: Rebinded
     */
    virtual void toggleGroupTriggered(int group, bool activate, gd::vector<int> const& remapKeys, int triggerID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xfad48
     * @note[short] MacOS (Intel): 0x11c510
     * @note[short] Windows: 0x2156a0
     * @note[short] iOS: 0x1edbbc
     * @note[short] Android: Rebinded
     */
    virtual void spawnGroup(int group, bool ordered, double delay, gd::vector<int> const& remapKeys, int triggerID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xfb108
     * @note[short] MacOS (Intel): 0x11c8b0
     * @note[short] Windows: 0x215b50
     * @note[short] iOS: 0x1ede3c
     * @note[short] Android: Rebinded
     */
    virtual void spawnObject(GameObject* object, double delay, gd::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activateEndTrigger(int p0, bool p1, bool p2);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* p0, gd::vector<int> const& p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleGlitter(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void destroyPlayer(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0xf0e34
     * @note[short] MacOS (Intel): 0x111270
     * @note[short] Windows: 0x20b4d0
     * @note[short] iOS: 0x1e5dcc
     * @note[short] Android
     */
    virtual void updateDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0x1096bc
     * @note[short] MacOS (Intel): 0x12e930
     * @note[short] Windows: 0x221220
     * @note[short] iOS: 0x1f5108
     * @note[short] Android
     */
    virtual void addToSection(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x107d50
     * @note[short] MacOS (Intel): 0x12cca0
     * @note[short] Windows: 0x21ec20
     * @note[short] iOS: 0x1f3fb0
     * @note[short] Android
     */
    virtual void addToGroup(GameObject* p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x107fa0
     * @note[short] MacOS (Intel): 0x12ced0
     * @note[short] Windows: 0x21eda0
     * @note[short] iOS: 0x1f4158
     * @note[short] Android
     */
    virtual void removeFromGroup(GameObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x10ae68
     * @note[short] MacOS (Intel): 0x130780
     * @note[short] Windows: 0x222c70
     * @note[short] iOS: 0x1f60bc
     * @note[short] Android
     */
    virtual void updateObjectSection(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateDisabledObjectsLastPos(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x116b60
     * @note[short] MacOS (Intel): 0x13efe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fef2c
     * @note[short] Android: Out of line
     */
    virtual void toggleGroundVisibility(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x116b64
     * @note[short] MacOS (Intel): 0x13eff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fef30
     * @note[short] Android: Out of line
     */
    virtual void toggleMGVisibility(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x116b68
     * @note[short] MacOS (Intel): 0x13f000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fef34
     * @note[short] Android: Out of line
     */
    virtual void toggleHideAttempts(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0x116cb0
     * @note[short] MacOS (Intel): 0x13f1a0
     * @note[short] Windows: 0x230720
     * @note[short] iOS: 0x1ff018
     * @note[short] Android
     */
    virtual void updateScreenRotation(float p0, bool p1, bool p2, float p3, int p4, float p5, int p6, int p7);

    /**
     * @note[short] MacOS (ARM): 0xf8e6c
     * @note[short] MacOS (Intel): 0x11a1f0
     * @note[short] Windows: 0x212c80
     * @note[short] iOS: 0x1ec3d4
     * @note[short] Android
     */
    virtual void reverseDirection(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xf8eb0
     * @note[short] MacOS (Intel): 0x11a230
     * @note[short] Windows: 0x212ce0
     * @note[short] iOS: 0x1ec418
     * @note[short] Android
     */
    virtual void rotateGameplay(RotateGameplayGameObject* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didRotateGameplay();

    /**
     * @note[short] MacOS (ARM): 0x11730c
     * @note[short] MacOS (Intel): 0x13f940
     * @note[short] Windows: 0x230a00
     * @note[short] iOS: 0x1ff468
     * @note[short] Android
     */
    virtual void updateTimeWarp(float p0);

    /**
     * @note[short] MacOS (ARM): 0x117300
     * @note[short] MacOS (Intel): 0x13f920
     * @note[short] Windows: 0x2309f0
     * @note[short] iOS: 0x1ff45c
     * @note[short] Android
     */
    virtual void updateTimeWarp(GameObject* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x11734c
     * @note[short] MacOS (Intel): 0x13f990
     * @note[short] Windows: 0x230a50
     * @note[short] iOS: 0x1ff4a4
     * @note[short] Android
     */
    virtual void applyTimeWarp(float p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void playGravityEffect(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void manualUpdateObjectColors(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x122170
     * @note[short] MacOS (Intel): 0x14cf30
     * @note[short] Windows: 0x23a7f0
     * @note[short] iOS: 0x206ed8
     * @note[short] Android: Rebinded
     */
    virtual cocos2d::CCParticleSystemQuad* createCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x122520
     * @note[short] MacOS (Intel): 0x14d2c0
     * @note[short] Windows: 0x23aaf0
     * @note[short] iOS: 0x207108
     * @note[short] Android: Rebinded
     */
    virtual cocos2d::CCParticleSystemQuad* claimCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, int p3, int p4, bool p5);

    /**
     * @note[short] MacOS (ARM): 0x122760
     * @note[short] MacOS (Intel): 0x14d4c0
     * @note[short] Windows: 0x23acf0
     * @note[short] iOS: 0x207348
     * @note[short] Android: Rebinded
     */
    virtual void unclaimCustomParticle(gd::string const& p0, cocos2d::CCParticleSystemQuad* p1);

    /**
     * @note[short] MacOS (ARM): 0x123474
     * @note[short] MacOS (Intel): 0x14e3e0
     * @note[short] Windows: 0x23c8a0
     * @note[short] iOS: 0x207e14
     * @note[short] Android
     */
    virtual TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x126808
     * @note[short] MacOS (Intel): 0x152790
     * @note[short] Windows: 0x240530
     * @note[short] iOS: 0x20a194
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x126804
     * @note[short] MacOS (Intel): 0x152780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x20a190
     * @note[short] Android: Out of line
     */
    virtual void flipArt(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x113f9c
     * @note[short] MacOS (Intel): 0x13b940
     * @note[short] Windows: 0x22e420
     * @note[short] iOS: 0x1fd18c
     * @note[short] Android
     */
    virtual void addKeyframe(KeyframeGameObject* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateTimeLabel(int p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void checkSnapshot();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleProgressbar();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleInfoLabel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void removeAllCheckpoints();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleMusicInPractice();

    /**
     * @note[short] Android
     */
    void activateCustomRing(RingObject* p0);

    /**
     * @note[short] Windows: 0x23c8c0
     * @note[short] iOS: 0x207e20
     * @note[short] Android
     */
    void activatedAudioTrigger(SFXTriggerGameObject* p0, float p1);

    /**
     * @note[short] Windows: 0x22c9c0
     * @note[short] Android: Rebinded
     */
    void activateEventTrigger(EventLinkTrigger* p0, gd::vector<int> const& p1);

    /**
     * @note[short] Windows: 0x22eed0
     * @note[short] Android: Rebinded
     */
    void activateItemCompareTrigger(ItemTriggerGameObject* p0, gd::vector<int> const& p1);

    /**
     * @note[short] MacOS (ARM): 0x114c0c
     * @note[short] MacOS (Intel): 0x13c800
     * @note[short] Windows: 0x22eaf0
     * @note[short] Android
     */
    void activateItemEditTrigger(ItemTriggerGameObject* p0);

    /**
     * @note[short] Android
     */
    void activateObjectControlTrigger(ObjectControlGameObject* p0);

    /**
     * @note[short] Windows: 0x22f2e0
     * @note[short] Android
     */
    void activatePersistentItemTrigger(ItemTriggerGameObject* trigger);

    /**
     * @note[short] Android
     */
    void activatePlayerControlTrigger(PlayerControlGameObject* p0);

    /**
     * @note[short] Android
     */
    void activateResetTrigger(EffectGameObject* p0);

    /**
     * @note[short] Windows: 0x23b8c0
     * @note[short] Android
     */
    void activateSFXEditTrigger(SFXTriggerGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x11f100
     * @note[short] MacOS (Intel): 0x149850
     * @note[short] Windows: 0x23b6c0
     * @note[short] iOS: 0x204ff0
     * @note[short] Android
     */
    void activateSFXTrigger(SFXTriggerGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x11eec4
     * @note[short] MacOS (Intel): 0x1495f0
     * @note[short] Windows: 0x23b3b0
     * @note[short] iOS: 0x204e8c
     * @note[short] Android
     */
    void activateSongEditTrigger(SongTriggerGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x11ec1c
     * @note[short] MacOS (Intel): 0x1492c0
     * @note[short] Windows: 0x23b030
     * @note[short] Android
     */
    void activateSongTrigger(SongTriggerGameObject* p0);

    /**
     * @note[short] Windows: 0x22f700
     * @note[short] Android: Rebinded
     */
    void activateTimerTrigger(TimerTriggerGameObject* p0, gd::vector<int> const& p1);

    /**
     * @note[short] Windows: 0x2221a0
     * @note[short] Android: Rebinded
     */
    void addAreaEffect(EnterEffectObject* p0, gd::vector<EnterEffectInstance>* p1, GJAreaActionType p2);

    /**
     * @note[short] Android
     */
    void addCustomEnterEffect(EnterEffectObject* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x125938
     * @note[short] MacOS (Intel): 0x151740
     * @note[short] Windows: 0x23f940
     * @note[short] iOS: 0x2097dc
     * @note[short] Android
     */
    bool addGuideArt(GameObject* p0);

    /**
     * @note[short] Android
     */
    void addObjectCounter(LabelGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addPickupTrigger(CountTriggerGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addPoints(int p0);

    /**
     * @note[short] Android
     */
    void addProximityVolumeEffect(int p0, int p1, SFXTriggerGameObject* p2);

    /**
     * @note[short] MacOS (ARM): 0xe7178
     * @note[short] MacOS (Intel): 0x105880
     * @note[short] Android: Rebinded
     */
    void addRemapTargets(gd::set<int>& p0);

    /**
     * @note[short] MacOS (ARM): 0x108628
     * @note[short] MacOS (Intel): 0x12d580
     * @note[short] Android
     */
    void addToGroupParents(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x107cdc
     * @note[short] MacOS (Intel): 0x12cc30
     * @note[short] Windows: 0x21eb90
     * @note[short] iOS: 0x1f3f3c
     * @note[short] Android
     */
    void addToGroups(GameObject* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn addToObjectsToShow(GameObject* p0);

    /**
     * @note[short] Windows: 0x220c70
     * @note[short] Android
     */
    void addUIObject(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xf3ca8
     * @note[short] MacOS (Intel): 0x1144f0
     * @note[short] Windows: 0x20deb0
     * @note[short] Android
     */
    void animateInDualGroundNew(GameObject* p0, float p1, bool p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn animateInGroundNew(bool p0, float p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0xf3f2c
     * @note[short] MacOS (Intel): 0x1147e0
     * @note[short] Android
     */
    void animateOutGroundNew(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn animatePortalY(float p0, float p1, float p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0x11da0c
     * @note[short] MacOS (Intel): 0x147ac0
     * @note[short] Android
     */
    void applyLevelSettings(GameObject* p0);

    /**
     * @note[short] Windows: 0x215ce0
     * @note[short] Android: Rebinded
     */
    void applyRemap(EffectGameObject* p0, gd::vector<int> const& p1, gd::unordered_map<int, int>& p2);

    /**
     * @note[short] Windows: 0x23bba0
     * @note[short] Android
     */
    void applySFXEditTrigger(int p0, int p1, SFXTriggerGameObject* p2);

    /**
     * @note[short] iOS: 0x20574c
     * @note[short] Android
     */
    void applyShake(cocos2d::CCPoint& p0);

    /**
     * @note[short] Windows: 0x21f990
     * @note[short] Android
     */
    void assignNewStickyGroups(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn asyncBGLoaded(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn asyncGLoaded(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn asyncMGLoaded(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn atlasValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0xf6b04
     * @note[short] MacOS (Intel): 0x117ce0
     * @note[short] Windows: 0x2124f0
     * @note[short] iOS: 0x1eab1c
     * @note[short] Android
     */
    void bumpPlayer(PlayerObject* p0, EffectGameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn buttonIDToButton(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn calculateColorGroups();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void cameraMoveX(float value, float duration, float rate, bool p3);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void cameraMoveY(float value, float duration, float rate, bool force);

    /**
     * @note[short] MacOS (ARM): 0xf6710
     * @note[short] MacOS (Intel): 0x117880
     * @note[short] Windows: 0x2123e0
     * @note[short] iOS: 0x1ea898
     * @note[short] Android
     */
    bool canBeActivatedByPlayer(PlayerObject* p0, EffectGameObject* p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn canProcessSFX(SFXTriggerState& p0, gd::unordered_map<int, int>& p1, gd::unordered_map<int, float>& p2, gd::vector<SFXTriggerState>& p3);

    /**
     * @note[short] Android
     */
    TodoReturn canTouchObject(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xf0a1c
     * @note[short] MacOS (Intel): 0x110df0
     * @note[short] Windows: 0x2340b0
     * @note[short] iOS: 0x1e5b9c
     * @note[short] Android
     */
    TodoReturn checkCameraLimitAfterTeleport(PlayerObject* p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn checkCollision(int p0, int p1);

    /**
     * @note[short] Windows: 0x2139e0
     * @note[short] Android: Rebinded
     */
    void checkCollisionBlocks(EffectGameObject* p0, gd::vector<EffectGameObject*>* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0xf45f0
     * @note[short] MacOS (Intel): 0x114fe0
     * @note[short] Windows: 0x20e330
     * @note[short] iOS: 0x1e87c8
     * @note[short] Android
     */
    int checkCollisions(PlayerObject* p0, float p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x11a550
     * @note[short] MacOS (Intel): 0x143830
     * @note[short] Windows: 0x233de0
     * @note[short] iOS: 0x201988
     * @note[short] Android
     */
    void checkRepellPlayer();

    /**
     * @note[short] MacOS (ARM): 0xfaa7c
     * @note[short] MacOS (Intel): 0x11c1f0
     * @note[short] Windows: 0x215410
     * @note[short] iOS: 0x1ed910
     * @note[short] Android
     */
    void checkSpawnObjects();

    /**
     * @note[short] Android
     */
    TodoReturn claimMoveAction(int p0, bool p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn claimParticle(gd::string p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn claimRotationAction(int p0, int p1, float& p2, float& p3, bool p4, bool p5);

    /**
     * @note[short] MacOS (ARM): 0x11e644
     * @note[short] MacOS (Intel): 0x148ac0
     * @note[short] iOS: 0x204818
     * @note[short] Android
     */
    void clearActivatedAudioTriggers();

    /**
     * @note[short] Android
     */
    TodoReturn clearPickedUpItems();

    /**
     * @note[short] iOS: 0x1fd4b8
     * @note[short] Android
     */
    void collectedObject(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xf5554
     * @note[short] MacOS (Intel): 0x116130
     * @note[short] Windows: 0x20f480
     * @note[short] iOS: 0x1e9420
     * @note[short] Android: Rebinded
     */
    void collisionCheckObjects(PlayerObject* p0, gd::vector<GameObject*>* p1, int p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn controlAdvancedFollowCommand(AdvancedFollowTriggerObject* p0, int p1, GJActionCommand p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn controlAreaEffect(EnterEffectObject* p0, gd::vector<EnterEffectInstance>* p1, GJActionCommand p2);

    /**
     * @note[short] Android
     */
    TodoReturn controlAreaEffectWithID(int p0, int p1, GJActionCommand p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn controlDynamicCommand(EffectGameObject* p0, int p1, gd::vector<DynamicObjectAction>& p2, GJActionCommand p3);

    /**
     * @note[short] Android
     */
    TodoReturn controlDynamicMoveCommand(EffectGameObject* p0, int p1, GJActionCommand p2);

    /**
     * @note[short] Android
     */
    TodoReturn controlDynamicRotateCommand(EffectGameObject* p0, int p1, GJActionCommand p2);

    /**
     * @note[short] Android
     */
    TodoReturn controlEventLink(int p0, int p1, GJActionCommand p2);

    /**
     * @note[short] Android
     */
    TodoReturn controlGradientTrigger(GradientTriggerObject* p0, GJActionCommand p1);

    /**
     * @note[short] Windows: 0x218de0
     * @note[short] Android
     */
    void controlTriggersInGroup(int p0, GJActionCommand p1);

    /**
     * @note[short] Windows: 0x219370
     * @note[short] Android
     */
    void controlTriggersWithControlID(int p0, GJActionCommand p1);

    /**
     * @note[short] Windows: 0x2295d0
     * @note[short] Android
     */
    static float convertToClosestDirection(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0xe4ed4
     * @note[short] MacOS (Intel): 0x1030e0
     * @note[short] Windows: 0x2064e0
     * @note[short] iOS: 0x1dea24
     * @note[short] Android
     */
    void createBackground(int p0);

    /**
     * @note[short] MacOS (ARM): 0xe5410
     * @note[short] MacOS (Intel): 0x103660
     * @note[short] Windows: 0x206920
     * @note[short] iOS: 0x1def60
     * @note[short] Android
     */
    void createGroundLayer(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0xe55f4
     * @note[short] MacOS (Intel): 0x103870
     * @note[short] Windows: 0x2067a0
     * @note[short] iOS: 0x1df0e8
     * @note[short] Android
     */
    void createMiddleground(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn createNewKeyframeAnim();

    /**
     * @note[short] Android
     */
    TodoReturn createParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);

    /**
     * @note[short] MacOS (ARM): 0xe4b94
     * @note[short] MacOS (Intel): 0x102d80
     * @note[short] Windows: 0x205fd0
     * @note[short] iOS: 0x1de6e4
     * @note[short] Android
     */
    void createPlayer();

    /**
     * @note[short] MacOS (ARM): 0xf9014
     * @note[short] MacOS (Intel): 0x11a410
     * @note[short] Windows: 0x212e90
     * @note[short] iOS: 0x1ec548
     * @note[short] Android
     */
    void createPlayerCollisionBlock();

    /**
     * @note[short] MacOS (ARM): 0xee828
     * @note[short] MacOS (Intel): 0x10f2e0
     * @note[short] Windows: 0x209960
     * @note[short] iOS: 0x1e4644
     * @note[short] Android
     */
    void createTextLayers();

    /**
     * @note[short] Android
     */
    TodoReturn damagingObjectsInRect(cocos2d::CCRect p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0xf71e8
     * @note[short] MacOS (Intel): 0x118390
     * @note[short] Windows: 0x210bb0
     * @note[short] iOS: 0x1eb004
     * @note[short] Android
     */
    void destroyObject(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xf84b0
     * @note[short] MacOS (Intel): 0x119720
     * @note[short] Android
     */
    void enterDualMode(GameObject* p0, bool p1);

    /**
     * @note[short] Windows: 0x2390e0
     * @note[short] Android
     */
    void exitStaticCamera(bool exitX, bool exitY, float time, int easingType, float easingRate, bool smoothVelocity, float smoothVelocityMod, bool exitInstant);

    /**
     * @note[short] iOS: 0x2036ac
     * @note[short] Android
     */
    TodoReturn flipFinished();

    /**
     * @note[short] MacOS (ARM): 0xf3874
     * @note[short] MacOS (Intel): 0x114040
     * @note[short] Windows: 0x20d640
     * @note[short] iOS: 0x1e7c68
     * @note[short] Android
     */
    void flipGravity(PlayerObject* p0, bool p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn flipObjects();

    /**
     * @note[short] Android
     */
    TodoReturn gameEventToString(GJGameEvent p0);

    /**
     * @note[short] MacOS (ARM): 0xf0ae8
     * @note[short] MacOS (Intel): 0x110ea0
     * @note[short] Windows: 0x22c8a0
     * @note[short] iOS: 0x1e5c54
     * @note[short] Android
     */
    void gameEventTriggered(GJGameEvent p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x209710
     * @note[short] Android
     */
    int generateEnterEasingBuffer(int p0, float p1);

    /**
     * @note[short] Android
     */
    void generateEnterEasingBuffers(EnterEffectObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn generatePickupAnimRandVal(GameObject* p0, float& p1, float& p2);

    /**
     * @note[short] MacOS (ARM): 0xe7b50
     * @note[short] MacOS (Intel): 0x106400
     * @note[short] Windows: 0x218c00
     * @note[short] iOS: 0x1e0ce0
     * @note[short] Android
     */
    void generateSpawnRemap();

    /**
     * @note[short] MacOS (ARM): 0xea698
     * @note[short] MacOS (Intel): 0x109d00
     * @note[short] Windows: 0x21fab0
     * @note[short] iOS: 0x1e219c
     * @note[short] Android
     */
    void generateTargetGroups();

    /**
     * @note[short] Windows: 0x22c1e0
     * @note[short] iOS: 0x1e306c
     * @note[short] Android
     */
    void generateVisibilityGroups();

    /**
     * @note[short] Android
     */
    TodoReturn getActiveOrderSpawnObjects();

    /**
     * @note[short] Windows: 0x222d90
     * @note[short] Android
     */
    float getAreaObjectValue(EnterEffectInstance* p0, GameObject* p1, cocos2d::CCPoint& p2, bool& p3);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ec028
     * @note[short] Android
     */
    float getBumpMod(PlayerObject* player, int type);

    /**
     * @note[short] MacOS (ARM): 0x117070
     * @note[short] MacOS (Intel): 0x13f630
     * @note[short] iOS: 0x1ff2e4
     * @note[short] Android
     */
    float getCameraEdgeValue(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCapacityString();

    /**
     * @note[short] Android
     */
    TodoReturn getCenterGroupObject(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomEnterEffects(int p0, bool p1);

    /**
     * @note[short] Windows: 0x222f80
     * @note[short] Android
     */
    float getEasedAreaValue(GameObject* p0, EnterEffectInstance* p1, float p2, bool p3, int p4);

    /**
     * @note[short] Android
     */
    TodoReturn getEnterEasingKey(int p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn getEnterEasingValue(float p0, int p1, float p2, int p3);

    /**
     * @note[short] Windows: 0x229670
     * @note[short] Android
     */
    cocos2d::CCPoint getFollowSpeedVal(GameObject* p0, int p1, int p2, float p3, float p4);

    /**
     * @note[short] Android
     */
    float getGroundHeight(PlayerObject* p0, int p1);

    /**
     * @note[short] Windows: 0x20c890
     * @note[short] Android
     */
    TodoReturn getGroundHeightForMode(int p0);

    /**
     * @note[short] Windows: 0x21eed0
     * @note[short] iOS: 0x1e39cc
     * @note[short] Android
     */
    cocos2d::CCArray* getGroup(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGroupParent(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getGroupParentsString(GameObject* p0);

    /**
     * @note[short] Windows: 0x22ea60
     * @note[short] Android
     */
    double getItemValue(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0xf4544
     * @note[short] MacOS (Intel): 0x114f30
     * @note[short] Windows: 0x20e2b0
     * @note[short] iOS: 0x1e8750
     * @note[short] Android
     */
    float getMaxPortalY();

    /**
     * @note[short] Windows: 0x23c430
     * @note[short] Android
     */
    TodoReturn getMinDistance(cocos2d::CCPoint p0, cocos2d::CCArray* p1, float p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0xf4468
     * @note[short] MacOS (Intel): 0x114e50
     * @note[short] Windows: 0x20e1d0
     * @note[short] iOS: 0x1e8680
     * @note[short] Android
     */
    float getMinPortalY();

    /**
     * @note[short] MacOS (ARM): 0x119084
     * @note[short] MacOS (Intel): 0x141ee0
     * @note[short] Windows: 0x232060
     * @note[short] iOS: 0x200a54
     * @note[short] Android
     */
    float getModifiedDelta(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn getMoveTargetDelta(EffectGameObject* p0, bool p1);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f4024
     * @note[short] Android
     */
    cocos2d::CCArray* getOptimizedGroup(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xf228c
     * @note[short] MacOS (Intel): 0x1128b0
     * @note[short] Android
     */
    PlayerObject* getOtherPlayer(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getParticleKey(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getParticleKey2(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPlayerButtonID(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getPlayTimerFullSeconds();

    /**
     * @note[short] Android
     */
    TodoReturn getPlayTimerMilli();

    /**
     * @note[short] Android
     */
    TeleportPortalObject* getPortalTarget(TeleportPortalObject* p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCPoint getPortalTargetPos(TeleportPortalObject* p0, GameObject* p1, PlayerObject* p2);

    /**
     * @note[short] Android
     */
    TodoReturn getRecordString();

    /**
     * @note[short] Android
     */
    TodoReturn getRotateCommandTargets(EnhancedTriggerObject* p0, GameObject*& p1, GameObject*& p2, GameObject*& p3);

    /**
     * @note[short] Windows: 0x213dc0
     * @note[short] Android
     */
    cocos2d::CCPoint getSavedPosition(int p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn getScaledGroundHeight(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSingleGroupObject(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSpecialKey(int p0, bool p1, bool p2);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f4088
     * @note[short] Android
     */
    cocos2d::CCArray* getStaticGroup(int groupID);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getStickyGroup(int group);

    /**
     * @note[short] Android
     */
    TodoReturn getTargetFlyCameraY(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getTargetGroup(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getTargetGroupOrigin(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0xf6d28
     * @note[short] MacOS (Intel): 0x117ef0
     * @note[short] iOS: 0x1eac54
     * @note[short] Android
     */
    TodoReturn gravBumpPlayer(PlayerObject* p0, EffectGameObject* p1);

    /**
     * @note[short] Windows: 0x21f7b0
     * @note[short] Android
     */
    void groupStickyObjects(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x1136ec
     * @note[short] MacOS (Intel): 0x13afc0
     * @note[short] Windows: 0x22e190
     * @note[short] iOS: 0x1fcb90
     * @note[short] Android
     */
    void handleButton(bool down, int button, bool isPlayer1);

    /**
     * @note[short] Android
     */
    bool hasItem(int p0);

    /**
     * @note[short] MacOS (ARM): 0xf72cc
     * @note[short] MacOS (Intel): 0x118460
     * @note[short] Windows: 0x211220
     * @note[short] iOS: 0x1eb0e8
     * @note[short] Android
     */
    bool hasUniqueCoin(EffectGameObject* p0);

    /**
     * @note[short] Windows: 0x2078e0
     * @note[short] iOS: 0x1df834
     * @note[short] Android
     */
    void increaseBatchNodeCapacity();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isFlipping();

    /**
     * @note[short] Android
     */
    bool isPlayer2Button(int p0);

    /**
     * @note[short] Android
     */
    void lightningFlash(cocos2d::CCPoint to, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0xf089c
     * @note[short] MacOS (Intel): 0x110c50
     * @note[short] Windows: 0x240770
     * @note[short] iOS: 0x1e5a24
     * @note[short] Android
     */
    void lightningFlash(cocos2d::CCPoint from, cocos2d::CCPoint to, cocos2d::ccColor3B color, float lineWidth, float duration, int displacement, bool flash, float opacity);

    /**
     * @note[short] MacOS (ARM): 0x108974
     * @note[short] MacOS (Intel): 0x12d9a0
     * @note[short] Windows: 0x21f4b0
     * @note[short] iOS: 0x1f47a8
     * @note[short] Android: Rebinded
     */
    void loadGroupParentsFromString(GameObject* object, gd::string groupList);

    /**
     * @note[short] MacOS (ARM): 0x11d8c0
     * @note[short] MacOS (Intel): 0x147920
     * @note[short] Windows: 0x234770
     * @note[short] iOS: 0x203d78
     * @note[short] Android
     */
    void loadLevelSettings();

    /**
     * @note[short] MacOS (ARM): 0x116658
     * @note[short] MacOS (Intel): 0x13e9f0
     * @note[short] Windows: 0x230000
     * @note[short] iOS: 0x1feaec
     * @note[short] Android
     */
    void loadStartPosObject();

    /**
     * @note[short] Windows: 0x2301a0
     * @note[short] Android
     */
    void loadUpToPosition(float position, int order, int channel);

    /**
     * @note[short] Android
     */
    TodoReturn maxZOrderForShaderZ(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn minZOrderForShaderZ(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn modifyGroupPhysics(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn modifyObjectPhysics(AdvancedFollowEditObject* p0, GameObjectPhysics& p1);

    /**
     * @note[short] Windows: 0x2257d0
     * @note[short] Android
     */
    void moveAreaObject(GameObject* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void moveCameraToPos(cocos2d::CCPoint pos);

    /**
     * @note[short] Android
     */
    void moveObject(GameObject* p0, double p1, double p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x111020
     * @note[short] MacOS (Intel): 0x137c20
     * @note[short] Windows: 0x228a70
     * @note[short] iOS: 0x1fb324
     * @note[short] Android
     */
    void moveObjects(cocos2d::CCArray* p0, double p1, double p2, bool p3);

    /**
     * @note[short] Android
     */
    void moveObjectsSilent(int p0, double p1, double p2);

    /**
     * @note[short] MacOS (ARM): 0x1133c0
     * @note[short] MacOS (Intel): 0x13ac40
     * @note[short] Windows: 0x22c060
     * @note[short] iOS: 0x1fc900
     * @note[short] Android
     */
    void moveObjectToStaticGroup(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn objectIntersectsCircle(GameObject* p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0xf3c84
     * @note[short] MacOS (Intel): 0x1144d0
     * @note[short] Windows: 0x22ce10
     * @note[short] iOS: 0x1e804c
     * @note[short] Android
     */
    GJGameEvent objectTypeToGameEvent(int p0);

    /**
     * @note[short] MacOS (ARM): 0xe81a4
     * @note[short] MacOS (Intel): 0x106b60
     * @note[short] Windows: 0x22b740
     * @note[short] iOS: 0x1e109c
     * @note[short] Android
     */
    void optimizeMoveGroups();

    /**
     * @note[short] MacOS (ARM): 0x1258a0
     * @note[short] MacOS (Intel): 0x151690
     * @note[short] Windows: 0x23f7e0
     * @note[short] iOS: 0x209744
     * @note[short] Android
     */
    void orderSpawnObjects();

    /**
     * @note[short] MacOS (ARM): 0xeec10
     * @note[short] MacOS (Intel): 0x10f720
     * @note[short] Windows: 0x209e30
     * @note[short] iOS: 0x1e4a2c
     * @note[short] Android
     */
    cocos2d::CCNode* parentForZLayer(int zLayer, bool blending, int parentMode, int uiObject);

    /**
     * @note[short] MacOS (ARM): 0x118fb0
     * @note[short] MacOS (Intel): 0x141de0
     * @note[short] Windows: 0x231d60
     * @note[short] iOS: 0x2009a4
     * @note[short] Android
     */
    void pauseAudio();

    /**
     * @note[short] Android
     */
    TodoReturn performMathOperation(double p0, double p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn performMathRounding(double p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0xf7400
     * @note[short] MacOS (Intel): 0x118560
     * @note[short] Windows: 0x210cd0
     * @note[short] iOS: 0x1eb1e4
     * @note[short] Android
     */
    void pickupItem(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn playAnimationCommand(int p0, int p1);

    /**
     * @note[short] Windows: 0x20c930
     * @note[short] Android
     */
    bool playerCircleCollision(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn playerIntersectsCircle(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] Android
     */
    void playerTouchedObject(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0xf6eb0
     * @note[short] MacOS (Intel): 0x118040
     * @note[short] Windows: 0x212960
     * @note[short] iOS: 0x1eadac
     * @note[short] Android
     */
    void playerTouchedRing(PlayerObject* p0, RingObject* p1);

    /**
     * @note[short] MacOS (ARM): 0xf6f88
     * @note[short] MacOS (Intel): 0x1180f0
     * @note[short] Windows: 0x212a70
     * @note[short] iOS: 0x1eae70
     * @note[short] Android
     */
    void playerTouchedTrigger(PlayerObject* p0, EffectGameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn playerWasTouchingObject(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0xf3a44
     * @note[short] MacOS (Intel): 0x114200
     * @note[short] Windows: 0x20da30
     * @note[short] iOS: 0x1e7e38
     * @note[short] Android
     */
    void playerWillSwitchMode(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0xf7ff0
     * @note[short] MacOS (Intel): 0x119250
     * @note[short] Windows: 0x2119a0
     * @note[short] iOS: 0x1eb9b0
     * @note[short] Android
     */
    void playExitDualEffect(PlayerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn playFlashEffect(float p0, int p1, float p2);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn playKeyframeAnimation(KeyframeAnimTriggerObject* p0, gd::vector<int> const& p1);

    /**
     * @note[short] MacOS (ARM): 0x121058
     * @note[short] MacOS (Intel): 0x14c000
     * @note[short] iOS: 0x20656c
     * @note[short] Android
     */
    void playSpeedParticle(float p0);

    /**
     * @note[short] MacOS (ARM): 0x107208
     * @note[short] MacOS (Intel): 0x12c0b0
     * @note[short] Windows: 0x21e1a0
     * @note[short] iOS: 0x1f360c
     * @note[short] Android
     */
    cocos2d::CCPoint positionForShaderTarget(int p0);

    /**
     * @note[short] MacOS (ARM): 0xebbe0
     * @note[short] MacOS (Intel): 0x10bbf0
     * @note[short] Windows: 0x220d90
     * @note[short] iOS: 0x1e2c9c
     * @note[short] Android
     */
    void positionUIObjects();

    /**
     * @note[short] Windows: 0x2142d0
     * @note[short] iOS: 0x1e13c4
     * @note[short] Android
     */
    void prepareSavePositionObjects();

    /**
     * @note[short] Android
     */
    TodoReturn prepareTransformParent(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x118fa4
     * @note[short] MacOS (Intel): 0x141dd0
     * @note[short] iOS: 0x200998
     * @note[short] Android
     */
    void preResumeGame();

    /**
     * @note[short] Android
     */
    TodoReturn preUpdateVisibility(float p0);

    /**
     * @note[short] MacOS (ARM): 0x12402c
     * @note[short] MacOS (Intel): 0x14f3a0
     * @note[short] Windows: 0x23d3e0
     * @note[short] iOS: 0x208724
     * @note[short] Android
     */
    void processActivatedAudioTriggers(float p0);

    /**
     * @note[short] Windows: 0x22a020
     * @note[short] Android
     */
    void processAdvancedFollowAction(AdvancedFollowInstance& p0, bool p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x110348
     * @note[short] MacOS (Intel): 0x136c60
     * @note[short] Windows: 0x229e00
     * @note[short] iOS: 0x1fa914
     * @note[short] Android
     */
    void processAdvancedFollowActions(float p0);

    /**
     * @note[short] MacOS (ARM): 0x10d458
     * @note[short] MacOS (Intel): 0x133460
     * @note[short] Windows: 0x223ce0
     * @note[short] iOS: 0x1f822c
     * @note[short] Android
     */
    void processAreaActions(float p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x10afe8
     * @note[short] MacOS (Intel): 0x1308e0
     * @note[short] Windows: 0x223100
     * @note[short] Android: Rebinded
     */
    void processAreaEffects(gd::vector<EnterEffectInstance>* p0, GJAreaActionType p1, float p2, bool p3);

    /**
     * @note[short] Android
     */
    void processAreaFadeGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x10c484
     * @note[short] MacOS (Intel): 0x132070
     * @note[short] Windows: 0x2251f0
     * @note[short] Android
     */
    void processAreaMoveGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);

    /**
     * @note[short] Windows: 0x224ab0
     * @note[short] Android
     */
    void processAreaRotateGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);

    /**
     * @note[short] Windows: 0x2258c0
     * @note[short] Android
     */
    void processAreaTintGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, bool p3);

    /**
     * @note[short] Windows: 0x223f40
     * @note[short] Android
     */
    void processAreaTransformGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);

    /**
     * @note[short] MacOS (ARM): 0x10d908
     * @note[short] MacOS (Intel): 0x1339e0
     * @note[short] Android
     */
    void processAreaVisualActions(float p0);

    /**
     * @note[short] MacOS (ARM): 0xf2584
     * @note[short] MacOS (Intel): 0x112ba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GameObject* processCameraObject(GameObject* object, PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x11a2d0
     * @note[short] MacOS (Intel): 0x1435a0
     * @note[short] Windows: 0x234170
     * @note[short] iOS: 0x201880
     * @note[short] Android
     */
    void processCommands(float p0);

    /**
     * @note[short] MacOS (ARM): 0x10e6e4
     * @note[short] MacOS (Intel): 0x1348e0
     * @note[short] Windows: 0x228fa0
     * @note[short] iOS: 0x1f91ac
     * @note[short] Android
     */
    void processDynamicObjectActions(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x110514
     * @note[short] MacOS (Intel): 0x136e50
     * @note[short] Windows: 0x22b2a0
     * @note[short] iOS: 0x1faabc
     * @note[short] Android
     */
    void processFollowActions();

    /**
     * @note[short] Windows: 0x210db0
     * @note[short] iOS: 0x1eb7a4
     * @note[short] Android
     */
    void processItems();

    /**
     * @note[short] MacOS (ARM): 0x10ffa0
     * @note[short] MacOS (Intel): 0x136810
     * @note[short] Windows: 0x2282d0
     * @note[short] iOS: 0x1fa624
     * @note[short] Android
     */
    void processMoveActions();

    /**
     * @note[short] MacOS (ARM): 0x10e5b8
     * @note[short] MacOS (Intel): 0x1347b0
     * @note[short] Windows: 0x2262f0
     * @note[short] iOS: 0x1f9088
     * @note[short] Android
     */
    void processMoveActionsStep(float p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x107a5c
     * @note[short] MacOS (Intel): 0x12c930
     * @note[short] Windows: 0x21e9a0
     * @note[short] Android
     */
    void processOptionsTrigger(GameOptionsTrigger* p0);

    /**
     * @note[short] MacOS (ARM): 0x110124
     * @note[short] MacOS (Intel): 0x1369f0
     * @note[short] Windows: 0x228bf0
     * @note[short] iOS: 0x1fa734
     * @note[short] Android
     */
    void processPlayerFollowActions(float p0);

    /**
     * @note[short] MacOS (ARM): 0x11eb60
     * @note[short] MacOS (Intel): 0x1491f0
     * @note[short] Windows: 0x235550
     * @note[short] iOS: 0x204bdc
     * @note[short] Android
     */
    void processQueuedAudioTriggers();

    /**
     * @note[short] MacOS (ARM): 0x113650
     * @note[short] MacOS (Intel): 0x13af40
     * @note[short] Windows: 0x22c7f0
     * @note[short] iOS: 0x1fcb04
     * @note[short] Android
     */
    void processQueuedButtons();

    /**
     * @note[short] MacOS (ARM): 0x10f80c
     * @note[short] MacOS (Intel): 0x135f40
     * @note[short] Windows: 0x226510
     * @note[short] iOS: 0x1fa040
     * @note[short] Android
     */
    void processRotationActions();

    /**
     * @note[short] MacOS (ARM): 0xecce8
     * @note[short] MacOS (Intel): 0x10d2f0
     * @note[short] Windows: 0x23b480
     * @note[short] iOS: 0x1e36b8
     * @note[short] Android
     */
    void processSFXObjects();

    /**
     * @note[short] Android
     */
    TodoReturn processSFXState(SFXTriggerState* p0, SFXTriggerState* p1, int p2, float p3);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn processSongState(int p0, float p1, float p2, int p3, float p4, float p5, gd::vector<SongTriggerState>* p6, SongTriggerGameObject* p7);

    /**
     * @note[short] iOS: 0x1ec358
     * @note[short] Android
     */
    TodoReturn processStateObjects();

    /**
     * @note[short] MacOS (ARM): 0x10ecc4
     * @note[short] MacOS (Intel): 0x135010
     * @note[short] Windows: 0x2273a0
     * @note[short] iOS: 0x1f9698
     * @note[short] Android
     */
    void processTransformActions(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1134ec
     * @note[short] MacOS (Intel): 0x13ad90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fc9b8
     * @note[short] Android
     */
    void queueButton(int button, bool push, bool isPlayer2);

    /**
     * @note[short] MacOS (ARM): 0x108eb4
     * @note[short] MacOS (Intel): 0x12df20
     * @note[short] Android
     */
    void reAddToStickyGroup(GameObject* p0);

    /**
     * @note[short] iOS: 0x1fcfd8
     * @note[short] Android
     */
    void recordAction(int p0, bool p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn rectIntersectsCircle(cocos2d::CCRect p0, cocos2d::CCPoint p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x116204
     * @note[short] MacOS (Intel): 0x13e4c0
     * @note[short] Windows: 0x22fe50
     * @note[short] Android
     */
    void refreshCounterLabels();

    /**
     * @note[short] MacOS (ARM): 0xecb14
     * @note[short] MacOS (Intel): 0x10d100
     * @note[short] Windows: 0x22e580
     * @note[short] iOS: 0x1e34f4
     * @note[short] Android
     */
    void refreshKeyframeAnims();

    /**
     * @note[short] MacOS (ARM): 0xe7cb0
     * @note[short] MacOS (Intel): 0x106590
     * @note[short] iOS: 0x1e0dd0
     * @note[short] Android
     */
    void regenerateEnterEasingBuffers();

    /**
     * @note[short] Android: Rebinded
     */
    int registerSpawnRemap(gd::vector<ChanceObject>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn registerStateObject(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeBackground();

    /**
     * @note[short] Android
     */
    TodoReturn removeCustomEnterEffects(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x108584
     * @note[short] MacOS (Intel): 0x12d4c0
     * @note[short] Android
     */
    void removeFromGroupParents(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x107f34
     * @note[short] MacOS (Intel): 0x12ce70
     * @note[short] Windows: 0x21ed10
     * @note[short] Android
     */
    void removeFromGroups(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x108e28
     * @note[short] MacOS (Intel): 0x12de90
     * @note[short] Android
     */
    void removeFromStickyGroup(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xe5734
     * @note[short] MacOS (Intel): 0x1039d0
     * @note[short] Android
     */
    void removeGroundLayer();

    /**
     * @note[short] MacOS (ARM): 0x1080e8
     * @note[short] MacOS (Intel): 0x12d030
     * @note[short] Windows: 0x21f3e0
     * @note[short] iOS: 0x1f4208
     * @note[short] Android
     */
    void removeGroupParent(int p0);

    /**
     * @note[short] MacOS (ARM): 0x11410c
     * @note[short] MacOS (Intel): 0x13bae0
     * @note[short] Android
     */
    void removeKeyframe(KeyframeGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeMiddleground();

    /**
     * @note[short] MacOS (ARM): 0x109388
     * @note[short] MacOS (Intel): 0x12e500
     * @note[short] Windows: 0x221a80
     * @note[short] iOS: 0x1f4e48
     * @note[short] Android
     */
    void removeObjectFromSection(GameObject* p0);

    /**
     * @note[short] iOS: 0x1ebe04
     * @note[short] Android
     */
    TodoReturn removePlayer2();

    /**
     * @note[short] MacOS (ARM): 0x11e718
     * @note[short] MacOS (Intel): 0x148cb0
     * @note[short] Android
     */
    TodoReturn removeTemporaryParticles();

    /**
     * @note[short] iOS: 0x1ec7f4
     * @note[short] Android
     */
    void reorderObjectSection(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn reparentObject(cocos2d::CCNode* p0, cocos2d::CCNode* p1);

    /**
     * @note[short] MacOS (ARM): 0xed248
     * @note[short] MacOS (Intel): 0x10d800
     * @note[short] Windows: 0x209060
     * @note[short] iOS: 0x1e3a30
     * @note[short] Android
     */
    void resetActiveEnterEffects();

    /**
     * @note[short] Windows: 0x222950
     * @note[short] Android
     */
    int resetAreaObjectValues(GameObject* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x119004
     * @note[short] MacOS (Intel): 0x141e50
     * @note[short] Windows: 0x231fc0
     * @note[short] iOS: 0x2009f8
     * @note[short] Android
     */
    void resetAudio();

    /**
     * @note[short] MacOS (ARM): 0x11e7d4
     * @note[short] MacOS (Intel): 0x148d80
     * @note[short] Windows: 0x239570
     * @note[short] iOS: 0x2048f8
     * @note[short] Android
     */
    void resetCamera();

    /**
     * @note[short] Windows: 0x21bbf0
     * @note[short] Android
     */
    void resetGradientLayers();

    /**
     * @note[short] MacOS (ARM): 0x1164a0
     * @note[short] MacOS (Intel): 0x13e800
     * @note[short] iOS: 0x1fe998
     * @note[short] Android
     */
    void resetGroupCounters(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x11dcf0
     * @note[short] MacOS (Intel): 0x147d80
     * @note[short] Windows: 0x234ab0
     * @note[short] iOS: 0x2040bc
     * @note[short] Android
     */
    void resetLevelVariables();

    /**
     * @note[short] Android
     */
    TodoReturn resetMoveOptimizedValue();

    /**
     * @note[short] MacOS (ARM): 0xf2608
     * @note[short] MacOS (Intel): 0x112c30
     * @note[short] Windows: 0x20cbf0
     * @note[short] iOS: 0x1e71bc
     * @note[short] Android
     */
    void resetPlayer();

    /**
     * @note[short] Android
     */
    void resetSongTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x11ea94
     * @note[short] MacOS (Intel): 0x149100
     * @note[short] Windows: 0x23f890
     * @note[short] iOS: 0x204b10
     * @note[short] Android
     */
    TodoReturn resetSpawnChannelIndex();

    /**
     * @note[short] Windows: 0x239850
     * @note[short] Android
     */
    void resetStaticCamera(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn resetStoppedAreaObjects();

    /**
     * @note[short] Android
     */
    TodoReturn restoreAllUIObjects();

    /**
     * @note[short] Android
     */
    TodoReturn restoreDefaultGameplayOffsetX();

    /**
     * @note[short] Android
     */
    TodoReturn restoreDefaultGameplayOffsetY();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn restoreRemap(EffectGameObject* p0, gd::unordered_map<int, int>& p1);

    /**
     * @note[short] MacOS (ARM): 0x118fdc
     * @note[short] MacOS (Intel): 0x141e20
     * @note[short] Windows: 0x231eb0
     * @note[short] iOS: 0x2009d0
     * @note[short] Android: Out of line
     */
    void resumeAudio();

    /**
     * @note[short] Android
     */
    TodoReturn rotateAreaObjects(GameObject* p0, cocos2d::CCArray* p1, float p2, bool p3);

    /**
     * @note[short] Android
     */
    TodoReturn rotateObject(GameObject* p0, float p1);

    /**
     * @note[short] Windows: 0x226ec0
     * @note[short] Android
     */
    void rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, cocos2d::CCPoint p3, bool p4, bool p5);

    /**
     * @note[short] MacOS (ARM): 0x10842c
     * @note[short] MacOS (Intel): 0x12d370
     * @note[short] Windows: 0x21f2d0
     * @note[short] iOS: 0x1f4398
     * @note[short] Android
     */
    void setGroupParent(GameObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0xf2870
     * @note[short] MacOS (Intel): 0x112ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e7374
     * @note[short] Android
     */
    void setStartPosObject(StartPosObject* startPos);

    /**
     * @note[short] MacOS (ARM): 0xe24c4
     * @note[short] MacOS (Intel): 0x1003c0
     * @note[short] Windows: 0x203760
     * @note[short] iOS: 0x1dc590
     * @note[short] Android
     */
    void setupLayers();

    /**
     * @note[short] MacOS (ARM): 0xf28b8
     * @note[short] MacOS (Intel): 0x112f20
     * @note[short] Windows: 0x20cd60
     * @note[short] iOS: 0x1e73bc
     * @note[short] Android
     */
    void setupLevelStart(LevelSettingsObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x11cd28
     * @note[short] MacOS (Intel): 0x146c20
     * @note[short] Windows: 0x234360
     * @note[short] Android: Rebinded
     */
    void setupReplay(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x11f9ac
     * @note[short] MacOS (Intel): 0x14a270
     * @note[short] Windows: 0x2356c0
     * @note[short] iOS: 0x205614
     * @note[short] Android
     */
    void shakeCamera(float duration, float strength, float interval);

    /**
     * @note[short] MacOS (ARM): 0xe49d0
     * @note[short] MacOS (Intel): 0x102b90
     * @note[short] Windows: 0x205d10
     * @note[short] iOS: 0x1de628
     * @note[short] Android
     */
    bool shouldExitHackedLevel();

    /**
     * @note[short] Android
     */
    TodoReturn sortAllGroupsX();

    /**
     * @note[short] Windows: 0x21ef40
     * @note[short] iOS: 0x1e0e5c
     * @note[short] Android
     */
    void sortGroups();

    /**
     * @note[short] MacOS (ARM): 0x10a4a8
     * @note[short] MacOS (Intel): 0x12faf0
     * @note[short] Windows: 0x221cc0
     * @note[short] Android
     */
    void sortSectionVector();

    /**
     * @note[short] Windows: 0x21f650
     * @note[short] iOS: 0x1e2084
     * @note[short] Android
     */
    void sortStickyGroups();

    /**
     * @note[short] Android: Rebinded
     */
    void spawnGroupTriggered(int groupID, float p1, bool p2, gd::vector<int> const& p3, int p4, int p5);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn spawnObjectsInOrder(cocos2d::CCArray* p0, double p1, gd::vector<int> const& p2, int p3, int p4);

    /**
     * @note[short] MacOS (ARM): 0x120f7c
     * @note[short] MacOS (Intel): 0x14bf50
     * @note[short] Windows: 0x239d50
     * @note[short] iOS: 0x2064a4
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* spawnParticle(char const* plist, int zOrder, cocos2d::tCCPositionType positionType, cocos2d::CCPoint position);

    /**
     * @note[short] Android
     */
    TodoReturn spawnParticleTrigger(int p0, cocos2d::CCPoint p1, float p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0xf7520
     * @note[short] MacOS (Intel): 0x118670
     * @note[short] Android
     */
    void spawnParticleTrigger(SpawnParticleGameObject* p0);

    /**
     * @note[short] iOS: 0x1eb934
     * @note[short] Android
     */
    TodoReturn spawnPlayer2();

    /**
     * @note[short] MacOS (ARM): 0x107334
     * @note[short] MacOS (Intel): 0x12c1d0
     * @note[short] Windows: 0x21e250
     * @note[short] iOS: 0x1f36d4
     * @note[short] Android
     */
    cocos2d::CCPoint speedForShaderTarget(int p0);

    /**
     * @note[short] Windows: 0x20bda0
     * @note[short] Android
     */
    cocos2d::CCArray* staticObjectsInRect(cocos2d::CCRect p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn stopAllGroundActions();

    /**
     * @note[short] MacOS (ARM): 0x11fa34
     * @note[short] MacOS (Intel): 0x14a310
     * @note[short] iOS: 0x20569c
     * @note[short] Android
     */
    void stopCameraShake();

    /**
     * @note[short] Android
     */
    TodoReturn stopCustomEnterEffect(EnterEffectObject* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn stopCustomEnterEffect(EnterEffectObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn stopSFXTrigger(SFXTriggerGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn swapBackground(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn swapGround(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn swapMiddleground(int p0);

    /**
     * @note[short] MacOS (ARM): 0xf3300
     * @note[short] MacOS (Intel): 0x113ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e7904
     * @note[short] Android
     */
    void switchToFlyMode(PlayerObject* player, GameObject* object, bool unused, int type);

    /**
     * @note[short] MacOS (ARM): 0xf3504
     * @note[short] MacOS (Intel): 0x113cd0
     * @note[short] Windows: 0x20d760
     * @note[short] Android
     */
    void switchToRobotMode(PlayerObject* p0, GameObject* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0xf3458
     * @note[short] MacOS (Intel): 0x113c20
     * @note[short] Windows: 0x20d940
     * @note[short] Android
     */
    void switchToRollMode(PlayerObject* p0, GameObject* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0xf35b0
     * @note[short] MacOS (Intel): 0x113d80
     * @note[short] Windows: 0x20d850
     * @note[short] Android
     */
    void switchToSpiderMode(PlayerObject* p0, GameObject* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x11dbd8
     * @note[short] MacOS (Intel): 0x147c70
     * @note[short] Windows: 0x234a10
     * @note[short] iOS: 0x204004
     * @note[short] Android
     */
    void syncBGTextures();

    /**
     * @note[short] MacOS (ARM): 0xf00d8
     * @note[short] MacOS (Intel): 0x110400
     * @note[short] Windows: 0x20aa80
     * @note[short] iOS: 0x1e53a8
     * @note[short] Android
     */
    void teleportPlayer(TeleportPortalObject* p0, PlayerObject* p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn testInstantCountTrigger(int p0, int p1, int p2, bool p3, int p4, gd::vector<int> const& p5, int p6, int p7);

    /**
     * @note[short] MacOS (ARM): 0xe2354
     * @note[short] MacOS (Intel): 0x100250
     * @note[short] Windows: 0x242550
     * @note[short] iOS: 0x1dc3c8
     * @note[short] Android
     */
    void toggleAudioVisualizer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xf2fe8
     * @note[short] MacOS (Intel): 0x113770
     * @note[short] Windows: 0x2113f0
     * @note[short] iOS: 0x1e76c4
     * @note[short] Android
     */
    void toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0xf6954
     * @note[short] MacOS (Intel): 0x117af0
     * @note[short] Windows: 0x240240
     * @note[short] iOS: 0x1ea9b8
     * @note[short] Android
     */
    void toggleFlipped(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1078c4
     * @note[short] MacOS (Intel): 0x12c780
     * @note[short] Windows: 0x21e810
     * @note[short] Android
     */
    void toggleGroup(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x107cb0
     * @note[short] MacOS (Intel): 0x12cbe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleLockPlayer(bool disable, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x107c3c
     * @note[short] MacOS (Intel): 0x12cb50
     * @note[short] Android
     */
    void togglePlayerStreakBlend(bool p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void togglePlayerVisibility(bool visible, bool player1);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1feee8
     * @note[short] Android
     */
    void togglePlayerVisibility(bool visible);

    /**
     * @note[short] Android
     */
    TodoReturn transformAreaObjects(GameObject* p0, cocos2d::CCArray* p1, float p2, float p3, bool p4);

    /**
     * @note[short] Android
     */
    TodoReturn triggerAdvancedFollowCommand(AdvancedFollowTriggerObject* p0);

    /**
     * @note[short] Windows: 0x2297e0
     * @note[short] Android
     */
    TodoReturn triggerAdvancedFollowEditCommand(AdvancedFollowEditObject* p0);

    /**
     * @note[short] Windows: 0x221ee0
     * @note[short] Android
     */
    void triggerAreaEffect(EnterEffectObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn triggerAreaEffectAnimation(EnterEffectObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn triggerDynamicMoveCommand(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn triggerDynamicRotateCommand(EnhancedTriggerObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x104294
     * @note[short] MacOS (Intel): 0x128bc0
     * @note[short] Windows: 0x21a3a0
     * @note[short] Android
     */
    void triggerGradientCommand(GradientTriggerObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn triggerGravityChange(EffectGameObject* p0, int p1);

    /**
     * @note[short] Windows: 0x219690
     * @note[short] Android
     */
    void triggerMoveCommand(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn triggerRotateCommand(EnhancedTriggerObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x105a4c
     * @note[short] MacOS (Intel): 0x12a6a0
     * @note[short] Windows: 0x21bc80
     * @note[short] iOS: 0x1f27b0
     * @note[short] Android
     */
    void triggerShaderCommand(ShaderGameObject* p0);

    /**
     * @note[short] Windows: 0x21a110
     * @note[short] Android
     */
    void triggerTransformCommand(TransformTriggerGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn tryGetGroupParent(int p0);

    /**
     * @note[short] MacOS (ARM): 0xf8cc4
     * @note[short] MacOS (Intel): 0x11a040
     * @note[short] Windows: 0x21f170
     * @note[short] iOS: 0x1ec2b4
     * @note[short] Android
     */
    GameObject* tryGetMainObject(int p0);

    /**
     * @note[short] Windows: 0x21f1e0
     * @note[short] Android
     */
    TodoReturn tryGetObject(int p0);

    /**
     * @note[short] MacOS (ARM): 0x119024
     * @note[short] MacOS (Intel): 0x141e80
     * @note[short] Android
     */
    void tryResumeAudio();

    /**
     * @note[short] Android
     */
    TodoReturn unclaimParticle(char const* p0, cocos2d::CCParticleSystemQuad* p1);

    /**
     * @note[short] MacOS (ARM): 0x108c70
     * @note[short] MacOS (Intel): 0x12dcc0
     * @note[short] Windows: 0x21f8d0
     * @note[short] Android
     */
    void ungroupStickyObjects(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn unlinkAllEvents();

    /**
     * @note[short] Android
     */
    TodoReturn updateActiveEnterEffect(EnterEffectObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateAllObjectSection();

    /**
     * @note[short] Windows: 0x222bd0
     * @note[short] Android
     */
    void updateAreaObjectLastValues(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x11a1b0
     * @note[short] MacOS (Intel): 0x143430
     * @note[short] Windows: 0x2422f0
     * @note[short] iOS: 0x201760
     * @note[short] Android
     */
    void updateAudioVisualizer();

    /**
     * @note[short] MacOS (ARM): 0x11e5e0
     * @note[short] MacOS (Intel): 0x148a40
     * @note[short] Android
     */
    void updateBGArtSpeed(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x11a738
     * @note[short] MacOS (Intel): 0x143a60
     * @note[short] Windows: 0x235760
     * @note[short] iOS: 0x201b6c
     * @note[short] Android
     */
    void updateCamera(float p0);

    /**
     * @note[short] MacOS (ARM): 0x11fc80
     * @note[short] MacOS (Intel): 0x14a5c0
     * @note[short] Windows: 0x237ec0
     * @note[short] Android
     */
    void updateCameraBGArt(cocos2d::CCPoint p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateCameraEdge(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0xf39d4
     * @note[short] MacOS (Intel): 0x114180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e7dc8
     * @note[short] Android
     */
    void updateCameraMode(EffectGameObject* obj, bool updateDual);

    /**
     * @note[short] MacOS (ARM): 0x116e8c
     * @note[short] MacOS (Intel): 0x13f3e0
     * @note[short] Windows: 0x230810
     * @note[short] iOS: 0x1ff1a0
     * @note[short] Android
     */
    void updateCameraOffsetX(float p0, float p1, int p2, float p3, int p4, int p5);

    /**
     * @note[short] MacOS (ARM): 0x116f5c
     * @note[short] MacOS (Intel): 0x13f4e0
     * @note[short] Windows: 0x2308b0
     * @note[short] iOS: 0x1ff220
     * @note[short] Android
     */
    void updateCameraOffsetY(float p0, float p1, int p2, float p3, int p4, int p5);

    /**
     * @note[short] MacOS (ARM): 0xf9468
     * @note[short] MacOS (Intel): 0x11a8b0
     * @note[short] iOS: 0x1ec828
     * @note[short] Android
     */
    void updateCollisionBlocks();

    /**
     * @note[short] MacOS (ARM): 0x114398
     * @note[short] MacOS (Intel): 0x13bd80
     * @note[short] Windows: 0x22e760
     * @note[short] iOS: 0x1fd510
     * @note[short] Android
     */
    void updateCounters(int itemId, int value);

    /**
     * @note[short] MacOS (ARM): 0xf365c
     * @note[short] MacOS (Intel): 0x113e30
     * @note[short] Windows: 0x20dcc0
     * @note[short] iOS: 0x1e7b4c
     * @note[short] Android
     */
    void updateDualGround(PlayerObject* object, int mode, bool instant, float duration);

    /**
     * @note[short] MacOS (ARM): 0xedfd4
     * @note[short] MacOS (Intel): 0x10e8e0
     * @note[short] Windows: 0x209630
     * @note[short] Android
     */
    void updateEnterEffects(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateExtendedCollision(GameObject* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x107578
     * @note[short] MacOS (Intel): 0x12c410
     * @note[short] Windows: 0x21e4a0
     * @note[short] Android
     */
    void updateExtraGameLayers();

    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayOffsetX(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayOffsetY(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x104930
     * @note[short] MacOS (Intel): 0x129310
     * @note[short] Windows: 0x21a830
     * @note[short] iOS: 0x1f1910
     * @note[short] Android
     */
    void updateGradientLayers();

    /**
     * @note[short] Android
     */
    TodoReturn updateGroundShadows();

    /**
     * @note[short] MacOS (ARM): 0x11a0e0
     * @note[short] MacOS (Intel): 0x143360
     * @note[short] Windows: 0x240130
     * @note[short] iOS: 0x201694
     * @note[short] Android
     */
    void updateGuideArt();

    /**
     * @note[short] Android
     */
    TodoReturn updateInternalCamOffsetX(float p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn updateInternalCamOffsetY(float p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x11403c
     * @note[short] MacOS (Intel): 0x13b9d0
     * @note[short] Windows: 0x22e4b0
     * @note[short] iOS: 0x1fd218
     * @note[short] Android
     */
    void updateKeyframeOrder(int p0);

    /**
     * @note[short] iOS: 0x1df99c
     * @note[short] Android: Rebinded
     */
    TodoReturn updateLayerCapacity(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateLegacyLayerCapacity(int p0, int p1, int p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0xe5144
     * @note[short] MacOS (Intel): 0x103350
     * @note[short] Windows: 0x207150
     * @note[short] iOS: 0x1dec94
     * @note[short] Android
     */
    void updateLevelColors();

    /**
     * @note[short] MacOS (ARM): 0x11da78
     * @note[short] MacOS (Intel): 0x147b20
     * @note[short] Windows: 0x234930
     * @note[short] iOS: 0x203ec4
     * @note[short] Android
     */
    void updateMaxGameplayY();

    /**
     * @note[short] Android
     */
    TodoReturn updateMGArtSpeed(float p0, float p1);

    /**
     * @note[short] Windows: 0x230950
     * @note[short] Android
     */
    void updateMGOffsetY(float p0, float p1, int p2, float p3, int p4, int p5);

    /**
     * @note[short] Android
     */
    TodoReturn updateOBB2(cocos2d::CCRect p0);

    /**
     * @note[short] Android
     */
    void updateParticles(float p0);

    /**
     * @note[short] Windows: 0x233bd0
     * @note[short] iOS: 0x203714
     * @note[short] Android
     */
    void updatePlatformerTime();

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerCollisionBlocks();

    /**
     * @note[short] MacOS (ARM): 0x11c754
     * @note[short] MacOS (Intel): 0x1465c0
     * @note[short] Windows: 0x23bd90
     * @note[short] iOS: 0x2035d4
     * @note[short] Android
     */
    void updateProximityVolumeEffects();

    /**
     * @note[short] iOS: 0x1fe760
     * @note[short] Android
     */
    TodoReturn updateQueuedLabels();

    /**
     * @note[short] Android
     */
    TodoReturn updateReplay();

    /**
     * @note[short] MacOS (ARM): 0xfa338
     * @note[short] MacOS (Intel): 0x11b8b0
     * @note[short] iOS: 0x1ed350
     * @note[short] Android
     */
    void updateSavePositionObjects();

    /**
     * @note[short] MacOS (ARM): 0x1060a8
     * @note[short] MacOS (Intel): 0x12b040
     * @note[short] Windows: 0x21cf00
     * @note[short] iOS: 0x1f2de8
     * @note[short] Android
     */
    void updateShaderLayer(float p0);

    /**
     * @note[short] MacOS (ARM): 0xe7ae4
     * @note[short] MacOS (Intel): 0x106390
     * @note[short] Windows: 0x208c00
     * @note[short] iOS: 0x1e0c74
     * @note[short] Android
     */
    void updateSpecialGroupData();

    /**
     * @note[short] MacOS (ARM): 0x11c338
     * @note[short] MacOS (Intel): 0x146070
     * @note[short] Windows: 0x2338f0
     * @note[short] iOS: 0x20334c
     * @note[short] Android
     */
    void updateSpecialLabels();

    /**
     * @note[short] MacOS (ARM): 0xf40c8
     * @note[short] MacOS (Intel): 0x114990
     * @note[short] Windows: 0x238ca0
     * @note[short] iOS: 0x1e8330
     * @note[short] Android
     */
    void updateStaticCameraPos(cocos2d::CCPoint pos, bool staticX, bool staticY, bool followOrSmoothEase, float time, int easingType, float easingRate);

    /**
     * @note[short] Windows: 0x2388b0
     * @note[short] Android
     */
    TodoReturn updateStaticCameraPosToGroup(int p0, bool p1, bool p2, bool p3, float p4, float p5, int p6, float p7, bool p8, float p9);

    /**
     * @note[short] iOS: 0x1e7bf4
     * @note[short] Android
     */
    TodoReturn updateTimeMod(float p0, bool p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x115c94
     * @note[short] MacOS (Intel): 0x13dda0
     * @note[short] Windows: 0x22fae0
     * @note[short] iOS: 0x1fe480
     * @note[short] Android
     */
    void updateTimerLabels();

    /**
     * @note[short] MacOS (ARM): 0x116b6c
     * @note[short] MacOS (Intel): 0x13f010
     * @note[short] Windows: 0x230590
     * @note[short] iOS: 0x1fef38
     * @note[short] Android
     */
    void updateZoom(float zoom, float duration, int easing, float rate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x127f6c
     * @note[short] MacOS (Intel): 0x154340
     * @note[short] Windows: 0x241d30
     * @note[short] Android
     */
    void visitWithColorFlash();

    /**
     * @note[short] Windows: 0x23c060
     * @note[short] Android
     */
    float volumeForProximityEffect(SFXTriggerInstance& p0);
    GEODE_PAD(8);
    GJGameState m_gameState;
    GJGameLevel* m_level;
    PlaybackMode m_playbackMode;
    bool m_lowDetailMode;
    bool m_extraLDM;
    bool m_ignoreDamage;
    bool m_enable22Changes;
    bool m_allowStaticRotate;
    bool m_fixNegativeScale;
    bool m_startingFromBeginning;
    gd::vector<SFXTriggerGameObject*> m_activeSfxTriggers;
    gd::vector<void*> m_unk8a0;
    cocos2d::CCNode* m_hoverNode;
    cocos2d::CCNode* m_areaTransformNode;
    cocos2d::CCNode* m_areaSkewNode;
    cocos2d::CCNode* m_areaScaleNode;
    cocos2d::CCNode* m_areaRotateNode;
    cocos2d::CCNode* m_areaTransformNode2;
    OBB2D* m_obb2;
    gd::vector<gd::unordered_map<int,int>> m_spawnRemapTriggers;
    gd::unordered_map<int, cocos2d::CCPoint> m_uiObjectPositions;
    GJEffectManager* m_effectManager;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_gameLayerT4;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_glowLayerT4;
    CCNodeContainer* m_specialLayerT4;
    cocos2d::CCSpriteBatchNode* m_textLayerT4;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_fireLayerT4;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT4;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_particleLayerT4;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_game2LayerT4;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_gameLayerT3;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_glowLayerT3;
    CCNodeContainer* m_specialLayerT3;
    cocos2d::CCSpriteBatchNode* m_textLayerT3;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_fireLayerT3;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT3;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_particleLayerT3;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_game2LayerT3;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_gameLayerT2;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_glowLayerT2;
    CCNodeContainer* m_specialLayerT2;
    cocos2d::CCSpriteBatchNode* m_textLayerT2;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_fireLayerT2;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT2;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_particleLayerT2;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_game2LayerT2;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_gameLayerT1;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_glowLayerT1;
    CCNodeContainer* m_specialLayerT1;
    cocos2d::CCSpriteBatchNode* m_textLayerT1;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_fireLayerT1;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT1;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_particleLayerT1;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_game2LayerT1;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_game2LayerB0;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_gameLayerB1;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_glowLayerB1;
    CCNodeContainer* m_specialLayerB1;
    cocos2d::CCSpriteBatchNode* m_textLayerB1;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_fireLayerB1;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB1;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_particleLayerB1;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_game2LayerB1;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_gameLayerB2;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_glowLayerB2;
    CCNodeContainer* m_specialLayerB2;
    cocos2d::CCSpriteBatchNode* m_textLayerB2;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_fireLayerB2;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB2;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_particleLayerB2;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_game2LayerB2;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_gameLayerB3;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_glowLayerB3;
    CCNodeContainer* m_specialLayerB3;
    cocos2d::CCSpriteBatchNode* m_textLayerB3;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_fireLayerB3;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB3;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_particleLayerB3;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_game2LayerB3;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_gameLayerB4;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_glowLayerB4;
    CCNodeContainer* m_specialLayerB4;
    cocos2d::CCSpriteBatchNode* m_textLayerB4;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_fireLayerB4;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB4;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_particleLayerB4;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_game2LayerB4;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_gameLayerB5;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_glowLayerB5;
    CCNodeContainer* m_specialLayerB5;
    cocos2d::CCSpriteBatchNode* m_textLayerB5;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_fireLayerB5;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB5;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_particleLayerB5;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_game2LayerB5;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB5;
    PlayerObject* m_player1;
    PlayerObject* m_player2;
    LevelSettingsObject* m_levelSettings;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_collisionBlocks;
    cocos2d::CCArray* m_spawnObjectsArray;
    cocos2d::CCDictionary* m_spawnObjects;
    cocos2d::CCNode* m_unkdd0;
    gd::vector<GameObject*> m_unkdd8;
    gd::vector<GameObject*> m_disabledObjects;
    gd::vector<GameObject*> m_unke08;
    gd::vector<GameObject*> m_areaObjects;
    gd::vector<GameObject*> m_processedAreaObjects;
    gd::unordered_map<int, gd::vector<GameObject*>> m_visibilityGroups;
    gd::vector<GameObject*> m_visibleObjects;
    int m_visibleObjectsCount;
    int m_visibleObjectsIndex;
    gd::vector<GameObject*> m_visibleObjects2;
    int m_visibleObjects2Count;
    int m_visibleObjects2Index;
    int m_unked0;
    int m_disabledObjectsCount;
    int m_unked8;
    int m_areaObjectsCount;
    int m_processedAreaObjectsCount;
    int m_unkee4;
    int m_disabledObjectsIndex;
    int m_unkeec;
    int m_areaObjectsIndex;
    int m_processedAreaObjectsIndex;
    cocos2d::CCDictionary* m_groupDict;
    cocos2d::CCDictionary* m_staticGroupDict;
    cocos2d::CCDictionary* m_optimizedGroupDict;
    gd::vector<cocos2d::CCArray*> m_groups;
    gd::vector<cocos2d::CCArray*> m_staticGroups;
    gd::vector<cocos2d::CCArray*> m_optimizedGroups;
    cocos2d::CCDictionary* m_parentGroupsDict;
    cocos2d::CCDictionary* m_parentGroupIDs;
    cocos2d::CCDictionary* m_removedParentGroupIDs;
    cocos2d::CCArray* m_targetGroupsArray;
    gd::unordered_map<int, std::pair<int, int>> m_targetGroups;
    cocos2d::CCDictionary* m_linkedGroupDict;
    int m_lastUsedLinkedID;
    cocos2d::CCNode* m_objectParent;
    cocos2d::CCNode* m_inShaderParent;
    cocos2d::CCNode* m_aboveShaderParent;
    cocos2d::CCLayer* m_objectLayer;
    cocos2d::CCLayer* m_inShaderObjectLayer;
    cocos2d::CCLayer* m_aboveShaderObjectLayer;
    cocos2d::CCSprite* m_background;
    void* m_unk1000;
    GJGroundLayer* m_groundLayer;
    GJGroundLayer* m_groundLayer2;
    GJMGLayer* m_middleground;
    cocos2d::CCArray* m_batchNodes;
    cocos2d::CCDictionary* m_objectsToDeactivate;
    gd::unordered_map<int, gd::vector<LabelGameObject*>> m_labelObjects;
    gd::unordered_map<int, gd::vector<LabelGameObject*>> m_timeLabelObjects;
    gd::set<std::tuple<int, int, int>> m_spawnTuples;
    bool m_increasedLayerCapacity;
    std::array<float, 2000> m_varianceValues;
    gd::map<std::pair<int, int>, std::pair<float, float>> m_destroyObjectValues;
    gd::vector<float> m_enterEasingValues;
    gd::unordered_map<int, int> m_enterEasingIndices;
    int m_enterEasingValuesIndex;
    bool m_dualTouchTrigger;
    int m_clicks;
    int m_attempts;
    bool m_jumping;
    int m_leftSectionIndex;
    int m_rightSectionIndex;
    int m_bottomSectionIndex;
    int m_topSectionIndex;
    bool m_isEditor;
    bool m_blending;
    bool m_isPlatformer;
    GameObject* m_player1CollisionBlock;
    GameObject* m_player2CollisionBlock;
    int m_particleCount;
    int m_customParticleCount;
    int m_particleSystemLimit;
    cocos2d::CCDictionary* m_particlesDict;
    cocos2d::CCDictionary* m_customParticles;
    cocos2d::CCArray* m_unclaimedParticles;
    gd::unordered_map<int, gd::string> m_particleCountToParticleString;
    cocos2d::CCDictionary* m_claimedParticles;
    cocos2d::CCArray* m_temporaryParticles;
    gd::unordered_set<int> m_customParticlesUIDs;
    cocos2d::CCDictionary* m_gradientLayers;
    int m_activeGradients;
    ShaderLayer* m_shaderLayer;
    bool m_objectsDeactivated;
    bool m_areaObjectsUpdated;
    StartPosObject* m_startPosObject;
    bool m_useReplay;
    bool m_unk3189;
    int m_solidCollisionObjectsCount;
    int m_solidCollisionObjectsIndex;
    gd::vector<GameObject*> m_solidCollisionObjects;
    int m_hazardCollisionObjectsCount;
    int m_hazardCollisionObjectsIndex;
    gd::vector<GameObject*> m_hazardCollisionObjects;
    gd::vector<SequenceTriggerGameObject*> m_sequenceTriggers;
    bool m_isPracticeMode;
    bool m_practiceMusicSync;
    float m_loadingProgress;
    cocos2d::CCNode* m_flashNode;
    float m_unk31f8;
    float m_cameraFlip;
    float m_cameraWidthOffset;
    float m_cameraHeightOffset;
    bool m_updateGroundShadows;
    cocos2d::CCDictionary* m_collectedItems;
    float m_levelLength;
    bool m_resetActiveObjects;
    bool m_skipArtReload;
    EndPortalObject* m_endPortal;
    bool m_isTestMode;
    bool m_freezeStartCamera;
    bool m_unk322a;
    float m_cameraUnzoomedHeightOffset;
    float m_targetCameraHeightOffset;
    bool m_calculateTargetHeightOffset;
    cocos2d::CCParticleSystemQuad* m_glitterParticles;
    bool m_staticCameraShake;
    bool m_skipCameraShake;
    bool m_playerDied;
    double m_extraDelta;
    bool m_started;
    bool m_unk3251;
    float m_cameraWidth;
    float m_cameraHeight;
    float m_cameraUnzoomedX;
    float m_cameraX;
    AudioEffectsLayer* m_audioEffectsLayer;
    OBB2D* m_cameraObb2;
    gd::vector<GameObject*> m_activeObjects;
    int m_activeObjectsCount;
    int m_activeObjectsIndex;
    cocos2d::ccColor3B m_backgroundColor;
    int m_resumeTimer;
    bool m_recordInputs;
    bool m_unk32a1;
    bool m_unk32a2;
    bool m_unk32a3;
    bool m_unk32a4;
    gd::string m_recordString;
    cocos2d::CCObject* m_unk32c8;
    int m_unk32d0;
    bool m_unk32d4;
    double m_queueInterval;
    uint64_t m_coinsCollected;
    int m_replayRandSeed;
    int m_unk32ec;
    int m_currentStep;
    gd::vector<PlayerButtonCommand> m_queuedButtons;
    gd::vector<PlayerButtonCommand> m_queuedRecordedButtons;
    gd::vector<PlayerButtonCommand> m_queuedReplayButtons;
    gd::vector<void*> m_unk3340;
    gd::vector<void*> m_unk3358;
    int m_queuedRecordedButtonsSize;
    bool m_portalIndicators;
    bool m_orbIndicators;
    cocos2d::CCArray* m_indicatorSprites;
    float m_unk3380;
    gd::vector<int> m_unk3388;
    gd::vector<int> m_unk33a0;
    bool m_hideGround;
    cocos2d::CCArray* m_unk33c0;
    cocos2d::CCArray* m_objectsToMove;
    gd::unordered_map<int, GameObject*> m_savePositionObjects;
    gd::unordered_map<int, int> m_savePositionValues;
    bool m_keepGroupParents;
    cocos2d::CCDictionary* m_keyframeGroups;
    int m_keyframeGroup;
    UILayer* m_uiLayer;
    cocos2d::CCArray* m_uiObjects;
    cocos2d::CCDictionary* m_uiObjectLayers;
    cocos2d::CCNode* m_uiTriggerUI;
    double m_timePlayed;
    bool m_levelEndAnimationStarted;
    int m_points;
    gd::string m_pointsString;
    gd::vector<gd::vector<gd::vector<GameObject*>*>*> m_sections;
    gd::vector<gd::vector<gd::vector<GameObject*>*>*> m_nonEffectObjects;
    gd::vector<gd::vector<GameObject*>*> m_collisionBlockSections;
    gd::vector<GameObject*> m_calcNonEffectObjects;
    int m_calcNonEffectObjectsSize;
    gd::vector<GameObject*> m_calcCollisionBlockObjects;
    int m_calcCollisionBlockObjectsSize;
    gd::vector<GameObject*> m_calcCollisionBlockObjects2;
    int m_calcCollisionBlockObjects2Size;
    gd::vector<gd::vector<int>*> m_sectionSizes;
    gd::vector<gd::vector<int>*> m_nonEffectObjectsSizes;
    gd::vector<gd::vector<int>*> m_collisionBlockSectionSizes;
    gd::vector<gd::vector<bool>*> m_nonEffectObjectsFlags;
    float m_sectionXFactor;
    float m_sectionYFactor;
    float m_maxGameplayY;
    float m_songTriggerInterval;
    gd::unordered_map<int, int> m_stickyGroups;
    FMODLevelVisualizer* m_audioVisualizerBG;
    FMODLevelVisualizer* m_audioVisualizerSFX;
    bool m_showAudioVisualizer;
    int m_areaMovedCount;
    int m_areaScaledCount;
    int m_areaRotatedCount;
    int m_areaColorCount;
    int m_areaMovedCountTotal;
    int m_areaScaledCountTotal;
    int m_areaRotatedCountTotal;
    int m_areaColorCountTotal;
    int m_movedCount;
    int m_scaledCount;
    int m_rotatedCount;
    int m_followedCount;
    int m_areaMovedCountDisplay;
    int m_areaScaledCountDisplay;
    int m_areaRotatedCountDisplay;
    int m_areaColorCountDisplay;
    int m_areaMovedCountTotalDisplay;
    int m_areaScaledCountTotalDisplay;
    int m_areaRotatedCountTotalDisplay;
    int m_areaColorCountTotalDisplay;
    int m_movedCountDisplay;
    int m_scaledCountDisplay;
    int m_rotatedCountDisplay;
    int m_followedCountDisplay;
    bool m_loadingStartPosition;
    bool m_processingAudioTriggers;
    bool m_audioPaused;
    bool m_startOptimization;
    GJGameLoadingLayer* m_loadingLayer;
    cocos2d::CCDrawNode* m_debugDrawNode;
    std::array<cocos2d::CCPoint, 400>* m_debugDrawPoints;
    bool m_isDebugDrawEnabled;
    bool m_disablePlayerHitbox;
    GameObject* m_anticheatSpike;
};
