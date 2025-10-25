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
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class InfoLayer : public FLAlertLayer, public LevelCommentDelegate, public CommentUploadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "InfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6ab724
     * @note[short] MacOS (Intel): 0x798c50
     * @note[short] Windows: 0x2b3200
     * @note[short] iOS: 0x34f230
     * @note[short] Android
     */
    static InfoLayer* create(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);

    /**
     * @note[short] MacOS (ARM): 0x6af438
     * @note[short] MacOS (Intel): 0x79ce80
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x3524c0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x6af34c
     * @note[short] MacOS (Intel): 0x79cd70
     * @note[short] Windows: 0x2b6b40
     * @note[short] iOS: 0x3524b4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6b0218
     * @note[short] MacOS (Intel): 0x79dd40
     * @note[short] Windows: 0x2b7fd0
     * @note[short] iOS: 0x352ce8
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x6af588
     * @note[short] MacOS (Intel): 0x79cff0
     * @note[short] Windows: 0x2b7480
     * @note[short] iOS: 0x352548
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x6af66c
     * @note[short] MacOS (Intel): 0x79d0c0
     * @note[short] Windows: 0x2b74f0
     * @note[short] iOS: 0x3525b8
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x6af718
     * @note[short] MacOS (Intel): 0x79d160
     * @note[short] Windows: 0x2b7540
     * @note[short] iOS: 0x352614
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x6afe38
     * @note[short] MacOS (Intel): 0x79d8f0
     * @note[short] Windows: 0x2b7880
     * @note[short] iOS: 0x352a18
     * @note[short] Android
     */
    virtual void commentUploadFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6aff50
     * @note[short] MacOS (Intel): 0x79da40
     * @note[short] Windows: 0x2b7950
     * @note[short] iOS: 0x352aa8
     * @note[short] Android
     */
    virtual void commentUploadFailed(int p0, CommentError p1);

    /**
     * @note[short] MacOS (ARM): 0x6afcb0
     * @note[short] MacOS (Intel): 0x79d750
     * @note[short] Windows: 0x2b7730
     * @note[short] iOS: 0x35294c
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x6af108
     * @note[short] MacOS (Intel): 0x79cb10
     * @note[short] Windows: 0x2b5ce0
     * @note[short] iOS: 0x3523c0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x6add08
     * @note[short] MacOS (Intel): 0x79b630
     * @note[short] Windows: 0x2b5780
     * @note[short] iOS: 0x3513b8
     * @note[short] Android
     */
    void confirmReport(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    int getAccountID();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getID();

    /**
     * @note[short] Android
     */
    int getRealID();

    /**
     * @note[short] Windows: 0x2b52e0
     * @note[short] Android
     */
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4);

    /**
     * @note[short] MacOS (ARM): 0x6ab874
     * @note[short] MacOS (Intel): 0x798e00
     * @note[short] Windows: 0x2b33a0
     * @note[short] iOS: 0x34f334
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);

    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x6ae3e8
     * @note[short] MacOS (Intel): 0x79bd10
     * @note[short] Windows: 0x2b6c80
     * @note[short] iOS: 0x3518ac
     * @note[short] Android
     */
    void loadPage(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x6adff8
     * @note[short] MacOS (Intel): 0x79b910
     * @note[short] Windows: 0x2b6ac0
     * @note[short] iOS: 0x35157c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ad908
     * @note[short] MacOS (Intel): 0x79b1e0
     * @note[short] Windows: 0x2b5f20
     * @note[short] iOS: 0x3510a0
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6aef98
     * @note[short] MacOS (Intel): 0x79c9c0
     * @note[short] Windows: 0x2b5ba0
     * @note[short] iOS: 0x352274
     * @note[short] Android
     */
    void onCopyLevelID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ae3dc
     * @note[short] MacOS (Intel): 0x79bd00
     * @note[short] Windows: 0x2b64d0
     * @note[short] iOS: 0x3518a0
     * @note[short] Android
     */
    void onGetComments(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ae924
     * @note[short] MacOS (Intel): 0x79c2f0
     * @note[short] Windows: 0x2b64e0
     * @note[short] iOS: 0x351d4c
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ad570
     * @note[short] MacOS (Intel): 0x79ae40
     * @note[short] Windows: 0x2b5e00
     * @note[short] iOS: 0x350d94
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ae07c
     * @note[short] MacOS (Intel): 0x79b9b0
     * @note[short] Windows: 0x2b7860
     * @note[short] iOS: 0x351600
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ad7c8
     * @note[short] MacOS (Intel): 0x79b090
     * @note[short] Windows: 0x2b5e60
     * @note[short] iOS: 0x350fe0
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ae06c
     * @note[short] MacOS (Intel): 0x79b990
     * @note[short] Windows: 0x2b7870
     * @note[short] iOS: 0x3515f0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6aee78
     * @note[short] MacOS (Intel): 0x79c870
     * @note[short] Windows: 0x2b5620
     * @note[short] iOS: 0x3521c4
     * @note[short] Android
     */
    void onRefreshComments(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSimilar(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b7bf0
     * @note[short] Android
     */
    TodoReturn reloadWindow();

    /**
     * @note[short] MacOS (ARM): 0x6ae750
     * @note[short] MacOS (Intel): 0x79c0e0
     * @note[short] Windows: 0x2b71f0
     * @note[short] iOS: 0x351b78
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x6ad5cc
     * @note[short] MacOS (Intel): 0x79ae90
     * @note[short] Windows: 0x2b5420
     * @note[short] iOS: 0x350de8
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x6ae170
     * @note[short] MacOS (Intel): 0x79bab0
     * @note[short] Windows: 0x2b7e10
     * @note[short] iOS: 0x3516f4
     * @note[short] Android
     */
    void toggleCommentMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ae250
     * @note[short] MacOS (Intel): 0x79bb90
     * @note[short] Windows: 0x2b7aa0
     * @note[short] iOS: 0x351750
     * @note[short] Android
     */
    void toggleExtendedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ae280
     * @note[short] MacOS (Intel): 0x79bbc0
     * @note[short] Windows: 0x2b7b00
     * @note[short] iOS: 0x351780
     * @note[short] Android
     */
    void toggleSmallCommentMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b7ed0
     * @note[short] Android
     */
    TodoReturn updateCommentModeButtons();

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
    GJGameLevel* m_level;
    GJUserScore* m_score;
    GJLevelList* m_levelList;
    gd::string m_commentKey;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_noComments;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_reportBtn;
    CCMenuItemSpriteExtra* m_commentsBtn;
    CCMenuItemSpriteExtra* m_refreshCommentsBtn;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_canUpdateUserScore;
    CommentKeyType m_mode;
};
