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
#include "ColorSelectDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJColorSetupLayer : public FLAlertLayer, public ColorSelectDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJColorSetupLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJColorSetupLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1aeb44
     * @note[short] MacOS (Intel): 0x1f9510
     * @note[short] Windows: 0x24ef80
     * @note[short] iOS: 0x1912c0
     * @note[short] Android
     */
    static GJColorSetupLayer* create(LevelSettingsObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1af784
     * @note[short] MacOS (Intel): 0x1fa230
     * @note[short] Windows: 0x24fda0
     * @note[short] iOS: 0x191cf8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1af778
     * @note[short] MacOS (Intel): 0x1fa200
     * @note[short] Windows: 0x24fcd0
     * @note[short] iOS: 0x191cec
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1aec70
     * @note[short] MacOS (Intel): 0x1f96a0
     * @note[short] Windows: 0x24f0c0
     * @note[short] iOS: 0x191334
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);

    /**
     * @note[short] Windows: 0x24fd50
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1af318
     * @note[short] MacOS (Intel): 0x1f9db0
     * @note[short] Windows: 0x24fc00
     * @note[short] iOS: 0x191990
     * @note[short] Android
     */
    void onColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1af574
     * @note[short] MacOS (Intel): 0x1fa000
     * @note[short] Windows: 0x24fbb0
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1af66c
     * @note[short] MacOS (Intel): 0x1fa0f0
     * @note[short] Windows: 0x24fce0
     * @note[short] Android
     */
    void showPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1af6d0
     * @note[short] MacOS (Intel): 0x1fa160
     * @note[short] Windows: 0x24fa40
     * @note[short] iOS: 0x191c58
     * @note[short] Android
     */
    void updateSpriteColor(ColorChannelSprite* p0, cocos2d::CCLabelBMFont* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x1af3dc
     * @note[short] MacOS (Intel): 0x1f9e70
     * @note[short] Windows: 0x24f920
     * @note[short] iOS: 0x191a18
     * @note[short] Android
     */
    void updateSpriteColors();
    LevelSettingsObject* m_settingsObject;
    cocos2d::CCDictionary* m_unk290;
    cocos2d::CCDictionary* m_unk298;
    cocos2d::CCArray* m_colorLabels;
    cocos2d::CCArray* m_colorSprites;
    int m_page;
    int m_colorsPerPage;
    int m_totalPages;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    bool m_closeOnSelect;
    ColorSetupDelegate* m_delegate;
    int m_colorID;
};
