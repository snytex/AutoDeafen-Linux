#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJLevelList : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJLevelList";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJLevelList, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x474a98
     * @note[short] MacOS (Intel): 0x517750
     * @note[short] Windows: 0x173760
     * @note[short] iOS: 0x96cac
     * @note[short] Android
     */
    static GJLevelList* create();

    /**
     * @note[short] MacOS (ARM): 0x478394
     * @note[short] MacOS (Intel): 0x51bac0
     * @note[short] Windows: 0x172e70
     * @note[short] iOS: 0x99114
     * @note[short] Android
     */
    static GJLevelList* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a5298
     * @note[short] MacOS (Intel): 0x54d230
     * @note[short] Windows: 0x174ff0
     * @note[short] iOS: 0xb5668
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a54d0
     * @note[short] MacOS (Intel): 0x54d4a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb58a0
     * @note[short] Android: Out of line
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4a3784
     * @note[short] MacOS (Intel): 0x54b420
     * @note[short] Windows: 0x1738f0
     * @note[short] iOS: 0xb42e0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4a3fbc
     * @note[short] MacOS (Intel): 0x54bdf0
     * @note[short] Windows: 0x173ee0
     * @note[short] iOS: 0xb4874
     * @note[short] Android
     */
    void addLevelToList(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4a4a48
     * @note[short] MacOS (Intel): 0x54ca00
     * @note[short] iOS: 0xb4fa4
     * @note[short] Android
     */
    TodoReturn completedLevels();

    /**
     * @note[short] MacOS (ARM): 0x4a4f38
     * @note[short] MacOS (Intel): 0x54cec0
     * @note[short] iOS: 0xb533c
     * @note[short] Android
     */
    static GJLevelList* createWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a4f68
     * @note[short] MacOS (Intel): 0x54cef0
     * @note[short] Windows: 0x174cd0
     * @note[short] iOS: 0xb536c
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn duplicateListLevels(GJLevelList* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a54d8
     * @note[short] MacOS (Intel): 0x54d4b0
     * @note[short] Android
     */
    TodoReturn frameForListDifficulty(int p0, DifficultyIconType p1);

    /**
     * @note[short] Windows: 0x174160
     * @note[short] Android
     */
    cocos2d::CCArray* getListLevelsArray(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a39d0
     * @note[short] MacOS (Intel): 0x54b670
     * @note[short] Windows: 0x173b80
     * @note[short] iOS: 0xb44a8
     * @note[short] Android
     */
    gd::string getUnpackedDescription();

    /**
     * @note[short] MacOS (ARM): 0x4a37fc
     * @note[short] MacOS (Intel): 0x54b4a0
     * @note[short] Android
     */
    void handleStatsConflict(GJLevelList* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a3814
     * @note[short] MacOS (Intel): 0x54b4c0
     * @note[short] Windows: 0x173970
     * @note[short] iOS: 0xb4390
     * @note[short] Android
     */
    bool hasMatchingLevels(GJLevelList* p0);

    /**
     * @note[short] Android
     */
    TodoReturn orderForLevel(int p0);

    /**
     * @note[short] MacOS (ARM): 0x487a60
     * @note[short] MacOS (Intel): 0x52ca10
     * @note[short] Windows: 0x173c40
     * @note[short] Android: Rebinded
     */
    TodoReturn parseListLevels(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeLevelFromList(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4a44e0
     * @note[short] MacOS (Intel): 0x54c400
     * @note[short] Windows: 0x174070
     * @note[short] Android
     */
    void reorderLevel(int levelID, int newPosition);

    /**
     * @note[short] Android
     */
    TodoReturn reorderLevelStep(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x4a4aac
     * @note[short] MacOS (Intel): 0x54ca50
     * @note[short] Windows: 0x174900
     * @note[short] iOS: 0xb4ff8
     * @note[short] Android
     */
    void showListInfo();

    /**
     * @note[short] MacOS (ARM): 0x4a4a38
     * @note[short] MacOS (Intel): 0x54c9e0
     * @note[short] Android
     */
    TodoReturn totalLevels();

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsString();
    gd::vector<int> m_levels;
    int m_listID;
    int m_listVersion;
    int m_downloads;
    int m_likes;
    int m_difficulty;
    int m_accountID;
    int m_folder;
    int m_listRevision;
    int m_listOrder;
    int m_original;
    int m_diamonds;
    int m_levelsToClaim;
    bool m_isEditable;
    bool m_unlisted;
    bool m_friendsOnly;
    bool m_uploaded;
    bool m_favorite;
    bool m_featured;
    bool m_k100;
    gd::string m_creatorName;
    gd::string m_listName;
    gd::string m_unkString;
    gd::string m_levelsString;
    gd::string m_listDesc;
    int m_uploadDate;
    int m_updateDate;
    cocos2d::CCDictionary* m_levelsDict;
    GJLevelType m_listType;
    int m_M_ID;
};
