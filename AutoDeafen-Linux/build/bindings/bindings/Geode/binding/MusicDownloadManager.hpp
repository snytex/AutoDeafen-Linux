#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "PlatformDownloadDelegate.hpp"

class MusicDownloadManager : public cocos2d::CCNode, public PlatformDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicDownloadManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4c8b00
     * @note[short] MacOS (Intel): 0x5749f0
     * @note[short] Windows: 0x328e50
     * @note[short] iOS: 0x158138
     * @note[short] Android: Rebinded
     */
    static cocos2d::CCDictionary* responseToDict(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x4c6c2c
     * @note[short] MacOS (Intel): 0x572a00
     * @note[short] Windows: 0x3277b0
     * @note[short] iOS: 0x156e20
     * @note[short] Android
     */
    static MusicDownloadManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x4c7abc
     * @note[short] MacOS (Intel): 0x573980
     * @note[short] Windows: 0x327d90
     * @note[short] iOS: 0x157718
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4cba2c
     * @note[short] MacOS (Intel): 0x577e40
     * @note[short] Windows: 0x3299f0
     * @note[short] iOS: 0x15a104
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x4c8778
     * @note[short] MacOS (Intel): 0x574660
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x4c7c3c
     * @note[short] MacOS (Intel): 0x573b30
     * @note[short] Windows: 0x327f30
     * @note[short] iOS: 0x157810
     * @note[short] Android
     */
    void addMusicDownloadDelegate(MusicDownloadDelegate* p0);

    /**
     * @note[short] MacOS (ARM): 0x4c881c
     * @note[short] MacOS (Intel): 0x574700
     * @note[short] Windows: 0x3285f0
     * @note[short] iOS: 0x157f54
     * @note[short] Android: Rebinded
     */
    SongInfoObject* addSongObjectFromString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x4cae00
     * @note[short] MacOS (Intel): 0x577170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159868
     * @note[short] Android
     */
    void clearSong(int songID);

    /**
     * @note[short] MacOS (ARM): 0x4cb000
     * @note[short] MacOS (Intel): 0x577330
     * @note[short] Windows: 0x329160
     * @note[short] iOS: 0x1599b8
     * @note[short] Android
     */
    void clearUnusedSongs();

    /**
     * @note[short] MacOS (ARM): 0x4c9d78
     * @note[short] MacOS (Intel): 0x575f50
     * @note[short] Windows: 0x328c50
     * @note[short] iOS: 0x158f58
     * @note[short] Android: Rebinded
     */
    cocos2d::CCDictionary* createArtistsInfo(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x4c998c
     * @note[short] MacOS (Intel): 0x575b00
     * @note[short] Windows: 0x3288a0
     * @note[short] iOS: 0x158a10
     * @note[short] Android: Rebinded
     */
    void createSongsInfo(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4cc790
     * @note[short] MacOS (Intel): 0x578e00
     * @note[short] Windows: 0x32a450
     * @note[short] iOS: 0x15a848
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4d1e60
     * @note[short] MacOS (Intel): 0x57ef40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15e438
     * @note[short] Android
     */
    void deleteSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cada0
     * @note[short] MacOS (Intel): 0x577120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159818
     * @note[short] Android
     */
    void deleteSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cb4c4
     * @note[short] MacOS (Intel): 0x5778d0
     * @note[short] Windows: 0x32ad40
     * @note[short] iOS: 0x159d0c
     * @note[short] Android
     */
    void downloadCustomSong(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4cd97c
     * @note[short] MacOS (Intel): 0x57a200
     * @note[short] Windows: 0x32b370
     * @note[short] iOS: 0x15b410
     * @note[short] Android
     */
    void downloadMusicLibrary();

    /**
     * @note[short] MacOS (ARM): 0x4d01c0
     * @note[short] MacOS (Intel): 0x57d0e0
     * @note[short] Windows: 0x32ca80
     * @note[short] iOS: 0x15ced4
     * @note[short] Android
     */
    void downloadSFX(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4d06e4
     * @note[short] MacOS (Intel): 0x57d5f0
     * @note[short] Windows: 0x32edf0
     * @note[short] iOS: 0x15d28c
     * @note[short] Android
     */
    void downloadSFXFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x4d0758
     * @note[short] MacOS (Intel): 0x57d660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15d300
     * @note[short] Android
     */
    void downloadSFXFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4d0b28
     * @note[short] MacOS (Intel): 0x57d9f0
     * @note[short] Windows: 0x32d220
     * @note[short] iOS: 0x15d624
     * @note[short] Android
     */
    void downloadSFXLibrary();

    /**
     * @note[short] MacOS (ARM): 0x4cb0d0
     * @note[short] MacOS (Intel): 0x577410
     * @note[short] Windows: 0x329460
     * @note[short] iOS: 0x159a58
     * @note[short] Android
     */
    void downloadSong(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4cbb38
     * @note[short] MacOS (Intel): 0x577f40
     * @note[short] Windows: 0x32ed70
     * @note[short] iOS: 0x15a170
     * @note[short] Android
     */
    void downloadSongFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x4cbbac
     * @note[short] MacOS (Intel): 0x577fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15a1e4
     * @note[short] Android
     */
    void downloadSongFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4cc738
     * @note[short] MacOS (Intel): 0x578da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15a7f0
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4cfe50
     * @note[short] MacOS (Intel): 0x57ccb0
     * @note[short] Windows: 0x32c920
     * @note[short] iOS: 0x15ccf0
     * @note[short] Android
     */
    cocos2d::CCArray* filterMusicByArtistID(int p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4cffa8
     * @note[short] MacOS (Intel): 0x57ced0
     * @note[short] Windows: 0x32c9d0
     * @note[short] iOS: 0x15cd88
     * @note[short] Android
     */
    cocos2d::CCArray* filterMusicByTag(int p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4cc6d0
     * @note[short] MacOS (Intel): 0x578d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15a7b8
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x4ccfdc
     * @note[short] MacOS (Intel): 0x5796c0
     * @note[short] Windows: 0x32e2e0
     * @note[short] iOS: 0x15ad00
     * @note[short] Android: Rebinded
     */
    gd::string generateCustomContentURL(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x4c7b90
     * @note[short] MacOS (Intel): 0x573a70
     * @note[short] iOS: 0x157764
     * @note[short] Android
     */
    void generateResourceAssetList();

    /**
     * @note[short] MacOS (ARM): 0x4cfd44
     * @note[short] MacOS (Intel): 0x57cb90
     * @note[short] iOS: 0x15cbe8
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicArtists(OptionsObjectDelegate* p0);

    /**
     * @note[short] MacOS (ARM): 0x4cfb30
     * @note[short] MacOS (Intel): 0x57c940
     * @note[short] iOS: 0x15ca38
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicObjects(GJSongType p0);

    /**
     * @note[short] MacOS (ARM): 0x4cfbec
     * @note[short] MacOS (Intel): 0x57ca30
     * @note[short] iOS: 0x15caac
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicTags(OptionsObjectDelegate* p0);

    /**
     * @note[short] MacOS (ARM): 0x4d1db8
     * @note[short] MacOS (Intel): 0x57ee80
     * @note[short] iOS: 0x15e3cc
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSFXObjects(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4cac1c
     * @note[short] MacOS (Intel): 0x576f80
     * @note[short] iOS: 0x159740
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSongs();

    /**
     * @note[short] MacOS (ARM): 0x4ccd84
     * @note[short] MacOS (Intel): 0x579470
     * @note[short] Windows: 0x32a940
     * @note[short] iOS: 0x15ab1c
     * @note[short] Android
     */
    void getCustomContentURL();

    /**
     * @note[short] MacOS (ARM): 0x4c7f00
     * @note[short] MacOS (Intel): 0x573dd0
     * @note[short] Windows: 0x39d70
     * @note[short] iOS: 0x1579ec
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x4ca930
     * @note[short] MacOS (Intel): 0x576c20
     * @note[short] Windows: 0x3290a0
     * @note[short] iOS: 0x1595bc
     * @note[short] Android
     */
    cocos2d::CCArray* getDownloadedSongs();

    /**
     * @note[short] MacOS (ARM): 0x4cbc18
     * @note[short] MacOS (Intel): 0x578020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15a250
     * @note[short] Android
     */
    int getDownloadProgress(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cfb1c
     * @note[short] MacOS (Intel): 0x57c920
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15ca24
     * @note[short] Android
     */
    MusicArtistObject* getMusicArtistForID(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cbd00
     * @note[short] MacOS (Intel): 0x5780e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    SongInfoObject* getMusicObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cbcd8
     * @note[short] MacOS (Intel): 0x5780c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSFXDownloadKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cbc78
     * @note[short] MacOS (Intel): 0x578070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15a2a4
     * @note[short] Android
     */
    int getSFXDownloadProgress(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d1b18
     * @note[short] MacOS (Intel): 0x57eb20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15e280
     * @note[short] Android
     */
    SFXFolderObject* getSFXFolderObjectForID(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d1cec
     * @note[short] MacOS (Intel): 0x57edc0
     * @note[short] Windows: 0x32e0c0
     * @note[short] iOS: 0x15e2ec
     * @note[short] Android
     */
    gd::string getSFXFolderPathForID(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x4d1b04
     * @note[short] MacOS (Intel): 0x57eb00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15e26c
     * @note[short] Android
     */
    SFXInfoObject* getSFXObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x4c7e7c
     * @note[short] MacOS (Intel): 0x573d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSongDownloadKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4c82e0
     * @note[short] MacOS (Intel): 0x574190
     * @note[short] Windows: 0x328180
     * @note[short] iOS: 0x157c10
     * @note[short] Android
     */
    void getSongInfo(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x4c7e54
     * @note[short] MacOS (Intel): 0x573d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSongInfoKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4c8188
     * @note[short] MacOS (Intel): 0x574030
     * @note[short] Windows: 0x329b70
     * @note[short] iOS: 0x157b4c
     * @note[short] Android
     */
    SongInfoObject* getSongInfoObject(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4c82cc
     * @note[short] MacOS (Intel): 0x574170
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getSongPriority();

    /**
     * @note[short] MacOS (ARM): 0x4c7150
     * @note[short] MacOS (Intel): 0x572fd0
     * @note[short] Windows: 0x327ca0
     * @note[short] iOS: 0x157254
     * @note[short] Android: Rebinded
     */
    void handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] MacOS (ARM): 0x4c7340
     * @note[short] MacOS (Intel): 0x5731a0
     * @note[short] Android: Rebinded
     */
    void handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] MacOS (ARM): 0x4c74ac
     * @note[short] MacOS (Intel): 0x5732e0
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* p0, void* p1);

    /**
     * @note[short] MacOS (ARM): 0x4c8154
     * @note[short] MacOS (Intel): 0x574000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x157b18
     * @note[short] Android
     */
    void incrementPriorityForSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x4c7e38
     * @note[short] MacOS (Intel): 0x573d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x4cf4d0
     * @note[short] MacOS (Intel): 0x57c240
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isMusicLibraryLoaded();

    /**
     * @note[short] MacOS (ARM): 0x4cc238
     * @note[short] MacOS (Intel): 0x5787b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isResourceSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cbd14
     * @note[short] MacOS (Intel): 0x578100
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isResourceSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x4c7db0
     * @note[short] MacOS (Intel): 0x573cb0
     * @note[short] Windows: 0x3280a0
     * @note[short] iOS: 0x157914
     * @note[short] Android
     */
    bool isRunningActionForSongID(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4cbfe4
     * @note[short] MacOS (Intel): 0x5784f0
     * @note[short] Windows: 0x329fb0
     * @note[short] iOS: 0x15a418
     * @note[short] Android
     */
    bool isSFXDownloaded(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4d1830
     * @note[short] MacOS (Intel): 0x57e850
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSFXLibraryLoaded();

    /**
     * @note[short] MacOS (ARM): 0x4ca9c8
     * @note[short] MacOS (Intel): 0x576cc0
     * @note[short] Windows: 0x329c80
     * @note[short] iOS: 0x159650
     * @note[short] Android
     */
    bool isSongDownloaded(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4cac6c
     * @note[short] MacOS (Intel): 0x576fe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x159790
     * @note[short] Android
     */
    void limitDownloadedSongs();

    /**
     * @note[short] MacOS (ARM): 0x4c87a8
     * @note[short] MacOS (Intel): 0x574690
     * @note[short] Windows: 0x32ecf0
     * @note[short] iOS: 0x157ee0
     * @note[short] Android
     */
    void loadSongInfoFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x4c870c
     * @note[short] MacOS (Intel): 0x5745f0
     * @note[short] Windows: 0x32ec70
     * @note[short] iOS: 0x157e74
     * @note[short] Android
     */
    void loadSongInfoFinished(SongInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4ccf04
     * @note[short] MacOS (Intel): 0x5795e0
     * @note[short] Windows: 0x32eef0
     * @note[short] iOS: 0x15ac28
     * @note[short] Android
     */
    void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x4ccf70
     * @note[short] MacOS (Intel): 0x579650
     * @note[short] Windows: 0x32ee70
     * @note[short] iOS: 0x15ac94
     * @note[short] Android
     */
    void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x4d007c
     * @note[short] MacOS (Intel): 0x57cfa0
     * @note[short] iOS: 0x15ce1c
     * @note[short] Android
     */
    gd::string nameForTagID(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4cdb90
     * @note[short] MacOS (Intel): 0x57a3d0
     * @note[short] Windows: 0x32b600
     * @note[short] iOS: 0x15b5f0
     * @note[short] Android
     */
    void onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] MacOS (ARM): 0x4d04ac
     * @note[short] MacOS (Intel): 0x57d3b0
     * @note[short] Windows: 0x32cce0
     * @note[short] iOS: 0x15d148
     * @note[short] Android
     */
    void onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] MacOS (ARM): 0x4d0d10
     * @note[short] MacOS (Intel): 0x57db90
     * @note[short] Windows: 0x32d480
     * @note[short] iOS: 0x15d804
     * @note[short] Android
     */
    void onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] MacOS (ARM): 0x4cb7b4
     * @note[short] MacOS (Intel): 0x577ba0
     * @note[short] Windows: 0x329750
     * @note[short] iOS: 0x159f80
     * @note[short] Android
     */
    void onDownloadSongCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] MacOS (ARM): 0x4c7868
     * @note[short] MacOS (Intel): 0x5736a0
     * @note[short] Windows: 0x32abb0
     * @note[short] iOS: 0x15758c
     * @note[short] Android: Rebinded
     */
    void onGetCustomContentURLCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4c75d8
     * @note[short] MacOS (Intel): 0x573400
     * @note[short] Windows: 0x328460
     * @note[short] iOS: 0x157414
     * @note[short] Android: Rebinded
     */
    void onGetSongInfoCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4c6e34
     * @note[short] MacOS (Intel): 0x572ca0
     * @note[short] Windows: 0x327ba0
     * @note[short] iOS: 0x15701c
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] MacOS (ARM): 0x4cd82c
     * @note[short] MacOS (Intel): 0x57a0b0
     * @note[short] Windows: 0x32b240
     * @note[short] iOS: 0x15b338
     * @note[short] Android
     */
    void onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] MacOS (ARM): 0x4d09d8
     * @note[short] MacOS (Intel): 0x57d8a0
     * @note[short] Windows: 0x32d0e0
     * @note[short] iOS: 0x15d54c
     * @note[short] Android
     */
    void onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] MacOS (ARM): 0x4cddbc
     * @note[short] MacOS (Intel): 0x57a620
     * @note[short] Windows: 0x32b7b0
     * @note[short] iOS: 0x15b72c
     * @note[short] Android
     */
    void parseMusicLibrary();

    /**
     * @note[short] MacOS (ARM): 0x4d0ee0
     * @note[short] MacOS (Intel): 0x57dd60
     * @note[short] Windows: 0x32d610
     * @note[short] iOS: 0x15d920
     * @note[short] Android
     */
    void parseSFXLibrary();

    /**
     * @note[short] MacOS (ARM): 0x4cc334
     * @note[short] MacOS (Intel): 0x578940
     * @note[short] Windows: 0x32a230
     * @note[short] iOS: 0x15a508
     * @note[short] Android
     */
    gd::string pathForSFX(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4cc418
     * @note[short] MacOS (Intel): 0x578a00
     * @note[short] Windows: 0x32a0e0
     * @note[short] iOS: 0x15a5d4
     * @note[short] Android
     */
    gd::string pathForSFXFolder(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4caf14
     * @note[short] MacOS (Intel): 0x577270
     * @note[short] Windows: 0x329f00
     * @note[short] iOS: 0x1598e4
     * @note[short] Android
     */
    gd::string pathForSong(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4cbe10
     * @note[short] MacOS (Intel): 0x578290
     * @note[short] Windows: 0x329db0
     * @note[short] iOS: 0x15a2f8
     * @note[short] Android
     */
    gd::string pathForSongFolder(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4c7030
     * @note[short] MacOS (Intel): 0x572e60
     * @note[short] Windows: 0x327a80
     * @note[short] iOS: 0x157134
     * @note[short] Android: Rebinded
     */
    cocos2d::extension::CCHttpRequest* ProcessHttpGetRequest(gd::string p0, gd::string p1, cocos2d::extension::SEL_HttpResponse p2, int p3, int p4);

    /**
     * @note[short] MacOS (ARM): 0x4c6cf0
     * @note[short] MacOS (Intel): 0x572b10
     * @note[short] Windows: 0x327940
     * @note[short] iOS: 0x156ed8
     * @note[short] Android: Rebinded
     */
    void ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] MacOS (ARM): 0x4c7ff4
     * @note[short] MacOS (Intel): 0x573ec0
     * @note[short] Windows: 0x329ac0
     * @note[short] iOS: 0x157a58
     * @note[short] Android
     */
    void removeDLFromActive(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x4c7d30
     * @note[short] MacOS (Intel): 0x573c20
     * @note[short] Windows: 0x328010
     * @note[short] iOS: 0x157894
     * @note[short] Android
     */
    void removeMusicDownloadDelegate(MusicDownloadDelegate* p0);

    /**
     * @note[short] MacOS (ARM): 0x4cc5ec
     * @note[short] MacOS (Intel): 0x578c60
     * @note[short] Windows: 0x32a2f0
     * @note[short] iOS: 0x15a6f4
     * @note[short] Android
     */
    void showTOS(FLAlertLayerProtocol* p0);

    /**
     * @note[short] MacOS (ARM): 0x4c80f8
     * @note[short] MacOS (Intel): 0x573fa0
     * @note[short] Windows: 0x328120
     * @note[short] iOS: 0x157abc
     * @note[short] Android
     */
    void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x4c7ea4
     * @note[short] MacOS (Intel): 0x573d80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x157990
     * @note[short] Android
     */
    void stopDownload(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cfb10
     * @note[short] MacOS (Intel): 0x57c900
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeMusicObject(SongInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4d1854
     * @note[short] MacOS (Intel): 0x57e870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15dfbc
     * @note[short] Android
     */
    void storeSFXInfoObject(SFXInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4d1aa0
     * @note[short] MacOS (Intel): 0x57eaa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15e208
     * @note[short] Android
     */
    void tryLoadLibraries();

    /**
     * @note[short] MacOS (ARM): 0x4cd618
     * @note[short] MacOS (Intel): 0x579ed0
     * @note[short] Windows: 0x32afb0
     * @note[short] iOS: 0x15b158
     * @note[short] Android
     */
    void tryUpdateMusicLibrary();

    /**
     * @note[short] MacOS (ARM): 0x4d07c4
     * @note[short] MacOS (Intel): 0x57d6d0
     * @note[short] Windows: 0x32ce40
     * @note[short] iOS: 0x15d36c
     * @note[short] Android
     */
    void tryUpdateSFXLibrary();
    cocos2d::CCDictionary* m_activeDownloads;
    cocos2d::CCArray* m_musicDownloadDelegates;
    cocos2d::CCDictionary* m_songObjects;
    cocos2d::CCDictionary* m_MDLM003;
    int m_songPriority;
    gd::string m_customContentURL;
    cocos2d::CCDictionary* m_sfxObjects;
    cocos2d::CCArray* m_sfxArtists;
    int m_sfxLibraryVersion;
    int m_sfxObjectCount;
    bool m_requestedSfxLibraryDownloaded;
    cocos2d::CCDictionary* m_musicObjects;
    cocos2d::CCDictionary* m_musicArtists;
    gd::map<int, gd::string> m_musicTags;
    int m_musicLibraryVersion;
    int m_musicObjectCount;
    int m_ncsSongCount;
    bool m_downloadingMusicLibrary;
    bool m_triedToLoadLibraries;
    bool m_unkBool;
    gd::unordered_set<int> m_resourceSfxUnorderedSet;
    gd::unordered_set<int> m_resourceSongUnorderedSet;
};
