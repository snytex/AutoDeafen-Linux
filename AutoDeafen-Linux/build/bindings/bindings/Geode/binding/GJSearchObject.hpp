#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSearchObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSearchObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSearchObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4a2868
     * @note[short] MacOS (Intel): 0x54a1a0
     * @note[short] Windows: 0x171900
     * @note[short] Android: Rebinded
     */
    static GJSearchObject* create(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] MacOS (ARM): 0x4a2b7c
     * @note[short] MacOS (Intel): 0x54a530
     * @note[short] Windows: 0x1717d0
     * @note[short] iOS: 0xb39a4
     * @note[short] Android: Rebinded
     */
    static GJSearchObject* create(SearchType searchType, gd::string searchQuery);

    /**
     * @note[short] MacOS (ARM): 0x4a2b10
     * @note[short] MacOS (Intel): 0x54a4c0
     * @note[short] Windows: 0x1716f0
     * @note[short] iOS: 0xb3894
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType searchType);

    /**
     * @note[short] MacOS (ARM): 0x47eddc
     * @note[short] MacOS (Intel): 0x522e20
     * @note[short] Windows: 0x170ff0
     * @note[short] iOS: 0x9d57c
     * @note[short] Android
     */
    static GJSearchObject* createFromKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4857e8
     * @note[short] MacOS (Intel): 0x52a470
     * @note[short] Windows: 0x171c40
     * @note[short] iOS: 0xa1778
     * @note[short] Android
     */
    char const* getKey();

    /**
     * @note[short] Android
     */
    char const* getNextPageKey();

    /**
     * @note[short] MacOS (ARM): 0x4a3120
     * @note[short] MacOS (Intel): 0x54ac80
     * @note[short] Android
     */
    GJSearchObject* getNextPageObject();

    /**
     * @note[short] MacOS (ARM): 0x4a312c
     * @note[short] MacOS (Intel): 0x54aca0
     * @note[short] Windows: 0x171d90
     * @note[short] Android
     */
    GJSearchObject* getPageObject(int page);

    /**
     * @note[short] MacOS (ARM): 0x4a331c
     * @note[short] MacOS (Intel): 0x54af60
     * @note[short] Android
     */
    GJSearchObject* getPrevPageObject();

    /**
     * @note[short] MacOS (ARM): 0x4a2da8
     * @note[short] MacOS (Intel): 0x54a780
     * @note[short] Windows: 0x171f00
     * @note[short] Android: Rebinded
     */
    static char const* getSearchKey(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] Android: Rebinded
     */
    bool init(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] MacOS (ARM): 0x4a3330
     * @note[short] MacOS (Intel): 0x54af80
     * @note[short] Windows: 0x1721e0
     * @note[short] iOS: 0xb4078
     * @note[short] Android
     */
    bool isLevelSearchObject();
    SearchType m_searchType;
    gd::string m_searchQuery;
    gd::string m_difficulty;
    gd::string m_length;
    int m_page;
    bool m_starFilter;
    bool m_noStarFilter;
    int m_total;
    bool m_uncompletedFilter;
    bool m_completedFilter;
    bool m_featuredFilter;
    bool m_originalFilter;
    bool m_twoPlayerFilter;
    bool m_coinsFilter;
    bool m_epicFilter;
    bool m_legendaryFilter;
    bool m_mythicFilter;
    GJDifficulty m_demonFilter;
    int m_folder;
    int m_songID;
    bool m_customSongFilter;
    bool m_songFilter;
    bool m_searchIsOverlay;
    int m_searchMode;
};
