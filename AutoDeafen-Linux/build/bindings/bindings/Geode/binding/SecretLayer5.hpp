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
#include "GJOnlineRewardDelegate.hpp"

class SecretLayer5 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate, public GJOnlineRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer5";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer5, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer5();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SecretLayer5();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SecretLayer5* create();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3d6f48
     * @note[short] MacOS (Intel): 0x467390
     * @note[short] Windows: 0x3dccc0
     * @note[short] iOS: 0x77e28
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3db234
     * @note[short] MacOS (Intel): 0x46bbc0
     * @note[short] Windows: 0x3d25a0
     * @note[short] iOS: 0x7ae5c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x3d91b4
     * @note[short] MacOS (Intel): 0x469950
     * @note[short] Windows: 0x3de3d0
     * @note[short] iOS: 0x79a9c
     * @note[short] Android
     */
    virtual void updateTweenActionInt(float p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3db110
     * @note[short] MacOS (Intel): 0x46bac0
     * @note[short] Windows: 0x3e0c90
     * @note[short] iOS: 0x7ae50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3dadd8
     * @note[short] MacOS (Intel): 0x46b820
     * @note[short] Windows: 0x3dffe0
     * @note[short] iOS: 0x7ac64
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3daeb8
     * @note[short] MacOS (Intel): 0x46b8f0
     * @note[short] Windows: 0x3e0130
     * @note[short] iOS: 0x7ad50
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3dafc8
     * @note[short] MacOS (Intel): 0x46b9c0
     * @note[short] Windows: 0x3e0130
     * @note[short] iOS: 0x7add0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3dadd0
     * @note[short] MacOS (Intel): 0x46b800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7ac5c
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3dadc8
     * @note[short] MacOS (Intel): 0x46b7e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7ac54
     * @note[short] Android: Out of line
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x3da348
     * @note[short] MacOS (Intel): 0x46abe0
     * @note[short] Windows: 0x3df6b0
     * @note[short] iOS: 0x7aa30
     * @note[short] Android: Rebinded
     */
    virtual void onlineRewardStatusFinished(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x3da4b0
     * @note[short] MacOS (Intel): 0x46ad30
     * @note[short] Windows: 0x3df820
     * @note[short] iOS: 0x7ab88
     * @note[short] Android
     */
    virtual void onlineRewardStatusFailed();

    /**
     * @note[short] Windows: 0x3de060
     * @note[short] Android
     */
    void animateHead();

    /**
     * @note[short] Windows: 0x3df490
     * @note[short] Android
     */
    void claimOnlineReward();

    /**
     * @note[short] Android
     */
    void fadeInMessage();

    /**
     * @note[short] Windows: 0x3dde60
     * @note[short] Android
     */
    void fadeInSubmitMessage();

    /**
     * @note[short] Windows: 0x3de030
     * @note[short] Android
     */
    void fadeOutMessage();

    /**
     * @note[short] Windows: 0x3de420
     * @note[short] Android
     */
    void finishLoadingState();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    gd::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x3d91dc
     * @note[short] MacOS (Intel): 0x469990
     * @note[short] Windows: 0x3de440
     * @note[short] iOS: 0x79ac4
     * @note[short] Android
     */
    void handleSecretResponse();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideTextInput();

    /**
     * @note[short] Android
     */
    void incrementChatIdx();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] Windows: 0x3e0c10
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d8188
     * @note[short] MacOS (Intel): 0x468830
     * @note[short] Windows: 0x3df8c0
     * @note[short] iOS: 0x78d64
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3df400
     * @note[short] Android
     */
    void playWinSFX();

    /**
     * @note[short] Android
     */
    void showDialog(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3d9aec
     * @note[short] MacOS (Intel): 0x46a330
     * @note[short] Windows: 0x3de4a0
     * @note[short] iOS: 0x7a2e8
     * @note[short] Android
     */
    void showFailAnimation();

    /**
     * @note[short] MacOS (ARM): 0x3d8658
     * @note[short] MacOS (Intel): 0x468cd0
     * @note[short] Windows: 0x3e04f0
     * @note[short] Android
     */
    void showFirstDialog();

    /**
     * @note[short] MacOS (ARM): 0x3d9294
     * @note[short] MacOS (Intel): 0x469a50
     * @note[short] Windows: 0x3dea60
     * @note[short] iOS: 0x79b14
     * @note[short] Android
     */
    void showSuccessAnimation();

    /**
     * @note[short] Windows: 0x3df860
     * @note[short] Android
     */
    void showTextInput();

    /**
     * @note[short] Windows: 0x3df6a0
     * @note[short] Android
     */
    void unlockUI();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    void updateMessageLabel(gd::string text);

    /**
     * @note[short] Windows: 0x3e0200
     * @note[short] Android
     */
    void updateSearchLabel(char const* p0);
    int m_threadTag;
    int m_basicMessageIndex;
    int m_selectedThread;
    int m_threadMessageIndex;
    int m_basicMessageCount;
    int m_errorMessageIndex;
    CCTextInputNode* m_textInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_wraithButton;
    bool m_exiting;
    void* m_unk1f0;
    cocos2d::CCArray* m_torchFires;
    bool m_loading;
    int m_rewardStatus;
    gd::string m_chestID;
    bool m_uiLocked;
    CCSpriteWithHue* m_wraithSprite;
    CCSpriteGrayscale* m_wraithGraySprite;
    cocos2d::CCSprite* m_eyesSprite;
    cocos2d::CCSprite* m_background;
    cocos2d::CCSprite* m_lockSprite;
    gd::vector<int> m_soundEffects;
    int m_chatIndex;
    cocos2d::extension::CCScale9Sprite* m_inputBackground;
    LoadingCircleSprite* m_circleSprite;
    TextArea* m_messageArea;
};
