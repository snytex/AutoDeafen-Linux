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
#include "ColorSelectDelegate.hpp"
#include "SliderDelegate.hpp"

class CreateParticlePopup : public FLAlertLayer, public TextInputDelegate, public ColorSelectDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "CreateParticlePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateParticlePopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x3ccc68
     * @note[short] MacOS (Intel): 0x45bde0
     * @note[short] Android: Rebinded
     */
    static CreateParticlePopup* create(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x3cca7c
     * @note[short] MacOS (Intel): 0x45bb70
     * @note[short] iOS: 0x2cae0c
     * @note[short] Android: Rebinded
     */
    static CreateParticlePopup* create(ParticleGameObject* p0, cocos2d::CCArray* p1, gd::string p2);

    /**
     * @note[short] MacOS (ARM): 0x3cca54
     * @note[short] MacOS (Intel): 0x45bb50
     * @note[short] Windows: 0x414180
     * @note[short] iOS: 0x2cad90
     * @note[short] Android
     */
    static CreateParticlePopup* create(ParticleGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x3d3a48
     * @note[short] MacOS (Intel): 0x463940
     * @note[short] Windows: 0x41a520
     * @note[short] iOS: 0x2d0d74
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x3d4520
     * @note[short] MacOS (Intel): 0x4644c0
     * @note[short] Windows: 0x41d070
     * @note[short] iOS: 0x2d15dc
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3d4614
     * @note[short] MacOS (Intel): 0x4645d0
     * @note[short] Windows: 0x41d170
     * @note[short] iOS: 0x2d16d0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3d49b0
     * @note[short] MacOS (Intel): 0x4649a0
     * @note[short] Windows: 0x41d5a0
     * @note[short] iOS: 0x2d1a68
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3d49ec
     * @note[short] MacOS (Intel): 0x4649f0
     * @note[short] Windows: 0x71210
     * @note[short] iOS: 0x2d1aa4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3d438c
     * @note[short] MacOS (Intel): 0x464320
     * @note[short] Windows: 0x41d060
     * @note[short] iOS: 0x2d1504
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3d423c
     * @note[short] MacOS (Intel): 0x4641e0
     * @note[short] Windows: 0x41c7a0
     * @note[short] iOS: 0x2d13d4
     * @note[short] Android
     */
    virtual void sliderBegan(Slider* p0);

    /**
     * @note[short] MacOS (ARM): 0x3d4354
     * @note[short] MacOS (Intel): 0x4642c0
     * @note[short] Windows: 0x41c860
     * @note[short] iOS: 0x2d14ec
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* p0);

    /**
     * @note[short] MacOS (ARM): 0x3d37d4
     * @note[short] MacOS (Intel): 0x4636b0
     * @note[short] Windows: 0x419e10
     * @note[short] iOS: 0x2d0b10
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3d4398
     * @note[short] MacOS (Intel): 0x464350
     * @note[short] Windows: 0x7b5c0
     * @note[short] iOS: 0x2d1510
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x3d4468
     * @note[short] MacOS (Intel): 0x464410
     * @note[short] Windows: 0x7b620
     * @note[short] iOS: 0x2d157c
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3d3b8c
     * @note[short] MacOS (Intel): 0x463ab0
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x2d0ea8
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3d3ba8
     * @note[short] MacOS (Intel): 0x463af0
     * @note[short] Windows: 0x41a6b0
     * @note[short] iOS: 0x2d0ec4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn centerAlignParticle(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x4188d0
     * @note[short] Android
     */
    void createParticleSlider(gjParticleValue value, int page, bool centerLabel, cocos2d::CCPoint position, cocos2d::CCArray* displayNodes);

    /**
     * @note[short] Android
     */
    TodoReturn getPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPageButton(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPageContainer(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPageInputNodes(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPageMenu(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPageSliders(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3ccd08
     * @note[short] MacOS (Intel): 0x45be60
     * @note[short] Windows: 0x414370
     * @note[short] iOS: 0x2caef4
     * @note[short] Android: Rebinded
     */
    bool init(ParticleGameObject* p0, cocos2d::CCArray* p1, gd::string p2);

    /**
     * @note[short] Android
     */
    TodoReturn maxSliderValueForType(gjParticleValue p0);

    /**
     * @note[short] Android
     */
    TodoReturn minSliderValueForType(gjParticleValue p0);

    /**
     * @note[short] Android
     */
    void onAnimateActiveOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onAnimateOnTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCalcEmission(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d0ad8
     * @note[short] MacOS (Intel): 0x460450
     * @note[short] Windows: 0x41cf20
     * @note[short] iOS: 0x2ce250
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopySettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDuplicateColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDurationForever(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDynamicColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDynamicRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEmitterMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEndRGBVarSync(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMaxEmission(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x41a0c0
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOrderSensitive(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x41a320
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPasteSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPosType(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onQuickStart(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectParticleTexture(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onStartRGBVarSync(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleBlending(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleStartRadiusEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleStartRotationIsDir(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleStartSizeEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleStartSpinEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUniformColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x41c920
     * @note[short] Android
     */
    bool particleValueIsInt(gjParticleValue p0);

    /**
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d2930
     * @note[short] MacOS (Intel): 0x462430
     * @note[short] Android
     */
    gd::string titleForParticleValue(gjParticleValue p0);

    /**
     * @note[short] Windows: 0x41cc40
     * @note[short] Android
     */
    void toggleGravityMode(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColorSprite(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3d295c
     * @note[short] MacOS (Intel): 0x462470
     * @note[short] Windows: 0x41c990
     * @note[short] iOS: 0x2cfd58
     * @note[short] Android
     */
    void updateInputNodeStringForType(gjParticleValue p0);

    /**
     * @note[short] MacOS (ARM): 0x3d2e28
     * @note[short] MacOS (Intel): 0x462960
     * @note[short] Windows: 0x41ba90
     * @note[short] iOS: 0x2d0168
     * @note[short] Android
     */
    void updateParticleValueForType(float p0, gjParticleValue p1, cocos2d::CCParticleSystemQuad* p2);

    /**
     * @note[short] MacOS (ARM): 0x3d2c3c
     * @note[short] MacOS (Intel): 0x462740
     * @note[short] Windows: 0x41c700
     * @note[short] iOS: 0x2cff7c
     * @note[short] Android
     */
    void updateSliderForType(gjParticleValue p0);

    /**
     * @note[short] Windows: 0x41b210
     * @note[short] Android
     */
    float valueForParticleValue(gjParticleValue p0);

    /**
     * @note[short] Android
     */
    void willClose();
    ParticleGameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_particles;
    bool m_disableTextDelegate;
    cocos2d::CCParticleSystemQuad* m_particle;
    cocos2d::CCParticleSystemQuad* m_standaloneParticle;
    int m_touchID;
    cocos2d::CCPoint m_touchDelta;
    cocos2d::CCArray* m_inputDicts;
    cocos2d::CCArray* m_sliderDicts;
    cocos2d::CCArray* m_pageNodes;
    cocos2d::CCArray* m_pageButtons;
    cocos2d::CCArray* m_pageMenus;
    cocos2d::CCArray* m_pageObjectArrays;
    ParticlePreviewLayer* m_previewLayer;
    CCMenuItemSpriteExtra* m_mode1Button;
    CCMenuItemSpriteExtra* m_mode2Button;
    CCMenuItemSpriteExtra* m_mode3Button;
    float m_elapsed;
    int m_selectedMode;
    CCMenuItemToggler* m_freeToggler;
    CCMenuItemToggler* m_relativeToggler;
    CCMenuItemToggler* m_groupedToggler;
    CCMenuItemToggler* m_objColorToggler;
    CCMenuItemToggler* m_uniformColorToggler;
    CCMenuItemToggler* m_gravityToggler;
    CCMenuItemToggler* m_radiusToggler;
    cocos2d::CCSprite* m_selectSprite;
    cocos2d::CCSprite* m_particleColorSprite;
    cocos2d::CCSprite* m_startColorSprite;
    cocos2d::CCSprite* m_endColorSprite;
    cocos2d::CCArray* m_gravityObjects;
    cocos2d::CCArray* m_radiusObjects;
    int m_particleIndex;
    int m_page;
    bool m_useObjectColor;
    bool m_animateOnTrigger;
    bool m_onlyAnimateActive;
    bool m_quickStart;
    float m_respawnResult;
};
