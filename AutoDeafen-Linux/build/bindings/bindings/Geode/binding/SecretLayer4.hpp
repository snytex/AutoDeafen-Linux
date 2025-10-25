#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DialogDelegate.hpp"

class SecretLayer4 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer4";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer4, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer4();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SecretLayer4();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SecretLayer4* create();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x32ad34
     * @note[short] MacOS (Intel): 0x39db60
     * @note[short] Windows: 0x3d87b0
     * @note[short] iOS: 0x3537a8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x32efa0
     * @note[short] MacOS (Intel): 0x3a2000
     * @note[short] Windows: 0x3d25a0
     * @note[short] iOS: 0x355de0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x32eeac
     * @note[short] MacOS (Intel): 0x3a1f10
     * @note[short] Windows: 0x3dc3b0
     * @note[short] iOS: 0x355dd4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x32df80
     * @note[short] MacOS (Intel): 0x3a1030
     * @note[short] Windows: 0x3cfa10
     * @note[short] iOS: 0x3557c4
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x32e060
     * @note[short] MacOS (Intel): 0x3a1100
     * @note[short] Windows: 0x3cfb60
     * @note[short] iOS: 0x3558b0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x32e170
     * @note[short] MacOS (Intel): 0x3a11d0
     * @note[short] Windows: 0x3cfb60
     * @note[short] iOS: 0x355930
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x32df78
     * @note[short] MacOS (Intel): 0x3a1010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3557bc
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x32d6dc
     * @note[short] MacOS (Intel): 0x3a07b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x355454
     * @note[short] Android: Out of line
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x32e358
     * @note[short] MacOS (Intel): 0x3a1390
     * @note[short] Windows: 0x3dba90
     * @note[short] Android
     */
    gd::string getBasicMessage();

    /**
     * @note[short] Windows: 0x3d13e0
     * @note[short] Android
     */
    gd::string getErrorMessage();

    /**
     * @note[short] Windows: 0x3daef0
     * @note[short] Android
     */
    gd::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x32e7b8
     * @note[short] MacOS (Intel): 0x3a17a0
     * @note[short] Windows: 0x3db0d0
     * @note[short] Android
     */
    gd::string getThreadMessage();

    /**
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int p0);

    /**
     * @note[short] Windows: 0x3dc300
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d9870
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x32c15c
     * @note[short] MacOS (Intel): 0x39eff0
     * @note[short] Windows: 0x3d99e0
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] Android
     */
    void showDialog(int p0);

    /**
     * @note[short] MacOS (ARM): 0x32b998
     * @note[short] MacOS (Intel): 0x39e7d0
     * @note[short] Windows: 0x3db4f0
     * @note[short] Android
     */
    void showFirstDialog();

    /**
     * @note[short] Windows: 0x3cff20
     * @note[short] Android: Rebinded
     */
    void updateMessageLabel(gd::string p0);

    /**
     * @note[short] Windows: 0x3cfc30
     * @note[short] Android
     */
    void updateSearchLabel(char const* p0);
    int m_threadTag;
    int m_basicMessageIndex;
    int m_selectedThread;
    int m_threadMessageIndex;
    int m_basicMessageCount;
    int m_errorMessageIndex;
    CCTextInputNode* m_searchInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCDictionary* m_messageThreads;
    bool m_exiting;
};
