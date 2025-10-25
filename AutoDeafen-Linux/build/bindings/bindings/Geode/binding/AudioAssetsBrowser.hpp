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
#include "TableViewCellDelegate.hpp"
#include "MusicDownloadDelegate.hpp"

class AudioAssetsBrowser : public FLAlertLayer, public TableViewCellDelegate, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "AudioAssetsBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AudioAssetsBrowser, FLAlertLayer)

    /**
     * @note[short] iOS: 0x1d225c
     * @note[short] Android: Rebinded
     */
    static AudioAssetsBrowser* create(gd::vector<int>& songIds, gd::vector<int>& sfxIds);

    /**
     * @note[short] MacOS (ARM): 0x6b1dd4
     * @note[short] MacOS (Intel): 0x79fa30
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x1d30fc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x6b1d58
     * @note[short] MacOS (Intel): 0x79f9c0
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x1d3080
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6b1d04
     * @note[short] MacOS (Intel): 0x79f8e0
     * @note[short] Windows: 0x83cd0
     * @note[short] iOS: 0x1d3034
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x6b1d10
     * @note[short] MacOS (Intel): 0x79f910
     * @note[short] Windows: 0x83d50
     * @note[short] iOS: 0x1d3040
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x6b1d24
     * @note[short] MacOS (Intel): 0x79f950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d3050
     * @note[short] Android: Out of line
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x6b1d34
     * @note[short] MacOS (Intel): 0x79f970
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d3060
     * @note[short] Android: Out of line
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x6b1d44
     * @note[short] MacOS (Intel): 0x79f990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d3070
     * @note[short] Android: Out of line
     */
    virtual int getCellDelegateType();

    /**
     * @note[short] MacOS (ARM): 0x6b0f20
     * @note[short] MacOS (Intel): 0x79e9b0
     * @note[short] Windows: 0x83760
     * @note[short] iOS: 0x1d2340
     * @note[short] Android: Rebinded
     */
    bool init(gd::vector<int>& songIds, gd::vector<int>& sfxIds);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6b1494
     * @note[short] MacOS (Intel): 0x79ef60
     * @note[short] iOS: 0x1d289c
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupList();

    /**
     * @note[short] Android
     */
    TodoReturn trySetupAudioBrowser();

    /**
     * @note[short] Android
     */
    TodoReturn updatePageLabel();
    cocos2d::CCArray* m_songInfoObjects;
    GJCommentListLayer* m_songList;
    cocos2d::CCLabelBMFont* m_pageIndicatorLabel;
    gd::vector<int> m_songsIds;
    gd::vector<int> m_sfxIds;
    LoadingCircleSprite* m_loadingCircle;
};
