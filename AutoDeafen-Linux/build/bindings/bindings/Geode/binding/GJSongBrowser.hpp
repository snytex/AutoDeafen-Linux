#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "TableViewCellDelegate.hpp"

class GJSongBrowser : public GJDropDownLayer, public FLAlertLayerProtocol, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "GJSongBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSongBrowser, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0x518ed0
     * @note[short] MacOS (Intel): 0x5e7120
     * @note[short] Windows: 0x2afab0
     * @note[short] iOS: 0x2649ac
     * @note[short] Android
     */
    static GJSongBrowser* create();

    /**
     * @note[short] MacOS (ARM): 0x5191bc
     * @note[short] MacOS (Intel): 0x5e7530
     * @note[short] Windows: 0x2afc30
     * @note[short] iOS: 0x264ad4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x519468
     * @note[short] MacOS (Intel): 0x5e7800
     * @note[short] Windows: 0x2afd30
     * @note[short] iOS: 0x264cb4
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x519434
     * @note[short] MacOS (Intel): 0x5e77d0
     * @note[short] Windows: 0x2afc70
     * @note[short] iOS: 0x264c80
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x519990
     * @note[short] MacOS (Intel): 0x5e7d80
     * @note[short] Windows: 0x2b0470
     * @note[short] iOS: 0x2651e8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x519a4c
     * @note[short] MacOS (Intel): 0x5e7e60
     * @note[short] Windows: 0x2b0570
     * @note[short] iOS: 0x2652a4
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x519aac
     * @note[short] MacOS (Intel): 0x5e7ec0
     * @note[short] Windows: 0x2b05a0
     * @note[short] iOS: 0x265304
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] Windows: 0x2b00b0
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x519790
     * @note[short] MacOS (Intel): 0x5e7b90
     * @note[short] Windows: 0x2b0360
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b0340
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b0350
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setupPageInfo(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    void setupSongBrowser(cocos2d::CCArray* p0);
    int m_page;
    int m_songID;
    bool m_selected;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCPoint m_unk298;
    cocos2d::CCArray* m_downloadedSongs;
    CustomListView* m_listView;
};
