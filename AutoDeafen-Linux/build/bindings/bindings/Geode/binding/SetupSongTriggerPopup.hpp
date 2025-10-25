#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAudioTriggerPopup.hpp"
#include "MusicDownloadDelegate.hpp"
#include "SongPlaybackDelegate.hpp"

class SetupSongTriggerPopup : public SetupAudioTriggerPopup, public MusicDownloadDelegate, public SongPlaybackDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSongTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSongTriggerPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] Windows: 0x444470
     * @note[short] Android
     */
    static SetupSongTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x26537c
     * @note[short] MacOS (Intel): 0x2c0f70
     * @note[short] Windows: 0x445910
     * @note[short] iOS: 0x1c4418
     * @note[short] Android
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x265410
     * @note[short] MacOS (Intel): 0x2c1000
     * @note[short] Windows: 0x445990
     * @note[short] iOS: 0x1c44ac
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x26527c
     * @note[short] MacOS (Intel): 0x2c0e70
     * @note[short] Windows: 0x4457c0
     * @note[short] iOS: 0x1c4384
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x265068
     * @note[short] MacOS (Intel): 0x2c0c30
     * @note[short] Windows: 0x445290
     * @note[short] iOS: 0x1c417c
     * @note[short] Android
     */
    virtual void onPlayback(SongInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x2643d0
     * @note[short] MacOS (Intel): 0x2bfe60
     * @note[short] Windows: 0x4445b0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    void onResetSongTime(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x445630
     * @note[short] Android
     */
    void onSavePlaybackPos(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateApplyPrepare(bool p0);

    /**
     * @note[short] Windows: 0x445200
     * @note[short] Android
     */
    void updateLength();

    /**
     * @note[short] Android
     */
    void updateSongTimeSlider();
    SongSelectNode* m_selectNode;
};
