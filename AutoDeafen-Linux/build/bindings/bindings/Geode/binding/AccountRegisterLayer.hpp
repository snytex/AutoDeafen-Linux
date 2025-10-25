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
#include "GJAccountRegisterDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountRegisterLayer : public FLAlertLayer, public TextInputDelegate, public GJAccountRegisterDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountRegisterLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountRegisterLayer, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static AccountRegisterLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x3eff58
     * @note[short] MacOS (Intel): 0x482340
     * @note[short] Windows: 0x78a70
     * @note[short] iOS: 0x84fd8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3f2690
     * @note[short] MacOS (Intel): 0x484e70
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x868d0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3f248c
     * @note[short] MacOS (Intel): 0x484ca0
     * @note[short] Windows: 0x7abf0
     * @note[short] iOS: 0x8678c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f2048
     * @note[short] MacOS (Intel): 0x4847f0
     * @note[short] Windows: 0x7a200
     * @note[short] iOS: 0x8665c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3f2e68
     * @note[short] MacOS (Intel): 0x485780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86e74
     * @note[short] Android: Out of line
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3f26c8
     * @note[short] MacOS (Intel): 0x484eb0
     * @note[short] Windows: 0x7ad50
     * @note[short] iOS: 0x86908
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3f2e70
     * @note[short] MacOS (Intel): 0x4857a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86e7c
     * @note[short] Android: Out of line
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3f2e78
     * @note[short] MacOS (Intel): 0x4857c0
     * @note[short] Windows: 0x7b5c0
     * @note[short] iOS: 0x86e84
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x3f2f48
     * @note[short] MacOS (Intel): 0x485880
     * @note[short] Windows: 0x7b620
     * @note[short] iOS: 0x86ef0
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3f3000
     * @note[short] MacOS (Intel): 0x485930
     * @note[short] Windows: 0x7b670
     * @note[short] iOS: 0x86f50
     * @note[short] Android
     */
    virtual bool allowTextInput(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3f1894
     * @note[short] MacOS (Intel): 0x484040
     * @note[short] Windows: 0x79c90
     * @note[short] iOS: 0x86168
     * @note[short] Android
     */
    virtual void registerAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0x3f1a3c
     * @note[short] MacOS (Intel): 0x4841f0
     * @note[short] Windows: 0x79eb0
     * @note[short] iOS: 0x86298
     * @note[short] Android
     */
    virtual void registerAccountFailed(AccountError p0);

    /**
     * @note[short] Android
     */
    cocos2d::extension::CCScale9Sprite* createTextBackground(cocos2d::CCPoint p0, cocos2d::CCSize p1);

    /**
     * @note[short] Android: Rebinded
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint p0, cocos2d::CCSize p1, gd::string p2, int p3);

    /**
     * @note[short] Android: Rebinded
     */
    cocos2d::CCLabelBMFont* createTextLabel(cocos2d::CCPoint p0, gd::string p1, cocos2d::CCSize p2);

    /**
     * @note[short] Android
     */
    void disableNodes();

    /**
     * @note[short] Android
     */
    void hideLoadingUI();

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f1f50
     * @note[short] MacOS (Intel): 0x484700
     * @note[short] Android
     */
    void resetLabel(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3f1e20
     * @note[short] MacOS (Intel): 0x4845e0
     * @note[short] Android
     */
    void resetLabels();

    /**
     * @note[short] Android
     */
    void showLoadingUI();

    /**
     * @note[short] Android
     */
    void toggleUI(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x3f1b0c
     * @note[short] MacOS (Intel): 0x4842c0
     * @note[short] iOS: 0x862d4
     * @note[short] Android
     */
    void updateLabel(AccountError p0);

    /**
     * @note[short] Android: Rebinded
     */
    bool validEmail(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    bool validPassword(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    bool validUser(gd::string p0);
    CCTextInputNode* m_usernameField;
    CCTextInputNode* m_passwordField;
    CCTextInputNode* m_confirmPasswordField;
    CCTextInputNode* m_emailField;
    CCTextInputNode* m_verifyEmailField;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    cocos2d::CCLabelBMFont* m_passwordLabel;
    cocos2d::CCLabelBMFont* m_confirmPasswordLabel;
    cocos2d::CCLabelBMFont* m_emailLabel;
    cocos2d::CCLabelBMFont* m_verifyEmailLabel;
    LoadingCircle* m_loadingCircle;
    bool m_lockInput;
};
