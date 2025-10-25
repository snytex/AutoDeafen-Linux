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

class WorldSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "WorldSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(WorldSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x33a7a4
     * @note[short] MacOS (Intel): 0x3aed30
     * @note[short] Android
     */
    static WorldSelectLayer* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x33a6c0
     * @note[short] MacOS (Intel): 0x3aec20
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int p0);

    /**
     * @note[short] MacOS (ARM): 0x33c594
     * @note[short] MacOS (Intel): 0x3b0b30
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x33c4b4
     * @note[short] MacOS (Intel): 0x3b0a50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x33c36c
     * @note[short] MacOS (Intel): 0x3b0960
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x33c224
     * @note[short] MacOS (Intel): 0x3b0870
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x33c5e4
     * @note[short] MacOS (Intel): 0x3b0b80
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void animateInActiveIsland();

    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPage(int p0);

    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue(int p0, int p1, float p2);

    /**
     * @note[short] Android
     */
    void goToPage(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x33a868
     * @note[short] MacOS (Intel): 0x3aee20
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFreeLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x33b13c
     * @note[short] MacOS (Intel): 0x3af740
     * @note[short] Android
     */
    void setupWorlds();

    /**
     * @note[short] MacOS (ARM): 0x33b724
     * @note[short] MacOS (Intel): 0x3afd60
     * @note[short] Android
     */
    void showCompleteDialog();

    /**
     * @note[short] Android
     */
    void tryShowAd();

    /**
     * @note[short] Android
     */
    void unblockButtons();

    /**
     * @note[short] Android
     */
    void updateArrows();
    cocos2d::CCSprite* m_background;
    BoomScrollLayer* m_scrollLayer;
    CCMenuItemSpriteExtra* m_arrowLeft;
    CCMenuItemSpriteExtra* m_arrowRight;
    bool m_cleanupSprites;
    bool m_enteringLevel;
    GJWorldNode* m_worldNode;
    bool m_buttonsLocked;
};
