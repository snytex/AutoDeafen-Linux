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
#include "FLAlertLayerProtocol.hpp"
#include "SliderDelegate.hpp"

class MusicBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public FLAlertLayerProtocol, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MusicBrowser, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x5257c4
     * @note[short] MacOS (Intel): 0x5f6280
     * @note[short] Windows: 0x323840
     * @note[short] Android
     */
    static MusicBrowser* create(int p0, GJSongType p1);

    /**
     * @note[short] MacOS (ARM): 0x526b40
     * @note[short] MacOS (Intel): 0x5f7710
     * @note[short] Windows: 0x3245b0
     * @note[short] iOS: 0x3ba55c
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x527afc
     * @note[short] MacOS (Intel): 0x5f87e0
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x3bb0f8
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x5279e0
     * @note[short] MacOS (Intel): 0x5f86b0
     * @note[short] Windows: 0x325c90
     * @note[short] iOS: 0x3bb0ec
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5273e4
     * @note[short] MacOS (Intel): 0x5f8050
     * @note[short] Windows: 0x324eb0
     * @note[short] iOS: 0x3bacc8
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x5274b4
     * @note[short] MacOS (Intel): 0x5f8150
     * @note[short] Windows: 0x324f20
     * @note[short] iOS: 0x3bacec
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x526cbc
     * @note[short] MacOS (Intel): 0x5f7890
     * @note[short] Windows: 0x324bf0
     * @note[short] iOS: 0x3ba6d8
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* p0);

    /**
     * @note[short] MacOS (ARM): 0x527748
     * @note[short] MacOS (Intel): 0x5f8400
     * @note[short] Windows: 0x325a00
     * @note[short] iOS: 0x3baf44
     * @note[short] Android: Rebinded
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x5276e0
     * @note[short] MacOS (Intel): 0x5f8380
     * @note[short] Windows: 0x325750
     * @note[short] iOS: 0x3baedc
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x527738
     * @note[short] MacOS (Intel): 0x5f83e0
     * @note[short] Windows: 0x325780
     * @note[short] iOS: 0x3baf34
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x527918
     * @note[short] MacOS (Intel): 0x5f8610
     * @note[short] Windows: 0x325ba0
     * @note[short] iOS: 0x3bb07c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x525924
     * @note[short] MacOS (Intel): 0x5f6470
     * @note[short] Windows: 0x3239f0
     * @note[short] Android
     */
    bool init(int p0, GJSongType p1);

    /**
     * @note[short] MacOS (ARM): 0x5267d8
     * @note[short] MacOS (Intel): 0x5f73a0
     * @note[short] Windows: 0x325b10
     * @note[short] Android
     */
    void onArtistFilters(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x52671c
     * @note[short] MacOS (Intel): 0x5f72e0
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x325c00
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x526478
     * @note[short] MacOS (Intel): 0x5f70b0
     * @note[short] Windows: 0x325790
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x526c88
     * @note[short] MacOS (Intel): 0x5f7860
     * @note[short] Windows: 0x324b90
     * @note[short] Android
     */
    void onPlaybackControl(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x52657c
     * @note[short] MacOS (Intel): 0x5f71b0
     * @note[short] Windows: 0x3258b0
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x526770
     * @note[short] MacOS (Intel): 0x5f7340
     * @note[short] Windows: 0x325aa0
     * @note[short] Android
     */
    void onTagFilters(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x526518
     * @note[short] MacOS (Intel): 0x5f7140
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x526e10
     * @note[short] MacOS (Intel): 0x5f7a00
     * @note[short] Windows: 0x325050
     * @note[short] Android
     */
    void setupList(MusicSearchResult* p0);

    /**
     * @note[short] MacOS (ARM): 0x526d3c
     * @note[short] MacOS (Intel): 0x5f7920
     * @note[short] Android
     */
    void setupMusicBrowser();

    /**
     * @note[short] MacOS (ARM): 0x52684c
     * @note[short] MacOS (Intel): 0x5f7410
     * @note[short] Windows: 0x3248b0
     * @note[short] Android
     */
    void setupSongControls();

    /**
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x526ad8
     * @note[short] MacOS (Intel): 0x5f76a0
     * @note[short] Android
     */
    void trySetupMusicBrowser();

    /**
     * @note[short] MacOS (ARM): 0x5275cc
     * @note[short] MacOS (Intel): 0x5f8280
     * @note[short] Android
     */
    void updatePageLabel();
    GJSongType m_songType;
    MusicSearchResult* m_searchResult;
    GJCommentListLayer* m_listLayer;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCLabelBMFont* m_pageLabel;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemSpriteExtra* m_clearSearchButton;
    CCMenuItemSpriteExtra* m_tagFilterButton;
    CCMenuItemSpriteExtra* m_artistFilterButton;
    LoadingCircleSprite* m_circleSprite;
    int m_songID;
    int m_libraryVersion;
    bool m_gettingURL;
    bool m_selectedCell;
    MusicBrowserDelegate* m_delegate;
    Slider* m_playSlider;
    cocos2d::CCLabelBMFont* m_playLabel;
    CCMenuItemSpriteExtra* m_playButton;
    bool m_autoUpdating;
};
