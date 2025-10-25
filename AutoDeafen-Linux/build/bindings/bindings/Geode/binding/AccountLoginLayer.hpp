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
#include "TextInputDelegate.hpp"
#include "GJAccountLoginDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountLoginLayer : public FLAlertLayer, public TextInputDelegate, public GJAccountLoginDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLoginLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLoginLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x7b730
     * @note[short] iOS: 0x87068
     * @note[short] Android: Rebinded
     */
    static AccountLoginLayer* create(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x3f4ff4
     * @note[short] MacOS (Intel): 0x487a60
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x88580
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3f4ea4
     * @note[short] MacOS (Intel): 0x487920
     * @note[short] Windows: 0x7cfa0
     * @note[short] iOS: 0x88494
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f4c90
     * @note[short] MacOS (Intel): 0x487760
     * @note[short] Windows: 0x7cb50
     * @note[short] iOS: 0x8839c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3f51c4
     * @note[short] MacOS (Intel): 0x487c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x886e8
     * @note[short] Android: Out of line
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3f502c
     * @note[short] MacOS (Intel): 0x487aa0
     * @note[short] Windows: 0x7d070
     * @note[short] iOS: 0x885b8
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3f51cc
     * @note[short] MacOS (Intel): 0x487c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x886f0
     * @note[short] Android: Out of line
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3f45bc
     * @note[short] MacOS (Intel): 0x4870a0
     * @note[short] Windows: 0x7c740
     * @note[short] iOS: 0x87ee8
     * @note[short] Android
     */
    virtual void loginAccountFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3f493c
     * @note[short] MacOS (Intel): 0x487430
     * @note[short] Windows: 0x7c990
     * @note[short] iOS: 0x880f8
     * @note[short] Android
     */
    virtual void loginAccountFailed(AccountError p0);

    /**
     * @note[short] Android
     */
    TodoReturn createTextBackground(cocos2d::CCPoint p0, char const* p1, cocos2d::CCSize p2);

    /**
     * @note[short] Android
     */
    TodoReturn createTextInput(cocos2d::CCPoint p0, cocos2d::CCSize p1, char const* p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn createTextLabel(cocos2d::CCPoint p0, char const* p1, cocos2d::CCSize p2);

    /**
     * @note[short] Android
     */
    void disableNodes();

    /**
     * @note[short] Android
     */
    void hideLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3f32c0
     * @note[short] MacOS (Intel): 0x485ce0
     * @note[short] Windows: 0x7b8d0
     * @note[short] iOS: 0x871a0
     * @note[short] Android: Rebinded
     */
    bool init(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x3f3e60
     * @note[short] MacOS (Intel): 0x486990
     * @note[short] Windows: 0x7cf50
     * @note[short] iOS: 0x878e4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f4598
     * @note[short] MacOS (Intel): 0x487080
     * @note[short] Windows: 0x7c490
     * @note[short] iOS: 0x87ec4
     * @note[short] Android
     */
    void onForgotPassword(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f4574
     * @note[short] MacOS (Intel): 0x487060
     * @note[short] Windows: 0x7c470
     * @note[short] iOS: 0x87ea0
     * @note[short] Android
     */
    void onForgotUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f3ec8
     * @note[short] MacOS (Intel): 0x4869f0
     * @note[short] Windows: 0x7cbc0
     * @note[short] iOS: 0x8794c
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void resetLabel(int p0);

    /**
     * @note[short] Android
     */
    void resetLabels();

    /**
     * @note[short] Android
     */
    void showLoadingUI();

    /**
     * @note[short] Windows: 0x7d000
     * @note[short] Android
     */
    void toggleUI(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x3f49d0
     * @note[short] MacOS (Intel): 0x4874c0
     * @note[short] Windows: 0x7c9d0
     * @note[short] iOS: 0x88134
     * @note[short] Android
     */
    void updateLabel(AccountError p0);
    CCTextInputNode* m_usernameInput;
    CCTextInputNode* m_passwordInput;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    cocos2d::CCLabelBMFont* m_passwordLabel;
    LoadingCircle* m_loadingCircle;
    gd::string m_username;
    gd::string m_password;
};
