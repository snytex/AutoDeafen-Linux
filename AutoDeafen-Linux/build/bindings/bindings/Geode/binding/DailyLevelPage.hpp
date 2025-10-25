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
#include "FLAlertLayerProtocol.hpp"
#include "GJDailyLevelDelegate.hpp"
#include "LevelDownloadDelegate.hpp"

class DailyLevelPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJDailyLevelDelegate, public LevelDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "DailyLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DailyLevelPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1d0d8c
     * @note[short] MacOS (Intel): 0x21e2b0
     * @note[short] Windows: 0xccfd0
     * @note[short] iOS: 0x1baec4
     * @note[short] Android
     */
    static DailyLevelPage* create(GJTimedLevelType p0);

    /**
     * @note[short] MacOS (ARM): 0x1d3438
     * @note[short] MacOS (Intel): 0x220540
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x1bca50
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1d339c
     * @note[short] MacOS (Intel): 0x2204b0
     * @note[short] Windows: 0x86980
     * @note[short] iOS: 0x1bca44
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1d3210
     * @note[short] MacOS (Intel): 0x220310
     * @note[short] Windows: 0x867a0
     * @note[short] iOS: 0x1bc8c8
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1d3394
     * @note[short] MacOS (Intel): 0x220490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1bca3c
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1d28e4
     * @note[short] MacOS (Intel): 0x21f9a0
     * @note[short] Windows: 0xce560
     * @note[short] iOS: 0x1bc164
     * @note[short] Android
     */
    virtual void dailyStatusFinished(GJTimedLevelType p0);

    /**
     * @note[short] MacOS (ARM): 0x1d2cd0
     * @note[short] MacOS (Intel): 0x21fde0
     * @note[short] Windows: 0xce860
     * @note[short] iOS: 0x1bc4a8
     * @note[short] Android
     */
    virtual void dailyStatusFailed(GJTimedLevelType p0, GJErrorCode p1);

    /**
     * @note[short] MacOS (ARM): 0x1d2f0c
     * @note[short] MacOS (Intel): 0x220030
     * @note[short] Windows: 0xceb90
     * @note[short] iOS: 0x1bc67c
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x1d2fec
     * @note[short] MacOS (Intel): 0x2200f0
     * @note[short] Windows: 0xcebf0
     * @note[short] iOS: 0x1bc6f4
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1d3470
     * @note[short] MacOS (Intel): 0x220580
     * @note[short] Windows: 0xd06b0
     * @note[short] Android
     */
    void claimLevelReward(DailyLevelNode* p0, GJGameLevel* p1, cocos2d::CCPoint p2);

    /**
     * @note[short] MacOS (ARM): 0x1d2700
     * @note[short] MacOS (Intel): 0x21f7b0
     * @note[short] Windows: 0xcee40
     * @note[short] iOS: 0x1bbfc4
     * @note[short] Android
     */
    void createDailyNode(GJGameLevel* p0, bool p1, float p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x1d302c
     * @note[short] MacOS (Intel): 0x220130
     * @note[short] Windows: 0xced50
     * @note[short] iOS: 0x1bc734
     * @note[short] Android
     */
    void createNodeIfLoaded();

    /**
     * @note[short] Windows: 0xceca0
     * @note[short] iOS: 0x1bc3c4
     * @note[short] Android
     */
    void downloadAndCreateNode();

    /**
     * @note[short] MacOS (ARM): 0x1d2b34
     * @note[short] MacOS (Intel): 0x21fc20
     * @note[short] Android
     */
    void exitDailyNode(DailyLevelNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1d3198
     * @note[short] MacOS (Intel): 0x2202a0
     * @note[short] Android
     */
    int getDailyTime();

    /**
     * @note[short] MacOS (ARM): 0x1d1e6c
     * @note[short] MacOS (Intel): 0x21f120
     * @note[short] Windows: 0xcf200
     * @note[short] iOS: 0x1bbb24
     * @note[short] Android
     */
    gd::string getDailyTimeString(int timeLeft);

    /**
     * @note[short] MacOS (ARM): 0x1d0ebc
     * @note[short] MacOS (Intel): 0x21e440
     * @note[short] Windows: 0xcd110
     * @note[short] iOS: 0x1baf38
     * @note[short] Android
     */
    bool init(GJTimedLevelType p0);

    /**
     * @note[short] MacOS (ARM): 0x1d1db4
     * @note[short] MacOS (Intel): 0x21f070
     * @note[short] Windows: 0x86940
     * @note[short] iOS: 0x1bba6c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d1e00
     * @note[short] MacOS (Intel): 0x21f0b0
     * @note[short] Windows: 0xd0bb0
     * @note[short] iOS: 0x1bbab8
     * @note[short] Android
     */
    void onTheSafe(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void refreshDailyPage();

    /**
     * @note[short] MacOS (ARM): 0x1d3620
     * @note[short] MacOS (Intel): 0x220700
     * @note[short] Windows: 0xd0980
     * @note[short] iOS: 0x1bcbdc
     * @note[short] Android
     */
    void skipDailyLevel(DailyLevelNode* p0, GJGameLevel* p1);

    /**
     * @note[short] Windows: 0xcec10
     * @note[short] Android
     */
    void tryGetDailyStatus();

    /**
     * @note[short] MacOS (ARM): 0x1d24a8
     * @note[short] MacOS (Intel): 0x21f570
     * @note[short] Windows: 0xd0360
     * @note[short] iOS: 0x1bbe2c
     * @note[short] Android
     */
    void updateTimers(float p0);
    cocos2d::CCLabelBMFont* m_timeLabel;
    LoadingCircle* m_timeCircle;
    LoadingCircle* m_nodeCircle;
    bool m_gettingDailyStatus;
    DailyLevelNode* m_dailyNode;
    bool m_downloadStarted;
    GJTimedLevelType m_type;
    int m_downloadLevelID;
};
