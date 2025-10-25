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
#include "UserListDelegate.hpp"

class FriendsProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendsProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendsProfilePage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x56a370
     * @note[short] MacOS (Intel): 0x641780
     * @note[short] Windows: 0x13e010
     * @note[short] iOS: 0x1d9ac0
     * @note[short] Android
     */
    static FriendsProfilePage* create(UserListType p0);

    /**
     * @note[short] MacOS (ARM): 0x56b2b4
     * @note[short] MacOS (Intel): 0x6427d0
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x1da854
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x56b2a8
     * @note[short] MacOS (Intel): 0x6427a0
     * @note[short] Windows: 0x13f0a0
     * @note[short] iOS: 0x1da848
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x56af2c
     * @note[short] MacOS (Intel): 0x642420
     * @note[short] Windows: 0x13ebd0
     * @note[short] iOS: 0x1da5f0
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] MacOS (ARM): 0x56b048
     * @note[short] MacOS (Intel): 0x642560
     * @note[short] Windows: 0x13ed20
     * @note[short] iOS: 0x1da6fc
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType p0, GJErrorCode p1);

    /**
     * @note[short] MacOS (ARM): 0x56b178
     * @note[short] MacOS (Intel): 0x642670
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x1da79c
     * @note[short] Android
     */
    virtual void userListChanged(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] MacOS (ARM): 0x56b194
     * @note[short] MacOS (Intel): 0x6426b0
     * @note[short] Windows: 0x13ed90
     * @note[short] iOS: 0x1da7b8
     * @note[short] Android
     */
    virtual void forceReloadList(UserListType p0);

    /**
     * @note[short] MacOS (ARM): 0x56a498
     * @note[short] MacOS (Intel): 0x641910
     * @note[short] Windows: 0x13e160
     * @note[short] iOS: 0x1d9ba0
     * @note[short] Android
     */
    bool init(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x56abb8
     * @note[short] MacOS (Intel): 0x6420b0
     * @note[short] Windows: 0x13ef50
     * @note[short] Android
     */
    void onBlocked(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x56ab00
     * @note[short] MacOS (Intel): 0x641ff0
     * @note[short] Windows: 0x13efe0
     * @note[short] iOS: 0x1da1f8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x56ac44
     * @note[short] MacOS (Intel): 0x642140
     * @note[short] Windows: 0x13ee30
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x56aca8
     * @note[short] MacOS (Intel): 0x6421b0
     * @note[short] Windows: 0x13e870
     * @note[short] iOS: 0x1da3a0
     * @note[short] Android
     */
    void setupUsersBrowser(cocos2d::CCArray* users, UserListType type);
    UserListType m_type;
    cocos2d::CCLabelBMFont* m_noInternet;
    cocos2d::CCLabelBMFont* m_totalFriends;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_circle;
    void* m_unk532;
    cocos2d::CCArray* m_users;
    CCMenuItemSpriteExtra* m_refreshBtn;
};
