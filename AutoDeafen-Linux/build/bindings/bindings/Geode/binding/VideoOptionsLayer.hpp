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

class VideoOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "VideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(VideoOptionsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x360cd0
     * @note[short] iOS: 0xf05cc
     * @note[short] Android
     */
    static VideoOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x69d004
     * @note[short] MacOS (Intel): 0x789140
     * @note[short] Windows: 0x360df0
     * @note[short] iOS: 0xf2d28
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x69eb08
     * @note[short] MacOS (Intel): 0x78adf0
     * @note[short] Windows: 0x362c60
     * @note[short] iOS: 0xf4440
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x362c70
     * @note[short] iOS: 0xf3ab8
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6, bool p7, cocos2d::CCArray* p8);

    /**
     * @note[short] Windows: 0x362130
     * @note[short] iOS: 0xf4154
     * @note[short] Android
     */
    void onAdvanced(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x69e330
     * @note[short] MacOS (Intel): 0x78a590
     * @note[short] Windows: 0x362720
     * @note[short] Android
     */
    void onApply(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x362280
     * @note[short] Android
     */
    void onBorderless(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3622a0
     * @note[short] Android
     */
    void onBorderlessFix(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x362be0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x362260
     * @note[short] iOS: 0xf3d14
     * @note[short] Android
     */
    void onFullscreen(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x69ea28
     * @note[short] MacOS (Intel): 0x78ad30
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3623a0
     * @note[short] Android
     */
    void onResolutionNext(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x362390
     * @note[short] Android
     */
    void onResolutionPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3622d0
     * @note[short] Android
     */
    void onTextureQualityNext(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3622c0
     * @note[short] Android
     */
    void onTextureQualityPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void reloadMenu();

    /**
     * @note[short] Windows: 0x3624c0
     * @note[short] iOS: 0xf4234
     * @note[short] Android
     */
    void toggleResolution();

    /**
     * @note[short] MacOS (ARM): 0x69e634
     * @note[short] MacOS (Intel): 0x78a8b0
     * @note[short] Windows: 0x3623b0
     * @note[short] Android
     */
    void updateResolution(int p0);

    /**
     * @note[short] Windows: 0x3622e0
     * @note[short] Android
     */
    void updateTextureQuality(int p0);
    CCMenuItemSpriteExtra* m_prevResolutionBtn;
    CCMenuItemSpriteExtra* m_nextResolutionBtn;
    cocos2d::CCLabelBMFont* m_windowedResolutionLabel;
    cocos2d::CCLabelBMFont* m_selectedResolutionLabel;
    cocos2d::CCLabelBMFont* m_qualityLabel;
    int m_textureQuality;
    cocos2d::CCArray* m_availableResolutions;
    CCMenuItemToggler* m_borderlessToggle;
    cocos2d::CCLabelBMFont* m_borderlessLabel;
    CCMenuItemToggler* m_fixToggle;
    cocos2d::CCLabelBMFont* m_fixLabel;
    bool m_windowed;
    bool m_borderless;
    bool m_fix;
    int m_currentResolution;
};
