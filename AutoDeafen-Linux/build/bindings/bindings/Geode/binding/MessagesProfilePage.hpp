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
#include "MessageListDelegate.hpp"

class MessagesProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public MessageListDelegate {
public:
    static constexpr auto CLASS_NAME = "MessagesProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MessagesProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1ce7c4
     * @note[short] MacOS (Intel): 0x21ba30
     * @note[short] Windows: 0x3216b0
     * @note[short] iOS: 0x1ccbe4
     * @note[short] Android
     */
    static MessagesProfilePage* create(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1d0144
     * @note[short] MacOS (Intel): 0x21d550
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x1ce01c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1d0138
     * @note[short] MacOS (Intel): 0x21d520
     * @note[short] Windows: 0x322cb0
     * @note[short] iOS: 0x1ce010
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1cfc98
     * @note[short] MacOS (Intel): 0x21d0f0
     * @note[short] Windows: 0x322a50
     * @note[short] iOS: 0x1cdd48
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1cfd28
     * @note[short] MacOS (Intel): 0x21d160
     * @note[short] Windows: 0x13d2a0
     * @note[short] iOS: 0x1cddd8
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x1cfdb0
     * @note[short] MacOS (Intel): 0x21d1d0
     * @note[short] Windows: 0x322a80
     * @note[short] iOS: 0x1cde48
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1cff7c
     * @note[short] MacOS (Intel): 0x21d390
     * @note[short] Windows: 0x13d460
     * @note[short] iOS: 0x1cdf30
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1d03f8
     * @note[short] MacOS (Intel): 0x21d830
     * @note[short] Windows: 0x323300
     * @note[short] iOS: 0x1ce208
     * @note[short] Android
     */
    virtual void loadMessagesFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x1d0504
     * @note[short] MacOS (Intel): 0x21d950
     * @note[short] Windows: 0x13dc50
     * @note[short] iOS: 0x1ce314
     * @note[short] Android
     */
    virtual void loadMessagesFailed(char const* p0, GJErrorCode p1);

    /**
     * @note[short] MacOS (ARM): 0x1d0630
     * @note[short] MacOS (Intel): 0x21da60
     * @note[short] Windows: 0x323450
     * @note[short] iOS: 0x1ce3b0
     * @note[short] Android
     */
    virtual void forceReloadMessages(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1d0664
     * @note[short] MacOS (Intel): 0x21daa0
     * @note[short] Windows: 0x323470
     * @note[short] iOS: 0x1ce3e4
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x1cfac8
     * @note[short] MacOS (Intel): 0x21cf00
     * @note[short] Windows: 0x3227d0
     * @note[short] iOS: 0x1cdb9c
     * @note[short] Android
     */
    void deleteSelected();

    /**
     * @note[short] MacOS (ARM): 0x1ce900
     * @note[short] MacOS (Intel): 0x21bbe0
     * @note[short] Windows: 0x321850
     * @note[short] iOS: 0x1ccc58
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] iOS: 0x1ce054
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x1cf6e0
     * @note[short] MacOS (Intel): 0x21caa0
     * @note[short] Windows: 0x322d60
     * @note[short] iOS: 0x1cd974
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1cf258
     * @note[short] MacOS (Intel): 0x21c5b0
     * @note[short] Windows: 0x322bf0
     * @note[short] iOS: 0x1cd594
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1cf3f4
     * @note[short] MacOS (Intel): 0x21c760
     * @note[short] Windows: 0x3224e0
     * @note[short] iOS: 0x1cd6e0
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x323610
     * @note[short] iOS: 0x1cd8f8
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x323620
     * @note[short] iOS: 0x1cd904
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x322450
     * @note[short] iOS: 0x1cd654
     * @note[short] Android
     */
    void onSentMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1cf5c0
     * @note[short] MacOS (Intel): 0x21c940
     * @note[short] Windows: 0x322270
     * @note[short] iOS: 0x1cd860
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x1cd910
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x323170
     * @note[short] iOS: 0x1ce0a4
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x1d00c4
     * @note[short] MacOS (Intel): 0x21d4b0
     * @note[short] Windows: 0x322cc0
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
    bool m_sentMessages;
    gd::string m_messageKey;
    cocos2d::CCLabelBMFont* m_levelsLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_loadingCircle;
    UploadActionPopup* m_actionPopup;
    void* m_unkPtr;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemToggler* m_toggleAllToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_toggledAll;
};
