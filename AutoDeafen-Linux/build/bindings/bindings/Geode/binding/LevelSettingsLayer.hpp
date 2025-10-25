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
#include "SelectArtDelegate.hpp"
#include "SelectSettingDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "CustomSongLayerDelegate.hpp"
#include "TextInputDelegate.hpp"

class LevelSettingsLayer : public FLAlertLayer, public ColorSelectDelegate, public SelectArtDelegate, public SelectSettingDelegate, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x205e3c
     * @note[short] MacOS (Intel): 0x259580
     * @note[short] Windows: 0x309ca0
     * @note[short] iOS: 0x17c8d0
     * @note[short] Android
     */
    static LevelSettingsLayer* create(LevelSettingsObject* p0, LevelEditorLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x20916c
     * @note[short] MacOS (Intel): 0x25cd20
     * @note[short] Windows: 0x30c750
     * @note[short] iOS: 0x17f49c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2099b8
     * @note[short] MacOS (Intel): 0x25d650
     * @note[short] Windows: 0x30d5f0
     * @note[short] iOS: 0x17f9dc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2095dc
     * @note[short] MacOS (Intel): 0x25d1b0
     * @note[short] Windows: 0xc3110
     * @note[short] iOS: 0x17f6c4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x209524
     * @note[short] MacOS (Intel): 0x25d0d0
     * @note[short] Windows: 0x30ce80
     * @note[short] iOS: 0x17f60c
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2097b8
     * @note[short] MacOS (Intel): 0x25d3e0
     * @note[short] Windows: 0x30d2a0
     * @note[short] iOS: 0x17f7dc
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x208fb0
     * @note[short] MacOS (Intel): 0x25cb50
     * @note[short] Windows: 0x30c5d0
     * @note[short] iOS: 0x17f2f4
     * @note[short] Android
     */
    virtual void selectSettingClosed(SelectSettingLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x2091c4
     * @note[short] MacOS (Intel): 0x25cd70
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x17f4f4
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2091e0
     * @note[short] MacOS (Intel): 0x25cdb0
     * @note[short] Windows: 0x30ca80
     * @note[short] iOS: 0x17f510
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x20897c
     * @note[short] MacOS (Intel): 0x25c430
     * @note[short] Windows: 0x30c7d0
     * @note[short] Android: Rebinded
     */
    void createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] MacOS (ARM): 0x205fa4
     * @note[short] MacOS (Intel): 0x259780
     * @note[short] Windows: 0x309e90
     * @note[short] iOS: 0x17c954
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0, LevelEditorLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x20872c
     * @note[short] MacOS (Intel): 0x25c190
     * @note[short] Windows: 0x30d060
     * @note[short] Android
     */
    void onBGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20888c
     * @note[short] MacOS (Intel): 0x25c320
     * @note[short] Windows: 0x30cc50
     * @note[short] iOS: 0x17ed10
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCol(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDisable(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x208830
     * @note[short] MacOS (Intel): 0x25c2c0
     * @note[short] Windows: 0x30d130
     * @note[short] Android
     */
    void onFGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2085a4
     * @note[short] MacOS (Intel): 0x25c010
     * @note[short] Windows: 0x30c3a0
     * @note[short] Android
     */
    void onGameplayMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x208768
     * @note[short] MacOS (Intel): 0x25c1d0
     * @note[short] Windows: 0x30d0b0
     * @note[short] Android
     */
    void onGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x208560
     * @note[short] MacOS (Intel): 0x25bfd0
     * @note[short] Windows: 0x30cd90
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x208c90
     * @note[short] MacOS (Intel): 0x25c710
     * @note[short] Windows: 0x30c570
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x208be8
     * @note[short] MacOS (Intel): 0x25c660
     * @note[short] Windows: 0x30ca40
     * @note[short] Android
     */
    void onOptionToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectFont(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x209300
     * @note[short] MacOS (Intel): 0x25ceb0
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2093c0
     * @note[short] MacOS (Intel): 0x25cf70
     * @note[short] Android
     */
    void onSelectSpeed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x208ccc
     * @note[short] MacOS (Intel): 0x25c760
     * @note[short] Windows: 0x30c4b0
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2081d8
     * @note[short] MacOS (Intel): 0x25bbe0
     * @note[short] Windows: 0x30cde0
     * @note[short] Android
     */
    void onShowPicker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x208c54
     * @note[short] MacOS (Intel): 0x25c6d0
     * @note[short] Windows: 0x30c520
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2094f0
     * @note[short] MacOS (Intel): 0x25d090
     * @note[short] Android
     */
    void showPicker(ColorAction* p0);

    /**
     * @note[short] MacOS (ARM): 0x209530
     * @note[short] MacOS (Intel): 0x25d100
     * @note[short] Windows: 0x30cf00
     * @note[short] Android
     */
    void updateColorSprite(ColorChannelSprite* p0);

    /**
     * @note[short] MacOS (ARM): 0x20824c
     * @note[short] MacOS (Intel): 0x25bc60
     * @note[short] Windows: 0x30ce90
     * @note[short] Android
     */
    void updateColorSprites();

    /**
     * @note[short] MacOS (ARM): 0x208678
     * @note[short] MacOS (Intel): 0x25c0e0
     * @note[short] Windows: 0x30c3e0
     * @note[short] Android
     */
    void updateGameplayModeButtons();
    SongSelectNode* m_songSelectNode;
    Speed m_speed;
    ColorChannelSprite* m_bgColorSprite;
    ColorChannelSprite* m_gColorSprite;
    ColorChannelSprite* m_g2ColorSprite;
    ColorChannelSprite* m_lineColorSprite;
    ColorChannelSprite* m_mgColorSprite;
    ColorChannelSprite* m_mg2ColorSprite;
    cocos2d::CCSprite* m_moreColorsSprite;
    cocos2d::CCSprite* m_backgroundSprite;
    cocos2d::CCSprite* m_groundSprite;
    cocos2d::CCSprite* m_middlegroundSprite;
    cocos2d::CCSprite* m_speedSprite;
    cocos2d::CCSprite* m_modeSprite;
    LevelSettingsObject* m_settingsObject;
    void* m_unkPtr;
    cocos2d::CCArray* m_modeToggles;
    cocos2d::CCArray* m_speedButtons;
    LevelSettingsDelegate* m_delegate;
    LevelEditorLayer* m_editorLayer;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    CCMenuItemSpriteExtra* m_classicButton;
    CCMenuItemSpriteExtra* m_platformerButton;
    bool m_disableInput;
};
