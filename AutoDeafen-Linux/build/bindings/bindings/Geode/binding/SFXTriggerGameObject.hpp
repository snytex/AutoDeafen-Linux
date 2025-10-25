#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class SFXTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SFXTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static SFXTriggerGameObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x17c1dc
     * @note[short] MacOS (Intel): 0x1be340
     * @note[short] Windows: 0x49efd0
     * @note[short] iOS: 0x385ed0
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x177b40
     * @note[short] MacOS (Intel): 0x1b8850
     * @note[short] Windows: 0x49da70
     * @note[short] iOS: 0x384d08
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    int getSFXRefID();

    /**
     * @note[short] Android
     */
    int getUniqueSFXID();

    /**
     * @note[short] Android
     */
    bool init(char const* p0);
    gd::string m_soundPath;
    int m_soundID;
    float m_pitch;
    int m_speed;
    int m_pitchIndex;
    float m_volume;
    int m_start;
    int m_fadeIn;
    int m_end;
    int m_fadeOut;
    bool m_reverb;
    bool m_fastFourierTransform;
    bool m_loop;
    bool m_stopLoop;
    bool m_dontReset;
    bool m_unique;
    bool m_override;
    int m_sfxUniqueID;
    float m_volumeNear;
    float m_volumeMedium;
    float m_volumeFar;
    int m_minDistNear;
    int m_minDistMedium;
    int m_minDistFar;
    int m_proximityMode;
    bool m_cameraDistance;
    bool m_preload;
    bool m_ignoreVolumeTest;
    float m_minInterval;
    int m_sfxGroup;
    bool m_stop;
    bool m_changeSpeed;
    bool m_changeVolume;
    int m_groupID;
    int m_unk788;
    FMODReverbPreset m_reverbPreset;
    bool m_reverbEnabled;
    float m_soundDuration;
    bool m_applyDisabled;
    int m_speedVariance;
    int m_pitchVariance;
    float m_volumeVariance;
    bool m_pitchSteps;
};
