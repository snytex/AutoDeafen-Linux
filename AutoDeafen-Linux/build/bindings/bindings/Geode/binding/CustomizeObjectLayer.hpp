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
#include "HSVWidgetDelegate.hpp"
#include "ColorSelectDelegate.hpp"
#include "ColorSetupDelegate.hpp"

class CustomizeObjectLayer : public FLAlertLayer, public TextInputDelegate, public HSVWidgetDelegate, public ColorSelectDelegate, public ColorSetupDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0xa4b60
     * @note[short] Android
     */
    static CustomizeObjectLayer* create(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x19eb58
     * @note[short] MacOS (Intel): 0x1e7730
     * @note[short] Windows: 0xa99e0
     * @note[short] iOS: 0x546e4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x19e79c
     * @note[short] MacOS (Intel): 0x1e7380
     * @note[short] Windows: 0xa8f70
     * @note[short] iOS: 0x543f4
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x19e8c4
     * @note[short] MacOS (Intel): 0x1e7490
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x54554
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x19e8e0
     * @note[short] MacOS (Intel): 0x1e74d0
     * @note[short] Windows: 0xa9100
     * @note[short] iOS: 0x54570
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x19e5a8
     * @note[short] MacOS (Intel): 0x1e7130
     * @note[short] Windows: 0xa86a0
     * @note[short] iOS: 0x54208
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);

    /**
     * @note[short] MacOS (ARM): 0x19e36c
     * @note[short] MacOS (Intel): 0x1e6ed0
     * @note[short] Windows: 0xa8030
     * @note[short] iOS: 0x541fc
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x19df5c
     * @note[short] MacOS (Intel): 0x1e6a60
     * @note[short] Windows: 0xa7c90
     * @note[short] iOS: 0x53ed8
     * @note[short] Android
     */
    virtual void colorSetupClosed(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Android
     */
    TodoReturn determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x19d9c0
     * @note[short] MacOS (Intel): 0x1e63e0
     * @note[short] Windows: 0xa8cb0
     * @note[short] iOS: 0x53ad0
     * @note[short] Android
     */
    int getActiveMode(bool p0);

    /**
     * @note[short] Windows: 0xa9520
     * @note[short] Android
     */
    TodoReturn getButtonByTag(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getHSV();

    /**
     * @note[short] MacOS (ARM): 0x19e1b8
     * @note[short] MacOS (Intel): 0x1e6d00
     * @note[short] Windows: 0xa97d0
     * @note[short] iOS: 0x54060
     * @note[short] Android
     */
    void highlightSelected(ButtonSprite* p0);

    /**
     * @note[short] MacOS (ARM): 0x19a9d0
     * @note[short] MacOS (Intel): 0x1e3120
     * @note[short] Windows: 0xa4d00
     * @note[short] iOS: 0x50fa4
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x19d61c
     * @note[short] MacOS (Intel): 0x1e6010
     * @note[short] Windows: 0xa9410
     * @note[short] Android
     */
    void onBreakApart(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBrowse(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19d6d4
     * @note[short] MacOS (Intel): 0x1e60e0
     * @note[short] Windows: 0xa9380
     * @note[short] iOS: 0x538a8
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19c978
     * @note[short] MacOS (Intel): 0x1e5320
     * @note[short] Windows: 0xa9900
     * @note[short] iOS: 0x52e0c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa7900
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19d354
     * @note[short] MacOS (Intel): 0x1e5d20
     * @note[short] Windows: 0xa7d70
     * @note[short] iOS: 0x53640
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19cd5c
     * @note[short] MacOS (Intel): 0x1e5740
     * @note[short] Windows: 0xa8470
     * @note[short] iOS: 0x53190
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19d3a8
     * @note[short] MacOS (Intel): 0x1e5d80
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19d788
     * @note[short] MacOS (Intel): 0x1e6190
     * @note[short] Windows: 0xa87d0
     * @note[short] iOS: 0x53974
     * @note[short] Android
     */
    void onNextColorChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa7960
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19d08c
     * @note[short] MacOS (Intel): 0x1e5a90
     * @note[short] Windows: 0xa95a0
     * @note[short] iOS: 0x534a4
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19cb14
     * @note[short] MacOS (Intel): 0x1e5500
     * @note[short] Windows: 0xa88e0
     * @note[short] iOS: 0x52f90
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa7ab0
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19d154
     * @note[short] MacOS (Intel): 0x1e5b40
     * @note[short] Windows: 0xa8ea0
     * @note[short] iOS: 0x53524
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn recreateLayer();

    /**
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x19e668
     * @note[short] MacOS (Intel): 0x1e7220
     * @note[short] Windows: 0xa8af0
     * @note[short] iOS: 0x542c0
     * @note[short] Android
     */
    void toggleVisible();

    /**
     * @note[short] MacOS (ARM): 0x19dc40
     * @note[short] MacOS (Intel): 0x1e6680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x53ce0
     * @note[short] Android
     */
    void updateChannelLabel(int channel);

    /**
     * @note[short] MacOS (ARM): 0x19db70
     * @note[short] MacOS (Intel): 0x1e65b0
     * @note[short] Windows: 0xa7e20
     * @note[short] iOS: 0x53c10
     * @note[short] Android
     */
    void updateColorSprite();

    /**
     * @note[short] Android
     */
    void updateCurrentSelection();

    /**
     * @note[short] MacOS (ARM): 0x19d228
     * @note[short] MacOS (Intel): 0x1e5c10
     * @note[short] Windows: 0xa9490
     * @note[short] iOS: 0x535ac
     * @note[short] Android
     */
    void updateCustomColorLabels();

    /**
     * @note[short] MacOS (ARM): 0x19cf30
     * @note[short] MacOS (Intel): 0x1e58e0
     * @note[short] Windows: 0xa8270
     * @note[short] iOS: 0x53348
     * @note[short] Android
     */
    void updateHSVButtons();

    /**
     * @note[short] MacOS (ARM): 0x19d4a8
     * @note[short] MacOS (Intel): 0x1e5ec0
     * @note[short] Android
     */
    void updateKerningLabel();

    /**
     * @note[short] MacOS (ARM): 0x19e070
     * @note[short] MacOS (Intel): 0x1e6b70
     * @note[short] Windows: 0xa9660
     * @note[short] iOS: 0x53f4c
     * @note[short] Android
     */
    void updateSelected(int p0);
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_colorButtons;
    cocos2d::CCArray* m_colorTabNodes;
    cocos2d::CCArray* m_textTabNodes;
    cocos2d::CCArray* m_unkArray;
    cocos2d::CCArray* m_detailTabNodes;
    int m_selectedMode;
    int m_customColorChannel;
    bool m_unk0x200;
    bool m_unk0x201;
    bool m_glowDisabled;
    CCMenuItemSpriteExtra* m_baseButton;
    CCMenuItemSpriteExtra* m_detailButton;
    CCMenuItemSpriteExtra* m_textButton;
    CCMenuItemSpriteExtra* m_baseColorHSV;
    CCMenuItemSpriteExtra* m_detailColorHSV;
    cocos2d::CCLabelBMFont* m_titleLabel;
    cocos2d::CCLabelBMFont* m_selectedColorLabel;
    CCTextInputNode* m_customColorInput;
    CCTextInputNode* m_textInput;
    int m_kerningAmount;
    cocos2d::CCLabelBMFont* m_kerningLabel;
    Slider* m_kerningSlider;
    ButtonSprite* m_customColorButtonSprite;
    CCMenuItemSpriteExtra* m_customColorButton;
    CCMenuItemSpriteExtra* m_arrowDown;
    CCMenuItemSpriteExtra* m_arrowUp;
    cocos2d::extension::CCScale9Sprite* m_customColorInputBG;
    ColorChannelSprite* m_colorSprite;
    CCMenuItemSpriteExtra* m_colorSpriteButton;
    CCMenuItemSpriteExtra* m_liveSelectButton;
    bool m_showTextInput;
    bool m_customColorSelected;
    bool m_disableTextDelegate;
};
