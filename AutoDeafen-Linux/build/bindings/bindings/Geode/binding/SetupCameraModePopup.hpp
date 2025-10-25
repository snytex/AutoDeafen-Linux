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

class SetupCameraModePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraModePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraModePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x402158
     * @note[short] MacOS (Intel): 0x495af0
     * @note[short] Windows: 0x3fc360
     * @note[short] iOS: 0x3a2ffc
     * @note[short] Android
     */
    static SetupCameraModePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x402fc0
     * @note[short] MacOS (Intel): 0x496b80
     * @note[short] Windows: 0x3fcf30
     * @note[short] iOS: 0x3a3b64
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x403274
     * @note[short] MacOS (Intel): 0x496e70
     * @note[short] Windows: 0x287920
     * @note[short] iOS: 0x3a3dec
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4022e4
     * @note[short] MacOS (Intel): 0x495d30
     * @note[short] Windows: 0x3fc480
     * @note[short] iOS: 0x3a30d8
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x3fd1a0
     * @note[short] Android
     */
    void onEditCameraSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3fd0f0
     * @note[short] Android
     */
    void onUnboundMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x402d08
     * @note[short] MacOS (Intel): 0x496860
     * @note[short] Windows: 0x3fd320
     * @note[short] iOS: 0x3a3970
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3fd430
     * @note[short] Android
     */
    void updateCameraEasing();

    /**
     * @note[short] MacOS (ARM): 0x402e88
     * @note[short] MacOS (Intel): 0x496a30
     * @note[short] Windows: 0x3fd3d0
     * @note[short] iOS: 0x3a3a2c
     * @note[short] Android
     */
    void updateCameraEasingLabel();

    /**
     * @note[short] Windows: 0x3fd530
     * @note[short] Android
     */
    void updateCameraPadding();

    /**
     * @note[short] MacOS (ARM): 0x402ed4
     * @note[short] MacOS (Intel): 0x496a80
     * @note[short] Windows: 0x3fd4c0
     * @note[short] iOS: 0x3a3a78
     * @note[short] Android
     */
    void updateCameraPaddingLabel();

    /**
     * @note[short] Windows: 0x3fd250
     * @note[short] Android
     */
    void updateItemVisibility();
    cocos2d::CCArray* m_freeModeObjects;
    cocos2d::CCArray* m_cameraSettingsObjects;
    Slider* m_cameraEasingSlider;
    cocos2d::CCLabelBMFont* m_cameraEasingLabel;
    int m_cameraEasing;
    Slider* m_cameraPaddingSlider;
    cocos2d::CCLabelBMFont* m_cameraPaddingLabel;
    float m_cameraPadding;
    bool m_freeMode;
    bool m_cameraSettingsEnabled;
    bool m_cameraModeObjects;
};
