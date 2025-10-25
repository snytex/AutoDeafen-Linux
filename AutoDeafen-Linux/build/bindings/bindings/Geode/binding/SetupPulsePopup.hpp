#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"
#include "GJSpecialColorSelectDelegate.hpp"

class SetupPulsePopup : public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupPulsePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPulsePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x41f250
     * @note[short] iOS: 0x3abb04
     * @note[short] Android
     */
    static SetupPulsePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x32a368
     * @note[short] MacOS (Intel): 0x39ce50
     * @note[short] Windows: 0x423fa0
     * @note[short] iOS: 0x3affd0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x32924c
     * @note[short] MacOS (Intel): 0x39ba60
     * @note[short] Windows: 0x422ef0
     * @note[short] iOS: 0x3af378
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x329c84
     * @note[short] MacOS (Intel): 0x39c670
     * @note[short] Windows: 0x423cb0
     * @note[short] iOS: 0x3afbc8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x32a3c4
     * @note[short] MacOS (Intel): 0x39ced0
     * @note[short] Windows: 0x424150
     * @note[short] iOS: 0x3b002c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x329e10
     * @note[short] MacOS (Intel): 0x39c850
     * @note[short] Windows: 0x423e90
     * @note[short] iOS: 0x3afce8
     * @note[short] Android
     */
    virtual void colorValueChanged(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x32a3bc
     * @note[short] MacOS (Intel): 0x39ceb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b0024
     * @note[short] Android: Out of line
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3296fc
     * @note[short] MacOS (Intel): 0x39bfa0
     * @note[short] Windows: 0x423720
     * @note[short] iOS: 0x3af7cc
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* p0, int p1);

    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue();

    /**
     * @note[short] MacOS (ARM): 0x3250b8
     * @note[short] MacOS (Intel): 0x397170
     * @note[short] Windows: 0x41f430
     * @note[short] iOS: 0x3abb88
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x90d60
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x423380
     * @note[short] Android
     */
    void onExclusive(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x423410
     * @note[short] Android
     */
    void onGroupMainOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x423500
     * @note[short] Android
     */
    void onGroupSecondaryOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x423560
     * @note[short] Android
     */
    void onHSVLegacyMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x328b68
     * @note[short] MacOS (Intel): 0x39b340
     * @note[short] Windows: 0x90de0
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x328698
     * @note[short] MacOS (Intel): 0x39ad60
     * @note[short] Windows: 0x422aa0
     * @note[short] iOS: 0x3aebc0
     * @note[short] Android
     */
    void onSelectPulseMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x423680
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4236d0
     * @note[short] Android
     */
    void onSelectSpecialTargetID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x328320
     * @note[short] MacOS (Intel): 0x39a9b0
     * @note[short] Windows: 0x422cd0
     * @note[short] iOS: 0x3ae920
     * @note[short] Android
     */
    void onSelectTargetMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x328bec
     * @note[short] MacOS (Intel): 0x39b3b0
     * @note[short] Windows: 0x4240e0
     * @note[short] iOS: 0x3aef74
     * @note[short] Android
     */
    void onUpdateCopyColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x328578
     * @note[short] MacOS (Intel): 0x39ac30
     * @note[short] Windows: 0x424050
     * @note[short] iOS: 0x3aeae4
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void selectColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Windows: 0x4238c0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4248f0
     * @note[short] Android
     */
    void updateColorLabels();

    /**
     * @note[short] Android
     */
    void updateColorValue();

    /**
     * @note[short] Windows: 0x424b90
     * @note[short] Android
     */
    void updateCopyColor();

    /**
     * @note[short] MacOS (ARM): 0x328f04
     * @note[short] MacOS (Intel): 0x39b6e0
     * @note[short] Windows: 0x424d40
     * @note[short] Android
     */
    void updateCopyColorTextInputLabel();

    /**
     * @note[short] Windows: 0x422830
     * @note[short] Android
     */
    void updateFadeInLabel(bool p0);

    /**
     * @note[short] Windows: 0x423b00
     * @note[short] Android
     */
    void updateFadeInTime();

    /**
     * @note[short] Windows: 0x4229d0
     * @note[short] Android
     */
    void updateFadeOutLabel(bool p0);

    /**
     * @note[short] Windows: 0x423c20
     * @note[short] Android
     */
    void updateFadeOutTime();

    /**
     * @note[short] Windows: 0x423470
     * @note[short] Android
     */
    void updateGroupMainOnly();

    /**
     * @note[short] Windows: 0x4235f0
     * @note[short] Android
     */
    void updateGroupSecondaryOnly();

    /**
     * @note[short] Windows: 0x422900
     * @note[short] Android
     */
    void updateHoldLabel(bool p0);

    /**
     * @note[short] Windows: 0x423b90
     * @note[short] Android
     */
    void updateHoldTime();

    /**
     * @note[short] Android
     */
    void updateHSVValue();

    /**
     * @note[short] Android
     */
    void updatePulseMode();

    /**
     * @note[short] Android
     */
    void updatePulseTargetType();

    /**
     * @note[short] Windows: 0x424ad0
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x328ce8
     * @note[short] MacOS (Intel): 0x39b4c0
     * @note[short] Windows: 0x424c20
     * @note[short] Android
     */
    void updateTextInputLabel();
    cocos2d::extension::CCControlColourPicker* m_colorPicker;
    bool m_unk3c0;
    cocos2d::CCArray* m_colorObjects;
    cocos2d::CCArray* m_hsvObjects;
    Slider* m_fadeInSlider;
    Slider* m_holdSlider;
    Slider* m_fadeOutSlider;
    CCMenuItemSpriteExtra* m_channelButton;
    CCMenuItemSpriteExtra* m_groupButton;
    cocos2d::CCLabelBMFont* m_idLabel;
    cocos2d::ccColor3B m_originalColor;
    cocos2d::CCSprite* m_currentColorSprite;
    cocos2d::CCSprite* m_originalColorSprite;
    cocos2d::ccColor3B m_currentColor;
    CCMenuItemSpriteExtra* m_colorButton;
    CCMenuItemSpriteExtra* m_hsvButton;
    ConfigureHSVWidget* m_hsvWidget;
    CCMenuItemSpriteExtra* m_specialColorButton;
    CCTextInputNode* m_fadeInInput;
    CCTextInputNode* m_holdInput;
    CCTextInputNode* m_fadeOutInput;
    CCTextInputNode* m_idInput;
    CCTextInputNode* m_colorIDInput;
    CCMenuItemToggler* m_mainOnlyToggler;
    CCMenuItemToggler* m_secondaryOnlyToggler;
    CCMenuItemToggler* m_staticHSVToggler;
    cocos2d::CCLabelBMFont* m_mainOnlyLabel;
    cocos2d::CCLabelBMFont* m_secondaryOnlyLabel;
    cocos2d::CCLabelBMFont* m_staticHSVLabel;
    bool m_groupMainOnly;
    bool m_groupSecondaryOnly;
    bool m_staticHSV;
    int m_targetGroupID;
    int m_copyColorID;
    bool m_colorInitializing;
    float m_fadeInTime;
    float m_holdTime;
    float m_fadeOutTime;
    int m_pulseMode;
    int m_pulseTargetType;
    bool m_modesInitializing;
    bool m_pulseExclusive;
    cocos2d::ccHSVValue m_hsv;
    CCTextInputNode* m_rInput;
    CCTextInputNode* m_gInput;
    CCTextInputNode* m_bInput;
    CCTextInputNode* m_hexInput;
};
