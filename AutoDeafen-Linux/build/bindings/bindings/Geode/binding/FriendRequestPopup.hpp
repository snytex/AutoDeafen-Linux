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

class FriendRequestPopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "FriendRequestPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendRequestPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x28e370
     * @note[short] Android
     */
    static FriendRequestPopup* create(GJFriendRequest* p0);

    /**
     * @note[short] MacOS (ARM): 0x23ade4
     * @note[short] MacOS (Intel): 0x292af0
     * @note[short] Windows: 0x28f950
     * @note[short] iOS: 0x2d9a8c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x23aec0
     * @note[short] MacOS (Intel): 0x292be0
     * @note[short] Windows: 0x28f960
     * @note[short] iOS: 0x2d9a98
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x23b0c0
     * @note[short] MacOS (Intel): 0x292dc0
     * @note[short] Windows: 0x28fb10
     * @note[short] iOS: 0x2d9bc8
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x23b228
     * @note[short] MacOS (Intel): 0x292f10
     * @note[short] Windows: 0x28fbd0
     * @note[short] iOS: 0x2d9c60
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x23b3a4
     * @note[short] MacOS (Intel): 0x293080
     * @note[short] Windows: 0x28fc30
     * @note[short] iOS: 0x2d9cd8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] MacOS (ARM): 0x239a00
     * @note[short] MacOS (Intel): 0x2916b0
     * @note[short] Windows: 0x28e4b0
     * @note[short] iOS: 0x2d889c
     * @note[short] Android
     */
    bool init(GJFriendRequest* p0);

    /**
     * @note[short] MacOS (ARM): 0x23a080
     * @note[short] MacOS (Intel): 0x291cf0
     * @note[short] Windows: 0x28eb20
     * @note[short] iOS: 0x2d8ed0
     * @note[short] Android
     */
    void loadFromGJFriendRequest(GJFriendRequest* p0);

    /**
     * @note[short] MacOS (ARM): 0x23a914
     * @note[short] MacOS (Intel): 0x292650
     * @note[short] Windows: 0x28f4e0
     * @note[short] iOS: 0x2d9744
     * @note[short] Android
     */
    void onAccept(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23aab0
     * @note[short] MacOS (Intel): 0x2927f0
     * @note[short] Windows: 0x28f6f0
     * @note[short] iOS: 0x2d9880
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23a014
     * @note[short] MacOS (Intel): 0x291c80
     * @note[short] Windows: 0x28f440
     * @note[short] iOS: 0x2d8e64
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23a9e0
     * @note[short] MacOS (Intel): 0x292720
     * @note[short] Windows: 0x28f5f0
     * @note[short] iOS: 0x2d97e0
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);
    void* m_unk;
    GJFriendRequest* m_request;
    LoadingCircle* m_circle;
    CCMenuItemSpriteExtra* m_closeBtn;
    UploadActionPopup* m_popup;
};
