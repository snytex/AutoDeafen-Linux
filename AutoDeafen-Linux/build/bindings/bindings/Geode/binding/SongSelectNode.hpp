#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "CustomSongLayerDelegate.hpp"
#include "CustomSongDelegate.hpp"

class SongSelectNode : public cocos2d::CCNode, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "SongSelectNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongSelectNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x1bbf60
     * @note[short] MacOS (Intel): 0x206f60
     * @note[short] Windows: 0xc5f80
     * @note[short] iOS: 0x14a4a8
     * @note[short] Android
     */
    static SongSelectNode* create(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);

    /**
     * @note[short] MacOS (ARM): 0x1bcd40
     * @note[short] MacOS (Intel): 0x207db0
     * @note[short] Windows: 0xc6fe0
     * @note[short] iOS: 0x14b1a4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1bce28
     * @note[short] MacOS (Intel): 0x207e90
     * @note[short] Windows: 0xc7070
     * @note[short] iOS: 0x14b220
     * @note[short] Android
     */
    virtual void customSongLayerClosed();

    /**
     * @note[short] MacOS (ARM): 0x1bce90
     * @note[short] MacOS (Intel): 0x207ef0
     * @note[short] Windows: 0xc70a0
     * @note[short] iOS: 0x14b288
     * @note[short] Android
     */
    virtual void songIDChanged(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1bceb0
     * @note[short] MacOS (Intel): 0x207f20
     * @note[short] Windows: 0xc70b0
     * @note[short] iOS: 0x14b2a8
     * @note[short] Android
     */
    virtual int getActiveSongID();

    /**
     * @note[short] MacOS (ARM): 0x1bcec0
     * @note[short] MacOS (Intel): 0x207f40
     * @note[short] Windows: 0xc70c0
     * @note[short] iOS: 0x14b2b8
     * @note[short] Android
     */
    virtual gd::string getSongFileName();

    /**
     * @note[short] MacOS (ARM): 0x1bd008
     * @note[short] MacOS (Intel): 0x208090
     * @note[short] Windows: 0xc7180
     * @note[short] iOS: 0x14b364
     * @note[short] Android
     */
    virtual LevelSettingsObject* getLevelSettings();

    /**
     * @note[short] MacOS (ARM): 0x1bc9d4
     * @note[short] MacOS (Intel): 0x2079d0
     * @note[short] Windows: 0xc6ab0
     * @note[short] iOS: 0x14aef4
     * @note[short] Android
     */
    void audioNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bc9a0
     * @note[short] MacOS (Intel): 0x207990
     * @note[short] Windows: 0xc6af0
     * @note[short] iOS: 0x14aec0
     * @note[short] Android
     */
    void audioPrevious(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bc070
     * @note[short] MacOS (Intel): 0x207080
     * @note[short] Windows: 0xc60b0
     * @note[short] iOS: 0x14a5b8
     * @note[short] Android
     */
    bool init(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);

    /**
     * @note[short] Android
     */
    void onOpenCustomSong(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bca0c
     * @note[short] MacOS (Intel): 0x207a10
     * @note[short] Windows: 0xc6b20
     * @note[short] iOS: 0x14af2c
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bcabc
     * @note[short] MacOS (Intel): 0x207ae0
     * @note[short] Windows: 0xc6b50
     * @note[short] iOS: 0x14afbc
     * @note[short] Android
     */
    void onSongMode(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1bca9c
     * @note[short] MacOS (Intel): 0x207ab0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void selectSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x1bcd0c
     * @note[short] MacOS (Intel): 0x207d70
     * @note[short] Windows: 0xc6e80
     * @note[short] Android
     */
    void showCustomSongSelect();

    /**
     * @note[short] MacOS (ARM): 0x1bc888
     * @note[short] MacOS (Intel): 0x2078a0
     * @note[short] Windows: 0xc69c0
     * @note[short] iOS: 0x14adbc
     * @note[short] Android
     */
    void updateAudioLabel();

    /**
     * @note[short] MacOS (ARM): 0x1bcc84
     * @note[short] MacOS (Intel): 0x207ce0
     * @note[short] Windows: 0xc6d70
     * @note[short] Android
     */
    void updateWidgetVisibility();
    int m_selectedSongID;
    bool m_isCustomSong;
    bool m_songChanged;
    cocos2d::CCLabelBMFont* m_audioLabel;
    cocos2d::CCArray* m_selectSongObjects;
    cocos2d::CCArray* m_normalSongObjects;
    cocos2d::CCArray* m_changeSongObjects;
    CCMenuItemSpriteExtra* m_normalButton;
    CCMenuItemSpriteExtra* m_customButton;
    CCMenuItemSpriteExtra* m_selectButton;
    CCMenuItemSpriteExtra* m_changeButton;
    CustomSongWidget* m_songWidget;
    LevelSettingsObject* m_settingsObject;
};
