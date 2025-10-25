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
#include "GameRateDelegate.hpp"
#include "ListButtonBarDelegate.hpp"
#include "DialogDelegate.hpp"
#include "CharacterColorDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class GJGarageLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public GameRateDelegate, public ListButtonBarDelegate, public DialogDelegate, public CharacterColorDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJGarageLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGarageLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x309620
     * @note[short] Android: Out of line
     */
     GJGarageLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~GJGarageLayer();

    /**
     * @note[short] MacOS (ARM): 0x2e93a8
     * @note[short] MacOS (Intel): 0x355a30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x301d84
     * @note[short] Android
     */
    static GJGarageLayer* node();

    /**
     * @note[short] MacOS (ARM): 0x2e9364
     * @note[short] MacOS (Intel): 0x3559f0
     * @note[short] Windows: 0x26b5b0
     * @note[short] iOS: 0x301d40
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x2e94a8
     * @note[short] MacOS (Intel): 0x355ba0
     * @note[short] Windows: 0x26b770
     * @note[short] iOS: 0x301df8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2efc68
     * @note[short] MacOS (Intel): 0x35c850
     * @note[short] Windows: 0x2718f0
     * @note[short] iOS: 0x3071f4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2ec848
     * @note[short] MacOS (Intel): 0x3590e0
     * @note[short] Windows: 0x26d390
     * @note[short] iOS: 0x304944
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2ec9a0
     * @note[short] MacOS (Intel): 0x359210
     * @note[short] Windows: 0x26d580
     * @note[short] iOS: 0x304a74
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2ecb88
     * @note[short] MacOS (Intel): 0x3593d0
     * @note[short] Windows: 0xc3060
     * @note[short] iOS: 0x304bdc
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2eecb4
     * @note[short] MacOS (Intel): 0x35b7f0
     * @note[short] Windows: 0xc3110
     * @note[short] iOS: 0x306730
     * @note[short] Android
     */
    virtual void listButtonBarSwitchedPage(ListButtonBar* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x2eee0c
     * @note[short] MacOS (Intel): 0x35b980
     * @note[short] Windows: 0x270320
     * @note[short] iOS: 0x306818
     * @note[short] Android
     */
    virtual void showUnlockPopup(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x2efa54
     * @note[short] MacOS (Intel): 0x35c600
     * @note[short] Windows: 0x270ff0
     * @note[short] iOS: 0x30706c
     * @note[short] Android
     */
    virtual void updateRate();

    /**
     * @note[short] MacOS (ARM): 0x2ef81c
     * @note[short] MacOS (Intel): 0x35c390
     * @note[short] Windows: 0x270bc0
     * @note[short] iOS: 0x306e34
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x2ef918
     * @note[short] MacOS (Intel): 0x35c4a0
     * @note[short] Windows: 0x270e20
     * @note[short] iOS: 0x306f30
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x2eebd4
     * @note[short] MacOS (Intel): 0x35b6f0
     * @note[short] Windows: 0x270170
     * @note[short] iOS: 0x306698
     * @note[short] Android
     */
    virtual void playerColorChanged();

    /**
     * @note[short] MacOS (ARM): 0x2ec838
     * @note[short] MacOS (Intel): 0x3590c0
     * @note[short] Windows: 0x26d380
     * @note[short] iOS: 0x304934
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] Android
     */
    gd::string achievementForUnlock(int p0, UnlockType p1);

    /**
     * @note[short] Windows: 0x270a30
     * @note[short] Android
     */
    gd::string descriptionForUnlock(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x2edef8
     * @note[short] MacOS (Intel): 0x35a7b0
     * @note[short] Windows: 0x26ee50
     * @note[short] Android
     */
    cocos2d::CCArray* getItems(IconType p0);

    /**
     * @note[short] MacOS (ARM): 0x2edb68
     * @note[short] MacOS (Intel): 0x35a440
     * @note[short] Windows: 0x26ef10
     * @note[short] iOS: 0x3058b8
     * @note[short] Android
     */
    cocos2d::CCArray* getItems(int p0, int p1, IconType p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x2eeb40
     * @note[short] MacOS (Intel): 0x35b650
     * @note[short] Android
     */
    gd::string getLockFrame(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x2ecc3c
     * @note[short] MacOS (Intel): 0x359460
     * @note[short] Windows: 0x26e590
     * @note[short] iOS: 0x304c48
     * @note[short] Android
     */
    void onArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ec048
     * @note[short] MacOS (Intel): 0x3588c0
     * @note[short] Windows: 0x271750
     * @note[short] iOS: 0x304604
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ec28c
     * @note[short] MacOS (Intel): 0x358b10
     * @note[short] Windows: 0x26d190
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ed4c8
     * @note[short] MacOS (Intel): 0x359d50
     * @note[short] Windows: 0x26e690
     * @note[short] iOS: 0x305378
     * @note[short] Android
     */
    void onNavigate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ec234
     * @note[short] MacOS (Intel): 0x358ab0
     * @note[short] Windows: 0x271570
     * @note[short] iOS: 0x3047e0
     * @note[short] Android
     */
    void onPaint(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2edf90
     * @note[short] MacOS (Intel): 0x35a860
     * @note[short] Windows: 0x26f890
     * @note[short] iOS: 0x305b88
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ecc08
     * @note[short] MacOS (Intel): 0x359430
     * @note[short] Windows: 0x26e6c0
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ec208
     * @note[short] MacOS (Intel): 0x358a80
     * @note[short] Windows: 0x271420
     * @note[short] iOS: 0x3047b4
     * @note[short] Android
     */
    void onShards(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ec1a8
     * @note[short] MacOS (Intel): 0x358a20
     * @note[short] Windows: 0x2716f0
     * @note[short] iOS: 0x304754
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ededc
     * @note[short] MacOS (Intel): 0x35a790
     * @note[short] Windows: 0x270120
     * @note[short] iOS: 0x305af4
     * @note[short] Android
     */
    void onSpecial(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ee60c
     * @note[short] MacOS (Intel): 0x35b0c0
     * @note[short] Windows: 0x26ff30
     * @note[short] Android
     */
    void onToggleItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ee9a4
     * @note[short] MacOS (Intel): 0x35b4b0
     * @note[short] Windows: 0x271230
     * @note[short] Android
     */
    void playRainbowEffect();

    /**
     * @note[short] Android
     */
    void playShadowEffect();

    /**
     * @note[short] MacOS (ARM): 0x2ecd78
     * @note[short] MacOS (Intel): 0x3595c0
     * @note[short] Windows: 0x26e6f0
     * @note[short] iOS: 0x304d0c
     * @note[short] Android
     */
    void selectTab(IconType p0);

    /**
     * @note[short] MacOS (ARM): 0x2eb53c
     * @note[short] MacOS (Intel): 0x357db0
     * @note[short] Windows: 0x26d930
     * @note[short] iOS: 0x303b74
     * @note[short] Android
     */
    void setupIconSelect();

    /**
     * @note[short] MacOS (ARM): 0x2ecea8
     * @note[short] MacOS (Intel): 0x359700
     * @note[short] Windows: 0x26e7b0
     * @note[short] iOS: 0x304de4
     * @note[short] Android
     */
    void setupPage(int p0, IconType p1);

    /**
     * @note[short] MacOS (ARM): 0x2ed500
     * @note[short] MacOS (Intel): 0x359d80
     * @note[short] Windows: 0x26f1e0
     * @note[short] iOS: 0x3053b0
     * @note[short] Android
     */
    void setupSpecialPage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void showUnlockPopupNew(int p0, UnlockType p1);

    /**
     * @note[short] Android
     */
    gd::string titleForUnlock(int p0, UnlockType p1);

    /**
     * @note[short] Android
     */
    void toggleGlow();

    /**
     * @note[short] MacOS (ARM): 0x2eaef4
     * @note[short] MacOS (Intel): 0x3577a0
     * @note[short] Windows: 0x2701a0
     * @note[short] iOS: 0x3035e8
     * @note[short] Android
     */
    void updatePlayerColors();

    /**
     * @note[short] Android
     */
    void updatePlayerName(char const* p0);
    CCTextInputNode* m_usernameInput;
    SimplePlayer* m_playerObject;
    cocos2d::CCArray* m_tabButtons;
    cocos2d::CCArray* m_pageButtons;
    cocos2d::CCNode* m_unknown;
    cocos2d::CCSprite* m_supporter;
    bool m_hasClosed;
    IconType m_iconType;
    gd::map<IconType, int> m_iconPages;
    cocos2d::CCSprite* m_cursor1;
    cocos2d::CCSprite* m_cursor2;
    CCMenuItemSpriteExtra* m_currentIcon;
    ListButtonBar* m_iconSelection;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_rightArrow;
    cocos2d::CCMenu* m_navDotMenu;
    int m_iconID;
    IconType m_selectedIconType;
    bool m_videoPlaying;
};
