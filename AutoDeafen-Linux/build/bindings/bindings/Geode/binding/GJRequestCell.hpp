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

class GJRequestCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJRequestCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRequestCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     GJRequestCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1f4348
     * @note[short] MacOS (Intel): 0x2456f0
     * @note[short] Windows: 0xbb620
     * @note[short] iOS: 0x114c30
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f4624
     * @note[short] MacOS (Intel): 0x245a00
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x114e74
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1f46d0
     * @note[short] MacOS (Intel): 0x245ad0
     * @note[short] Windows: 0xbc1f0
     * @note[short] iOS: 0x114f20
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1f485c
     * @note[short] MacOS (Intel): 0x245ca0
     * @note[short] Windows: 0xbc3a0
     * @note[short] iOS: 0x115014
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1f4a6c
     * @note[short] MacOS (Intel): 0x245ec0
     * @note[short] Windows: 0xbc580
     * @note[short] iOS: 0x115134
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1f4b44
     * @note[short] MacOS (Intel): 0x245fd0
     * @note[short] Windows: 0xbb4b0
     * @note[short] iOS: 0x1151e8
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x1ea280
     * @note[short] MacOS (Intel): 0x23a250
     * @note[short] Windows: 0xbb640
     * @note[short] iOS: 0x10cd28
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x1f4594
     * @note[short] MacOS (Intel): 0x245960
     * @note[short] Windows: 0xbbf50
     * @note[short] iOS: 0x114de4
     * @note[short] Android
     */
    void markAsRead();

    /**
     * @note[short] MacOS (ARM): 0x1f4470
     * @note[short] MacOS (Intel): 0x245830
     * @note[short] Windows: 0xbc030
     * @note[short] Android
     */
    void onDeleteRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f4398
     * @note[short] MacOS (Intel): 0x245740
     * @note[short] Windows: 0xbbea0
     * @note[short] iOS: 0x114c80
     * @note[short] Android
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x10cca8
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateToggle();
    GJUserScore* m_score;
    UploadActionPopup* m_popup;
    CCMenuItemToggler* m_toggler;
};
