#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJPurchaseDelegate.hpp"
#include "DialogDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class GJShopLayer : public cocos2d::CCLayer, public GJPurchaseDelegate, public DialogDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJShopLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJShopLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJShopLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~GJShopLayer();

    /**
     * @note[short] MacOS (ARM): 0x2a536c
     * @note[short] MacOS (Intel): 0x30e990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14dc8c
     * @note[short] Android
     */
    static GJShopLayer* create(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a5268
     * @note[short] MacOS (Intel): 0x30e850
     * @note[short] Windows: 0x2a1ef0
     * @note[short] iOS: 0x14dc40
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(ShopType p0);

    /**
     * @note[short] MacOS (ARM): 0x2a7074
     * @note[short] MacOS (Intel): 0x310710
     * @note[short] Windows: 0x2a4160
     * @note[short] iOS: 0x14f518
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2a91d0
     * @note[short] MacOS (Intel): 0x312d20
     * @note[short] Windows: 0x2a7290
     * @note[short] iOS: 0x150e28
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2a9590
     * @note[short] MacOS (Intel): 0x3130c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x151120
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2a9598
     * @note[short] MacOS (Intel): 0x3130e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x151128
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2a95a0
     * @note[short] MacOS (Intel): 0x313100
     * @note[short] Windows: 0x71210
     * @note[short] iOS: 0x151130
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2a95bc
     * @note[short] MacOS (Intel): 0x313140
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x15114c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2a7f40
     * @note[short] MacOS (Intel): 0x311710
     * @note[short] Windows: 0x2a58d0
     * @note[short] iOS: 0x15003c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2a78d4
     * @note[short] MacOS (Intel): 0x311010
     * @note[short] Windows: 0x2a4ed0
     * @note[short] iOS: 0x14fb3c
     * @note[short] Android
     */
    virtual void didPurchaseItem(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x2a7360
     * @note[short] MacOS (Intel): 0x310a30
     * @note[short] Windows: 0x2a4520
     * @note[short] iOS: 0x14f6b4
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x2a8fec
     * @note[short] MacOS (Intel): 0x312b60
     * @note[short] Windows: 0x2a6f60
     * @note[short] iOS: 0x150c68
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x2a7298
     * @note[short] MacOS (Intel): 0x310960
     * @note[short] Android
     */
    void exitVideoAdItems();

    /**
     * @note[short] MacOS (ARM): 0x2a5450
     * @note[short] MacOS (Intel): 0x30eaa0
     * @note[short] Windows: 0x2a2070
     * @note[short] iOS: 0x14dd64
     * @note[short] Android
     */
    bool init(ShopType p0);

    /**
     * @note[short] MacOS (ARM): 0x2a6d78
     * @note[short] MacOS (Intel): 0x310450
     * @note[short] Windows: 0x2a56b0
     * @note[short] iOS: 0x14f27c
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2a43e0
     * @note[short] iOS: 0x14f250
     * @note[short] Android
     */
    void onCommunityCredits(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlushies(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a6f30
     * @note[short] MacOS (Intel): 0x310600
     * @note[short] iOS: 0x14f408
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a6d2c
     * @note[short] MacOS (Intel): 0x310400
     * @note[short] Android
     */
    void onVideoAd(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a744c
     * @note[short] MacOS (Intel): 0x310b20
     * @note[short] iOS: 0x14f74c
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x2a7f4c
     * @note[short] MacOS (Intel): 0x311740
     * @note[short] Windows: 0x2a58e0
     * @note[short] Android
     */
    void showReactMessage();

    /**
     * @note[short] MacOS (ARM): 0x2a73bc
     * @note[short] MacOS (Intel): 0x310a80
     * @note[short] Android
     */
    void updateCurrencyCounter();
    bool m_closing;
    CCCounterLabel* m_currencyLabel;
    cocos2d::CCDictionary* m_shopItems;
    ShopType m_type;
    gd::string m_sheetName;
    cocos2d::CCNode* m_unkNode1;
    cocos2d::CCNode* m_unkNode2;
    bool m_videoPlaying;
    bool m_unkBool;
    AnimatedShopKeeper* m_shopKeeper;
    int m_zolgurothDialogIndex;
    int m_affordDialogIndex;
};
