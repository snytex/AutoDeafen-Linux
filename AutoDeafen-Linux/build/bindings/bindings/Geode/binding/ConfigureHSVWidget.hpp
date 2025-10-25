#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"

class ConfigureHSVWidget : public cocos2d::CCNode, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ConfigureHSVWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ConfigureHSVWidget, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x39886c
     * @note[short] MacOS (Intel): 0x41cf70
     * @note[short] Windows: 0x96950
     * @note[short] Android
     */
    static ConfigureHSVWidget* create(cocos2d::ccHSVValue p0, bool p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x39a274
     * @note[short] MacOS (Intel): 0x41ead0
     * @note[short] Windows: 0x980a0
     * @note[short] iOS: 0x1033fc
     * @note[short] Android
     */
    static cocos2d::ccHSVValue getHSV(GameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x39a008
     * @note[short] MacOS (Intel): 0x41e810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10323c
     * @note[short] Android: Out of line
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x39a010
     * @note[short] MacOS (Intel): 0x41e830
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x103244
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x39a02c
     * @note[short] MacOS (Intel): 0x41e870
     * @note[short] Windows: 0x97560
     * @note[short] iOS: 0x103260
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3994ec
     * @note[short] MacOS (Intel): 0x41dcd0
     * @note[short] Windows: 0x97300
     * @note[short] Android
     */
    void createTextInputNode(cocos2d::CCPoint p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x398bbc
     * @note[short] MacOS (Intel): 0x41d320
     * @note[short] Windows: 0x96a20
     * @note[short] iOS: 0x102110
     * @note[short] Android
     */
    bool init(cocos2d::ccHSVValue hsv, bool unused, bool addInputs);

    /**
     * @note[short] MacOS (ARM): 0x398940
     * @note[short] MacOS (Intel): 0x41d040
     * @note[short] Android
     */
    void onClose();

    /**
     * @note[short] MacOS (ARM): 0x399978
     * @note[short] MacOS (Intel): 0x41e0f0
     * @note[short] Windows: 0x97b10
     * @note[short] iOS: 0x102d7c
     * @note[short] Android
     */
    void onResetHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSConst(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleVConst(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x399748
     * @note[short] MacOS (Intel): 0x41df00
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3999f0
     * @note[short] MacOS (Intel): 0x41e170
     * @note[short] Windows: 0x97b90
     * @note[short] iOS: 0x102df4
     * @note[short] Android
     */
    void updateLabels();

    /**
     * @note[short] MacOS (ARM): 0x399f4c
     * @note[short] MacOS (Intel): 0x41e750
     * @note[short] Windows: 0x97820
     * @note[short] iOS: 0x103180
     * @note[short] Android
     */
    void updateSliders();
    cocos2d::CCLabelBMFont* m_hueLabel;
    cocos2d::CCLabelBMFont* m_saturationLabel;
    cocos2d::CCLabelBMFont* m_brightnessLabel;
    Slider* m_hueSlider;
    Slider* m_saturationSlider;
    Slider* m_brightnessSlider;
    cocos2d::ccHSVValue m_hsv;
    bool m_mixed;
    HSVWidgetDelegate* m_delegate;
    bool m_addInputs;
    bool m_updating;
    cocos2d::CCDictionary* m_inputs;
};
