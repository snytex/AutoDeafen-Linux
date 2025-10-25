#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class PauseLayer : public CCBlockLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "PauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PauseLayer, CCBlockLayer)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     PauseLayer();

    /**
     * @note[short] MacOS (ARM): 0x34c250
     * @note[short] MacOS (Intel): 0x3c2f60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static PauseLayer* create(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x34e270
     * @note[short] MacOS (Intel): 0x3c4fc0
     * @note[short] Windows: 0x369070
     * @note[short] iOS: 0x146f60
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x34e194
     * @note[short] MacOS (Intel): 0x3c4ec0
     * @note[short] Windows: 0x368fa0
     * @note[short] iOS: 0x146eac
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x34c324
     * @note[short] MacOS (Intel): 0x3c3070
     * @note[short] Windows: 0x366b00
     * @note[short] iOS: 0x1454b8
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x34e0b0
     * @note[short] MacOS (Intel): 0x3c4e00
     * @note[short] Windows: 0x368de0
     * @note[short] iOS: 0x146e3c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x34e268
     * @note[short] MacOS (Intel): 0x3c4fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x146f58
     * @note[short] Android: Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] MacOS (ARM): 0x34df78
     * @note[short] MacOS (Intel): 0x3c4cc0
     * @note[short] Windows: 0x368b80
     * @note[short] iOS: 0x146d14
     * @note[short] Android
     */
    void goEdit();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x34daec
     * @note[short] MacOS (Intel): 0x3c4870
     * @note[short] Windows: 0x3683c0
     * @note[short] iOS: 0x146bc0
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x34de9c
     * @note[short] MacOS (Intel): 0x3c4be0
     * @note[short] Windows: 0x368990
     * @note[short] iOS: 0x146c38
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34d904
     * @note[short] MacOS (Intel): 0x3c4670
     * @note[short] Windows: 0x368530
     * @note[short] iOS: 0x146a18
     * @note[short] Android
     */
    void onNormalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34d8ac
     * @note[short] MacOS (Intel): 0x3c4610
     * @note[short] Windows: 0x368450
     * @note[short] iOS: 0x1469dc
     * @note[short] Android
     */
    void onPracticeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34dffc
     * @note[short] MacOS (Intel): 0x3c4d60
     * @note[short] Windows: 0x368e50
     * @note[short] iOS: 0x146da0
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34da8c
     * @note[short] MacOS (Intel): 0x3c4800
     * @note[short] Windows: 0x3686a0
     * @note[short] iOS: 0x146b60
     * @note[short] Android
     */
    void onRestart(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34d870
     * @note[short] MacOS (Intel): 0x3c45d0
     * @note[short] Windows: 0x368740
     * @note[short] iOS: 0x1469a0
     * @note[short] Android
     */
    void onRestartFull(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34d950
     * @note[short] MacOS (Intel): 0x3c46c0
     * @note[short] Windows: 0x368610
     * @note[short] iOS: 0x146a48
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34dac8
     * @note[short] MacOS (Intel): 0x3c4840
     * @note[short] Windows: 0x3677d0
     * @note[short] iOS: 0x146b9c
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTime(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34d760
     * @note[short] MacOS (Intel): 0x3c44c0
     * @note[short] Windows: 0x3687e0
     * @note[short] Android
     */
    void onTryEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setupProgressBars();

    /**
     * @note[short] MacOS (ARM): 0x34db2c
     * @note[short] MacOS (Intel): 0x3c48b0
     * @note[short] Windows: 0x35cd70
     * @note[short] iOS: 0x146bfc
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x34d988
     * @note[short] MacOS (Intel): 0x3c4700
     * @note[short] Windows: 0x368c50
     * @note[short] iOS: 0x146a80
     * @note[short] Android
     */
    void tryQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn tryShowBanner(float p0);
    bool m_unfocused;
    bool m_tryingQuit;
};
