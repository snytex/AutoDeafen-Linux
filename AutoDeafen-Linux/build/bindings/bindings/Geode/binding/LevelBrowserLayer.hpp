#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "SetIDPopupDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "ShareCommentDelegate.hpp"

class LevelBrowserLayer : public cocos2d::CCLayerColor, public LevelManagerDelegate, public FLAlertLayerProtocol, public SetIDPopupDelegate, public SetTextPopupDelegate, public TableViewCellDelegate, public ShareCommentDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelBrowserLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelBrowserLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x2c05d0
     * @note[short] iOS: 0x248f60
     * @note[short] Android: Out of line
     */
     LevelBrowserLayer();

    /**
     * @note[short] MacOS (ARM): 0x3e63f8
     * @note[short] MacOS (Intel): 0x477f30
     * @note[short] Windows: 0x2c07c0
     * @note[short] iOS: 0x40bffc
     * @note[short] Android: Rebinded
     */
     ~LevelBrowserLayer();

    /**
     * @note[short] MacOS (ARM): 0x3e6590
     * @note[short] MacOS (Intel): 0x478170
     * @note[short] Windows: 0x2c09f0
     * @note[short] iOS: 0x40c184
     * @note[short] Android
     */
    static LevelBrowserLayer* create(GJSearchObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x3e6544
     * @note[short] MacOS (Intel): 0x478130
     * @note[short] Windows: 0x2c09a0
     * @note[short] iOS: 0x40c138
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJSearchObject* search);

    /**
     * @note[short] MacOS (ARM): 0x3ecc44
     * @note[short] MacOS (Intel): 0x47ee70
     * @note[short] Windows: 0x2c78b0
     * @note[short] iOS: 0x4116d8
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x3ece38
     * @note[short] MacOS (Intel): 0x47f010
     * @note[short] Windows: 0x242b20
     * @note[short] iOS: 0x411808
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0x3ecf10
     * @note[short] MacOS (Intel): 0x47f100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4118d8
     * @note[short] Android: Out of line
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ecf30
     * @note[short] MacOS (Intel): 0x47f160
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4118f8
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ecf20
     * @note[short] MacOS (Intel): 0x47f120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4118e8
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ecf28
     * @note[short] MacOS (Intel): 0x47f140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4118f0
     * @note[short] Android: Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ece3c
     * @note[short] MacOS (Intel): 0x47f020
     * @note[short] Windows: 0x2c79f0
     * @note[short] iOS: 0x41180c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3ec1e0
     * @note[short] MacOS (Intel): 0x47e380
     * @note[short] Windows: 0x2c4d30
     * @note[short] iOS: 0x410dc8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3ec204
     * @note[short] MacOS (Intel): 0x47e3c0
     * @note[short] Windows: 0x2c4d50
     * @note[short] iOS: 0x410dec
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x3eb7d8
     * @note[short] MacOS (Intel): 0x47d8d0
     * @note[short] Windows: 0x2c4240
     * @note[short] iOS: 0x4106f8
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x3eb900
     * @note[short] MacOS (Intel): 0x47da30
     * @note[short] Windows: 0x2c4370
     * @note[short] iOS: 0x410818
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3eb9ec
     * @note[short] MacOS (Intel): 0x47db10
     * @note[short] Windows: 0x2c43c0
     * @note[short] iOS: 0x410894
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ec12c
     * @note[short] MacOS (Intel): 0x47e2d0
     * @note[short] Windows: 0x2c4ca0
     * @note[short] iOS: 0x410d50
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ec520
     * @note[short] MacOS (Intel): 0x47e6b0
     * @note[short] Windows: 0x2c5d50
     * @note[short] iOS: 0x4110c0
     * @note[short] Android: Rebinded
     */
    virtual void shareCommentClosed(gd::string p0, ShareCommentLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ec604
     * @note[short] MacOS (Intel): 0x47e790
     * @note[short] Windows: 0x2c6ac0
     * @note[short] iOS: 0x411138
     * @note[short] Android: Rebinded
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x3ec7a4
     * @note[short] MacOS (Intel): 0x47e980
     * @note[short] Windows: 0x2c72f0
     * @note[short] iOS: 0x4112c4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3ec01c
     * @note[short] MacOS (Intel): 0x47e1a0
     * @note[short] Windows: 0x2c4870
     * @note[short] iOS: 0x410c4c
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3ecf38
     * @note[short] MacOS (Intel): 0x47f180
     * @note[short] Windows: 0x2c0770
     * @note[short] iOS: 0x411900
     * @note[short] Android
     */
    virtual cocos2d::CCArray* updateResultArray(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x3eccf0
     * @note[short] MacOS (Intel): 0x47eef0
     * @note[short] Windows: 0x2c7950
     * @note[short] iOS: 0x411764
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x3ec4a8
     * @note[short] MacOS (Intel): 0x47e640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x411048
     * @note[short] Android
     */
    void createNewLevel(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x3ec348
     * @note[short] MacOS (Intel): 0x47e520
     * @note[short] Android
     */
    void createNewList(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createNewSmartTemplate(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteSelected();

    /**
     * @note[short] Android
     */
    TodoReturn exitLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x3eabe4
     * @note[short] MacOS (Intel): 0x47ca90
     * @note[short] Windows: 0x2c6b80
     * @note[short] iOS: 0x40fbbc
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* getItemsMatchingSearch(cocos2d::CCArray* p0, gd::string p1, GJSearchObject* p2);

    /**
     * @note[short] MacOS (ARM): 0x3eb248
     * @note[short] MacOS (Intel): 0x47d170
     * @note[short] Windows: 0x2c39e0
     * @note[short] iOS: 0x4101ac
     * @note[short] Android
     */
    gd::string getSearchTitle();

    /**
     * @note[short] MacOS (ARM): 0x3e66c8
     * @note[short] MacOS (Intel): 0x478340
     * @note[short] Windows: 0x2c0a60
     * @note[short] iOS: 0x40c1f8
     * @note[short] Android
     */
    bool init(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0x2c2370
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x3e99f0
     * @note[short] MacOS (Intel): 0x47b5e0
     * @note[short] Windows: 0x2c2540
     * @note[short] iOS: 0x40ed84
     * @note[short] Android
     */
    void loadPage(GJSearchObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x3e9974
     * @note[short] MacOS (Intel): 0x47b560
     * @note[short] Windows: 0x2c67a0
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e8c88
     * @note[short] MacOS (Intel): 0x47a900
     * @note[short] Windows: 0x2c61f0
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e82d8
     * @note[short] MacOS (Intel): 0x479fc0
     * @note[short] Windows: 0x2c6f10
     * @note[short] iOS: 0x40ddb4
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2c6030
     * @note[short] Android
     */
    void onFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e95b4
     * @note[short] MacOS (Intel): 0x47b1a0
     * @note[short] Windows: 0x2c47c0
     * @note[short] Android
     */
    void onGoToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2c4640
     * @note[short] Android
     */
    void onGoToLastPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e81a8
     * @note[short] MacOS (Intel): 0x479eb0
     * @note[short] Windows: 0x2c46b0
     * @note[short] iOS: 0x40dcb0
     * @note[short] Android
     */
    void onGoToPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e91dc
     * @note[short] MacOS (Intel): 0x47ae20
     * @note[short] Windows: 0x2c4df0
     * @note[short] iOS: 0x40e7a0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2c5c70
     * @note[short] Android
     */
    void onLocalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e8768
     * @note[short] MacOS (Intel): 0x47a430
     * @note[short] Windows: 0x2c5e60
     * @note[short] Android
     */
    void onMyOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e8664
     * @note[short] MacOS (Intel): 0x47a340
     * @note[short] Windows: 0x2c57c0
     * @note[short] iOS: 0x40e01c
     * @note[short] Android
     */
    void onNew(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e8068
     * @note[short] MacOS (Intel): 0x479d50
     * @note[short] Windows: 0x2c4ba0
     * @note[short] iOS: 0x40db78
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e8034
     * @note[short] MacOS (Intel): 0x479d10
     * @note[short] Windows: 0x2c4c20
     * @note[short] iOS: 0x40db44
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e909c
     * @note[short] MacOS (Intel): 0x47acf0
     * @note[short] Windows: 0x2c6660
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e8b28
     * @note[short] MacOS (Intel): 0x47a7c0
     * @note[short] Android
     */
    void onRemoveAllFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e8e64
     * @note[short] MacOS (Intel): 0x47aab0
     * @note[short] Windows: 0x2c6110
     * @note[short] iOS: 0x40e520
     * @note[short] Android
     */
    void onSaved(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2c5b90
     * @note[short] Android
     */
    void onSavedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e96b4
     * @note[short] MacOS (Intel): 0x47b290
     * @note[short] Windows: 0x2c6840
     * @note[short] iOS: 0x40eb2c
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3e85dc
     * @note[short] MacOS (Intel): 0x47a2b0
     * @note[short] Windows: 0x2c7250
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void reloadAllObjects();

    /**
     * @note[short] Android
     */
    void setSearchObject(GJSearchObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x3eafb8
     * @note[short] MacOS (Intel): 0x47ce70
     * @note[short] Windows: 0x2c36d0
     * @note[short] iOS: 0x40ff18
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x3ece8c
     * @note[short] MacOS (Intel): 0x47f080
     * @note[short] Windows: 0x2c7a60
     * @note[short] iOS: 0x41185c
     * @note[short] Android
     */
    void show();

    /**
     * @note[short] iOS: 0x410bb8
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] MacOS (ARM): 0x3e809c
     * @note[short] MacOS (Intel): 0x479d90
     * @note[short] Windows: 0x2c4a70
     * @note[short] iOS: 0x40dbac
     * @note[short] Android
     */
    void updatePageLabel();
    bool m_unk;
    bool m_allSelected;
    TextArea* m_noInternet;
    GJListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_lastBtn;
    CCMenuItemSpriteExtra* m_cancelSearchBtn;
    CCMenuItemSpriteExtra* m_refreshBtn;
    cocos2d::CCArray* m_levels;
    GJSearchObject* m_searchObject;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCLabelBMFont* m_pageText;
    CCMenuItemSpriteExtra* m_pageBtn;
    cocos2d::CCLabelBMFont* m_folderText;
    CCMenuItemSpriteExtra* m_folderBtn;
    CCMenuItemToggler* m_allObjectsToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    LoadingCircle* m_circle;
    int m_lastPage;
    bool m_isOverlay;
    cocos2d::CCScene* m_scene;
    int m_zOffset;
    bool m_unk2;
    int m_listHeight;
    float m_unkFloat;
    float m_unkFloat2;
    TableViewCellDelegate* m_delegate;
    bool m_cached;
};
