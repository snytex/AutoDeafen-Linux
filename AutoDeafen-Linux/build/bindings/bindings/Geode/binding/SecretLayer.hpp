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

class SecretLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SecretLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SecretLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SecretLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x515464
     * @note[short] MacOS (Intel): 0x5e2f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b57a0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x515624
     * @note[short] MacOS (Intel): 0x5e31b0
     * @note[short] Windows: 0x3c5700
     * @note[short] iOS: 0x3b58ac
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x518d94
     * @note[short] MacOS (Intel): 0x5e6fe0
     * @note[short] Windows: 0x3cabb0
     * @note[short] iOS: 0x3b85a4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x51818c
     * @note[short] MacOS (Intel): 0x5e60c0
     * @note[short] Windows: 0x3c84b0
     * @note[short] iOS: 0x3b7ab0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x51826c
     * @note[short] MacOS (Intel): 0x5e6190
     * @note[short] Windows: 0x3c8600
     * @note[short] iOS: 0x3b7b9c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x51837c
     * @note[short] MacOS (Intel): 0x5e6260
     * @note[short] Windows: 0x3c8600
     * @note[short] iOS: 0x3b7c1c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x518184
     * @note[short] MacOS (Intel): 0x5e60a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b7aa8
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x517b54
     * @note[short] MacOS (Intel): 0x5e5aa0
     * @note[short] Windows: 0x3c99b0
     * @note[short] Android
     */
    gd::string getBasicMessage();

    /**
     * @note[short] Windows: 0x3c8a50
     * @note[short] Android
     */
    gd::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x518564
     * @note[short] MacOS (Intel): 0x5e6420
     * @note[short] Windows: 0x3c8c40
     * @note[short] Android
     */
    gd::string getThreadMessage();

    /**
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int p0);

    /**
     * @note[short] Windows: 0x3cab10
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x516584
     * @note[short] MacOS (Intel): 0x5e4170
     * @note[short] Windows: 0x3c6a40
     * @note[short] iOS: 0x3b65c0
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3ca690
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] Windows: 0x3c89c0
     * @note[short] Android: Rebinded
     */
    void updateMessageLabel(gd::string p0);

    /**
     * @note[short] Windows: 0x3c86d0
     * @note[short] Android
     */
    void updateSearchLabel(char const* p0);
    int m_basicMessageIndex;
    int m_selectedThread;
    int m_threadMessageIndex;
    int m_basicMessageCount;
    int m_doomedIndex;
    CCTextInputNode* m_searchInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCDictionary* m_messageThreads;
    int m_threadTag;
};
