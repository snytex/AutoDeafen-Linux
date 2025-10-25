#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomScrollLayerDelegate.hpp"
#include "LevelManagerDelegate.hpp"

class GauntletSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletSelectLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~GauntletSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x4b1248
     * @note[short] MacOS (Intel): 0x55abc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c0448
     * @note[short] Android
     */
    static GauntletSelectLayer* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4b1168
     * @note[short] MacOS (Intel): 0x55aaa0
     * @note[short] Windows: 0x1f5570
     * @note[short] iOS: 0x1c03fc
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4b2f70
     * @note[short] MacOS (Intel): 0x55cac0
     * @note[short] Windows: 0x1f7920
     * @note[short] iOS: 0x1c1d9c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x4b2e44
     * @note[short] MacOS (Intel): 0x55c990
     * @note[short] Windows: 0x1f7180
     * @note[short] iOS: 0x1c1d50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4b2da4
     * @note[short] MacOS (Intel): 0x55c8f0
     * @note[short] Windows: 0x1f7090
     * @note[short] iOS: 0x1c1cb0
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4b2d04
     * @note[short] MacOS (Intel): 0x55c850
     * @note[short] Windows: 0x1f7090
     * @note[short] iOS: 0x1c1c10
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4b2414
     * @note[short] MacOS (Intel): 0x55bf10
     * @note[short] Windows: 0x1f6470
     * @note[short] iOS: 0x1c1520
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x4b25bc
     * @note[short] MacOS (Intel): 0x55c0d0
     * @note[short] Windows: 0x1f6620
     * @note[short] iOS: 0x1c1624
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4b2c08
     * @note[short] MacOS (Intel): 0x55c750
     * @note[short] Windows: 0x1f6f20
     * @note[short] iOS: 0x1c1b18
     * @note[short] Android
     */
    void goToPage(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x4b1310
     * @note[short] MacOS (Intel): 0x55acb0
     * @note[short] Windows: 0x1f56a0
     * @note[short] iOS: 0x1c0504
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4b1d5c
     * @note[short] MacOS (Intel): 0x55b7c0
     * @note[short] Windows: 0x1f70d0
     * @note[short] iOS: 0x1c0f30
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b1dd0
     * @note[short] MacOS (Intel): 0x55b830
     * @note[short] Windows: 0x1f6210
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b1d48
     * @note[short] MacOS (Intel): 0x55b7a0
     * @note[short] Windows: 0x1f6ee0
     * @note[short] iOS: 0x1c0f1c
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b27b8
     * @note[short] MacOS (Intel): 0x55c2d0
     * @note[short] Windows: 0x1f7190
     * @note[short] iOS: 0x1c176c
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b1d34
     * @note[short] MacOS (Intel): 0x55b780
     * @note[short] Windows: 0x1f6f00
     * @note[short] iOS: 0x1c0f08
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b1e88
     * @note[short] MacOS (Intel): 0x55b8e0
     * @note[short] Windows: 0x1f6350
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b1f30
     * @note[short] MacOS (Intel): 0x55b9a0
     * @note[short] Windows: 0x1f6790
     * @note[short] iOS: 0x1c10e4
     * @note[short] Android
     */
    void setupGauntlets();

    /**
     * @note[short] MacOS (ARM): 0x4b2cfc
     * @note[short] MacOS (Intel): 0x55c840
     * @note[short] Windows: 0x1f7080
     * @note[short] Android
     */
    void unblockPlay();

    /**
     * @note[short] MacOS (ARM): 0x4b23c4
     * @note[short] MacOS (Intel): 0x55bec0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateArrows();
    cocos2d::CCSprite* m_backgroundSprite;
    BoomScrollLayer* m_scrollLayer;
    CCMenuItemSpriteExtra* m_leftButton;
    CCMenuItemSpriteExtra* m_rightButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    bool m_exiting;
    bool m_playing;
    TextArea* m_tryAgainText;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCDictionary* m_gauntlets;
    bool m_playBlocked;
};
