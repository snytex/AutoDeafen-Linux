#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include <fmod.hpp>
#include "FMODAudioState.hpp"
#include "FMODSoundState.hpp"
#include "FMODMusic.hpp"
#include "FMODSound.hpp"
#include "FMODQueuedEffect.hpp"
#include "FMODQueuedMusic.hpp"
#include "FMODSoundTween.hpp"

class FMODAudioEngine : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODAudioEngine";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODAudioEngine, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x530d0
     * @note[short] iOS: 0x142378
     * @note[short] Android: Out of line
     */
     FMODAudioEngine();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FMODAudioEngine* get();

    /**
     * @note[short] MacOS (ARM): 0x352964
     * @note[short] MacOS (Intel): 0x3c9e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13b0c8
     * @note[short] Android
     */
    static FMODAudioEngine* sharedEngine();

    /**
     * @note[short] MacOS (ARM): 0x3542a0
     * @note[short] MacOS (Intel): 0x3cc160
     * @note[short] Windows: 0x55390
     * @note[short] iOS: 0x13becc
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Android
     */
    void activateQueuedMusic(int p0);

    /**
     * @note[short] MacOS (ARM): 0x355668
     * @note[short] MacOS (Intel): 0x3cd8a0
     * @note[short] Windows: 0x58480
     * @note[short] Android
     */
    FMOD::Channel* channelForChannelID(int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    FMOD::Channel* channelForUniqueID(int id);

    /**
     * @note[short] Windows: 0x583c0
     * @note[short] Android
     */
    int channelIDForUniqueID(int p0);

    /**
     * @note[short] Android
     */
    void channelLinkSound(int p0, FMODSound* p1);

    /**
     * @note[short] Windows: 0x580b0
     * @note[short] Android
     */
    void channelStopped(FMOD::Channel* p0, bool p1);

    /**
     * @note[short] Windows: 0x57e20
     * @note[short] Android
     */
    void channelUnlinkSound(int p0);

    /**
     * @note[short] MacOS (ARM): 0x353b90
     * @note[short] MacOS (Intel): 0x3cb330
     * @note[short] Windows: 0x552e0
     * @note[short] iOS: 0x13bbd4
     * @note[short] Android
     */
    void clearAllAudio();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int countActiveEffects();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int countActiveMusic();

    /**
     * @note[short] Windows: 0x5cb70
     * @note[short] Android: Rebinded
     */
    FMOD::Sound* createStream(gd::string p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13e688
     * @note[short] Android: Out of line
     */
    void disableMetering();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13e668
     * @note[short] Android: Out of line
     */
    void enableMetering();

    /**
     * @note[short] MacOS (ARM): 0x35ad28
     * @note[short] MacOS (Intel): 0x3d4840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x140238
     * @note[short] Android
     */
    void fadeInBackgroundMusic(float value);

    /**
     * @note[short] MacOS (ARM): 0x35b38c
     * @note[short] MacOS (Intel): 0x3d4f80
     * @note[short] Windows: 0x5c3c0
     * @note[short] iOS: 0x1406b8
     * @note[short] Android
     */
    void fadeInMusic(float p0, int p1);

    /**
     * @note[short] Windows: 0x5c640
     * @note[short] Android
     */
    void fadeMusic(float p0, int p1, float p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0x35d940
     * @note[short] MacOS (Intel): 0x3d7e20
     * @note[short] Windows: 0x5c500
     * @note[short] iOS: 0x141e24
     * @note[short] Android
     */
    void fadeOutMusic(float p0, int p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    gd::string getActiveMusic(int id);

    /**
     * @note[short] MacOS (ARM): 0x356984
     * @note[short] MacOS (Intel): 0x3cf390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13d850
     * @note[short] Android
     */
    FMOD::Channel* getActiveMusicChannel(int musicID);

    /**
     * @note[short] MacOS (ARM): 0x35ad68
     * @note[short] MacOS (Intel): 0x3d4880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x140278
     * @note[short] Android
     */
    float getBackgroundMusicVolume();

    /**
     * @note[short] MacOS (ARM): 0x358208
     * @note[short] MacOS (Intel): 0x3d1240
     * @note[short] Windows: 0x56b20
     * @note[short] Android
     */
    FMOD::ChannelGroup* getChannelGroup(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    float getEffectsVolume();

    /**
     * @note[short] MacOS (ARM): 0x35dce4
     * @note[short] MacOS (Intel): 0x3d82b0
     * @note[short] Windows: 0x5cdb0
     * @note[short] Android
     */
    gd::string getFMODStatus(int p0);

    /**
     * @note[short] MacOS (ARM): 0x35805c
     * @note[short] MacOS (Intel): 0x3d10a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    float getMeteringValue();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getMusicChannelID(int musicID);

    /**
     * @note[short] Windows: 0x5c330
     * @note[short] iOS: 0x141b44
     * @note[short] Android
     */
    unsigned int getMusicLengthMS(int channel);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    float getMusicTime(int channel);

    /**
     * @note[short] MacOS (ARM): 0x35d310
     * @note[short] MacOS (Intel): 0x3d7660
     * @note[short] Windows: 0x5c2d0
     * @note[short] iOS: 0x141ab4
     * @note[short] Android
     */
    unsigned int getMusicTimeMS(int channel);

    /**
     * @note[short] Android
     */
    int getNextChannelID();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    gd::map<std::pair<int, int>, FMODSoundTween>& getTweenContainer(AudioTargetType type);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isAnyPersistentPlaying();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isChannelStopping(int channel);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isEffectLoaded(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x35aeb0
     * @note[short] MacOS (Intel): 0x3d4a20
     * @note[short] Windows: 0x59ee0
     * @note[short] Android: Rebinded
     */
    bool isMusicPlaying(gd::string path, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x35ada4
     * @note[short] MacOS (Intel): 0x3d48f0
     * @note[short] Windows: 0x59d00
     * @note[short] iOS: 0x1402b4
     * @note[short] Android
     */
    bool isMusicPlaying(int musicID);

    /**
     * @note[short] Windows: 0x5ad50
     * @note[short] Android: Rebinded
     */
    bool isPersistentMatchPlaying(gd::string p0, int p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isSoundReady(FMOD::Sound* sound);

    /**
     * @note[short] Windows: 0x599d0
     * @note[short] Android: Rebinded
     */
    int lengthForSound(gd::string path);

    /**
     * @note[short] Windows: 0x5a010
     * @note[short] Android: Rebinded
     */
    void loadAndPlayMusic(gd::string p0, unsigned int p1, int p2);

    /**
     * @note[short] Windows: 0x55f20
     * @note[short] Android
     */
    void loadAudioState(FMODAudioState& p0);

    /**
     * @note[short] MacOS (ARM): 0x356464
     * @note[short] MacOS (Intel): 0x3ced40
     * @note[short] Windows: 0x5a280
     * @note[short] iOS: 0x13d3f4
     * @note[short] Android: Rebinded
     */
    void loadMusic(gd::string path, float speed, float p2, float volume, bool shouldLoop, int musicID, int channelID, bool dontReset);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void loadMusic(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x353afc
     * @note[short] MacOS (Intel): 0x3cb290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13bb40
     * @note[short] Android
     */
    void pauseAllAudio();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void pauseAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x35ade0
     * @note[short] MacOS (Intel): 0x3d4930
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1402f0
     * @note[short] Android
     */
    void pauseAllMusic(bool force);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void pauseEffect(unsigned int p0);

    /**
     * @note[short] MacOS (ARM): 0x35d91c
     * @note[short] MacOS (Intel): 0x3d7e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void pauseMusic(int musicChannel);

    /**
     * @note[short] Windows: 0x569b0
     * @note[short] iOS: 0x13e698
     * @note[short] Android
     */
    static float pitchForIdx(int p0);

    /**
     * @note[short] MacOS (ARM): 0x358870
     * @note[short] MacOS (Intel): 0x3d1ba0
     * @note[short] Windows: 0x56e10
     * @note[short] iOS: 0x13ea50
     * @note[short] Android: Rebinded
     */
    int playEffect(gd::string path, float speed, float p2, float volume);

    /**
     * @note[short] MacOS (ARM): 0x3587c0
     * @note[short] MacOS (Intel): 0x3d1b10
     * @note[short] Windows: 0x56d90
     * @note[short] iOS: 0x13e9b4
     * @note[short] Android: Rebinded
     */
    int playEffect(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x356ac0
     * @note[short] MacOS (Intel): 0x3cf550
     * @note[short] Windows: 0x56f00
     * @note[short] iOS: 0x13d8c4
     * @note[short] Android: Rebinded
     */
    int playEffectAdvanced(gd::string path, float speed, float p2, float volume, float pitch, bool fastFourierTransform, bool reverb, int startMillis, int endMillis, int fadeIn, int fadeOut, bool loopEnabled, int effectID, bool override, bool noPreload, int channelID, int uniqueID, float minInterval, int sfxGroup);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int playEffectAsync(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x35b20c
     * @note[short] MacOS (Intel): 0x3d4dc0
     * @note[short] Windows: 0x5a110
     * @note[short] iOS: 0x1405b0
     * @note[short] Android: Rebinded
     */
    void playMusic(gd::string path, bool shouldLoop, float fadeInTime, int channel);

    /**
     * @note[short] MacOS (ARM): 0x3531c4
     * @note[short] MacOS (Intel): 0x3ca980
     * @note[short] Windows: 0x59260
     * @note[short] iOS: 0x13b644
     * @note[short] Android: Rebinded
     */
    FMODSound* preloadEffect(gd::string path);

    /**
     * @note[short] Windows: 0x59650
     * @note[short] Android: Rebinded
     */
    FMOD::Sound* preloadEffectAsync(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x35b618
     * @note[short] MacOS (Intel): 0x3d5220
     * @note[short] Windows: 0x5c790
     * @note[short] iOS: 0x1408d0
     * @note[short] Android: Rebinded
     */
    FMOD::Sound* preloadMusic(gd::string path, bool noRelease, int musicID);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void printResult(FMOD_RESULT p0);

    /**
     * @note[short] Windows: 0x5b070
     * @note[short] Android: Rebinded
     */
    void queuedEffectFinishedLoading(gd::string p0);

    /**
     * @note[short] Windows: 0x57920
     * @note[short] Android: Rebinded
     */
    int queuePlayEffect(gd::string audioFilename, float speed, float p2, float volume, float pitch, bool fastFourierTransform, bool reverb, int start, int end, int fadeIn, int fadeOut, bool loop, int effectID, bool override, int uniqueID, float minInterval, int group);

    /**
     * @note[short] MacOS (ARM): 0x35bdb8
     * @note[short] MacOS (Intel): 0x3d5af0
     * @note[short] Windows: 0x5aa70
     * @note[short] iOS: 0x140e60
     * @note[short] Android: Rebinded
     */
    void queueStartMusic(gd::string audioFilename, float pitch, float p2, float volume, bool loop, int start, int end, int fadeIn, int fadeOut, int musicID, bool p10, int channelID, bool noPrepare, bool dontReset);

    /**
     * @note[short] Windows: 0x57af0
     * @note[short] Android
     */
    int registerChannel(FMOD::Channel* p0, int p1, int p2);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void releaseRemovedSounds();

    /**
     * @note[short] MacOS (ARM): 0x353b48
     * @note[short] MacOS (Intel): 0x3cb2e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13bb8c
     * @note[short] Android
     */
    void resumeAllAudio();

    /**
     * @note[short] MacOS (ARM): 0x35aa2c
     * @note[short] MacOS (Intel): 0x3d44b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x140064
     * @note[short] Android
     */
    void resumeAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x35ae5c
     * @note[short] MacOS (Intel): 0x3d49c0
     * @note[short] Windows: 0x59e80
     * @note[short] iOS: 0x14034c
     * @note[short] Android
     */
    void resumeAllMusic();

    /**
     * @note[short] MacOS (ARM): 0x3539c0
     * @note[short] MacOS (Intel): 0x3cb150
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeAudio();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void resumeEffect(unsigned int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeMusic(int musicChannel);

    /**
     * @note[short] MacOS (ARM): 0x353648
     * @note[short] MacOS (Intel): 0x3caea0
     * @note[short] Windows: 0x54cc0
     * @note[short] Android
     */
    static gd::string reverbToString(FMODReverbPreset p0);

    /**
     * @note[short] Windows: 0x558f0
     * @note[short] Android
     */
    void saveAudioState(FMODAudioState& p0);

    /**
     * @note[short] MacOS (ARM): 0x35ad70
     * @note[short] MacOS (Intel): 0x3d4890
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x140280
     * @note[short] Android
     */
    void setBackgroundMusicVolume(float volume);

    /**
     * @note[short] MacOS (ARM): 0x357f14
     * @note[short] MacOS (Intel): 0x3d0f40
     * @note[short] Windows: 0x59150
     * @note[short] iOS: 0x13e554
     * @note[short] Android
     */
    void setChannelPitch(int p0, AudioTargetType p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x357d38
     * @note[short] MacOS (Intel): 0x3d0d50
     * @note[short] Windows: 0x58db0
     * @note[short] iOS: 0x13e378
     * @note[short] Android
     */
    void setChannelVolume(int p0, AudioTargetType p1, float p2);

    /**
     * @note[short] Windows: 0x58f80
     * @note[short] Android
     */
    void setChannelVolumeMod(int p0, AudioTargetType p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x35ad90
     * @note[short] MacOS (Intel): 0x3d48d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1402a0
     * @note[short] Android
     */
    void setEffectsVolume(float volume);

    /**
     * @note[short] MacOS (ARM): 0x357488
     * @note[short] MacOS (Intel): 0x3d0290
     * @note[short] Windows: 0x5c190
     * @note[short] iOS: 0x13e06c
     * @note[short] Android
     */
    void setMusicTimeMS(unsigned int p0, bool p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x352b4c
     * @note[short] MacOS (Intel): 0x3ca220
     * @note[short] Windows: 0x53bc0
     * @note[short] iOS: 0x13b128
     * @note[short] Android
     */
    void setup();

    /**
     * @note[short] MacOS (ARM): 0x352f40
     * @note[short] MacOS (Intel): 0x3ca670
     * @note[short] Windows: 0x540a0
     * @note[short] iOS: 0x13b3b4
     * @note[short] Android
     */
    void setupAudioEngine();

    /**
     * @note[short] Windows: 0x55280
     * @note[short] Android
     */
    void start();

    /**
     * @note[short] Windows: 0x5a5f0
     * @note[short] Android
     */
    void startMusic(int start, int end, int fadeIn, int fadeOut, bool loop, int musicID, bool noResume, bool dontReset);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void stop();

    /**
     * @note[short] MacOS (ARM): 0x353c3c
     * @note[short] MacOS (Intel): 0x3cb410
     * @note[short] Windows: 0x598b0
     * @note[short] iOS: 0x13bc58
     * @note[short] Android
     */
    void stopAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x353f28
     * @note[short] MacOS (Intel): 0x3cbbf0
     * @note[short] Windows: 0x59d70
     * @note[short] iOS: 0x13bd04
     * @note[short] Android
     */
    void stopAllMusic(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x35a2bc
     * @note[short] MacOS (Intel): 0x3d3cc0
     * @note[short] Windows: 0x58a20
     * @note[short] iOS: 0x13fa54
     * @note[short] Android
     */
    float stopAndGetFade(FMOD::Channel* p0);

    /**
     * @note[short] Windows: 0x5ca80
     * @note[short] iOS: 0x141c7c
     * @note[short] Android
     */
    void stopAndRemoveMusic(int p0);

    /**
     * @note[short] Windows: 0x58810
     * @note[short] Android
     */
    void stopChannel(FMOD::Channel* p0, bool p1, float p2);

    /**
     * @note[short] Windows: 0x58540
     * @note[short] Android
     */
    void stopChannel(int p0, AudioTargetType p1, bool p2, float p3);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopChannel(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void stopChannelTween(int id, AudioTargetType target, AudioModType mod);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void stopChannelTweens(int id, AudioTargetType target);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopMusic(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    void stopMusicNotInSet(gd::unordered_set<int>& musicIDs);

    /**
     * @note[short] Windows: 0x59510
     * @note[short] Android: Rebinded
     */
    FMODSound* storeEffect(FMOD::Sound* sound, gd::string path);

    /**
     * @note[short] Windows: 0x5bce0
     * @note[short] Android
     */
    void swapMusicIndex(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void testFunction(int p0);

    /**
     * @note[short] Windows: 0x5b9a0
     * @note[short] Android
     */
    void triggerQueuedMusic(FMODQueuedMusic p0);

    /**
     * @note[short] MacOS (ARM): 0x35aa94
     * @note[short] MacOS (Intel): 0x3d4540
     * @note[short] Windows: 0x59aa0
     * @note[short] iOS: 0x1400c8
     * @note[short] Android
     */
    void unloadAllEffects();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void unloadEffect(gd::string path);

    /**
     * @note[short] Windows: 0x57c20
     * @note[short] Android
     */
    void unregisterChannel(int p0);

    /**
     * @note[short] Android
     */
    void updateBackgroundFade();

    /**
     * @note[short] Windows: 0x58b60
     * @note[short] iOS: 0x13fb50
     * @note[short] Android
     */
    void updateChannel(int channel, AudioTargetType target, AudioModType mod, float duration, float value);

    /**
     * @note[short] MacOS (ARM): 0x3551f4
     * @note[short] MacOS (Intel): 0x3cd220
     * @note[short] Windows: 0x567c0
     * @note[short] iOS: 0x13c8dc
     * @note[short] Android
     */
    void updateChannelTweens(float p0);

    /**
     * @note[short] Android
     */
    void updateMetering();

    /**
     * @note[short] Windows: 0x5aec0
     * @note[short] Android
     */
    void updateQueuedEffects();

    /**
     * @note[short] Windows: 0x5b6a0
     * @note[short] Android
     */
    void updateQueuedMusic();

    /**
     * @note[short] MacOS (ARM): 0x353444
     * @note[short] MacOS (Intel): 0x3cac50
     * @note[short] Windows: 0x54400
     * @note[short] Android
     */
    void updateReverb(FMODReverbPreset p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x354898
     * @note[short] MacOS (Intel): 0x3cc820
     * @note[short] Windows: 0x5b410
     * @note[short] iOS: 0x13c208
     * @note[short] Android
     */
    void updateTemporaryEffects();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    FMOD_OPENSTATE waitUntilSoundReady(FMOD::Sound* sound);
    gd::unordered_map<int, FMODMusic> m_fmodMusic;
    gd::unordered_map<gd::string, FMODSound> m_fmodSounds;
    gd::unordered_set<gd::string> m_temporarySoundPaths;
    float m_musicVolume;
    float m_sfxVolume;
    float m_backgroundMusicFade;
    float m_musicFadeStart;
    float m_pulse1;
    float m_pulse2;
    float m_pulse3;
    int m_pulseCounter;
    bool m_metering;
    FMOD::ChannelGroup* m_backgroundMusicChannel;
    FMOD::System* m_system;
    FMOD::DSP* m_mainDSP;
    FMOD::DSP* m_globalChannelDSP;
    FMOD::ChannelGroup* m_globalChannel;
    FMOD::ChannelGroup* m_reverbChannel;
    FMOD_RESULT m_lastResult;
    int m_sampleRate;
    bool m_reducedQuality;
    bool m_allAudioPaused;
    int m_musicOffset;
    bool m_stopped;
    FMODAudioState m_audioState;
    gd::vector<FMOD::Sound*> m_removedSounds;
    gd::unordered_map<int, FMOD::DSP*> m_channelIDToDSP;
    gd::unordered_map<int, FMOD::Channel*> m_channelIDToChannel;
    gd::unordered_set<int> m_stoppedChannels;
    FMODReverbPreset m_reverbPreset;
    gd::unordered_map<int, int> m_channelIDToEffectID;
    gd::unordered_map<int, int> m_effectIDToChannelID;
    gd::unordered_map<int, gd::string> m_channelIDToSoundPath;
    gd::vector<FMODQueuedEffect> m_queuedEffects;
    gd::unordered_map<gd::string, FMOD::Sound*> m_soundPathToSound;
    gd::unordered_map<int, FMOD::ChannelGroup*> m_globalChannelGroups;
    gd::unordered_map<int, FMOD::ChannelGroup*> m_reverbChannelGroups;
    bool m_showAudioVisualizer;
    float m_musicVisualizerTime;
    float m_musicVisualizerPeak;
    float m_musicVisualizerVolume;
    float m_sfxVisualizerTime;
    float m_sfxVisualizerPeak;
    float m_sfxVisualizerVolume;
};
