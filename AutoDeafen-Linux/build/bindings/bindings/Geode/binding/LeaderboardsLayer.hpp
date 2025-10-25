#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LeaderboardsLayer : public cocos2d::CCLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LeaderboardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LeaderboardsLayer, cocos2d::CCLayer)
	inline LeaderboardsLayer() {
        m_list = nullptr;
        m_userScores = nullptr;
        m_state = LeaderboardState::Default;
        m_topBtn = nullptr;
        m_globalBtn = nullptr;
        m_creatorsBtn = nullptr;
        m_friendsBtn = nullptr;
        m_circle = nullptr;
        m_noInternet = nullptr;
        m_tabs = nullptr;
    }

    /**
     * @note[short] MacOS (ARM): 0x45bf64
     * @note[short] MacOS (Intel): 0x4fc3a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a9128
     * @note[short] Android
     */
    static LeaderboardsLayer* create(LeaderboardState state);

    /**
     * @note[short] MacOS (ARM): 0x45be78
     * @note[short] MacOS (Intel): 0x4fc270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a90dc
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(LeaderboardState state);

    /**
     * @note[short] MacOS (ARM): 0x45dbec
     * @note[short] MacOS (Intel): 0x4fe1a0
     * @note[short] Windows: 0x2bbf50
     * @note[short] iOS: 0x3aa800
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x45db94
     * @note[short] MacOS (Intel): 0x4fe140
     * @note[short] Windows: 0x2bbea0
     * @note[short] iOS: 0x3aa7a8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x45d1b4
     * @note[short] MacOS (Intel): 0x4fd6b0
     * @note[short] Windows: 0x2bb1f0
     * @note[short] iOS: 0x3aa26c
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x45d1ec
     * @note[short] MacOS (Intel): 0x4fd710
     * @note[short] Windows: 0x2bb210
     * @note[short] iOS: 0x3aa2a4
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x45d294
     * @note[short] MacOS (Intel): 0x4fd7b0
     * @note[short] Windows: 0x2bb220
     * @note[short] iOS: 0x3aa300
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x45d924
     * @note[short] MacOS (Intel): 0x4fdeb0
     * @note[short] Windows: 0x2bb2b0
     * @note[short] iOS: 0x3aa638
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x45c030
     * @note[short] MacOS (Intel): 0x4fc4a0
     * @note[short] Windows: 0x2b9cd0
     * @note[short] iOS: 0x3a91e8
     * @note[short] Android
     */
    bool init(LeaderboardState p0);

    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] Windows: 0x2bbed0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCreators(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45c5c0
     * @note[short] MacOS (Intel): 0x4fca80
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTop(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onWeek(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2bac80
     * @note[short] Android
     */
    void refreshTabs();

    /**
     * @note[short] MacOS (ARM): 0x45cc24
     * @note[short] MacOS (Intel): 0x4fd0f0
     * @note[short] Windows: 0x2badb0
     * @note[short] Android
     */
    void selectLeaderboard(LeaderboardState p0);

    /**
     * @note[short] Windows: 0x2bab20
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x45c848
     * @note[short] MacOS (Intel): 0x4fccd0
     * @note[short] Android
     */
    TodoReturn setupTabs();

    /**
     * @note[short] Windows: 0x2bb000
     * @note[short] Android
     */
    void toggleTabButtons();
    GJListLayer* m_list;
    cocos2d::CCArray* m_userScores;
    LeaderboardState m_state;
    CCMenuItemToggler* m_topBtn;
    CCMenuItemToggler* m_globalBtn;
    CCMenuItemToggler* m_creatorsBtn;
    CCMenuItemToggler* m_friendsBtn;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    cocos2d::CCArray* m_tabs;
};
