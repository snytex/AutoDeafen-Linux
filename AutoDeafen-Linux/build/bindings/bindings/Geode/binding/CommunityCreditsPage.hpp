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

class CommunityCreditsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CommunityCreditsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommunityCreditsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CommunityCreditsPage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~CommunityCreditsPage();

    /**
     * @note[short] MacOS (ARM): 0x2a13f8
     * @note[short] MacOS (Intel): 0x30a3b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CommunityCreditsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x2a14fc
     * @note[short] MacOS (Intel): 0x30a500
     * @note[short] Windows: 0x94000
     * @note[short] iOS: 0x1a3788
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2a37e4
     * @note[short] MacOS (Intel): 0x30ca60
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x1a5d64
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2a3768
     * @note[short] MacOS (Intel): 0x30c9f0
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x1a5ce8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2a35e0
     * @note[short] MacOS (Intel): 0x30c860
     * @note[short] Windows: 0x96160
     * @note[short] iOS: 0x1a5b74
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x2a34cc
     * @note[short] MacOS (Intel): 0x30c750
     * @note[short] Windows: 0x96040
     * @note[short] Android
     */
    void goToPage(int p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
    cocos2d::CCDictionary* m_pageObjects;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    int m_page;
};
