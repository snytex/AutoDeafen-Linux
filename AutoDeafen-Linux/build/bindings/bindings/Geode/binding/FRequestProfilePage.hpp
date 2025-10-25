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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FriendRequestDelegate.hpp"

class FRequestProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public FriendRequestDelegate {
public:
    static constexpr auto CLASS_NAME = "FRequestProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FRequestProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x68e8cc
     * @note[short] MacOS (Intel): 0x7798d0
     * @note[short] Windows: 0x13bc90
     * @note[short] iOS: 0x1b7ef8
     * @note[short] Android
     */
    static FRequestProfilePage* create(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x68ffa8
     * @note[short] MacOS (Intel): 0x77b1a0
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x1b91f4
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x68ff9c
     * @note[short] MacOS (Intel): 0x77b170
     * @note[short] Windows: 0x13d290
     * @note[short] iOS: 0x1b91e8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x68fe98
     * @note[short] MacOS (Intel): 0x77b090
     * @note[short] Windows: 0x13d070
     * @note[short] iOS: 0x1b90f0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x68ffe0
     * @note[short] MacOS (Intel): 0x77b1e0
     * @note[short] Windows: 0x13d2a0
     * @note[short] iOS: 0x1b922c
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x690068
     * @note[short] MacOS (Intel): 0x77b250
     * @note[short] Windows: 0x13d2f0
     * @note[short] iOS: 0x1b929c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x690234
     * @note[short] MacOS (Intel): 0x77b410
     * @note[short] Windows: 0x13d460
     * @note[short] iOS: 0x1b9384
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x690608
     * @note[short] MacOS (Intel): 0x77b7e0
     * @note[short] Windows: 0x13dbd0
     * @note[short] iOS: 0x1b95c0
     * @note[short] Android
     */
    virtual void loadFRequestsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x690714
     * @note[short] MacOS (Intel): 0x77b8d0
     * @note[short] Windows: 0x13dc50
     * @note[short] iOS: 0x1b9644
     * @note[short] Android
     */
    virtual void loadFRequestsFailed(char const* p0, GJErrorCode p1);

    /**
     * @note[short] MacOS (ARM): 0x690874
     * @note[short] MacOS (Intel): 0x77ba20
     * @note[short] Windows: 0x13dcf0
     * @note[short] iOS: 0x1b9714
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x690840
     * @note[short] MacOS (Intel): 0x77b9e0
     * @note[short] Windows: 0x13dcd0
     * @note[short] iOS: 0x1b96e0
     * @note[short] Android
     */
    virtual void forceReloadRequests(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x68fcd0
     * @note[short] MacOS (Intel): 0x77aeb0
     * @note[short] Windows: 0x13ce00
     * @note[short] iOS: 0x1b8f60
     * @note[short] Android
     */
    void deleteSelected();

    /**
     * @note[short] MacOS (ARM): 0x68ea04
     * @note[short] MacOS (Intel): 0x779a80
     * @note[short] Windows: 0x13be30
     * @note[short] iOS: 0x1b7f6c
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] Windows: 0x13d500
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] Windows: 0x13d630
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] Windows: 0x13d130
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x68f608
     * @note[short] MacOS (Intel): 0x77a720
     * @note[short] Windows: 0x13cb10
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x13de80
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x13de90
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x13d0a0
     * @note[short] Android
     */
    void onSentRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x13c930
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x13ca10
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x690494
     * @note[short] MacOS (Intel): 0x77b660
     * @note[short] Windows: 0x13da30
     * @note[short] iOS: 0x1b944c
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x13d1f0
     * @note[short] Android
     */
    void untoggleAll();

    /**
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] Android
     */
    void updatePageArrows();
    bool m_sent;
    gd::string m_key;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_circle;
    UploadActionPopup* m_uploadPopup;
    void* m_unk2e8;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_toggledAll;
};
