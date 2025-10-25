#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelBrowserLayer.hpp"
#include "TextInputDelegate.hpp"
#include "SelectListIconDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "LevelListDeleteDelegate.hpp"

class LevelListLayer : public LevelBrowserLayer, public TextInputDelegate, public SelectListIconDelegate, public LikeItemDelegate, public LevelListDeleteDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListLayer, LevelBrowserLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelListLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~LevelListLayer();

    /**
     * @note[short] MacOS (ARM): 0x2dd04c
     * @note[short] MacOS (Intel): 0x3484a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24218c
     * @note[short] Android
     */
    static LevelListLayer* create(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2dcfac
     * @note[short] MacOS (Intel): 0x348410
     * @note[short] Windows: 0x2ee9c0
     * @note[short] iOS: 0x242140
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJLevelList* p0);

    /**
     * @note[short] MacOS (ARM): 0x2e01ec
     * @note[short] MacOS (Intel): 0x34b870
     * @note[short] Windows: 0x2f0680
     * @note[short] iOS: 0x2450b4
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x2e0224
     * @note[short] MacOS (Intel): 0x34b8a0
     * @note[short] Windows: 0x2f06b0
     * @note[short] iOS: 0x2450ec
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2e05ec
     * @note[short] MacOS (Intel): 0x34bc60
     * @note[short] Windows: 0x2f1e80
     * @note[short] iOS: 0x2453b8
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x2e081c
     * @note[short] MacOS (Intel): 0x34bea0
     * @note[short] Windows: 0x2c4370
     * @note[short] iOS: 0x245520
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x2e0c88
     * @note[short] MacOS (Intel): 0x34c3e0
     * @note[short] Windows: 0x2f26e0
     * @note[short] iOS: 0x2457ec
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e13e8
     * @note[short] MacOS (Intel): 0x34cb40
     * @note[short] Windows: 0x2f2ee0
     * @note[short] iOS: 0x245e38
     * @note[short] Android: Rebinded
     */
    virtual void shareCommentClosed(gd::string p0, ShareCommentLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x2e1024
     * @note[short] MacOS (Intel): 0x34c760
     * @note[short] Windows: 0x2f2b00
     * @note[short] iOS: 0x245b18
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x2e0b3c
     * @note[short] MacOS (Intel): 0x34c280
     * @note[short] Windows: 0x2f2630
     * @note[short] iOS: 0x24573c
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x2e0c80
     * @note[short] MacOS (Intel): 0x34c3c0
     * @note[short] Windows: 0x2f26d0
     * @note[short] iOS: 0x2457e4
     * @note[short] Android
     */
    virtual cocos2d::CCArray* updateResultArray(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x2e0828
     * @note[short] MacOS (Intel): 0x34bed0
     * @note[short] Windows: 0x2f21e0
     * @note[short] iOS: 0x24552c
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x2e14dc
     * @note[short] MacOS (Intel): 0x34cc30
     * @note[short] Windows: 0x2f3100
     * @note[short] iOS: 0x245efc
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x2e16bc
     * @note[short] MacOS (Intel): 0x34ce70
     * @note[short] Windows: 0x2f33b0
     * @note[short] iOS: 0x24601c
     * @note[short] Android
     */
    virtual void iconSelectClosed(SelectListIconLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x2e17ec
     * @note[short] MacOS (Intel): 0x34d000
     * @note[short] Windows: 0x2f3cd0
     * @note[short] iOS: 0x246100
     * @note[short] Android
     */
    virtual void levelListDeleteFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2e18d8
     * @note[short] MacOS (Intel): 0x34d100
     * @note[short] Windows: 0x2f3e00
     * @note[short] iOS: 0x2461c8
     * @note[short] Android
     */
    virtual void levelListDeleteFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2e1bdc
     * @note[short] MacOS (Intel): 0x34d410
     * @note[short] Windows: 0x2f41c0
     * @note[short] iOS: 0x2463f4
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2e19c4
     * @note[short] MacOS (Intel): 0x34d200
     * @note[short] Windows: 0x2f3f30
     * @note[short] iOS: 0x246290
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2e1ce0
     * @note[short] MacOS (Intel): 0x34d4e0
     * @note[short] Windows: 0x2f4320
     * @note[short] iOS: 0x2464f0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x2f3790
     * @note[short] Android
     */
    void cloneList();

    /**
     * @note[short] MacOS (ARM): 0x2decc4
     * @note[short] MacOS (Intel): 0x34a2e0
     * @note[short] Windows: 0x2f36a0
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x2def6c
     * @note[short] MacOS (Intel): 0x34a590
     * @note[short] Windows: 0x2f3a20
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x2dee64
     * @note[short] MacOS (Intel): 0x34a470
     * @note[short] Windows: 0x2f3b50
     * @note[short] Android
     */
    void confirmOwnerDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x2dd0cc
     * @note[short] MacOS (Intel): 0x348500
     * @note[short] Windows: 0x2eebf0
     * @note[short] iOS: 0x242200
     * @note[short] Android
     */
    bool init(GJLevelList* p0);

    /**
     * @note[short] MacOS (ARM): 0x2e024c
     * @note[short] MacOS (Intel): 0x34b8c0
     * @note[short] Windows: 0x2f1650
     * @note[short] iOS: 0x245114
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] MacOS (ARM): 0x2df064
     * @note[short] MacOS (Intel): 0x34a680
     * @note[short] Android
     */
    void onDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2dedb4
     * @note[short] MacOS (Intel): 0x34a3c0
     * @note[short] Windows: 0x2f2ce0
     * @note[short] iOS: 0x243dd8
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2dec1c
     * @note[short] MacOS (Intel): 0x34a230
     * @note[short] Windows: 0x2f2fe0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2dec54
     * @note[short] MacOS (Intel): 0x34a260
     * @note[short] Windows: 0x2f3020
     * @note[short] iOS: 0x243cac
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2deb14
     * @note[short] MacOS (Intel): 0x34a110
     * @note[short] Windows: 0x2f1cc0
     * @note[short] iOS: 0x243b6c
     * @note[short] Android
     */
    void onRefreshLevelList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2df1ac
     * @note[short] MacOS (Intel): 0x34a7b0
     * @note[short] Windows: 0x2f3260
     * @note[short] Android
     */
    void onSelectIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2df1f8
     * @note[short] MacOS (Intel): 0x34a800
     * @note[short] Windows: 0x2f33d0
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2df184
     * @note[short] MacOS (Intel): 0x34a770
     * @note[short] Windows: 0x2f3660
     * @note[short] Android
     */
    void onToggleEditMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2deadc
     * @note[short] MacOS (Intel): 0x34a0e0
     * @note[short] Windows: 0x2f2ca0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void ownerDelete();

    /**
     * @note[short] Android
     */
    void updateEditMode();

    /**
     * @note[short] MacOS (ARM): 0x2df334
     * @note[short] MacOS (Intel): 0x34a960
     * @note[short] Windows: 0x2f3160
     * @note[short] Android
     */
    void updateSideButtons();

    /**
     * @note[short] MacOS (ARM): 0x2df3c8
     * @note[short] MacOS (Intel): 0x34a9f0
     * @note[short] Windows: 0x2f06d0
     * @note[short] iOS: 0x2442d4
     * @note[short] Android
     */
    void updateStatsArt();

    /**
     * @note[short] Android
     */
    void verifyListName();
    cocos2d::CCMenu* m_buttonMenu;
    gd::string m_searchKey1;
    GJLevelList* m_levelList;
    gd::string m_searchKey2;
    CCMenuItemSpriteExtra* m_likeButton;
    bool m_exiting;
    CCTextInputNode* m_titleInput;
    int m_editMode;
    cocos2d::CCArray* m_objects;
    cocos2d::CCSprite* m_diffSprite;
    cocos2d::CCSprite* m_featureSprite;
    cocos2d::CCPoint m_rewardPosition;
    bool m_exited;
};
