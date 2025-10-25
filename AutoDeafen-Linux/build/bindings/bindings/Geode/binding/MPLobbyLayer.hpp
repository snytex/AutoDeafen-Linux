#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJMPDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "TextInputDelegate.hpp"

class MPLobbyLayer : public cocos2d::CCLayer, public GJMPDelegate, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MPLobbyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MPLobbyLayer, cocos2d::CCLayer)

    /**
     * @note[short] Android
     */
    static MPLobbyLayer* create(int p0);

    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3eedb0
     * @note[short] MacOS (Intel): 0x480e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3ef4f0
     * @note[short] MacOS (Intel): 0x481620
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x3eef10
     * @note[short] MacOS (Intel): 0x480fa0
     * @note[short] Android
     */
    virtual void joinLobbyFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3ef334
     * @note[short] MacOS (Intel): 0x481450
     * @note[short] Android
     */
    virtual void joinLobbyFailed(int p0, GJMPErrorCode p1);

    /**
     * @note[short] MacOS (ARM): 0x3ef22c
     * @note[short] MacOS (Intel): 0x481320
     * @note[short] Android
     */
    virtual void updateComments();

    /**
     * @note[short] MacOS (ARM): 0x3ef31c
     * @note[short] MacOS (Intel): 0x481430
     * @note[short] Android
     */
    virtual void didUploadMPComment(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3ef448
     * @note[short] MacOS (Intel): 0x481550
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3ef450
     * @note[short] MacOS (Intel): 0x481570
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3ef458
     * @note[short] MacOS (Intel): 0x481590
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3ef514
     * @note[short] MacOS (Intel): 0x481660
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x3ef460
     * @note[short] MacOS (Intel): 0x4815b0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3ef51c
     * @note[short] MacOS (Intel): 0x481680
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3ef748
     * @note[short] MacOS (Intel): 0x4818b0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3ef90c
     * @note[short] MacOS (Intel): 0x481a60
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3eeaa0
     * @note[short] MacOS (Intel): 0x480b40
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBtn3(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdateLobby();

    /**
     * @note[short] Android
     */
    void postComment();

    /**
     * @note[short] MacOS (ARM): 0x3eee3c
     * @note[short] MacOS (Intel): 0x480eb0
     * @note[short] Android
     */
    void tryExitLobby();

    /**
     * @note[short] Android
     */
    void updateLobby(float p0);
    int m_lobbyID;
    cocos2d::CCLabelBMFont* m_lobbyLabel;
    UploadActionPopup* m_uploadPopup;
    GJCommentListLayer* m_listLayer;
    CCTextInputNode* m_commentInput;
    float m_lobbyDelay;
    bool m_awaitingLobby;
    bool m_lobbyJoined;
};
