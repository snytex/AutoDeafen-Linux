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

class OptionsLayer : public GJDropDownLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "OptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsLayer, GJDropDownLayer)
	inline OptionsLayer() {
        m_optionsMenu = nullptr;
        m_unknown = nullptr;
        m_layerChoice = 0;
        m_recordReplays = false;
        m_musicSlider = nullptr;
        m_sfxSlider = nullptr;
        m_lastVaultDialog = -1;
    }

    /**
     * @note[short] MacOS (ARM): 0x698218
     * @note[short] MacOS (Intel): 0x783fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xef814
     * @note[short] Android
     */
    static OptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x6983b0
     * @note[short] MacOS (Intel): 0x784200
     * @note[short] Windows: 0x35bff0
     * @note[short] iOS: 0xef91c
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x699714
     * @note[short] MacOS (Intel): 0x785600
     * @note[short] Windows: 0x35d840
     * @note[short] iOS: 0xf0688
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x6997a0
     * @note[short] MacOS (Intel): 0x785670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf0714
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x699300
     * @note[short] MacOS (Intel): 0x785140
     * @note[short] Windows: 0x35cc70
     * @note[short] iOS: 0xf0478
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x698d70
     * @note[short] MacOS (Intel): 0x784bf0
     * @note[short] Windows: 0x35d760
     * @note[short] iOS: 0xf0224
     * @note[short] Android
     */
    void onAccount(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x698d80
     * @note[short] MacOS (Intel): 0x784c10
     * @note[short] Windows: 0x35d710
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x698d9c
     * @note[short] MacOS (Intel): 0x784c30
     * @note[short] Windows: 0x35ce50
     * @note[short] iOS: 0xf0250
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onProgressBar(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x35d7b0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6990b0
     * @note[short] MacOS (Intel): 0x784f20
     * @note[short] Windows: 0x35cfb0
     * @note[short] iOS: 0xf02a0
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x698de8
     * @note[short] MacOS (Intel): 0x784c90
     * @note[short] Windows: 0x35ce00
     * @note[short] Android
     */
    void onSoundtracks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x698df8
     * @note[short] MacOS (Intel): 0x784cb0
     * @note[short] Windows: 0x35d820
     * @note[short] Android
     */
    void onSupport(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x698db8
     * @note[short] MacOS (Intel): 0x784c50
     * @note[short] Windows: 0x35d6f0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x699370
     * @note[short] MacOS (Intel): 0x7851b0
     * @note[short] Windows: 0x35cd70
     * @note[short] iOS: 0xf04e4
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x699648
     * @note[short] MacOS (Intel): 0x785540
     * @note[short] Android
     */
    void tryEnableRecord();
    cocos2d::CCMenu* m_optionsMenu;
    void* m_unknown;
    int m_layerChoice;
    bool m_recordReplays;
    Slider* m_musicSlider;
    Slider* m_sfxSlider;
    int m_lastVaultDialog;
};
