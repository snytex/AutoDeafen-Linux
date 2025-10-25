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
#include "GooglePlayDelegate.hpp"
#include "GJDropDownLayerDelegate.hpp"

class MoreOptionsLayer : public FLAlertLayer, public TextInputDelegate, public GooglePlayDelegate, public GJDropDownLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MoreOptionsLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~MoreOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x6993f0
     * @note[short] MacOS (Intel): 0x785240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf0558
     * @note[short] Android
     */
    static MoreOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x69989c
     * @note[short] MacOS (Intel): 0x785810
     * @note[short] Windows: 0x35da20
     * @note[short] iOS: 0xf0800
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x69cb6c
     * @note[short] MacOS (Intel): 0x788ba0
     * @note[short] Windows: 0x360c90
     * @note[short] iOS: 0xf2ba0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x69cb78
     * @note[short] MacOS (Intel): 0x788bd0
     * @note[short] Windows: 0x7b5c0
     * @note[short] iOS: 0xf2bac
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x69cc48
     * @note[short] MacOS (Intel): 0x788c90
     * @note[short] Windows: 0x7b620
     * @note[short] iOS: 0xf2c18
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x69cd00
     * @note[short] MacOS (Intel): 0x788d40
     * @note[short] Windows: 0x360ca0
     * @note[short] iOS: 0xf2c78
     * @note[short] Android
     */
    virtual void googlePlaySignedIn();

    /**
     * @note[short] MacOS (ARM): 0x69ca48
     * @note[short] MacOS (Intel): 0x788a20
     * @note[short] Windows: 0x3607f0
     * @note[short] iOS: 0xf2ac4
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x69aba0
     * @note[short] MacOS (Intel): 0x786b10
     * @note[short] Windows: 0x35ee10
     * @note[short] Android
     */
    void addToggle(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Android
     */
    int countForPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x69b78c
     * @note[short] MacOS (Intel): 0x787750
     * @note[short] Windows: 0x35f890
     * @note[short] iOS: 0xf2024
     * @note[short] Android
     */
    void goToPage(int p0);

    /**
     * @note[short] Android
     */
    void incrementCountForPage(int p0);

    /**
     * @note[short] Android
     */
    const char* infoKey(int p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int p0);

    /**
     * @note[short] Android
     */
    const char* layerKey(int p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int p0);

    /**
     * @note[short] Android
     */
    const char* objectKey(int p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int p0);

    /**
     * @note[short] Android
     */
    void offsetToNextPage();

    /**
     * @note[short] MacOS (ARM): 0x69b6c8
     * @note[short] MacOS (Intel): 0x787670
     * @note[short] Windows: 0x360b30
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x69b39c
     * @note[short] MacOS (Intel): 0x787360
     * @note[short] Windows: 0x3606a0
     * @note[short] iOS: 0xf1e00
     * @note[short] Android
     */
    void onFMODDebug(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGPSignIn(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGPSignOut(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x69bc4c
     * @note[short] MacOS (Intel): 0x787c40
     * @note[short] Windows: 0xdba40
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onParental(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x69b344
     * @note[short] MacOS (Intel): 0x787300
     * @note[short] Windows: 0x360630
     * @note[short] iOS: 0xf1da8
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x35fe30
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    const char* pageKey(int p0);

    /**
     * @note[short] Android
     */
    void toggleGP();
    int m_page;
    int m_toggleCount;
    int m_pageCount;
    cocos2d::CCDictionary* m_variables;
    cocos2d::CCDictionary* m_objects;
    CCMenuItemSpriteExtra* m_leftBtn;
    CCMenuItemSpriteExtra* m_rightBtn;
    CCTextInputNode* m_offsetInput;
    CCMenuItemSpriteExtra* m_gpSignInBtn;
    CCMenuItemSpriteExtra* m_gpSignOutBtn;
    cocos2d::CCLabelBMFont* m_categoryLabel;
};
