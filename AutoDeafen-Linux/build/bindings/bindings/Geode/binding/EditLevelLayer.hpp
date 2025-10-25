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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditLevelLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditLevelLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditLevelLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~EditLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x19f878
     * @note[short] MacOS (Intel): 0x1e8670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xebdfc
     * @note[short] Android
     */
    static EditLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x19f774
     * @note[short] MacOS (Intel): 0x1e8510
     * @note[short] Windows: 0xd3d80
     * @note[short] iOS: 0xebdb0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a3824
     * @note[short] MacOS (Intel): 0x1ec740
     * @note[short] Windows: 0xd8570
     * @note[short] iOS: 0xef59c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1a3830
     * @note[short] MacOS (Intel): 0x1ec770
     * @note[short] Windows: 0xd8580
     * @note[short] iOS: 0xef5a8
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x1a3724
     * @note[short] MacOS (Intel): 0x1ec640
     * @note[short] Windows: 0xd8050
     * @note[short] iOS: 0xef518
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1a3368
     * @note[short] MacOS (Intel): 0x1ec260
     * @note[short] Windows: 0xd7710
     * @note[short] iOS: 0xef1a0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1a2b78
     * @note[short] MacOS (Intel): 0x1eba90
     * @note[short] Windows: 0xd65c0
     * @note[short] iOS: 0xeeb98
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a282c
     * @note[short] MacOS (Intel): 0x1eb720
     * @note[short] Windows: 0xd5fc0
     * @note[short] iOS: 0xee908
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a2c88
     * @note[short] MacOS (Intel): 0x1ebb70
     * @note[short] Windows: 0xd6730
     * @note[short] iOS: 0xeeca8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a38b4
     * @note[short] MacOS (Intel): 0x1ec810
     * @note[short] Windows: 0xd85f0
     * @note[short] iOS: 0xef618
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1a3a6c
     * @note[short] MacOS (Intel): 0x1ec9c0
     * @note[short] Windows: 0xd8730
     * @note[short] iOS: 0xef70c
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1a3864
     * @note[short] MacOS (Intel): 0x1ec7c0
     * @note[short] Windows: 0xd85b0
     * @note[short] iOS: 0xef5c8
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Windows: 0xd5f60
     * @note[short] Android
     */
    void closeTextInputs();

    /**
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a1e40
     * @note[short] MacOS (Intel): 0x1ead40
     * @note[short] Windows: 0xd75d0
     * @note[short] iOS: 0xee16c
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a20d8
     * @note[short] MacOS (Intel): 0x1eafd0
     * @note[short] Windows: 0xd7e90
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x19f95c
     * @note[short] MacOS (Intel): 0x1e87a0
     * @note[short] Windows: 0xd3f10
     * @note[short] iOS: 0xebed4
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0xd80e0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a3618
     * @note[short] MacOS (Intel): 0x1ec500
     * @note[short] Android
     */
    void onClone();

    /**
     * @note[short] MacOS (ARM): 0x1a3328
     * @note[short] MacOS (Intel): 0x1ec220
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] MacOS (ARM): 0x1a0ec4
     * @note[short] MacOS (Intel): 0x1e9db0
     * @note[short] Windows: 0xd6d80
     * @note[short] iOS: 0xed344
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a26f4
     * @note[short] MacOS (Intel): 0x1eb5e0
     * @note[short] Windows: 0xd52e0
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a1f28
     * @note[short] MacOS (Intel): 0x1eae30
     * @note[short] Windows: 0xd7c50
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a2420
     * @note[short] MacOS (Intel): 0x1eb320
     * @note[short] Windows: 0xd5500
     * @note[short] iOS: 0xee63c
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd5450
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd54d0
     * @note[short] Android
     */
    void onLevelOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMoveToTop();

    /**
     * @note[short] MacOS (ARM): 0x1a100c
     * @note[short] MacOS (Intel): 0x1e9f10
     * @note[short] Windows: 0xd6920
     * @note[short] iOS: 0xed444
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a21b8
     * @note[short] MacOS (Intel): 0x1eb0b0
     * @note[short] Windows: 0xd7fc0
     * @note[short] iOS: 0xee43c
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a1164
     * @note[short] MacOS (Intel): 0x1ea050
     * @note[short] Windows: 0xd6f20
     * @note[short] iOS: 0xed54c
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a3298
     * @note[short] MacOS (Intel): 0x1ec180
     * @note[short] Android
     */
    void onTest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a1d60
     * @note[short] MacOS (Intel): 0x1eac60
     * @note[short] Android
     */
    void onUpdateDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a3184
     * @note[short] MacOS (Intel): 0x1ec070
     * @note[short] Windows: 0xd6ae0
     * @note[short] iOS: 0xef04c
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x1a3248
     * @note[short] MacOS (Intel): 0x1ec130
     * @note[short] Windows: 0xd6bc0
     * @note[short] iOS: 0xef110
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x1a1540
     * @note[short] MacOS (Intel): 0x1ea490
     * @note[short] Windows: 0xd5720
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] Android
     */
    void updateDescText(char const* p0);

    /**
     * @note[short] Windows: 0xd8290
     * @note[short] Android
     */
    void verifyLevelName();
    cocos2d::CCMenu* m_buttonMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_textInputs;
    cocos2d::CCLabelBMFont* m_folderLabel;
    bool m_exiting;
    GJLevelType m_levelType;
    gd::string m_levelName;
    UploadActionPopup* m_descriptionPopup;
};
