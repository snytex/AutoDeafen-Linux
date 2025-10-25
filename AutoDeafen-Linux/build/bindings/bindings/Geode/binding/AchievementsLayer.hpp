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

class AchievementsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "AchievementsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementsLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     AchievementsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x419b94
     * @note[short] Android
     */
    static AchievementsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x2f3078
     * @note[short] MacOS (Intel): 0x360030
     * @note[short] Windows: 0x82260
     * @note[short] iOS: 0x41a244
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x2f2c18
     * @note[short] MacOS (Intel): 0x35fb70
     * @note[short] Windows: 0x81fb0
     * @note[short] iOS: 0x419c40
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x2f2ea8
     * @note[short] MacOS (Intel): 0x35fe50
     * @note[short] Windows: 0x82300
     * @note[short] iOS: 0x419efc
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2f2e9c
     * @note[short] MacOS (Intel): 0x35fe30
     * @note[short] Windows: 0x824e0
     * @note[short] iOS: 0x419ef0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f2e90
     * @note[short] MacOS (Intel): 0x35fe10
     * @note[short] Windows: 0x824f0
     * @note[short] iOS: 0x419ee4
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* arr);

    /**
     * @note[short] Android
     */
    void setupPageInfo(int p0, int p1, int p2);
    int m_currentPage;
    CCMenuItemSpriteExtra* m_nextPageButton;
    CCMenuItemSpriteExtra* m_prevPageButton;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCPoint m_unkPoint;
};
