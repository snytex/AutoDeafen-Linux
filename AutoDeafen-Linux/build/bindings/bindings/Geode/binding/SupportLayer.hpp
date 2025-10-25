#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"

class SupportLayer : public GJDropDownLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SupportLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SupportLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SupportLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SupportLayer();

    /**
     * @note[short] MacOS (ARM): 0x314fd0
     * @note[short] MacOS (Intel): 0x3851e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SupportLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x31546c
     * @note[short] MacOS (Intel): 0x385810
     * @note[short] Windows: 0x4afa10
     * @note[short] iOS: 0x194c28
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x317218
     * @note[short] MacOS (Intel): 0x3876b0
     * @note[short] Windows: 0x4b0fb0
     * @note[short] iOS: 0x1964b8
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x31736c
     * @note[short] MacOS (Intel): 0x387800
     * @note[short] Windows: 0x4b10f0
     * @note[short] iOS: 0x1965a0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3171c8
     * @note[short] MacOS (Intel): 0x387660
     * @note[short] Windows: 0x4b0f70
     * @note[short] iOS: 0x196468
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x3176c4
     * @note[short] MacOS (Intel): 0x387b20
     * @note[short] Windows: 0x4b1d70
     * @note[short] iOS: 0x1967b4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x4b05d0
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCArray* p5);

    /**
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x31719c
     * @note[short] MacOS (Intel): 0x387630
     * @note[short] Windows: 0x4b0d10
     * @note[short] Android
     */
    void onCocos2d(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x316600
     * @note[short] MacOS (Intel): 0x386af0
     * @note[short] Windows: 0x4b1410
     * @note[short] Android
     */
    void onEmail(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4b0e20
     * @note[short] Android
     */
    void onGetReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x315d64
     * @note[short] MacOS (Intel): 0x386110
     * @note[short] Windows: 0x4b1510
     * @note[short] Android
     */
    void onLinks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x316f08
     * @note[short] MacOS (Intel): 0x3873b0
     * @note[short] Windows: 0x4b1180
     * @note[short] Android
     */
    void onLowDetail(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3166cc
     * @note[short] MacOS (Intel): 0x386bd0
     * @note[short] Windows: 0x296f80
     * @note[short] Android
     */
    void onPrivacy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317014
     * @note[short] MacOS (Intel): 0x3874c0
     * @note[short] Windows: 0x4b0d30
     * @note[short] Android
     */
    void onRequestAccess(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317178
     * @note[short] MacOS (Intel): 0x387610
     * @note[short] Windows: 0x3207c0
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x316714
     * @note[short] MacOS (Intel): 0x386c10
     * @note[short] Windows: 0x4b0830
     * @note[short] Android
     */
    void onSFX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3166f0
     * @note[short] MacOS (Intel): 0x386bf0
     * @note[short] Windows: 0x296fa0
     * @note[short] Android
     */
    void onTOS(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317494
     * @note[short] MacOS (Intel): 0x387900
     * @note[short] Android
     */
    void sendSupportMail();
    UploadActionPopup* m_uploadPopup;
};
