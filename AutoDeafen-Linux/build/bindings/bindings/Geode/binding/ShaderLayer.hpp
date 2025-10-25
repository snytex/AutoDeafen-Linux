#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJShaderState.hpp"

class ShaderLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ShaderLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ShaderLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3492f8
     * @note[short] MacOS (Intel): 0x3bf2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x272580
     * @note[short] Android: Out of line
     */
     ShaderLayer();

    /**
     * @note[short] MacOS (ARM): 0x342928
     * @note[short] MacOS (Intel): 0x3b76d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26cc0c
     * @note[short] Android: Rebinded
     */
     ~ShaderLayer();

    /**
     * @note[short] MacOS (ARM): 0x342a7c
     * @note[short] MacOS (Intel): 0x3b78d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26ccb4
     * @note[short] Android
     */
    static ShaderLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x342afc
     * @note[short] MacOS (Intel): 0x3b7930
     * @note[short] Windows: 0x4697b0
     * @note[short] iOS: 0x26cd28
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3442d4
     * @note[short] MacOS (Intel): 0x3b91b0
     * @note[short] Windows: 0x46a560
     * @note[short] iOS: 0x26e070
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x348f24
     * @note[short] MacOS (Intel): 0x3bee90
     * @note[short] Windows: 0x470580
     * @note[short] iOS: 0x272320
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x344654
     * @note[short] MacOS (Intel): 0x3b9590
     * @note[short] Windows: 0x46a890
     * @note[short] iOS: 0x26e2f8
     * @note[short] Android
     */
    cocos2d::CCPoint objectPosToShaderPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x348c6c
     * @note[short] MacOS (Intel): 0x3beb80
     * @note[short] Windows: 0x46fbd0
     * @note[short] iOS: 0x272244
     * @note[short] Android
     */
    void performCalculations();

    /**
     * @note[short] MacOS (ARM): 0x34813c
     * @note[short] MacOS (Intel): 0x3bdea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27171c
     * @note[short] Android
     */
    void preBulgeShader();

    /**
     * @note[short] MacOS (ARM): 0x346e7c
     * @note[short] MacOS (Intel): 0x3bc990
     * @note[short] Windows: 0x46d840
     * @note[short] iOS: 0x27053c
     * @note[short] Android
     */
    void preChromaticGlitchShader();

    /**
     * @note[short] MacOS (ARM): 0x346bf4
     * @note[short] MacOS (Intel): 0x3bc6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2702b8
     * @note[short] Android
     */
    void preChromaticShader();

    /**
     * @note[short] MacOS (ARM): 0x348888
     * @note[short] MacOS (Intel): 0x3be680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271e64
     * @note[short] Android
     */
    void preColorChangeShader();

    /**
     * @note[short] MacOS (ARM): 0x3444e0
     * @note[short] MacOS (Intel): 0x3b93c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26e184
     * @note[short] Android
     */
    void preCommonShader();

    /**
     * @note[short] MacOS (ARM): 0x346724
     * @note[short] MacOS (Intel): 0x3bc0f0
     * @note[short] Windows: 0x46d0d0
     * @note[short] iOS: 0x26feb8
     * @note[short] Android
     */
    void preGlitchShader();

    /**
     * @note[short] MacOS (ARM): 0x3483ec
     * @note[short] MacOS (Intel): 0x3be160
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2719cc
     * @note[short] Android
     */
    void preGrayscaleShader();

    /**
     * @note[short] MacOS (ARM): 0x3486dc
     * @note[short] MacOS (Intel): 0x3be4d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271cbc
     * @note[short] Android
     */
    void preHueShiftShader();

    /**
     * @note[short] MacOS (ARM): 0x348610
     * @note[short] MacOS (Intel): 0x3be3e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271bf0
     * @note[short] Android
     */
    void preInvertColorShader();

    /**
     * @note[short] MacOS (ARM): 0x347844
     * @note[short] MacOS (Intel): 0x3bd4a0
     * @note[short] Windows: 0x46e380
     * @note[short] iOS: 0x270e78
     * @note[short] Android
     */
    void preLensCircleShader();

    /**
     * @note[short] MacOS (ARM): 0x347d98
     * @note[short] MacOS (Intel): 0x3bda20
     * @note[short] Windows: 0x46e850
     * @note[short] iOS: 0x271398
     * @note[short] Android
     */
    void preMotionBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x347418
     * @note[short] MacOS (Intel): 0x3bd030
     * @note[short] Windows: 0x46dd70
     * @note[short] iOS: 0x270a4c
     * @note[short] Android
     */
    cocos2d::CCPoint prepareTargetContainer();

    /**
     * @note[short] MacOS (ARM): 0x34836c
     * @note[short] MacOS (Intel): 0x3be0d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27194c
     * @note[short] Android
     */
    void prePinchShader();

    /**
     * @note[short] MacOS (ARM): 0x347240
     * @note[short] MacOS (Intel): 0x3bcdd0
     * @note[short] Windows: 0x46dbc0
     * @note[short] iOS: 0x2708e8
     * @note[short] Android
     */
    void prePixelateShader();

    /**
     * @note[short] MacOS (ARM): 0x347ae8
     * @note[short] MacOS (Intel): 0x3bd770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27110c
     * @note[short] Android
     */
    void preRadialBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x3484e4
     * @note[short] MacOS (Intel): 0x3be290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271ac4
     * @note[short] Android
     */
    void preSepiaShader();

    /**
     * @note[short] MacOS (ARM): 0x346300
     * @note[short] MacOS (Intel): 0x3bbbd0
     * @note[short] Windows: 0x46cbc0
     * @note[short] iOS: 0x26fac8
     * @note[short] Android
     */
    void preShockLineShader();

    /**
     * @note[short] MacOS (ARM): 0x345d94
     * @note[short] MacOS (Intel): 0x3bb510
     * @note[short] Windows: 0x46c070
     * @note[short] iOS: 0x26f58c
     * @note[short] Android
     */
    void preShockWaveShader();

    /**
     * @note[short] MacOS (ARM): 0x348a18
     * @note[short] MacOS (Intel): 0x3be890
     * @note[short] Windows: 0x46f8b0
     * @note[short] iOS: 0x271ff0
     * @note[short] Android
     */
    void preSplitScreenShader();

    /**
     * @note[short] MacOS (ARM): 0x349270
     * @note[short] MacOS (Intel): 0x3bf240
     * @note[short] Windows: 0x4710f0
     * @note[short] iOS: 0x272510
     * @note[short] Android
     */
    bool resetAllShaders();

    /**
     * @note[short] MacOS (ARM): 0x3476a0
     * @note[short] MacOS (Intel): 0x3bd310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x270cd4
     * @note[short] Android
     */
    void resetTargetContainer();

    /**
     * @note[short] MacOS (ARM): 0x343da0
     * @note[short] MacOS (Intel): 0x3b8c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26dbbc
     * @note[short] Android
     */
    void setupBulgeShader();

    /**
     * @note[short] MacOS (ARM): 0x343b30
     * @note[short] MacOS (Intel): 0x3b8a10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26d94c
     * @note[short] Android
     */
    void setupChromaticGlitchUniforms();

    /**
     * @note[short] MacOS (ARM): 0x343acc
     * @note[short] MacOS (Intel): 0x3b89b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26d8e8
     * @note[short] Android
     */
    void setupChromaticUniforms();

    /**
     * @note[short] MacOS (ARM): 0x3440ec
     * @note[short] MacOS (Intel): 0x3b8fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26de88
     * @note[short] Android
     */
    void setupColorChangeShader();

    /**
     * @note[short] MacOS (ARM): 0x3434e0
     * @note[short] MacOS (Intel): 0x3b83b0
     * @note[short] Windows: 0x46a6e0
     * @note[short] iOS: 0x26d2fc
     * @note[short] Android
     */
    void setupCommonUniforms();

    /**
     * @note[short] MacOS (ARM): 0x3439fc
     * @note[short] MacOS (Intel): 0x3b88e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26d818
     * @note[short] Android
     */
    void setupGlitchUniforms();

    /**
     * @note[short] MacOS (ARM): 0x343f80
     * @note[short] MacOS (Intel): 0x3b8e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26dd9c
     * @note[short] Android
     */
    void setupGrayscaleShader();

    /**
     * @note[short] MacOS (ARM): 0x344088
     * @note[short] MacOS (Intel): 0x3b8f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26de24
     * @note[short] Android
     */
    void setupHueShiftShader();

    /**
     * @note[short] MacOS (ARM): 0x344048
     * @note[short] MacOS (Intel): 0x3b8f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupInvertColorShader();

    /**
     * @note[short] MacOS (ARM): 0x343c48
     * @note[short] MacOS (Intel): 0x3b8b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26da64
     * @note[short] Android
     */
    void setupLensCircleShader();

    /**
     * @note[short] MacOS (ARM): 0x343ef8
     * @note[short] MacOS (Intel): 0x3b8de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26dd14
     * @note[short] Android
     */
    void setupMotionBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x343e4c
     * @note[short] MacOS (Intel): 0x3b8d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26dc68
     * @note[short] Android
     */
    void setupPinchShader();

    /**
     * @note[short] MacOS (ARM): 0x343d3c
     * @note[short] MacOS (Intel): 0x3b8c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26db58
     * @note[short] Android
     */
    void setupRadialBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x344008
     * @note[short] MacOS (Intel): 0x3b8ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupSepiaShader();

    /**
     * @note[short] MacOS (ARM): 0x342bc0
     * @note[short] MacOS (Intel): 0x3b79f0
     * @note[short] Windows: 0x4698c0
     * @note[short] iOS: 0x26cdd0
     * @note[short] Android
     */
    void setupShader(bool reset);

    /**
     * @note[short] MacOS (ARM): 0x343830
     * @note[short] MacOS (Intel): 0x3b8710
     * @note[short] Windows: 0x46c9c0
     * @note[short] iOS: 0x26d64c
     * @note[short] Android
     */
    void setupShockLineUniforms();

    /**
     * @note[short] MacOS (ARM): 0x343664
     * @note[short] MacOS (Intel): 0x3b8540
     * @note[short] Windows: 0x46be70
     * @note[short] iOS: 0x26d480
     * @note[short] Android
     */
    void setupShockWaveUniforms();

    /**
     * @note[short] MacOS (ARM): 0x344150
     * @note[short] MacOS (Intel): 0x3b9020
     * @note[short] Windows: 0x46f700
     * @note[short] iOS: 0x26deec
     * @note[short] Android
     */
    void setupSplitScreenShader();

    /**
     * @note[short] MacOS (ARM): 0x34347c
     * @note[short] MacOS (Intel): 0x3b8350
     * @note[short] Windows: 0x46a4f0
     * @note[short] iOS: 0x26d298
     * @note[short] Android
     */
    void toggleAntiAlias(bool antiAlias);

    /**
     * @note[short] MacOS (ARM): 0x348070
     * @note[short] MacOS (Intel): 0x3bddd0
     * @note[short] Windows: 0x46eb60
     * @note[short] iOS: 0x271650
     * @note[short] Android
     */
    void triggerBulge(float fadeTime, float bulge, float screenOffsetX, float screenOffsetY, float radius, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x346cfc
     * @note[short] MacOS (Intel): 0x3bc7e0
     * @note[short] Windows: 0x46d520
     * @note[short] iOS: 0x2703c0
     * @note[short] Android
     */
    void triggerChromaticGlitch(bool enable, float duration, float speed, float strength, float rgbOffset, float lineThickness, float lineStrength, float segmentHeight, int easingType, float easingRate, bool relative, bool relativePos);

    /**
     * @note[short] MacOS (ARM): 0x346b7c
     * @note[short] MacOS (Intel): 0x3bc640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x270240
     * @note[short] Android
     */
    void triggerChromaticX(float fadeTime, float targetX, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x346bb8
     * @note[short] MacOS (Intel): 0x3bc670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27027c
     * @note[short] Android
     */
    void triggerChromaticY(float fadeTime, float targetY, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x34878c
     * @note[short] MacOS (Intel): 0x3be590
     * @note[short] Windows: 0x46f430
     * @note[short] iOS: 0x271d68
     * @note[short] Android
     */
    void triggerColorChange(float fadeTime, float cr, float cg, float cb, float br, float bg, float bb, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x346694
     * @note[short] MacOS (Intel): 0x3bc050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26fe2c
     * @note[short] Android
     */
    void triggerGlitch(float fadeTime, float strength, float speed, float sliceHeight, float maxSliceXOff, float maxColXOff, float maxColYOff, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x3483c8
     * @note[short] MacOS (Intel): 0x3be130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2719a8
     * @note[short] Android
     */
    void triggerGrayscale(float fadeTime, float target, bool useLuminance, int tintChannel, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x3486c4
     * @note[short] MacOS (Intel): 0x3be4b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271ca4
     * @note[short] Android
     */
    void triggerHueShift(float fadeTime, float degrees, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x34853c
     * @note[short] MacOS (Intel): 0x3be2f0
     * @note[short] Windows: 0x46f1b0
     * @note[short] iOS: 0x271b1c
     * @note[short] Android
     */
    void triggerInvertColor(float fadeTime, float target, float r, float g, float b, bool editRGB, bool tweenRGB, bool clampRGB, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x347734
     * @note[short] MacOS (Intel): 0x3bd390
     * @note[short] Windows: 0x46e0e0
     * @note[short] iOS: 0x270d68
     * @note[short] Android
     */
    void triggerLensCircle(float fadeTime, float size, float fade, float strength, int targetID, int tintChannel, float screenOffsetX, float screenOffsetY, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x347bf0
     * @note[short] MacOS (Intel): 0x3bd880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2711f0
     * @note[short] Android
     */
    void triggerMotionBlurX(float fadeTime, float targetX, float intensity, float fade, int targetID, float followEase, bool dualDir, int refChannel, int easingType, float easingRate, bool relative, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x347cc4
     * @note[short] MacOS (Intel): 0x3bd950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2712c4
     * @note[short] Android
     */
    void triggerMotionBlurY(float fadeTime, float targetY, float intensity, float fade, int targetID, float followEase, bool dualDir, int refChannel, int easingType, float easingRate, bool relative, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x3481ac
     * @note[short] MacOS (Intel): 0x3bdf10
     * @note[short] Windows: 0x46ed70
     * @note[short] iOS: 0x27178c
     * @note[short] Android
     */
    void triggerPinchX(float fadeTime, float targetX, float screenOffsetX, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x34828c
     * @note[short] MacOS (Intel): 0x3bdff0
     * @note[short] Windows: 0x46ef90
     * @note[short] iOS: 0x27186c
     * @note[short] Android
     */
    void triggerPinchY(float fadeTime, float targetY, float screenOffsetY, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x347168
     * @note[short] MacOS (Intel): 0x3bccf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x270810
     * @note[short] Android
     */
    void triggerPixelateX(float fadeTime, float targetX, bool snapGrid, bool hardEdges, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x3471d4
     * @note[short] MacOS (Intel): 0x3bcd60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27087c
     * @note[short] Android
     */
    void triggerPixelateY(float fadeTime, float targetY, bool snapGrid, bool hardEdges, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x3479e4
     * @note[short] MacOS (Intel): 0x3bd670
     * @note[short] Windows: 0x46e5b0
     * @note[short] iOS: 0x271008
     * @note[short] Android
     */
    void triggerRadialBlur(float fadeTime, float size, float intensity, float fade, int refChannel, float screenOffsetX, float screenOffsetY, bool target, int targetID, int easingType, float easingRate, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x3484cc
     * @note[short] MacOS (Intel): 0x3be270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271aac
     * @note[short] Android
     */
    void triggerSepia(float fadeTime, float target, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x34610c
     * @note[short] MacOS (Intel): 0x3bb970
     * @note[short] Windows: 0x46c510
     * @note[short] iOS: 0x26f8dc
     * @note[short] Android
     */
    void triggerShockLine(float speed, float thickness, bool rotate, bool flip, bool dual, bool invert, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, float screenOffset, int targetID, bool target, bool follow, bool relative, float maxSize, bool animate, float fadeTime, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x3457bc
     * @note[short] MacOS (Intel): 0x3bac70
     * @note[short] Windows: 0x46b8b0
     * @note[short] iOS: 0x26f03c
     * @note[short] Android
     */
    void triggerShockWave(float speed, float thickness, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, bool invert, float inner, float screenOffsetX, float screenOffsetY, int targetID, bool target, bool follow, bool relative, float outer, float maxSize, bool animate, float fadeTime, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x348a00
     * @note[short] MacOS (Intel): 0x3be870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271fd8
     * @note[short] Android
     */
    void triggerSplitScreenCols(float fadeTime, float targetX, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x3489e8
     * @note[short] MacOS (Intel): 0x3be850
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271fc0
     * @note[short] Android
     */
    void triggerSplitScreenRows(float fadeTime, float targetY, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x349184
     * @note[short] MacOS (Intel): 0x3bf130
     * @note[short] Windows: 0x470f60
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tweenValue(float fromValue, float toValue, int action, float duration, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x3459f0
     * @note[short] MacOS (Intel): 0x3baef0
     * @note[short] Windows: 0x470860
     * @note[short] iOS: 0x26f270
     * @note[short] Android
     */
    void tweenValueAuto(float value, int action, float duration, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x344764
     * @note[short] MacOS (Intel): 0x3b96e0
     * @note[short] Windows: 0x46aa50
     * @note[short] iOS: 0x26e390
     * @note[short] Android
     */
    void updateEffectOffsets(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x348008
     * @note[short] MacOS (Intel): 0x3bdd10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2715e8
     * @note[short] Android
     */
    void updateMotionBlurSpeedX(float x, float dt);

    /**
     * @note[short] MacOS (ARM): 0x34803c
     * @note[short] MacOS (Intel): 0x3bdd70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27161c
     * @note[short] Android
     */
    void updateMotionBlurSpeedY(float y, float dt);

    /**
     * @note[short] MacOS (ARM): 0x3462d8
     * @note[short] MacOS (Intel): 0x3bbb90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26faa8
     * @note[short] Android
     */
    void updateShockLineCenter(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x345d6c
     * @note[short] MacOS (Intel): 0x3bb4d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26f56c
     * @note[short] Android
     */
    void updateShockWaveCenter(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x3433f0
     * @note[short] MacOS (Intel): 0x3b82d0
     * @note[short] Windows: 0x471070
     * @note[short] iOS: 0x26d224
     * @note[short] Android
     */
    bool updateZLayer(int minLayer, int maxLayer, bool noParticles);
    GJShaderState m_state;
    bool m_timesyncShaderActions;
    cocos2d::CCGLProgram* m_shader;
    cocos2d::CCRenderTexture* m_renderTexture;
    cocos2d::CCSprite* m_sprite;
    bool m_antiAlias;
    bool m_configuredAntiAlias;
    void* m_unk3d4;
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCPoint m_savedCameraPosition;
    float m_savedCameraRotation;
    float m_shockWaveTimeMult;
    float m_scaleFactor;
    float m_aspectRatio;
    cocos2d::CCSize m_screenSize;
    cocos2d::CCSize m_textureContentSize;
    cocos2d::CCSize m_targetTextureSize;
    cocos2d::CCSize m_targetTextureSizeExtra;
    int m_textureScaleUniform;
    int m_textureScaleInvUniform;
    int m_screenAspectUniform;
    int m_screenAspectINVUniform;
    int m_shaderPositionUniform;
    int m_blurRefColorUniform;
    int m_blurUseRefUniform;
    int m_blurIntensityUniform;
    int m_blurOnlyEmptyUniform;
    int m_shockWaveTimeUniform;
    int m_shockWaveTime1Uniform;
    int m_shockWaveTime2Uniform;
    int m_shockWaveTime3Uniform;
    int m_shockWaveTime4Uniform;
    int m_shockWaveStrengthUniform;
    int m_shockWaveWavesUniform;
    int m_shockWaveCenterUniform;
    int m_shockWaveInvertUniform;
    int m_shockWaveMinSizeUniform;
    int m_shockWaveMaxSizeUniform;
    int m_shockWaveMaxDistValUniform;
    float m_shockWaveTime1;
    float m_shockWaveTime2;
    float m_shockWaveTime3;
    float m_shockWaveTime4;
    float m_shockWaveMaxDistVal;
    float m_shockWaveMinSize;
    float m_shockWaveMaxSize;
    bool m_shockWaveUnk46c;
    int m_shockLineTimeUniform;
    int m_shockLineTime1Uniform;
    int m_shockLineTime2Uniform;
    int m_shockLineTime3Uniform;
    int m_shockLineTime4Uniform;
    int m_shockLineAxisUniform;
    int m_shockLineDirectionUniform;
    int m_shockLineDualUniform;
    int m_shockLineWavesUniform;
    int m_shockLineStrengthUniform;
    int m_shockLineCenterUniform;
    int m_shockLineMaxDistValUniform;
    float m_shockLineTime1;
    float m_shockLineTime2;
    float m_shockLineTime3;
    float m_shockLineTime4;
    float m_shockLineMaxDistVal;
    int m_unk4b4;
    int m_unk4b8;
    int m_unk4bc;
    int m_glitchBotUniform;
    int m_glitchTopUniform;
    int m_glitchXOffsetUniform;
    int m_glitchColOffsetUniform;
    int m_glitchRndUniform;
    int m_chromaticXOffUniform;
    int m_chromaticYOffUniform;
    int m_cGRGBOffsetUniform;
    int m_cGYOffsetUniform;
    int m_cGTimeUniform;
    int m_cGStrengthUniform;
    int m_cGHeightUniform;
    int m_cGLineThickUniform;
    int m_cGLineStrengthUniform;
    int m_lensCircleOriginUniform;
    int m_lensCircleStartUniform;
    int m_lensCircleEndUniform;
    int m_lensCircleStrengthUniform;
    int m_lensCircleTintUniform;
    int m_lensCircleAdditiveUniform;
    int m_radialBlurCenterUniform;
    int m_radialBlurValueUniform;
    int m_blurFadeUniform;
    int m_motionBlurValueUniform;
    int m_motionBlurMultUniform;
    int m_motionBlurDualUniform;
    int m_bulgeValueUniform;
    int m_bulgeValue2Uniform;
    int m_bulgeOriginUniform;
    int m_bulgeRadiusUniform;
    int m_pinchValueUniform;
    int m_pinchCenterPosUniform;
    int m_pinchCalcUniform;
    int m_pinchRadiusUniform;
    int m_grayscaleValueUniform;
    int m_grayscaleTintUniform;
    int m_grayscaleUseLumUniform;
    int m_sepiaValueUniform;
    int m_invertColorValueUniform;
    int m_hueShiftCosAUniform;
    int m_hueShiftSinAUniform;
    int m_colorChangeCUniform;
    int m_colorChangeBUniform;
    int m_rowmodUniform;
    int m_colmodUniform;
    int m_rowmodCalcUniform;
    int m_colmodCalcUniform;
    int m_splitXStartUniform;
    int m_splitXRangeUniform;
    int m_splitXRangeMultUniform;
    int m_splitYStartUniform;
    int m_splitYRangeUniform;
    int m_splitYRangeMultUniform;
};
