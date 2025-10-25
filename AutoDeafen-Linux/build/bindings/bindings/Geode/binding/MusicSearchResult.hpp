#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "OptionsObjectDelegate.hpp"

class MusicSearchResult : public cocos2d::CCObject, public OptionsObjectDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicSearchResult, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x326990
     * @note[short] Android: Rebinded
     */
     MusicSearchResult();

    /**
     * @note[short] MacOS (ARM): 0x4d3d64
     * @note[short] MacOS (Intel): 0x581300
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MusicSearchResult* create(GJSongType songType);

    /**
     * @note[short] MacOS (ARM): 0x4d4740
     * @note[short] MacOS (Intel): 0x582030
     * @note[short] Windows: 0x331610
     * @note[short] iOS: 0x15ff50
     * @note[short] Android
     */
    virtual void updateObjects(AudioSortType p0);

    /**
     * @note[short] MacOS (ARM): 0x4d4710
     * @note[short] MacOS (Intel): 0x581fd0
     * @note[short] Windows: 0x331600
     * @note[short] iOS: 0x15ff20
     * @note[short] Android
     */
    virtual void stateChanged(OptionsObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4d41c8
     * @note[short] MacOS (Intel): 0x5818b0
     * @note[short] Android
     */
    cocos2d::CCArray* applyArtistFilters(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x4d4004
     * @note[short] MacOS (Intel): 0x581670
     * @note[short] Windows: 0x331530
     * @note[short] Android
     */
    cocos2d::CCArray* applyTagFilters(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    void createArtistFilterObjects();

    /**
     * @note[short] Android
     */
    void createTagFilterObjects();

    /**
     * @note[short] MacOS (ARM): 0x4d49d8
     * @note[short] MacOS (Intel): 0x582340
     * @note[short] Windows: 0x331b60
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* getFilesMatchingSearch(cocos2d::CCArray* p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4d3dd8
     * @note[short] MacOS (Intel): 0x581380
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GJSongType songType);

    /**
     * @note[short] Android
     */
    void updateFutureCount(cocos2d::CCArray* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateObjects();
    cocos2d::CCArray* m_filterObjects;
    cocos2d::CCArray* m_tagFilterObjects;
    cocos2d::CCArray* m_artistFilterObjects;
    int m_startIndex;
    int m_audioType;
    gd::string m_searchQuery;
    AudioSortType m_sortType;
    bool m_tagFilter;
    bool m_artistFilter;
    GJSongType m_songType;
};
