#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"
#include "BoomScrollLayerDelegate.hpp"

class SecretRewardsLayer : public cocos2d::CCLayer, public DialogDelegate, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretRewardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretRewardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ee850
     * @note[short] Android: Out of line
     */
     SecretRewardsLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SecretRewardsLayer();

    /**
     * @note[short] MacOS (ARM): 0x545350
     * @note[short] MacOS (Intel): 0x6195c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e7b5c
     * @note[short] Android
     */
    static SecretRewardsLayer* create(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x545304
     * @note[short] MacOS (Intel): 0x619580
     * @note[short] Windows: 0x3bb1a0
     * @note[short] iOS: 0x2e7b10
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x54e664
     * @note[short] MacOS (Intel): 0x623c00
     * @note[short] Windows: 0x3c0aa0
     * @note[short] iOS: 0x2ee820
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x54e5f0
     * @note[short] MacOS (Intel): 0x623b70
     * @note[short] Windows: 0x3c0a90
     * @note[short] iOS: 0x2ee80c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x54e3e0
     * @note[short] MacOS (Intel): 0x623980
     * @note[short] Windows: 0x3bf570
     * @note[short] iOS: 0x2ee678
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x547d00
     * @note[short] MacOS (Intel): 0x61c110
     * @note[short] Windows: 0x3bda10
     * @note[short] iOS: 0x2e9dd4
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x5488b4
     * @note[short] MacOS (Intel): 0x61ccf0
     * @note[short] Windows: 0x3bdf70
     * @note[short] iOS: 0x2ea580
     * @note[short] Android
     */
    void createSecondaryLayer(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn fadeInMusic();

    /**
     * @note[short] Android
     */
    TodoReturn fadeInOutMusic();

    /**
     * @note[short] MacOS (ARM): 0x548ce8
     * @note[short] MacOS (Intel): 0x61d170
     * @note[short] Windows: 0x3be3c0
     * @note[short] iOS: 0x2ea928
     * @note[short] Android
     */
    cocos2d::CCArray* generateChestItems(int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getPageColor(int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x54543c
     * @note[short] MacOS (Intel): 0x6196f0
     * @note[short] Windows: 0x3bb300
     * @note[short] iOS: 0x2e7bd0
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x548784
     * @note[short] MacOS (Intel): 0x61cba0
     * @note[short] iOS: 0x2ea460
     * @note[short] Android
     */
    void moveToMainLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x548300
     * @note[short] MacOS (Intel): 0x61c740
     * @note[short] iOS: 0x2ea248
     * @note[short] Android
     */
    void moveToSecondaryLayer(int p0);

    /**
     * @note[short] MacOS (ARM): 0x547320
     * @note[short] MacOS (Intel): 0x61b7c0
     * @note[short] Windows: 0x3c08b0
     * @note[short] iOS: 0x2e95d4
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54738c
     * @note[short] MacOS (Intel): 0x61b830
     * @note[short] Windows: 0x3bdce0
     * @note[short] iOS: 0x2e9640
     * @note[short] Android
     */
    void onChestType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5476f8
     * @note[short] MacOS (Intel): 0x61bb70
     * @note[short] Windows: 0x3c0020
     * @note[short] iOS: 0x2e9920
     * @note[short] Android
     */
    void onGoldChest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5499c0
     * @note[short] MacOS (Intel): 0x61e000
     * @note[short] Windows: 0x3bedd0
     * @note[short] iOS: 0x2eb188
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x547ad8
     * @note[short] MacOS (Intel): 0x61bf00
     * @note[short] Windows: 0x3bf360
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x547f04
     * @note[short] MacOS (Intel): 0x61c330
     * @note[short] Windows: 0x3bf760
     * @note[short] iOS: 0x2e9f98
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x547c1c
     * @note[short] MacOS (Intel): 0x61c050
     * @note[short] Windows: 0x3bd950
     * @note[short] iOS: 0x2e9d28
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x549d5c
     * @note[short] MacOS (Intel): 0x61e360
     * @note[short] Windows: 0x3c0ae0
     * @note[short] Android
     */
    void showDialog01();

    /**
     * @note[short] MacOS (ARM): 0x54b548
     * @note[short] MacOS (Intel): 0x620080
     * @note[short] Android
     */
    void showDialog03();

    /**
     * @note[short] MacOS (ARM): 0x54d868
     * @note[short] MacOS (Intel): 0x622be0
     * @note[short] Windows: 0x3c4980
     * @note[short] Android
     */
    void showDialogDiamond();

    /**
     * @note[short] MacOS (ARM): 0x54c6f0
     * @note[short] MacOS (Intel): 0x621630
     * @note[short] Windows: 0x3c36f0
     * @note[short] Android
     */
    void showDialogMechanic();

    /**
     * @note[short] MacOS (ARM): 0x5483f8
     * @note[short] MacOS (Intel): 0x61c850
     * @note[short] Android
     */
    void showLockedChest();

    /**
     * @note[short] MacOS (ARM): 0x54e370
     * @note[short] MacOS (Intel): 0x623910
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showShop(int shop);

    /**
     * @note[short] MacOS (ARM): 0x5473e0
     * @note[short] MacOS (Intel): 0x61b870
     * @note[short] Windows: 0x3bfb80
     * @note[short] Android
     */
    void switchToOpenedState(CCMenuItemSpriteExtra* p0);

    /**
     * @note[short] MacOS (ARM): 0x548658
     * @note[short] MacOS (Intel): 0x61ca90
     * @note[short] Windows: 0x3bde30
     * @note[short] iOS: 0x2ea340
     * @note[short] Android
     */
    void updateBackButton();

    /**
     * @note[short] Android
     */
    TodoReturn updateUnlockedGoldLabel();

    /**
     * @note[short] MacOS (ARM): 0x5474c0
     * @note[short] MacOS (Intel): 0x61b930
     * @note[short] iOS: 0x2e9774
     * @note[short] Android
     */
    void updateUnlockedLabel();
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCLayer* m_secondaryLayer;
    cocos2d::CCLabelBMFont* m_chestLabel;
    cocos2d::CCLabelBMFont* m_chestCounter;
    cocos2d::CCSprite* m_goldPriceSprite;
    cocos2d::CCDictionary* m_chestCounters;
    cocos2d::CCLabelBMFont* m_keysLabel;
    cocos2d::CCLabelBMFont* m_goldKeysLabel;
    cocos2d::CCSprite* m_keySprite;
    cocos2d::CCSprite* m_goldKeySprite;
    void* m_unknown;
    CCMenuItemSpriteExtra* m_leftButton;
    CCMenuItemSpriteExtra* m_rightButton;
    cocos2d::CCSprite* m_backSprite;
    int m_unkSize4_1;
    int m_unkSize4_2;
    BoomScrollLayer* m_mainScrollLayer;
    BoomScrollLayer* m_secondaryScrollLayer;
    cocos2d::CCSprite* m_backgroundSprite;
    int m_scratchDialogIndex;
    int m_potborDialogIndex;
    int m_diamondDialogIndex;
    int m_mechanicDialogIndex;
    bool m_inMainLayer;
    GJRewardType m_rewardType;
    int m_lockedDialogIndex;
};
