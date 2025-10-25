#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class GJUserCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJUserCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJUserCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     GJUserCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1f31f8
     * @note[short] MacOS (Intel): 0x2443a0
     * @note[short] Windows: 0xb9f50
     * @note[short] iOS: 0x114208
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f399c
     * @note[short] MacOS (Intel): 0x244b10
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x11469c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1f3a48
     * @note[short] MacOS (Intel): 0x244be0
     * @note[short] Windows: 0xbae70
     * @note[short] iOS: 0x114748
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1f3c94
     * @note[short] MacOS (Intel): 0x244e90
     * @note[short] Windows: 0xbb230
     * @note[short] iOS: 0x114950
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1f3ea8
     * @note[short] MacOS (Intel): 0x2450a0
     * @note[short] Windows: 0xbb3e0
     * @note[short] iOS: 0x114a74
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1f4010
     * @note[short] MacOS (Intel): 0x245210
     * @note[short] Windows: 0xbb4b0
     * @note[short] iOS: 0x114b0c
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x1e9a54
     * @note[short] MacOS (Intel): 0x239a60
     * @note[short] Windows: 0xb9f70
     * @note[short] iOS: 0x10c530
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x1f34f4
     * @note[short] MacOS (Intel): 0x244680
     * @note[short] Windows: 0xbaa50
     * @note[short] iOS: 0x1143e4
     * @note[short] Android
     */
    void onCancelFriendRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f3644
     * @note[short] MacOS (Intel): 0x2447c0
     * @note[short] Windows: 0xbabf0
     * @note[short] iOS: 0x114504
     * @note[short] Android
     */
    void onRemoveFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f3608
     * @note[short] MacOS (Intel): 0x244790
     * @note[short] Windows: 0xbae30
     * @note[short] iOS: 0x1144c8
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f3244
     * @note[short] MacOS (Intel): 0x2443f0
     * @note[short] Windows: 0xba840
     * @note[short] iOS: 0x114254
     * @note[short] Android
     */
    void onUnblockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f3208
     * @note[short] MacOS (Intel): 0x2443c0
     * @note[short] Windows: 0xba800
     * @note[short] iOS: 0x114218
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x10c4b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
    GJUserScore* m_userScore;
    UploadActionPopup* m_uploadPopup;
};
