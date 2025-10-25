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

class ColorSelectLiveOverlay : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ColorSelectLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ColorSelectLiveOverlay, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x4a8f24
     * @note[short] MacOS (Intel): 0x551c50
     * @note[short] Windows: 0x8bc50
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* create(ColorAction* p0, ColorAction* p1, EffectGameObject* p2);

    /**
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* createWithActions(ColorAction* p0, ColorAction* p1);

    /**
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* createWithObject(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4aa894
     * @note[short] MacOS (Intel): 0x553950
     * @note[short] Windows: 0x8d1b0
     * @note[short] iOS: 0xf9668
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4aa94c
     * @note[short] MacOS (Intel): 0x553a00
     * @note[short] Windows: 0x8ba30
     * @note[short] iOS: 0xf967c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x8d020
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void colorValueChanged(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue();

    /**
     * @note[short] MacOS (ARM): 0x4a9080
     * @note[short] MacOS (Intel): 0x551e20
     * @note[short] Windows: 0x8bda0
     * @note[short] Android
     */
    bool init(ColorAction* p0, ColorAction* p1, EffectGameObject* p2);

    /**
     * @note[short] Windows: 0x8d070
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x8d200
     * @note[short] Android
     */
    void selectColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Windows: 0x8cd30
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x8d640
     * @note[short] Android
     */
    void toggleControls(bool p0);

    /**
     * @note[short] Windows: 0x8d480
     * @note[short] Android
     */
    void updateColorLabel();

    /**
     * @note[short] Android
     */
    void updateColorValue();

    /**
     * @note[short] Android
     */
    void updateOpacity();
    EffectGameObject* m_effectGameObject;
    cocos2d::CCArray* m_barSprites;
    cocos2d::CCArray* m_12buttons;
    ColorAction* m_baseColorAction;
    ColorAction* m_detailColorAction;
    cocos2d::ccColor3B m_mainColor;
    cocos2d::ccColor3B m_detailColor;
    cocos2d::ccColor3B m_targetColor;
    float m_unk2ac;
    int m_unk2b0;
    int m_unk2b4;
    float m_opacity;
    ColorSelectDelegate* m_delegate;
    bool m_disableTextDelegate;
    bool m_unk2c9;
    bool m_updateColor;
    Slider* m_hueSlider;
    Slider* m_saturationSlider;
    Slider* m_valueSlider;
    Slider* m_opacitySlider;
    cocos2d::CCSprite* m_colorSprite;
    cocos2d::CCSprite* m_oldColorSprite;
    cocos2d::CCSprite* m_saturationSprite;
    cocos2d::CCSprite* m_valueSprite;
    cocos2d::CCSprite* m_opacitySprite;
    double m_hue;
    double m_saturation;
    double m_value;
    cocos2d::CCLabelBMFont* m_colorLabel;
    bool m_detailColorSelected;
    bool m_closeButtonPressed;
};
