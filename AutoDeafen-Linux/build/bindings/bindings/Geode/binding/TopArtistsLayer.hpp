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
#include "OnlineListDelegate.hpp"

class TopArtistsLayer : public FLAlertLayer, public OnlineListDelegate {
public:
    static constexpr auto CLASS_NAME = "TopArtistsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TopArtistsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TopArtistsLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~TopArtistsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TopArtistsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x294b98
     * @note[short] MacOS (Intel): 0x2fc850
     * @note[short] Windows: 0x4b2030
     * @note[short] iOS: 0x1a79b8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2954d8
     * @note[short] MacOS (Intel): 0x2fd200
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x1a8200
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x29545c
     * @note[short] MacOS (Intel): 0x2fd190
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x1a8184
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x295fb0
     * @note[short] MacOS (Intel): 0x2fdd70
     * @note[short] Windows: 0x867a0
     * @note[short] iOS: 0x1a8844
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x295518
     * @note[short] MacOS (Intel): 0x2fd250
     * @note[short] Windows: 0x4b27d0
     * @note[short] iOS: 0x1a8238
     * @note[short] Android
     */
    virtual void loadListFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x2955dc
     * @note[short] MacOS (Intel): 0x2fd310
     * @note[short] Windows: 0x4b2830
     * @note[short] iOS: 0x1a829c
     * @note[short] Android
     */
    virtual void loadListFailed(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x295604
     * @note[short] MacOS (Intel): 0x2fd350
     * @note[short] Windows: 0x4b2990
     * @note[short] iOS: 0x1a82c4
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x295bc0
     * @note[short] MacOS (Intel): 0x2fd970
     * @note[short] Windows: 0x4b2b70
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] Windows: 0x84620
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4b2fe0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4b2ff0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x295330
     * @note[short] MacOS (Intel): 0x2fd050
     * @note[short] Windows: 0x4b2840
     * @note[short] iOS: 0x1a8058
     * @note[short] Android
     */
    void setupLeaderboard(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    void updateLevelsLabel();
    cocos2d::CCArray* m_topArtists;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    void* m_unkPtr;
    cocos2d::CCLabelBMFont* m_pageInfoLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_unkSize4;
    int m_page;
};
