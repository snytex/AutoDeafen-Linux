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

class ShardsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShardsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShardsPage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~ShardsPage();

    /**
     * @note[short] MacOS (ARM): 0x41ac58
     * @note[short] MacOS (Intel): 0x4b26e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShardsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x41ad58
     * @note[short] MacOS (Intel): 0x4b2820
     * @note[short] Windows: 0x471620
     * @note[short] iOS: 0x39a9e4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x41ca28
     * @note[short] MacOS (Intel): 0x4b47d0
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x39c3c8
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x41c9ac
     * @note[short] MacOS (Intel): 0x4b4760
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x39c34c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x41c824
     * @note[short] MacOS (Intel): 0x4b45d0
     * @note[short] Windows: 0x867a0
     * @note[short] iOS: 0x39c1d8
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x41c6d8
     * @note[short] MacOS (Intel): 0x4b4480
     * @note[short] iOS: 0x39c094
     * @note[short] Android
     */
    void goToPage(int p0);

    /**
     * @note[short] Windows: 0x84620
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41c660
     * @note[short] MacOS (Intel): 0x4b4410
     * @note[short] Windows: 0x474610
     * @note[short] iOS: 0x39c01c
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41c698
     * @note[short] MacOS (Intel): 0x4b4440
     * @note[short] Windows: 0x474650
     * @note[short] iOS: 0x39c054
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
    cocos2d::CCDictionary* m_pages;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    cocos2d::CCSprite* m_tierSprite;
    int m_page;
};
