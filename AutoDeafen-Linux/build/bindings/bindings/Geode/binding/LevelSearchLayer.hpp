#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DemonFilterDelegate.hpp"

class LevelSearchLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DemonFilterDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSearchLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x53d2e0
     * @note[short] MacOS (Intel): 0x610ff0
     * @note[short] iOS: 0x54d78
     * @note[short] Android
     */
    static LevelSearchLayer* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x53d1e8
     * @note[short] MacOS (Intel): 0x610eb0
     * @note[short] Windows: 0x2f75f0
     * @note[short] iOS: 0x54d2c
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int p0);

    /**
     * @note[short] MacOS (ARM): 0x542290
     * @note[short] MacOS (Intel): 0x615fa0
     * @note[short] Windows: 0x2fdcc0
     * @note[short] iOS: 0x588e4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5417d0
     * @note[short] MacOS (Intel): 0x6154f0
     * @note[short] Windows: 0x2fad00
     * @note[short] iOS: 0x58198
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x5418b0
     * @note[short] MacOS (Intel): 0x6155c0
     * @note[short] Windows: 0x2fae50
     * @note[short] iOS: 0x58284
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x5419c0
     * @note[short] MacOS (Intel): 0x615690
     * @note[short] Windows: 0x2fae50
     * @note[short] iOS: 0x58304
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x541738
     * @note[short] MacOS (Intel): 0x615480
     * @note[short] Windows: 0x2facc0
     * @note[short] iOS: 0x58100
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x541280
     * @note[short] MacOS (Intel): 0x614f70
     * @note[short] Windows: 0x2f97f0
     * @note[short] iOS: 0x57db8
     * @note[short] Android
     */
    virtual void demonFilterSelectClosed(int p0);

    /**
     * @note[short] Android
     */
    bool checkDiff(int p0);

    /**
     * @note[short] Android
     */
    bool checkTime(int p0);

    /**
     * @note[short] MacOS (ARM): 0x54146c
     * @note[short] MacOS (Intel): 0x6151b0
     * @note[short] Windows: 0x2f9ca0
     * @note[short] Android
     */
    void clearFilters();

    /**
     * @note[short] MacOS (ARM): 0x53f9d8
     * @note[short] MacOS (Intel): 0x6136c0
     * @note[short] Android
     */
    void confirmClearFilters(cocos2d::CCObject* p0);
	inline char const* getDiffKey(int diff) {
        return cocos2d::CCString::createWithFormat("D%i", diff)->getCString();
    }

    /**
     * @note[short] Windows: 0x14b660
     * @note[short] Android
     */
    gd::string getLevelLenKey();

    /**
     * @note[short] MacOS (ARM): 0x541e38
     * @note[short] MacOS (Intel): 0x615b40
     * @note[short] Android
     */
    gd::string getSearchDiffKey();

    /**
     * @note[short] MacOS (ARM): 0x541ae4
     * @note[short] MacOS (Intel): 0x615780
     * @note[short] Windows: 0x2fb290
     * @note[short] iOS: 0x58384
     * @note[short] Android: Rebinded
     */
    GJSearchObject* getSearchObject(SearchType p0, gd::string p1);
	inline char const* getTimeKey(int time) {
        return cocos2d::CCString::createWithFormat("T%i", time)->getCString();
    }

    /**
     * @note[short] MacOS (ARM): 0x53d3b8
     * @note[short] MacOS (Intel): 0x611100
     * @note[short] Windows: 0x2f7740
     * @note[short] iOS: 0x54e44
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x540dc8
     * @note[short] MacOS (Intel): 0x614a90
     * @note[short] Windows: 0x2fd040
     * @note[short] iOS: 0x57a90
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x540128
     * @note[short] MacOS (Intel): 0x613e40
     * @note[short] Windows: 0x2fd000
     * @note[short] Android
     */
    void onClearFreeSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2fcac0
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2fca00
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2fc940
     * @note[short] Android
     */
    void onLatestStars(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2fc7c0
     * @note[short] Android
     */
    void onMagic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53fab8
     * @note[short] MacOS (Intel): 0x6137a0
     * @note[short] Windows: 0x2f9a80
     * @note[short] Android
     */
    void onMoreOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2fc4c0
     * @note[short] Android
     */
    void onMostDownloaded(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2fc580
     * @note[short] Android
     */
    void onMostLikes(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x540424
     * @note[short] MacOS (Intel): 0x614110
     * @note[short] Windows: 0x2fc880
     * @note[short] iOS: 0x572dc
     * @note[short] Android
     */
    void onMostRecent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53fe68
     * @note[short] MacOS (Intel): 0x613ba0
     * @note[short] Windows: 0x2fcb80
     * @note[short] iOS: 0x56c98
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53fad4
     * @note[short] MacOS (Intel): 0x6137c0
     * @note[short] Windows: 0x2f9a30
     * @note[short] Android
     */
    void onSearchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53fff0
     * @note[short] MacOS (Intel): 0x613d10
     * @note[short] Windows: 0x2fcdc0
     * @note[short] iOS: 0x56ddc
     * @note[short] Android
     */
    void onSearchUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x540b44
     * @note[short] MacOS (Intel): 0x614830
     * @note[short] Windows: 0x2f9690
     * @note[short] Android
     */
    void onSpecialDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onStarAward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54034c
     * @note[short] MacOS (Intel): 0x614030
     * @note[short] Windows: 0x2fc640
     * @note[short] iOS: 0x57194
     * @note[short] Android
     */
    void onSuggested(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2fc700
     * @note[short] Android
     */
    void onTrending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x540640
     * @note[short] MacOS (Intel): 0x614340
     * @note[short] Windows: 0x2fd3c0
     * @note[short] iOS: 0x57610
     * @note[short] Android
     */
    void toggleDifficulty(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x540e20
     * @note[short] MacOS (Intel): 0x614ae0
     * @note[short] Windows: 0x2fd720
     * @note[short] iOS: 0x57ae8
     * @note[short] Android
     */
    void toggleDifficultyNum(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x540d30
     * @note[short] MacOS (Intel): 0x614a10
     * @note[short] Windows: 0x2fd0b0
     * @note[short] iOS: 0x579f8
     * @note[short] Android
     */
    void toggleStar(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    void toggleTime(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x540fb4
     * @note[short] MacOS (Intel): 0x614c70
     * @note[short] Windows: 0x2fdb30
     * @note[short] iOS: 0x57bec
     * @note[short] Android
     */
    void toggleTimeNum(int p0, bool p1);

    /**
     * @note[short] Windows: 0x2faf20
     * @note[short] Android
     */
    void updateSearchLabel(char const* p0);
    int m_type;
    CCTextInputNode* m_searchInput;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCArray* m_difficultySprites;
    cocos2d::CCArray* m_lengthSprites;
    cocos2d::CCDictionary* m_difficultyDict;
    cocos2d::CCSprite* m_lastDifficultySprite;
    CCMenuItemSpriteExtra* m_demonTypeButton;
};
