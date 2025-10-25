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

class SetupPortalPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupPortalPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPortalPopup, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static SetupPortalPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4b07e8
     * @note[short] MacOS (Intel): 0x559fd0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x4af7d4
     * @note[short] MacOS (Intel): 0x558e40
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditCameraSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUnboundMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateCameraEasing();

    /**
     * @note[short] Android
     */
    void updateCameraEasingLabel();

    /**
     * @note[short] Android
     */
    void updateCameraPadding();

    /**
     * @note[short] MacOS (ARM): 0x4b0614
     * @note[short] MacOS (Intel): 0x559dd0
     * @note[short] Android
     */
    void updateCameraPaddingLabel();

    /**
     * @note[short] Android
     */
    void updateItemVisibility();
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
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
    bool m_disableDelegate;
};
