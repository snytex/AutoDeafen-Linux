#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJValueTween.hpp"

class GJShaderState {
public:
    static constexpr auto CLASS_NAME = "GJShaderState";

    /**
     * @note[short] MacOS (ARM): 0xb43b8
     * @note[short] MacOS (Intel): 0xcae30
     * @note[short] Windows: 0x38db00
     * @note[short] iOS: 0x12ab94
     * @note[short] Android: Out of line
     */
     GJShaderState();

    /**
     * @note[short] MacOS (ARM): 0x34278c
     * @note[short] MacOS (Intel): 0x3b73f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26caf4
     * @note[short] Android
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): 0x3422dc
     * @note[short] MacOS (Intel): 0x3b6c70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopTweenAction(int action);

    /**
     * @note[short] MacOS (ARM): 0x342628
     * @note[short] MacOS (Intel): 0x3b7210
     * @note[short] Windows: 0x4696c0
     * @note[short] iOS: 0x26ca64
     * @note[short] Android
     */
    void timesyncShaderAction(int action);

    /**
     * @note[short] MacOS (ARM): 0x3425f0
     * @note[short] MacOS (Intel): 0x3b71d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26ca2c
     * @note[short] Android
     */
    void timesyncShaderActions();

    /**
     * @note[short] MacOS (ARM): 0x3421f8
     * @note[short] MacOS (Intel): 0x3b6b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26c680
     * @note[short] Android
     */
    void tweenValue(float fromValue, float toValue, int action, float duration, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x342300
     * @note[short] MacOS (Intel): 0x3b6c90
     * @note[short] Windows: 0x469300
     * @note[short] iOS: 0x26c764
     * @note[short] Android
     */
    void updateTweenAction(float value, int actionID);

    /**
     * @note[short] MacOS (ARM): 0x342554
     * @note[short] MacOS (Intel): 0x3b7130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26c9b8
     * @note[short] Android
     */
    void updateTweenActions(float tweenValue);
    gd::unordered_map<int, GJValueTween> m_tweenActions;
    gd::unordered_map<int, double> m_tweenTimes;
    double m_time;
    double m_prevTime;
    double m_startTime;
    float m_textureScaleX;
    float m_textureScaleY;
    cocos2d::ccColor3B m_blurRefColor;
    float m_blurIntensity;
    int m_blurRefChannel;
    bool m_blurOnlyEmpty;
    float m_shockWaveStartTime;
    float m_shockWaveTime;
    float m_shockWaveTimeOffset;
    float m_shockWaveSpeed;
    float m_shockWaveThickness;
    float m_shockWaveStrength;
    float m_shockWaveWidth;
    float m_shockWaveFadeIn;
    float m_shockWaveFadeOut;
    bool m_shockWaveInvert;
    float m_shockWaveInner;
    float m_shockWaveOuter;
    int m_shockWaveTargetID;
    bool m_shockWaveTarget;
    bool m_shockWaveCenterMoving;
    bool m_shockWaveRelative;
    float m_shockWaveMaxSize;
    cocos2d::CCPoint m_shockWaveScreenOffset;
    bool m_shockWaveCenterDirty;
    cocos2d::CCPoint m_shockWaveCenter;
    double m_shockLineStartTime;
    float m_shockLineTime;
    float m_shockLineTimeOffset;
    float m_shockLineSpeed;
    bool m_shockLineAxis;
    bool m_shockLineDirection;
    bool m_shockLineDual;
    bool m_shockLineInvert;
    float m_shockLineScreenOffset;
    float m_shockLineStrength;
    float m_shockLineWidth;
    float m_shockLineFadeIn;
    float m_shockLineFadeOut;
    float m_shockLineThickness;
    int m_shockLineTargetID;
    bool m_shockLineTarget;
    bool m_shockLineCenterMoving;
    bool m_shockLineRelative;
    float m_shockLineMaxSize;
    cocos2d::CCPoint m_shockLineScreenOffset2;
    bool m_shockLineCenterDirty;
    cocos2d::CCPoint m_shockLineCenter;
    float m_glitchStrength;
    float m_glitchSpeed;
    float m_glitchSliceHeight;
    float m_glitchMaxSliceXOff;
    float m_glitchMaxColXOff;
    float m_glitchMaxColYOff;
    bool m_glitchRelative;
    float m_chromaticTargetX;
    float m_chromaticTargetY;
    bool m_chromaticRelative;
    float m_cGStartTime;
    float m_cGTime;
    float m_cGSpeed;
    float m_cGRGBOffset;
    float m_cGStrength;
    float m_cGSegmentHeight;
    float m_cGLineThickness;
    float m_cGLineStrength;
    bool m_cGEnable;
    bool m_cGActive;
    bool m_cGRelative;
    bool m_cGRelativePos;
    float m_pixelateTargetX;
    float m_pixelateTargetY;
    bool m_pixelateSnapGrid;
    bool m_pixelatePixelating;
    bool m_pixelateRelative;
    bool m_pixelateHardEdges;
    float m_lensCircleSize;
    float m_lensCircleFade;
    float m_lensCircleStrength;
    int m_lensCircleTargetID;
    int m_lensCircleTintChannel;
    bool m_lensCircleRelative;
    bool m_lensCircleAdditive;
    cocos2d::ccColor3B m_lensCircleTint;
    cocos2d::CCPoint m_lensCircleCenter;
    cocos2d::CCPoint m_lensCircleScreenOffset;
    float m_radialBlurSize;
    float m_radialBlurFade;
    bool m_radialBlurTarget;
    int m_radialBlurTargetID;
    cocos2d::CCPoint m_radialBlurCenter;
    cocos2d::CCPoint m_radialBlurScreenOffset;
    float m_motionBlurTargetX;
    float m_motionBlurTargetY;
    float m_motionBlurSpeedX;
    float m_motionBlurSpeedY;
    float m_motionBlurFollowEaseX;
    float m_motionBlurFollowEaseY;
    int m_motionBlurTargetIDX;
    int m_motionBlurTargetIDY;
    bool m_motionBlurDual;
    bool m_motionBlurRelative;
    float m_bulgeValue;
    bool m_bulgeRelative;
    int m_bulgeTargetID;
    float m_bulgeRadius;
    cocos2d::CCPoint m_bulgeCenter;
    cocos2d::CCPoint m_bulgeScreenOffset;
    float m_pinchTargetX;
    float m_pinchTargetY;
    bool m_pinchTargetEnabledX;
    bool m_pinchTargetEnabledY;
    int m_pinchTargetIDX;
    int m_pinchTargetIDY;
    cocos2d::CCPoint m_pinchCenter;
    cocos2d::CCPoint m_pinchScreenOffset;
    bool m_pinchRelative;
    float m_pinchRadius;
    cocos2d::CCPoint m_pinchModifier;
    float m_grayscaleValue;
    bool m_grayscaleUseLum;
    int m_grayscaleTintChannel;
    cocos2d::ccColor3B m_grayscaleTint;
    float m_sepiaValue;
    float m_invertColorEditRGB;
    float m_invertColorR;
    float m_invertColorG;
    float m_invertColorB;
    bool m_invertColorClampRGB;
    float m_hueShiftDegrees;
    float m_colorChangeCR;
    float m_colorChangeCG;
    float m_colorChangeCB;
    float m_colorChangeBR;
    float m_colorChangeBG;
    float m_colorChangeBB;
    float m_splitTargetRows;
    float m_splitTargetCols;
    bool m_splitActive;
    int m_minBlendingLayer;
    int m_maxBlendingLayer;
    bool m_zLayerDirty;
    bool m_noPlayerParticles;
    bool m_usesShaders;
};
