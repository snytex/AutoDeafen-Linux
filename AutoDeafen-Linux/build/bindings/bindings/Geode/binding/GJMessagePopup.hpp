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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DownloadMessageDelegate.hpp"

class GJMessagePopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol, public DownloadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessagePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x28fd10
     * @note[short] Android
     */
    static GJMessagePopup* create(GJUserMessage* p0);

    /**
     * @note[short] MacOS (ARM): 0x23ce50
     * @note[short] MacOS (Intel): 0x294c90
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x2db374
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x23cecc
     * @note[short] MacOS (Intel): 0x294d00
     * @note[short] Windows: 0x2914b0
     * @note[short] iOS: 0x2db3f0
     * @note[short] Android
     */
    virtual void downloadMessageFinished(GJUserMessage* p0);

    /**
     * @note[short] MacOS (ARM): 0x23cfa4
     * @note[short] MacOS (Intel): 0x294dc0
     * @note[short] Windows: 0x291500
     * @note[short] iOS: 0x2db464
     * @note[short] Android
     */
    virtual void downloadMessageFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x23d05c
     * @note[short] MacOS (Intel): 0x294e60
     * @note[short] Windows: 0x291540
     * @note[short] iOS: 0x2db51c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x23d250
     * @note[short] MacOS (Intel): 0x295030
     * @note[short] Windows: 0x2916d0
     * @note[short] iOS: 0x2db640
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x23d3c0
     * @note[short] MacOS (Intel): 0x295180
     * @note[short] Windows: 0x2917a0
     * @note[short] iOS: 0x2db6dc
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x23d4e4
     * @note[short] MacOS (Intel): 0x295280
     * @note[short] Windows: 0x291820
     * @note[short] iOS: 0x2db774
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] Windows: 0x28fe50
     * @note[short] Android
     */
    bool init(GJUserMessage* p0);

    /**
     * @note[short] MacOS (ARM): 0x23c0a8
     * @note[short] MacOS (Intel): 0x293e60
     * @note[short] Windows: 0x290760
     * @note[short] iOS: 0x2da894
     * @note[short] Android
     */
    void loadFromGJMessage(GJUserMessage* p0);

    /**
     * @note[short] Windows: 0x291280
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x84620
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2910f0
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x290db0
     * @note[short] Android
     */
    void onReply(cocos2d::CCObject* sender);
    bool m_actionSuccess;
    cocos2d::CCLabelBMFont* m_errorLabel;
    GJUserMessage* m_message;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
    UploadActionPopup* m_uploadPopup;
};
