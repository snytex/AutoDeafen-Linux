#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LevelLeaderboard : public FLAlertLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LevelLeaderboard";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelLeaderboard, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x350108
     * @note[short] MacOS (Intel): 0x3c72e0
     * @note[short] Windows: 0x2ebf80
     * @note[short] iOS: 0x24e3b8
     * @note[short] Android
     */
    static LevelLeaderboard* create(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);

    /**
     * @note[short] MacOS (ARM): 0x351f28
     * @note[short] MacOS (Intel): 0x3c9280
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x24fe80
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x351eac
     * @note[short] MacOS (Intel): 0x3c9210
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x24fe04
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x35241c
     * @note[short] MacOS (Intel): 0x3c97c0
     * @note[short] Windows: 0x867a0
     * @note[short] iOS: 0x250194
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x35214c
     * @note[short] MacOS (Intel): 0x3c94c0
     * @note[short] Windows: 0x2ee140
     * @note[short] iOS: 0x24ffbc
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x352298
     * @note[short] MacOS (Intel): 0x3c9600
     * @note[short] Windows: 0x2ee1e0
     * @note[short] iOS: 0x250060
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x351b24
     * @note[short] MacOS (Intel): 0x3c8e60
     * @note[short] Windows: 0x2ed570
     * @note[short] iOS: 0x24fadc
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x351d1c
     * @note[short] MacOS (Intel): 0x3c9060
     * @note[short] Windows: 0x2edb90
     * @note[short] iOS: 0x24fcc0
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x351d28
     * @note[short] MacOS (Intel): 0x3c9090
     * @note[short] Windows: 0x2edba0
     * @note[short] iOS: 0x24fccc
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x351994
     * @note[short] MacOS (Intel): 0x3c8d10
     * @note[short] Android
     */
    TodoReturn deleteLocalScores();

    /**
     * @note[short] Android
     */
    TodoReturn getLocalScores();

    /**
     * @note[short] MacOS (ARM): 0x351164
     * @note[short] MacOS (Intel): 0x3c8500
     * @note[short] Android: Rebinded
     */
    TodoReturn getSpriteButton(gd::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4, int p5);

    /**
     * @note[short] MacOS (ARM): 0x350244
     * @note[short] MacOS (Intel): 0x3c7470
     * @note[short] Windows: 0x2ec0c0
     * @note[short] iOS: 0x24e4a8
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);

    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x3515ec
     * @note[short] MacOS (Intel): 0x3c8960
     * @note[short] Windows: 0x2ed8c0
     * @note[short] Android
     */
    void loadScores();

    /**
     * @note[short] MacOS (ARM): 0x351344
     * @note[short] MacOS (Intel): 0x3c86d0
     * @note[short] Windows: 0x2edd40
     * @note[short] Android
     */
    void onChangeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2edca0
     * @note[short] Android
     */
    void onChangeType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35146c
     * @note[short] MacOS (Intel): 0x3c87f0
     * @note[short] Windows: 0x84620
     * @note[short] iOS: 0x24f504
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x351394
     * @note[short] MacOS (Intel): 0x3c8720
     * @note[short] Android
     */
    void onDeleteLocalScores(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3514a8
     * @note[short] MacOS (Intel): 0x3c8820
     * @note[short] Windows: 0x2eddc0
     * @note[short] iOS: 0x24f540
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn reloadLeaderboard(LevelLeaderboardType p0, LevelLeaderboardMode p1);

    /**
     * @note[short] MacOS (ARM): 0x351800
     * @note[short] MacOS (Intel): 0x3c8b60
     * @note[short] Android
     */
    TodoReturn setupLeaderboard(cocos2d::CCArray* p0);
    GJGameLevel* m_level;
    LevelLeaderboardType m_type;
    LevelLeaderboardMode m_mode;
    cocos2d::CCArray* m_scores;
    GJCommentListLayer* m_list;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    CCMenuItemSpriteExtra* m_refreshBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_pointsBtn;
};
