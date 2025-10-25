#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJAssetDownloadAction.hpp"
#include "MusicDownloadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CustomSongWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSongWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSongWidget, cocos2d::CCNode)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     CustomSongWidget();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~CustomSongWidget();

    /**
     * @note[short] MacOS (ARM): 0x530a34
     * @note[short] MacOS (Intel): 0x603090
     * @note[short] Windows: 0xc74f0
     * @note[short] iOS: 0xfc928
     * @note[short] Android
     */
    static CustomSongWidget* create(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk);

    /**
     * @note[short] MacOS (ARM): 0x535d24
     * @note[short] MacOS (Intel): 0x608a80
     * @note[short] Windows: 0xcbd40
     * @note[short] iOS: 0x100f84
     * @note[short] Android
     */
    virtual void loadSongInfoFinished(SongInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x535ed0
     * @note[short] MacOS (Intel): 0x608c60
     * @note[short] Windows: 0xcbe90
     * @note[short] iOS: 0x101050
     * @note[short] Android
     */
    virtual void loadSongInfoFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x536144
     * @note[short] MacOS (Intel): 0x608eb0
     * @note[short] Windows: 0xcbf20
     * @note[short] iOS: 0x1011d0
     * @note[short] Android
     */
    virtual void downloadSongFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x536414
     * @note[short] MacOS (Intel): 0x609190
     * @note[short] Windows: 0xcbfe0
     * @note[short] iOS: 0x101394
     * @note[short] Android
     */
    virtual void downloadSongFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x536580
     * @note[short] MacOS (Intel): 0x609320
     * @note[short] Windows: 0xcc060
     * @note[short] iOS: 0x101480
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x536594
     * @note[short] MacOS (Intel): 0x609350
     * @note[short] Windows: 0xcc080
     * @note[short] iOS: 0x101494
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x53685c
     * @note[short] MacOS (Intel): 0x609650
     * @note[short] Windows: 0xcc5c0
     * @note[short] iOS: 0x101664
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x53689c
     * @note[short] MacOS (Intel): 0x6096b0
     * @note[short] Windows: 0xcc5f0
     * @note[short] iOS: 0x1016a4
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x534fcc
     * @note[short] MacOS (Intel): 0x607bd0
     * @note[short] Windows: 0xca5d0
     * @note[short] iOS: 0x10057c
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x536938
     * @note[short] MacOS (Intel): 0x609750
     * @note[short] Windows: 0xcc960
     * @note[short] iOS: 0x1016b0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x5344f0
     * @note[short] MacOS (Intel): 0x607020
     * @note[short] Android
     */
    void addExtraVisuals(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x534634
     * @note[short] MacOS (Intel): 0x607140
     * @note[short] Windows: 0xc9160
     * @note[short] iOS: 0xffe0c
     * @note[short] Android
     */
    void deleteSong();

    /**
     * @note[short] Windows: 0xcc4a0
     * @note[short] Android
     */
    void downloadAssetFailed(int p0, GJAssetType p1, GJSongError p2);

    /**
     * @note[short] MacOS (ARM): 0x53620c
     * @note[short] MacOS (Intel): 0x608f70
     * @note[short] Windows: 0xcc3e0
     * @note[short] Android
     */
    void downloadAssetFinished(int p0, GJAssetType p1);

    /**
     * @note[short] MacOS (ARM): 0x5360a4
     * @note[short] MacOS (Intel): 0x608e20
     * @note[short] Android
     */
    void downloadFailed();

    /**
     * @note[short] MacOS (ARM): 0x534978
     * @note[short] MacOS (Intel): 0x6074c0
     * @note[short] Windows: 0xc9af0
     * @note[short] iOS: 0x100140
     * @note[short] Android
     */
    void getSongInfoIfUnloaded();

    /**
     * @note[short] MacOS (ARM): 0x530b8c
     * @note[short] MacOS (Intel): 0x603240
     * @note[short] Windows: 0xc7700
     * @note[short] iOS: 0xfca04
     * @note[short] Android
     */
    bool init(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk);

    /**
     * @note[short] MacOS (ARM): 0x531e7c
     * @note[short] MacOS (Intel): 0x604640
     * @note[short] Windows: 0xc9bb0
     * @note[short] iOS: 0xfdb70
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x531eb8
     * @note[short] MacOS (Intel): 0x604680
     * @note[short] Windows: 0xc9040
     * @note[short] iOS: 0xfdbac
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x531c24
     * @note[short] MacOS (Intel): 0x6043b0
     * @note[short] Windows: 0xc9cd0
     * @note[short] iOS: 0xfd9c0
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x531ff4
     * @note[short] MacOS (Intel): 0x6047c0
     * @note[short] Windows: 0xc9c40
     * @note[short] iOS: 0xfdcc4
     * @note[short] Android
     */
    void onGetSongInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x532aec
     * @note[short] MacOS (Intel): 0x605410
     * @note[short] Windows: 0xc8d50
     * @note[short] iOS: 0xfe5e8
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x532324
     * @note[short] MacOS (Intel): 0x604af0
     * @note[short] Windows: 0xc9360
     * @note[short] iOS: 0xfdf48
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x532088
     * @note[short] MacOS (Intel): 0x604850
     * @note[short] Windows: 0xc9fd0
     * @note[short] iOS: 0xfdd58
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x531f98
     * @note[short] MacOS (Intel): 0x604760
     * @note[short] Windows: 0xc9f70
     * @note[short] iOS: 0xfdc68
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x532fec
     * @note[short] MacOS (Intel): 0x6059f0
     * @note[short] Windows: 0xc88c0
     * @note[short] iOS: 0xfe8c8
     * @note[short] Android
     */
    void positionInfoObjects();

    /**
     * @note[short] MacOS (ARM): 0x536698
     * @note[short] MacOS (Intel): 0x6094a0
     * @note[short] Windows: 0xcc240
     * @note[short] iOS: 0x1014a8
     * @note[short] Android
     */
    void processNextMultiAsset();

    /**
     * @note[short] MacOS (ARM): 0x53476c
     * @note[short] MacOS (Intel): 0x607280
     * @note[short] Windows: 0xcc710
     * @note[short] iOS: 0xfff40
     * @note[short] Android
     */
    void showError(bool p0);

    /**
     * @note[short] Windows: 0xc9eb0
     * @note[short] Android
     */
    void startDownload();

    /**
     * @note[short] Android
     */
    TodoReturn startMonitorDownload();

    /**
     * @note[short] MacOS (ARM): 0x534ad8
     * @note[short] MacOS (Intel): 0x607610
     * @note[short] Windows: 0xcc0a0
     * @note[short] iOS: 0x1001cc
     * @note[short] Android
     */
    void startMultiAssetDownload();

    /**
     * @note[short] Android
     */
    TodoReturn toggleUpdateButton(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x534ebc
     * @note[short] MacOS (Intel): 0x607ab0
     * @note[short] Windows: 0xca4a0
     * @note[short] Android
     */
    void updateDownloadProgress(float p0);

    /**
     * @note[short] MacOS (ARM): 0x535f6c
     * @note[short] MacOS (Intel): 0x608cf0
     * @note[short] Windows: 0xcc640
     * @note[short] Android
     */
    void updateError(GJSongError p0);

    /**
     * @note[short] MacOS (ARM): 0x535018
     * @note[short] MacOS (Intel): 0x607c20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateLengthMod(float lengthMod);

    /**
     * @note[short] MacOS (ARM): 0x535734
     * @note[short] MacOS (Intel): 0x608410
     * @note[short] Windows: 0xcb760
     * @note[short] iOS: 0x100a6c
     * @note[short] Android
     */
    void updateMultiAssetInfo(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x534418
     * @note[short] MacOS (Intel): 0x606f50
     * @note[short] Windows: 0xca3b0
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] Windows: 0xca550
     * @note[short] Android
     */
    void updateProgressBar(int p0);

    /**
     * @note[short] MacOS (ARM): 0x533504
     * @note[short] MacOS (Intel): 0x605f20
     * @note[short] Windows: 0xca600
     * @note[short] iOS: 0xfee04
     * @note[short] Android
     */
    void updateSongInfo();

    /**
     * @note[short] MacOS (ARM): 0x533468
     * @note[short] MacOS (Intel): 0x605e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xfed98
     * @note[short] Android
     */
    void updateSongObject(SongInfoObject* songInfo);

    /**
     * @note[short] MacOS (ARM): 0x535020
     * @note[short] MacOS (Intel): 0x607c40
     * @note[short] Windows: 0xcb410
     * @note[short] iOS: 0x1005d0
     * @note[short] Android: Rebinded
     */
    void updateWithMultiAssets(gd::string songList, gd::string sfxList, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn verifySongID(int p0);
    SongInfoObject* m_songInfoObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_songLabel;
    cocos2d::CCLabelBMFont* m_artistLabel;
    cocos2d::CCLabelBMFont* m_songIDLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadBtn;
    CCMenuItemSpriteExtra* m_cancelDownloadBtn;
    CCMenuItemSpriteExtra* m_selectSongBtn;
    CCMenuItemSpriteExtra* m_getSongInfoBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_moreBtn;
    CCMenuItemSpriteExtra* m_deleteBtn;
    CCMenuItemSpriteExtra* m_infoBtn;
    cocos2d::CCSprite* m_sliderGroove;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_ncsLogo;
    cocos2d::extension::CCScale9Sprite* m_bgSpr;
    CustomSongDelegate* m_songDelegate;
    bool m_showSelectSongBtn;
    bool m_showPlayMusicBtn;
    bool m_showDownloadBtn;
    bool m_isNotDownloading;
    bool m_isRobtopSong;
    bool m_isMusicLibrary;
    int m_customSongID;
    float m_lengthMod;
    bool m_isInCell;
    SongPlaybackDelegate* m_playbackDelegate;
    bool m_hasLibrarySongs;
    bool m_hasSFX;
    bool m_unkBool2;
    gd::map<int, bool> m_songs;
    gd::map<int, bool> m_sfx;
    gd::vector<GJAssetDownloadAction> m_undownloadedAssets;
    int m_totalBytes;
    int m_nextSongID;
};
