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
#include "ConfigureValuePopupDelegate.hpp"
#include "SliderDelegate.hpp"

class SetupTriggerPopup : public FLAlertLayer, public TextInputDelegate, public ConfigureValuePopupDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTriggerPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x8d6c0
     * @note[short] iOS: 0x10260
     * @note[short] Android: Out of line
     */
     SetupTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x1d5b60
     * @note[short] MacOS (Intel): 0x222a30
     * @note[short] Windows: 0x45b6e0
     * @note[short] iOS: 0x1313a4
     * @note[short] Android: Rebinded
     */
     ~SetupTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4);

    /**
     * @note[short] Android
     */
    static SetupTriggerPopup* create(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1df150
     * @note[short] MacOS (Intel): 0x22e3e0
     * @note[short] Windows: 0x465a80
     * @note[short] iOS: 0x13803c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x1d8cf8
     * @note[short] MacOS (Intel): 0x227290
     * @note[short] Windows: 0x44f1d0
     * @note[short] iOS: 0x133bfc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1d8b74
     * @note[short] MacOS (Intel): 0x2270d0
     * @note[short] Windows: 0x8ba30
     * @note[short] iOS: 0x133b20
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x1d68d4
     * @note[short] MacOS (Intel): 0x223a40
     * @note[short] Windows: 0x45c310
     * @note[short] iOS: 0x131ef0
     * @note[short] Android
     */
    virtual void toggleGroup(int group, bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1d7950
     * @note[short] MacOS (Intel): 0x224c20
     * @note[short] Windows: 0x45d060
     * @note[short] iOS: 0x132c40
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x1d8bc0
     * @note[short] MacOS (Intel): 0x227130
     * @note[short] Windows: 0x45d6a0
     * @note[short] iOS: 0x133b6c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d7c58
     * @note[short] MacOS (Intel): 0x224fa0
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x132e4c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1d7c74
     * @note[short] MacOS (Intel): 0x224fe0
     * @note[short] Windows: 0x45d4e0
     * @note[short] iOS: 0x132e68
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1d8d1c
     * @note[short] MacOS (Intel): 0x2272d0
     * @note[short] Windows: 0x7b5c0
     * @note[short] iOS: 0x133c20
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1d8dec
     * @note[short] MacOS (Intel): 0x227390
     * @note[short] Windows: 0x7b620
     * @note[short] iOS: 0x133c8c
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateInputValue(int p0, float& p1);

    /**
     * @note[short] MacOS (ARM): 0x1d8ea4
     * @note[short] MacOS (Intel): 0x227440
     * @note[short] Windows: 0x45d7e0
     * @note[short] iOS: 0x133cec
     * @note[short] Android
     */
    virtual void sliderBegan(Slider* p0);

    /**
     * @note[short] MacOS (ARM): 0x1d8f7c
     * @note[short] MacOS (Intel): 0x227520
     * @note[short] Windows: 0x45d8b0
     * @note[short] iOS: 0x133db8
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1db330
     * @note[short] MacOS (Intel): 0x229910
     * @note[short] Windows: 0x45f370
     * @note[short] iOS: 0x1358f4
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x1dcdb8
     * @note[short] MacOS (Intel): 0x22c1e0
     * @note[short] Windows: 0x45f860
     * @note[short] iOS: 0x1363bc
     * @note[short] Android
     */
    virtual void updateInputNode(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1dcfe4
     * @note[short] MacOS (Intel): 0x22c3d0
     * @note[short] Windows: 0x45fc00
     * @note[short] iOS: 0x136588
     * @note[short] Android
     */
    virtual void updateToggleItem(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1dd09c
     * @note[short] MacOS (Intel): 0x22c490
     * @note[short] Windows: 0x45fc70
     * @note[short] iOS: 0x1365f8
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1dd478
     * @note[short] MacOS (Intel): 0x22c840
     * @note[short] Windows: 0x463c60
     * @note[short] iOS: 0x1367f8
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1dd504
     * @note[short] MacOS (Intel): 0x22c8c0
     * @note[short] Windows: 0x463cf0
     * @note[short] iOS: 0x136864
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1de14c
     * @note[short] MacOS (Intel): 0x22d4e0
     * @note[short] Windows: 0x464c00
     * @note[short] iOS: 0x13733c
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1d6d74
     * @note[short] MacOS (Intel): 0x223f40
     * @note[short] Windows: 0x45c590
     * @note[short] iOS: 0x13216c
     * @note[short] Android: Rebinded
     */
    void addCloseButton(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x1d6df4
     * @note[short] MacOS (Intel): 0x223fc0
     * @note[short] Windows: 0x45c6a0
     * @note[short] iOS: 0x1321e8
     * @note[short] Android: Rebinded
     */
    void addHelpButton(gd::string p0, gd::string p1, float p2);

    /**
     * @note[short] Windows: 0x45ee90
     * @note[short] Android: Rebinded
     */
    void addInfoLabel(gd::string p0, float p1, cocos2d::CCPoint p2, int p3, int p4);

    /**
     * @note[short] Android
     */
    void addObjectsToGroup(cocos2d::CCArray* p0, int p1);

    /**
     * @note[short] Android
     */
    void addObjectsToPage(cocos2d::CCArray* p0, int p1);

    /**
     * @note[short] Android
     */
    void addObjectToGroup(cocos2d::CCObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1d6a04
     * @note[short] MacOS (Intel): 0x223b70
     * @note[short] Windows: 0x45c400
     * @note[short] iOS: 0x131fd8
     * @note[short] Android
     */
    void addObjectToPage(cocos2d::CCObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1d6cac
     * @note[short] MacOS (Intel): 0x223e70
     * @note[short] Windows: 0x45c490
     * @note[short] iOS: 0x1320a4
     * @note[short] Android: Rebinded
     */
    void addTitle(gd::string p0);

    /**
     * @note[short] Android
     */
    void closeInputNodes();

    /**
     * @note[short] Windows: 0x45f110
     * @note[short] Android: Rebinded
     */
    void createCustomButton(int p0, gd::string p1, gd::string p2, cocos2d::CCPoint p3, float p4, float p5, bool p6, int p7, int p8);

    /**
     * @note[short] Windows: 0x464cc0
     * @note[short] Android: Rebinded
     */
    void createCustomEasingControls(gd::string p0, cocos2d::CCPoint p1, float p2, int p3, int p4, int p5, int p6);

    /**
     * @note[short] Windows: 0x45ec10
     * @note[short] Android: Rebinded
     */
    void createCustomToggleValueControl(int p0, bool p1, bool p2, gd::string p3, cocos2d::CCPoint p4, bool p5, int p6, int p7);

    /**
     * @note[short] MacOS (ARM): 0x1dd5b4
     * @note[short] MacOS (Intel): 0x22c970
     * @note[short] Windows: 0x463da0
     * @note[short] iOS: 0x1368fc
     * @note[short] Android
     */
    void createEasingControls(cocos2d::CCPoint p0, float p1, int p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x1d71b0
     * @note[short] MacOS (Intel): 0x2243a0
     * @note[short] Windows: 0x45cd50
     * @note[short] Android
     */
    void createMultiTriggerItems(cocos2d::CCPoint touchPos, cocos2d::CCPoint spawnPos, cocos2d::CCPoint multiPos);

    /**
     * @note[short] Windows: 0x45ca40
     * @note[short] Android
     */
    void createMultiTriggerItemsCorner();

    /**
     * @note[short] MacOS (ARM): 0x1d70d0
     * @note[short] MacOS (Intel): 0x224290
     * @note[short] Windows: 0x45c930
     * @note[short] Android
     */
    void createMultiTriggerItemsDefault();

    /**
     * @note[short] Windows: 0x45cc40
     * @note[short] Android
     */
    void createMultiTriggerItemsDefaultHorizontal();

    /**
     * @note[short] Windows: 0x45cb40
     * @note[short] Android
     */
    void createMultiTriggerItemsDefaultVertical();

    /**
     * @note[short] Windows: 0x45bc80
     * @note[short] Android
     */
    void createPageButtons(float p0, int p1);

    /**
     * @note[short] Windows: 0x45ef70
     * @note[short] Android: Rebinded
     */
    void createPlusButton(int p0, cocos2d::CCPoint p1, float p2, gd::string p3, int p4, int p5);

    /**
     * @note[short] Windows: 0x45c800
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCPoint p3);

    /**
     * @note[short] MacOS (ARM): 0x1da5ec
     * @note[short] MacOS (Intel): 0x228c00
     * @note[short] Windows: 0x45e900
     * @note[short] iOS: 0x134e78
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createToggleValueControl(int p0, gd::string p1, cocos2d::CCPoint p2, bool p3, int p4, int p5, float p6);

    /**
     * @note[short] MacOS (ARM): 0x1da73c
     * @note[short] MacOS (Intel): 0x228d30
     * @note[short] iOS: 0x134fb8
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createToggleValueControlAdvanced(int p0, gd::string p1, cocos2d::CCPoint p2, bool p3, int p4, int p5, float p6, float p7, float p8, cocos2d::CCPoint p9);

    /**
     * @note[short] Windows: 0x45db40
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createValueControl(int p0, gd::string p1, cocos2d::CCPoint p2, float p3, float p4, float p5);

    /**
     * @note[short] MacOS (ARM): 0x1d9550
     * @note[short] MacOS (Intel): 0x227b30
     * @note[short] Windows: 0x45dc30
     * @note[short] iOS: 0x134204
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createValueControlAdvanced(int property, gd::string label, cocos2d::CCPoint position, float scale, bool noSlider, InputValueType valueType, int length, bool arrows, float sliderMin, float sliderMax, int page, int group, GJInputStyle inputStyle, int decimalPlaces, bool allowDisable);

    /**
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* createValueControlWArrows(int p0, gd::string p1, cocos2d::CCPoint p2, float p3);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getGroupContainer(int p0);

    /**
     * @note[short] Android
     */
    float getMaxSliderValue(int p0);

    /**
     * @note[short] Android
     */
    float getMinSliderValue(int p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getObjects();

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getPageContainer(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1db6b4
     * @note[short] MacOS (Intel): 0x229d20
     * @note[short] Windows: 0x4620f0
     * @note[short] iOS: 0x135bc8
     * @note[short] Android
     */
    float getTriggerValue(int property, GameObject* object);

    /**
     * @note[short] Windows: 0x45f750
     * @note[short] Android
     */
    float getTruncatedValue(float p0, int p1);

    /**
     * @note[short] Android
     */
    float getTruncatedValueByTag(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1d6540
     * @note[short] MacOS (Intel): 0x223650
     * @note[short] Windows: 0x45c010
     * @note[short] iOS: 0x131bac
     * @note[short] Android
     */
    void goToPage(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void hideAll();

    /**
     * @note[short] MacOS (ARM): 0x1d5eb4
     * @note[short] MacOS (Intel): 0x222f20
     * @note[short] Windows: 0x45b900
     * @note[short] iOS: 0x13154c
     * @note[short] Android
     */
    bool init(EffectGameObject* trigger, cocos2d::CCArray* triggers, float width, float height, int background);

    /**
     * @note[short] Windows: 0x465590
     * @note[short] Android
     */
    void onCustomEaseArrow(int p0, bool p1);

    /**
     * @note[short] Windows: 0x465560
     * @note[short] Android
     */
    void onCustomEaseArrowDown(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x465530
     * @note[short] Android
     */
    void onCustomEaseArrowUp(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x465420
     * @note[short] Android
     */
    void onCustomEaseRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x45e7f0
     * @note[short] Android
     */
    void onDisableValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x464ac0
     * @note[short] Android
     */
    void onEase(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x464b30
     * @note[short] Android
     */
    void onEaseRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMultiTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d6454
     * @note[short] MacOS (Intel): 0x223570
     * @note[short] Windows: 0x45bf30
     * @note[short] iOS: 0x131ac0
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x45d2d0
     * @note[short] Android
     */
    void onSpawnedByTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1da960
     * @note[short] MacOS (Intel): 0x228f60
     * @note[short] Windows: 0x45f6c0
     * @note[short] iOS: 0x13516c
     * @note[short] Android
     */
    void onToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x45d1e0
     * @note[short] Android
     */
    void onTouchTriggered(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1db304
     * @note[short] MacOS (Intel): 0x2298f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1358c8
     * @note[short] Android
     */
    void postSetup();

    /**
     * @note[short] MacOS (ARM): 0x1db2f0
     * @note[short] MacOS (Intel): 0x2298d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1358b4
     * @note[short] Android
     */
    void preSetup();

    /**
     * @note[short] Android
     */
    void refreshGroupVisibility();

    /**
     * @note[short] Android
     */
    void removeObjectFromGroup(cocos2d::CCObject* p0, int p1);

    /**
     * @note[short] Android
     */
    void removeObjectFromPage(cocos2d::CCObject* p0, int p1);

    /**
     * @note[short] Android
     */
    void resetDisabledValues();

    /**
     * @note[short] Android
     */
    void setMaxSliderValue(float p0, int p1);

    /**
     * @note[short] Android
     */
    void setMinSliderValue(float p0, int p1);

    /**
     * @note[short] Android
     */
    bool shouldLimitValue(int p0);

    /**
     * @note[short] Android
     */
    void toggleBG(bool p0);

    /**
     * @note[short] Windows: 0x465910
     * @note[short] Android
     */
    void toggleCustomEaseRateVisibility(int p0, int p1);

    /**
     * @note[short] Windows: 0x45e820
     * @note[short] Android
     */
    void toggleDisableButtons(bool p0);

    /**
     * @note[short] Android
     */
    void toggleEaseRateVisibility();

    /**
     * @note[short] Android
     */
    void toggleLimitValue(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void togglePageArrows(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x45daa0
     * @note[short] iOS: 0x133fc8
     * @note[short] Android: Out of line
     */
    void triggerArrowChanged(int property, bool isRight);

    /**
     * @note[short] MacOS (ARM): 0x1d91ac
     * @note[short] MacOS (Intel): 0x2277b0
     * @note[short] Windows: 0x45da40
     * @note[short] iOS: 0x133f90
     * @note[short] Android
     */
    void triggerArrowLeft(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1d92d8
     * @note[short] MacOS (Intel): 0x2278c0
     * @note[short] Windows: 0x45da70
     * @note[short] iOS: 0x13405c
     * @note[short] Android
     */
    void triggerArrowRight(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x45d980
     * @note[short] Android
     */
    void triggerSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x465630
     * @note[short] Android
     */
    void updateCustomEaseLabel(int p0, int p1);

    /**
     * @note[short] Windows: 0x465800
     * @note[short] Android
     */
    void updateCustomEaseRateLabel(int p0, float p1);

    /**
     * @note[short] Android
     */
    void updateCustomToggleTrigger(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void updateEaseLabel();

    /**
     * @note[short] Android
     */
    void updateEaseRateLabel();

    /**
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] Windows: 0x463be0
     * @note[short] Android: Rebinded
     */
    void updateInputNodeLabel(int p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    void updateLabel(int p0, gd::string p1);

    /**
     * @note[short] Windows: 0x45d3c0
     * @note[short] Android
     */
    void updateMultiTriggerBtn();

    /**
     * @note[short] Android
     */
    void updateSlider(int p0, float p1);

    /**
     * @note[short] Android
     */
    void updateSlider(int p0);

    /**
     * @note[short] Windows: 0x45d320
     * @note[short] Android
     */
    void updateSpawnedByTrigger();

    /**
     * @note[short] Windows: 0x45d230
     * @note[short] Android
     */
    void updateTouchTriggered();

    /**
     * @note[short] MacOS (ARM): 0x1da380
     * @note[short] MacOS (Intel): 0x2289d0
     * @note[short] Windows: 0x463b50
     * @note[short] iOS: 0x134ca8
     * @note[short] Android
     */
    void updateValue(int property, float value);

    /**
     * @note[short] MacOS (ARM): 0x1d9370
     * @note[short] MacOS (Intel): 0x227950
     * @note[short] Windows: 0x45f7c0
     * @note[short] iOS: 0x134094
     * @note[short] Android
     */
    void updateValueControls(int property, float value);

    /**
     * @note[short] MacOS (ARM): 0x1d7e68
     * @note[short] MacOS (Intel): 0x225210
     * @note[short] Windows: 0x45fd90
     * @note[short] iOS: 0x132fa0
     * @note[short] Android
     */
    void valueChanged(int property, float value);
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    bool m_touchTriggered;
    bool m_spawnTriggered;
    CCMenuItemToggler* m_touchToggle;
    CCMenuItemToggler* m_spawnToggle;
    cocos2d::CCArray* m_multiTriggerContainer;
    bool m_multiTriggered;
    float m_width;
    float m_height;
    bool m_disableTextDelegate;
    cocos2d::CCDictionary* m_valueToggles;
    cocos2d::CCDictionary* m_inputNodes;
    cocos2d::CCDictionary* m_valueControls;
    cocos2d::CCDictionary* m_customValueToggles;
    cocos2d::CCDictionary* m_disableButtons;
    cocos2d::CCLabelBMFont* m_easingLabel;
    cocos2d::CCLabelBMFont* m_easingRateLabel;
    CCMenuItemSpriteExtra* m_easingRateButton;
    EasingType m_easingType;
    float m_easingRate;
    cocos2d::CCDictionary* m_inputLabels;
    cocos2d::CCDictionary* m_triggerValues;
    cocos2d::CCDictionary* m_minSliderValues;
    cocos2d::CCDictionary* m_maxSliderValues;
    gd::map<int, bool> m_shouldLimitValues;
    bool m_disableSliderDelegate;
    bool m_effectObjects;
    cocos2d::CCArray* m_pageContainers;
    int m_page;
    float m_easingControlScale;
    cocos2d::CCArray* m_groupContainers;
    cocos2d::CCDictionary* m_customEasingTags;
    cocos2d::CCDictionary* m_customEasingLabels;
    cocos2d::CCDictionary* m_customEasingButtons;
    cocos2d::CCDictionary* m_customEasingScales;
    cocos2d::CCDictionary* m_disabledEasingButtons;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    bool m_hideAll;
};
