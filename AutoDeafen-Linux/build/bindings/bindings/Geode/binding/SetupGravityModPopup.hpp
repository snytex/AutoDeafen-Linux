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

class SetupGravityModPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupGravityModPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGravityModPopup, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static SetupGravityModPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x34fa14
     * @note[short] MacOS (Intel): 0x3c6a50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x34f9c8
     * @note[short] MacOS (Intel): 0x3c69f0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x34f8cc
     * @note[short] MacOS (Intel): 0x3c68b0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x34f8e8
     * @note[short] MacOS (Intel): 0x3c68f0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x34e7e0
     * @note[short] MacOS (Intel): 0x3c56a0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] Android
     */
    void updateValue();

    /**
     * @note[short] MacOS (ARM): 0x34f5c0
     * @note[short] MacOS (Intel): 0x3c6540
     * @note[short] Android
     */
    void updateValueLabel();
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    cocos2d::CCLabelBMFont* m_gravityModLabel;
    Slider* m_gravityModSlider;
    float m_gravityMod;
    bool m_gravityTrigger;
    float m_minValue;
    float m_maxValue;
    CCTextInputNode* m_itemIDInput;
    int m_itemID;
    bool m_disableDelegate;
};
