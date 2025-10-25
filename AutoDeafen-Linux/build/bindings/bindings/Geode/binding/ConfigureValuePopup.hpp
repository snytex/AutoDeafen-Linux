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
#include "TextInputDelegate.hpp"

class ConfigureValuePopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ConfigureValuePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ConfigureValuePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x983a0
     * @note[short] Android: Rebinded
     */
    static ConfigureValuePopup* create(ConfigureValuePopupDelegate* p0, float p1, float p2, float p3, gd::string p4, gd::string p5);

    /**
     * @note[short] MacOS (ARM): 0x53a3ec
     * @note[short] MacOS (Intel): 0x60d720
     * @note[short] Windows: 0x98fb0
     * @note[short] iOS: 0x153e9c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x53a2d4
     * @note[short] MacOS (Intel): 0x60d5d0
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x153d98
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x53a2f0
     * @note[short] MacOS (Intel): 0x60d610
     * @note[short] Windows: 0x98de0
     * @note[short] iOS: 0x153db4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x5399a8
     * @note[short] MacOS (Intel): 0x60cbd0
     * @note[short] Windows: 0x98550
     * @note[short] Android: Rebinded
     */
    bool init(ConfigureValuePopupDelegate* p0, float p1, float p2, float p3, gd::string p4, gd::string p5);

    /**
     * @note[short] Windows: 0x98f30
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53a17c
     * @note[short] MacOS (Intel): 0x60d460
     * @note[short] Windows: 0x98d00
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53a1c0
     * @note[short] MacOS (Intel): 0x60d4b0
     * @note[short] Windows: 0x98d50
     * @note[short] Android
     */
    void updateTextInputLabel();
    float m_value;
    float m_minimum;
    float m_maximum;
    bool m_enableDelegate;
    bool m_disableTextDelegate;
    ConfigureValuePopupDelegate* m_delegate;
    CCTextInputNode* m_input;
    Slider* m_slider;
};
