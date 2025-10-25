#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongInfoObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SongInfoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongInfoObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4c8ddc
     * @note[short] MacOS (Intel): 0x574cd0
     * @note[short] Windows: 0x32f0d0
     * @note[short] iOS: 0x158280
     * @note[short] Android
     */
    static SongInfoObject* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4cf4f4
     * @note[short] MacOS (Intel): 0x57c260
     * @note[short] Windows: 0x3300c0
     * @note[short] iOS: 0x15c574
     * @note[short] Android: Rebinded
     */
    static SongInfoObject* create(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, int nongType, gd::string extraArtistIDs, bool isNew, int libraryOrder, int priority);

    /**
     * @note[short] MacOS (ARM): 0x4d21ac
     * @note[short] MacOS (Intel): 0x57f2e0
     * @note[short] Windows: 0x32ef70
     * @note[short] iOS: 0x15e750
     * @note[short] Android
     */
    static SongInfoObject* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4d2d3c
     * @note[short] MacOS (Intel): 0x5800d0
     * @note[short] Windows: 0x3309a0
     * @note[short] iOS: 0x15f0b0
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4d2ed0
     * @note[short] MacOS (Intel): 0x580290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15f244
     * @note[short] Android: Out of line
     */
    virtual bool canEncode();

    /**
     * @note[short] Android: Rebinded
     */
    void addTags(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn containsTag(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4d2740
     * @note[short] MacOS (Intel): 0x57f980
     * @note[short] Windows: 0x330690
     * @note[short] iOS: 0x15ebf0
     * @note[short] Android
     */
    static SongInfoObject* createWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getArtistNames(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getTagsString(bool p0);

    /**
     * @note[short] Windows: 0x3302f0
     * @note[short] iOS: 0x15e928
     * @note[short] Android: Rebinded
     */
    bool init(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, int nongType, gd::string extraArtistIDs, bool isNew, int libraryOrder, int priority);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateArtists(gd::string p0);
    int m_songID;
    gd::string m_songName;
    gd::string m_artistName;
    gd::string m_youtubeVideo;
    gd::string m_youtubeChannel;
    gd::string m_songUrl;
    int m_artistID;
    float m_fileSize;
    int m_nongType;
    gd::string m_extraArtists;
    bool m_isUnknownSong;
    bool m_autoDownload;
    bool m_unk21a;
    int m_priority;
    int m_unkInt;
    int m_BPM;
    bool m_isNew;
    int m_libraryOrder;
    int m_songOrder;
    gd::string m_extraArtistNames;
    gd::unordered_set<int> m_artistIDs;
    gd::set<int> m_tags;
    gd::string m_longTagsString;
    gd::string m_shortTagsString;
};
