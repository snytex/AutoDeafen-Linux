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
#include "HSVWidgetDelegate.hpp"

class HSVLiveOverlay : public FLAlertLayer, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "HSVLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVLiveOverlay, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     HSVLiveOverlay();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~HSVLiveOverlay();

    /**
     * @note[short] MacOS (ARM): 0x205230
     * @note[short] MacOS (Intel): 0x258800
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static HSVLiveOverlay* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x205a40
     * @note[short] MacOS (Intel): 0x259080
     * @note[short] Windows: 0x2b2bb0
     * @note[short] iOS: 0x1a3304
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x205af8
     * @note[short] MacOS (Intel): 0x259130
     * @note[short] Windows: 0x8ba30
     * @note[short] iOS: 0x1a3318
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x205bac
     * @note[short] MacOS (Intel): 0x259200
     * @note[short] Windows: 0x2b2c00
     * @note[short] iOS: 0x1a3364
     * @note[short] Android
     */
    virtual void hsvChanged(ConfigureHSVWidget* p0);

    /**
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2058e0
     * @note[short] MacOS (Intel): 0x258f00
     * @note[short] Windows: 0x2b2a10
     * @note[short] Android
     */
    void createHSVWidget(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2057b4
     * @note[short] MacOS (Intel): 0x258dd0
     * @note[short] Windows: 0x2b2790
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x205364
     * @note[short] MacOS (Intel): 0x258980
     * @note[short] Windows: 0x2b22f0
     * @note[short] iOS: 0x1a2c40
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x205894
     * @note[short] MacOS (Intel): 0x258ec0
     * @note[short] Windows: 0x2b29e0
     * @note[short] iOS: 0x1a315c
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void toggleControls(bool p0);
    GameObject* m_object;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_controls;
    cocos2d::CCArray* m_unkArray;
    ColorSelectDelegate* m_delegate;
    int m_activeTab;
    ConfigureHSVWidget* m_widget;
    bool m_unkBool1;
    bool m_unkBool2;
    bool m_unkBool3;
};
