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

class SecretLayer2 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer2, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x311b7c
     * @note[short] Android: Out of line
     */
     SecretLayer2();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SecretLayer2();

    /**
     * @note[short] MacOS (ARM): 0x3f72cc
     * @note[short] MacOS (Intel): 0x489fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3098ec
     * @note[short] Android
     */
    static SecretLayer2* create();

    /**
     * @note[short] MacOS (ARM): 0x3f7288
     * @note[short] MacOS (Intel): 0x489f80
     * @note[short] Windows: 0x3cadf0
     * @note[short] iOS: 0x3098a8
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3f73b4
     * @note[short] MacOS (Intel): 0x48a0f0
     * @note[short] Windows: 0x3caf70
     * @note[short] iOS: 0x309960
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3fce88
     * @note[short] MacOS (Intel): 0x4900c0
     * @note[short] Windows: 0x3d25a0
     * @note[short] iOS: 0x30dc8c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x3fcd9c
     * @note[short] MacOS (Intel): 0x48ffd0
     * @note[short] Windows: 0x3d2590
     * @note[short] iOS: 0x30dc80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3fbe64
     * @note[short] MacOS (Intel): 0x48f060
     * @note[short] Windows: 0x3cfa10
     * @note[short] iOS: 0x30d318
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3fbf44
     * @note[short] MacOS (Intel): 0x48f130
     * @note[short] Windows: 0x3cfb60
     * @note[short] iOS: 0x30d404
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3fc054
     * @note[short] MacOS (Intel): 0x48f200
     * @note[short] Windows: 0x3cfb60
     * @note[short] iOS: 0x30d484
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3fbe5c
     * @note[short] MacOS (Intel): 0x48f040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30d310
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3fa9c0
     * @note[short] MacOS (Intel): 0x48dbb0
     * @note[short] Windows: 0x3cd250
     * @note[short] iOS: 0x30c6f4
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x3fc23c
     * @note[short] MacOS (Intel): 0x48f3c0
     * @note[short] Windows: 0x3d0880
     * @note[short] iOS: 0x30d5c8
     * @note[short] Android
     */
    gd::string getBasicMessage();

    /**
     * @note[short] Windows: 0x3d13e0
     * @note[short] Android
     */
    gd::string getErrorMessage();

    /**
     * @note[short] Windows: 0x3cffb0
     * @note[short] iOS: 0x30a6c4
     * @note[short] Android
     */
    gd::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x3fc958
     * @note[short] MacOS (Intel): 0x48faa0
     * @note[short] Windows: 0x3d0190
     * @note[short] iOS: 0x30d864
     * @note[short] Android
     */
    gd::string getThreadMessage();

    /**
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3f8594
     * @note[short] MacOS (Intel): 0x48b320
     * @note[short] Windows: 0x3d24e0
     * @note[short] iOS: 0x30a8f4
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f9a70
     * @note[short] MacOS (Intel): 0x48ca80
     * @note[short] Windows: 0x3cd5a0
     * @note[short] iOS: 0x30bb3c
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f9cd4
     * @note[short] MacOS (Intel): 0x48ccc0
     * @note[short] Windows: 0x3cd2f0
     * @note[short] iOS: 0x30bd10
     * @note[short] Android
     */
    void onSecretLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f8608
     * @note[short] MacOS (Intel): 0x48b390
     * @note[short] Windows: 0x3cdf00
     * @note[short] iOS: 0x30a968
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d2060
     * @note[short] iOS: 0x30c7a4
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] iOS: 0x30d504
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] MacOS (ARM): 0x3f9e98
     * @note[short] MacOS (Intel): 0x48ce80
     * @note[short] Windows: 0x3cc5a0
     * @note[short] Android
     */
    void showCompletedLevel();

    /**
     * @note[short] Windows: 0x3cc430
     * @note[short] iOS: 0x30c5e4
     * @note[short] Android
     */
    void showSecretLevel();

    /**
     * @note[short] MacOS (ARM): 0x3f8234
     * @note[short] MacOS (Intel): 0x48afb0
     * @note[short] Windows: 0x3cff20
     * @note[short] iOS: 0x30a674
     * @note[short] Android: Rebinded
     */
    void updateMessageLabel(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x3f831c
     * @note[short] MacOS (Intel): 0x48b090
     * @note[short] Windows: 0x3cfc30
     * @note[short] iOS: 0x30a754
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
    int m_doorDialogIndex;
    CCMenuItemSpriteExtra* m_secretLevelButton;
    cocos2d::CCArray* m_secretLevelLabels;
    CCMenuItemSpriteExtra* m_secretDoorButton;
};
