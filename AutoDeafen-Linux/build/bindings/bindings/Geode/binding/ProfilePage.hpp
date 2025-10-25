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
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "UserInfoDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "LeaderboardManagerDelegate.hpp"

class ProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public LevelCommentDelegate, public CommentUploadDelegate, public UserInfoDelegate, public UploadActionDelegate, public UploadPopupDelegate, public LeaderboardManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "ProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6b5200
     * @note[short] MacOS (Intel): 0x7a3080
     * @note[short] Windows: 0x3a7a20
     * @note[short] iOS: 0x199e24
     * @note[short] Android
     */
    static ProfilePage* create(int accountID, bool ownProfile);

    /**
     * @note[short] MacOS (ARM): 0x6bcf04
     * @note[short] MacOS (Intel): 0x7ab750
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x19ff84
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x6bb96c
     * @note[short] MacOS (Intel): 0x7aa100
     * @note[short] Windows: 0x3ae050
     * @note[short] iOS: 0x19f304
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6bbb9c
     * @note[short] MacOS (Intel): 0x7aa380
     * @note[short] Windows: 0x3ae2e0
     * @note[short] iOS: 0x19f44c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x6bb3d4
     * @note[short] MacOS (Intel): 0x7a9ba0
     * @note[short] Windows: 0x3ada20
     * @note[short] iOS: 0x19ef78
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x6bba60
     * @note[short] MacOS (Intel): 0x7aa210
     * @note[short] Windows: 0x3ae1a0
     * @note[short] iOS: 0x19f310
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x6bbaf4
     * @note[short] MacOS (Intel): 0x7aa2e0
     * @note[short] Windows: 0x3ae290
     * @note[short] iOS: 0x19f3a4
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x6bbe88
     * @note[short] MacOS (Intel): 0x7aa670
     * @note[short] Windows: 0x3aeb40
     * @note[short] iOS: 0x19f584
     * @note[short] Android
     */
    virtual void getUserInfoFinished(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x6bc25c
     * @note[short] MacOS (Intel): 0x7aaa60
     * @note[short] Windows: 0x3aec30
     * @note[short] iOS: 0x19f7f8
     * @note[short] Android
     */
    virtual void getUserInfoFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6bc334
     * @note[short] MacOS (Intel): 0x7aab20
     * @note[short] Windows: 0x3aec80
     * @note[short] iOS: 0x19f86c
     * @note[short] Android
     */
    virtual void userInfoChanged(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x6bc558
     * @note[short] MacOS (Intel): 0x7aad40
     * @note[short] Windows: 0x3af270
     * @note[short] iOS: 0x19f990
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x6bc664
     * @note[short] MacOS (Intel): 0x7aae30
     * @note[short] Windows: 0x3af2f0
     * @note[short] iOS: 0x19fa14
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x6bc738
     * @note[short] MacOS (Intel): 0x7aaf00
     * @note[short] Windows: 0x3af350
     * @note[short] iOS: 0x19fa84
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x6bcc2c
     * @note[short] MacOS (Intel): 0x7ab460
     * @note[short] Windows: 0x3af550
     * @note[short] iOS: 0x19fd4c
     * @note[short] Android
     */
    virtual void commentUploadFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6bcccc
     * @note[short] MacOS (Intel): 0x7ab4f0
     * @note[short] Windows: 0x3af5a0
     * @note[short] iOS: 0x19fda4
     * @note[short] Android
     */
    virtual void commentUploadFailed(int p0, CommentError p1);

    /**
     * @note[short] MacOS (ARM): 0x6bcda0
     * @note[short] MacOS (Intel): 0x7ab5c0
     * @note[short] Windows: 0x3af6c0
     * @note[short] iOS: 0x19fe54
     * @note[short] Android
     */
    virtual void commentDeleteFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x6bb58c
     * @note[short] MacOS (Intel): 0x7a9d80
     * @note[short] Windows: 0x3add10
     * @note[short] iOS: 0x19f0fc
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x6bb614
     * @note[short] MacOS (Intel): 0x7a9e00
     * @note[short] Windows: 0x3add60
     * @note[short] iOS: 0x19f16c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x6bb80c
     * @note[short] MacOS (Intel): 0x7a9fe0
     * @note[short] Windows: 0x3adf20
     * @note[short] iOS: 0x19f280
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] MacOS (ARM): 0x6b5370
     * @note[short] MacOS (Intel): 0x7a3290
     * @note[short] Windows: 0x3a7c00
     * @note[short] iOS: 0x199ea8
     * @note[short] Android
     */
    bool init(int accountID, bool ownProfile);

    /**
     * @note[short] Windows: 0x3aed00
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] Android
     */
    bool isOnWatchlist(int p0);

    /**
     * @note[short] Windows: 0x3aee30
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6b662c
     * @note[short] MacOS (Intel): 0x7a4660
     * @note[short] Windows: 0x3a9240
     * @note[short] iOS: 0x19b0d8
     * @note[short] Android
     */
    void loadPageFromUserInfo(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x6b9f98
     * @note[short] MacOS (Intel): 0x7a8690
     * @note[short] Windows: 0x3ad200
     * @note[short] Android
     */
    void onBlockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b5db8
     * @note[short] MacOS (Intel): 0x7a3d60
     * @note[short] Windows: 0x3adfd0
     * @note[short] iOS: 0x19a8dc
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ba888
     * @note[short] MacOS (Intel): 0x7a8fa0
     * @note[short] Windows: 0x3acc50
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b92c8
     * @note[short] MacOS (Intel): 0x7a7830
     * @note[short] Windows: 0x3acbc0
     * @note[short] iOS: 0x19d948
     * @note[short] Android
     */
    void onCommentHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b9908
     * @note[short] MacOS (Intel): 0x7a7fa0
     * @note[short] Windows: 0x3ac290
     * @note[short] iOS: 0x19ddd8
     * @note[short] Android
     */
    void onCopyName(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b6028
     * @note[short] MacOS (Intel): 0x7a3fe0
     * @note[short] Windows: 0x3ad450
     * @note[short] Android
     */
    void onFollow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b9c54
     * @note[short] MacOS (Intel): 0x7a82f0
     * @note[short] Windows: 0x3ace10
     * @note[short] iOS: 0x19e02c
     * @note[short] Android
     */
    void onFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3aeae0
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b9300
     * @note[short] MacOS (Intel): 0x7a7870
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3aeab0
     * @note[short] Android
     */
    void onMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ba314
     * @note[short] MacOS (Intel): 0x7a8a10
     * @note[short] Windows: 0x3ac8b0
     * @note[short] iOS: 0x19e44c
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ba4e8
     * @note[short] MacOS (Intel): 0x7a8bf0
     * @note[short] Windows: 0x3aca60
     * @note[short] iOS: 0x19e58c
     * @note[short] Android
     */
    void onMyLists(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3af530
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3af540
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3aeb10
     * @note[short] iOS: 0x19e72c
     * @note[short] Android
     */
    void onRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b9b4c
     * @note[short] MacOS (Intel): 0x7a81e0
     * @note[short] Windows: 0x3acc00
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6ba868
     * @note[short] MacOS (Intel): 0x7a8f80
     * @note[short] Windows: 0x3ae900
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b89e4
     * @note[short] MacOS (Intel): 0x7a6f70
     * @note[short] Windows: 0x3ac0c0
     * @note[short] iOS: 0x19d1a0
     * @note[short] Android
     */
    void onStatInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b9124
     * @note[short] MacOS (Intel): 0x7a76a0
     * @note[short] Windows: 0x3ae760
     * @note[short] Android
     */
    void onTwitch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b8f6c
     * @note[short] MacOS (Intel): 0x7a74f0
     * @note[short] Windows: 0x3ae5d0
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b6288
     * @note[short] MacOS (Intel): 0x7a4270
     * @note[short] Windows: 0x3a8bb0
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b8dbc
     * @note[short] MacOS (Intel): 0x7a7350
     * @note[short] Windows: 0x3ae440
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b5e30
     * @note[short] MacOS (Intel): 0x7a3de0
     * @note[short] Android
     */
    void setupComments();

    /**
     * @note[short] MacOS (ARM): 0x6b64fc
     * @note[short] MacOS (Intel): 0x7a4520
     * @note[short] Windows: 0x3af120
     * @note[short] iOS: 0x19afa8
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x6bb250
     * @note[short] MacOS (Intel): 0x7a99e0
     * @note[short] Windows: 0x3ae060
     * @note[short] Android
     */
    void showNoAccountError();

    /**
     * @note[short] Android
     */
    void toggleMainPageVisibility(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x6b8cfc
     * @note[short] MacOS (Intel): 0x7a72a0
     * @note[short] Windows: 0x3ac010
     * @note[short] iOS: 0x19d480
     * @note[short] Android
     */
    void toggleShip(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] Windows: 0x3af4c0
     * @note[short] Android
     */
    void updatePageArrows();
    GJUserScore* m_score;
    int m_accountID;
    bool m_ownProfile;
    gd::string m_profileKey;
    cocos2d::CCLabelBMFont* m_somethingWentWrong;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_followBtn;
    bool m_unk;
    cocos2d::CCArray* m_buttons;
    cocos2d::CCArray* m_arrayWithUsernameLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    LoadingCircle* m_circle;
    UploadActionPopup* m_popupDelegate;
    CCMenuItemSpriteExtra* m_refreshBtn;
    int m_unk2;
};
