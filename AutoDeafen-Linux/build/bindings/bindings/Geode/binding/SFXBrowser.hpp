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
#include "MusicDownloadDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "SelectSFXSortDelegate.hpp"

class SFXBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public SelectSFXSortDelegate {
public:
    static constexpr auto CLASS_NAME = "SFXBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXBrowser, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SFXBrowser();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SFXBrowser();

    /**
     * @note[short] MacOS (ARM): 0x3a5570
     * @note[short] MacOS (Intel): 0x42a4d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bec0
     * @note[short] Android
     */
    static SFXBrowser* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x3a7c5c
     * @note[short] MacOS (Intel): 0x42cf30
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x16df88
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3a7bac
     * @note[short] MacOS (Intel): 0x42ce90
     * @note[short] Windows: 0x4687f0
     * @note[short] iOS: 0x16df7c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3a72fc
     * @note[short] MacOS (Intel): 0x42c4e0
     * @note[short] Windows: 0x467360
     * @note[short] iOS: 0x16d9b0
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x3a73cc
     * @note[short] MacOS (Intel): 0x42c5e0
     * @note[short] Windows: 0x467400
     * @note[short] iOS: 0x16d9d4
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x3a7740
     * @note[short] MacOS (Intel): 0x42c9b0
     * @note[short] Windows: 0x467f20
     * @note[short] iOS: 0x16dcc4
     * @note[short] Android
     */
    virtual void sortSelectClosed(SelectSFXSortLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x3a7970
     * @note[short] MacOS (Intel): 0x42cc20
     * @note[short] Windows: 0x468200
     * @note[short] iOS: 0x16de50
     * @note[short] Android: Rebinded
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x3a7a2c
     * @note[short] MacOS (Intel): 0x42cce0
     * @note[short] Windows: 0x4682a0
     * @note[short] iOS: 0x16deb4
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x3a7b8c
     * @note[short] MacOS (Intel): 0x42ce50
     * @note[short] Windows: 0x4683a0
     * @note[short] iOS: 0x16df5c
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x3a7b9c
     * @note[short] MacOS (Intel): 0x42ce70
     * @note[short] Windows: 0x4683b0
     * @note[short] iOS: 0x16df6c
     * @note[short] Android
     */
    virtual bool shouldSnapToSelected();

    /**
     * @note[short] MacOS (ARM): 0x3a56b4
     * @note[short] MacOS (Intel): 0x42a690
     * @note[short] Windows: 0x4661b0
     * @note[short] iOS: 0x16bf34
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3a68c8
     * @note[short] MacOS (Intel): 0x42b9a0
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a6740
     * @note[short] MacOS (Intel): 0x42b840
     * @note[short] Android
     */
    void onCredits(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a64c4
     * @note[short] MacOS (Intel): 0x42b5b0
     * @note[short] Windows: 0x468660
     * @note[short] Android
     */
    void onExitFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a656c
     * @note[short] MacOS (Intel): 0x42b670
     * @note[short] Windows: 0x4683c0
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x468090
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a6694
     * @note[short] MacOS (Intel): 0x42b780
     * @note[short] Windows: 0x467de0
     * @note[short] Android
     */
    void onSorting(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a66dc
     * @note[short] MacOS (Intel): 0x42b7d0
     * @note[short] Windows: 0x467f80
     * @note[short] Android
     */
    void onToggleCompactMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a6630
     * @note[short] MacOS (Intel): 0x42b710
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a6ab4
     * @note[short] MacOS (Intel): 0x42bba0
     * @note[short] Windows: 0x467540
     * @note[short] Android
     */
    void setupList(SFXSearchResult* p0);

    /**
     * @note[short] MacOS (ARM): 0x3a6990
     * @note[short] MacOS (Intel): 0x42ba70
     * @note[short] Android
     */
    void setupSFXBrowser();

    /**
     * @note[short] MacOS (ARM): 0x3a6928
     * @note[short] MacOS (Intel): 0x42ba00
     * @note[short] Android
     */
    void trySetupSFXBrowser();

    /**
     * @note[short] MacOS (ARM): 0x3a74e0
     * @note[short] MacOS (Intel): 0x42c710
     * @note[short] Windows: 0x468490
     * @note[short] Android
     */
    void updatePageLabel();
    SFXSearchResult* m_searchResult;
    cocos2d::CCArray* m_sfxObjects;
    GJCommentListLayer* m_listLayer;
    cocos2d::CCLabelBMFont* m_nameLabel;
    cocos2d::CCLabelBMFont* m_pathLabel;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_searchLabel;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_backButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemSpriteExtra* m_clearSearchButton;
    LoadingCircleSprite* m_circleSprite;
    int m_sfxID;
    int m_libraryVersion;
    int m_cellAmount;
    bool m_gettingURL;
    bool m_selectedCell;
    bool m_snapToSelected;
    bool m_compactMode;
    AudioSortType m_sortType;
    SFXBrowserDelegate* m_delegate;
    bool m_autoUpdating;
};
