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
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class RateDemonLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateDemonLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateDemonLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RateDemonLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~RateDemonLayer();

    /**
     * @note[short] MacOS (ARM): 0x21cbdc
     * @note[short] MacOS (Intel): 0x271bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41def0
     * @note[short] Android
     */
    static RateDemonLayer* create(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x21d918
     * @note[short] MacOS (Intel): 0x2728e0
     * @note[short] Windows: 0x3b22a0
     * @note[short] iOS: 0x41e7c4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x21d56c
     * @note[short] MacOS (Intel): 0x2725a0
     * @note[short] Windows: 0x3b2080
     * @note[short] iOS: 0x41e618
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x21d6bc
     * @note[short] MacOS (Intel): 0x272690
     * @note[short] Windows: 0x3b2110
     * @note[short] iOS: 0x41e6ac
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x21d82c
     * @note[short] MacOS (Intel): 0x272800
     * @note[short] Windows: 0x3b21e0
     * @note[short] iOS: 0x41e748
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x21ccfc
     * @note[short] MacOS (Intel): 0x271d40
     * @note[short] Windows: 0x3b1790
     * @note[short] iOS: 0x41dfc8
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x21d3e8
     * @note[short] MacOS (Intel): 0x272420
     * @note[short] Windows: 0x3b2260
     * @note[short] iOS: 0x41e4b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21d444
     * @note[short] MacOS (Intel): 0x272470
     * @note[short] Windows: 0x3b1ee0
     * @note[short] iOS: 0x41e50c
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21d2dc
     * @note[short] MacOS (Intel): 0x272330
     * @note[short] Windows: 0x3b1d60
     * @note[short] iOS: 0x41e3b4
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* p0);
    bool m_uploadFinished;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_demons;
    void* m_unkPtr;
    int m_levelID;
    int m_demonRate;
    bool m_moderator;
    UploadActionPopup* m_popup;
    RateLevelDelegate* m_delegate;
};
