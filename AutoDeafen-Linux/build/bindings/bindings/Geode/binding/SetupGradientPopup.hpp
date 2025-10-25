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

class SetupGradientPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGradientPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGradientPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupGradientPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SetupGradientPopup();

    /**
     * @note[short] MacOS (ARM): 0x50d1d0
     * @note[short] MacOS (Intel): 0x5d9de0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupGradientPopup* create(GradientTriggerObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x50e9cc
     * @note[short] MacOS (Intel): 0x5db910
     * @note[short] Windows: 0x409e70
     * @note[short] iOS: 0x343010
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x50eafc
     * @note[short] MacOS (Intel): 0x5dba30
     * @note[short] Windows: 0x409f80
     * @note[short] iOS: 0x343120
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50eb58
     * @note[short] MacOS (Intel): 0x5dba80
     * @note[short] Windows: 0x40a000
     * @note[short] iOS: 0x34317c
     * @note[short] Android
     */
    virtual void updateToggleItem(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x50ed10
     * @note[short] MacOS (Intel): 0x5dbc40
     * @note[short] Windows: 0x40a410
     * @note[short] iOS: 0x343234
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x50d368
     * @note[short] MacOS (Intel): 0x5da040
     * @note[short] Windows: 0x408d10
     * @note[short] iOS: 0x341f78
     * @note[short] Android
     */
    bool init(GradientTriggerObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x50e720
     * @note[short] MacOS (Intel): 0x5db640
     * @note[short] Windows: 0x40a2c0
     * @note[short] Android
     */
    void onBlending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50e850
     * @note[short] MacOS (Intel): 0x5db760
     * @note[short] Windows: 0x40a1a0
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50ec70
     * @note[short] MacOS (Intel): 0x5dbba0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50eca0
     * @note[short] MacOS (Intel): 0x5dbbc0
     * @note[short] Android
     */
    void updateBlending();

    /**
     * @note[short] MacOS (ARM): 0x50e66c
     * @note[short] MacOS (Intel): 0x5db5b0
     * @note[short] Windows: 0x40a380
     * @note[short] Android
     */
    void updateBlendingLabel();

    /**
     * @note[short] MacOS (ARM): 0x50e564
     * @note[short] MacOS (Intel): 0x5db4a0
     * @note[short] Windows: 0x40a090
     * @note[short] Android
     */
    void updateGradientLabels(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x50e93c
     * @note[short] MacOS (Intel): 0x5db870
     * @note[short] Windows: 0x40a230
     * @note[short] Android
     */
    void updateZLayerButtons();
    cocos2d::CCLabelBMFont* m_blendingLabel;
    int m_blendingMode;
    cocos2d::CCArray* m_layerButtons;
    int m_blendingLayer;
    cocos2d::CCArray* m_gradientLabels;
};
