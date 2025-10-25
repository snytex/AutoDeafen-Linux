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

class SetupShaderEffectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShaderEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShaderEffectPopup, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupShaderEffectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x261df0
     * @note[short] MacOS (Intel): 0x2bd2d0
     * @note[short] Windows: 0x43c650
     * @note[short] iOS: 0x18d670
     * @note[short] Android
     */
    virtual void toggleGroup(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x261e30
     * @note[short] MacOS (Intel): 0x2bd310
     * @note[short] Windows: 0x287920
     * @note[short] iOS: 0x18d6b0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2614cc
     * @note[short] MacOS (Intel): 0x2bca50
     * @note[short] Windows: 0x432210
     * @note[short] iOS: 0x18d054
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x261ab4
     * @note[short] MacOS (Intel): 0x2bcf90
     * @note[short] Windows: 0x43c220
     * @note[short] iOS: 0x18d3d8
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x431f20
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] Windows: 0x43bb80
     * @note[short] Android
     */
    void onResetColors(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x432d00
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25de18
     * @note[short] MacOS (Intel): 0x2b8e60
     * @note[short] Windows: 0x438e00
     * @note[short] Android
     */
    void setupBulge();

    /**
     * @note[short] MacOS (ARM): 0x25ad9c
     * @note[short] MacOS (Intel): 0x2b57d0
     * @note[short] Windows: 0x435a30
     * @note[short] Android
     */
    void setupChromatic();

    /**
     * @note[short] MacOS (ARM): 0x25b2f8
     * @note[short] MacOS (Intel): 0x2b5d70
     * @note[short] Windows: 0x435fb0
     * @note[short] Android
     */
    void setupChromaticGlitch();

    /**
     * @note[short] MacOS (ARM): 0x2601c0
     * @note[short] MacOS (Intel): 0x2bb610
     * @note[short] Windows: 0x43b4b0
     * @note[short] Android
     */
    void setupColorChange();

    /**
     * @note[short] MacOS (ARM): 0x25a738
     * @note[short] MacOS (Intel): 0x2b5110
     * @note[short] Windows: 0x4353b0
     * @note[short] Android
     */
    void setupGlitch();

    /**
     * @note[short] MacOS (ARM): 0x25f120
     * @note[short] MacOS (Intel): 0x2ba490
     * @note[short] Windows: 0x43a2c0
     * @note[short] Android
     */
    void setupGrayscale();

    /**
     * @note[short] MacOS (ARM): 0x25feb8
     * @note[short] MacOS (Intel): 0x2bb2f0
     * @note[short] Windows: 0x43b160
     * @note[short] Android
     */
    void setupHueShift();

    /**
     * @note[short] MacOS (ARM): 0x25f89c
     * @note[short] MacOS (Intel): 0x2bac60
     * @note[short] Windows: 0x43aaf0
     * @note[short] Android
     */
    void setupInvertColor();

    /**
     * @note[short] MacOS (ARM): 0x25c124
     * @note[short] MacOS (Intel): 0x2b6cf0
     * @note[short] Windows: 0x436f00
     * @note[short] Android
     */
    void setupLensCircle();

    /**
     * @note[short] MacOS (ARM): 0x25d314
     * @note[short] MacOS (Intel): 0x2b81c0
     * @note[short] Windows: 0x438290
     * @note[short] Android
     */
    void setupMotionBlur();

    /**
     * @note[short] MacOS (ARM): 0x25e654
     * @note[short] MacOS (Intel): 0x2b97e0
     * @note[short] Windows: 0x4396d0
     * @note[short] Android
     */
    void setupPinch();

    /**
     * @note[short] MacOS (ARM): 0x25baa4
     * @note[short] MacOS (Intel): 0x2b65f0
     * @note[short] Windows: 0x436860
     * @note[short] Android
     */
    void setupPixelate();

    /**
     * @note[short] MacOS (ARM): 0x25c9b0
     * @note[short] MacOS (Intel): 0x2b76e0
     * @note[short] Windows: 0x437850
     * @note[short] Android
     */
    void setupRadialBlur();

    /**
     * @note[short] MacOS (ARM): 0x25f5b0
     * @note[short] MacOS (Intel): 0x2ba990
     * @note[short] Windows: 0x43a7c0
     * @note[short] Android
     */
    void setupSepia();

    /**
     * @note[short] MacOS (ARM): 0x260cac
     * @note[short] MacOS (Intel): 0x2bc190
     * @note[short] Windows: 0x432300
     * @note[short] Android
     */
    void setupShaderTrigger();

    /**
     * @note[short] MacOS (ARM): 0x259658
     * @note[short] MacOS (Intel): 0x2b3d30
     * @note[short] Windows: 0x4341b0
     * @note[short] Android
     */
    void setupShockLine();

    /**
     * @note[short] MacOS (ARM): 0x2584b4
     * @note[short] MacOS (Intel): 0x2b2840
     * @note[short] Windows: 0x432ea0
     * @note[short] Android
     */
    void setupShockWave();

    /**
     * @note[short] MacOS (ARM): 0x260808
     * @note[short] MacOS (Intel): 0x2bbcd0
     * @note[short] Windows: 0x43bd40
     * @note[short] Android
     */
    void setupSplitScreen();

    /**
     * @note[short] Windows: 0x432df0
     * @note[short] Android
     */
    void updateZLayerButtons();

    /**
     * @note[short] Windows: 0x432a20
     * @note[short] Android
     */
    gd::string zLayerToString(int p0);
    cocos2d::CCArray* m_zLayerSprites;
    int m_zLayerMin;
    int m_zLayerMax;
    bool m_changeMin;
    int m_objectID;
};
