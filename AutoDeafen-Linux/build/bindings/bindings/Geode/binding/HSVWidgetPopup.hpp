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

class HSVWidgetPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "HSVWidgetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVWidgetPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x96410
     * @note[short] Android: Rebinded
     */
    static HSVWidgetPopup* create(cocos2d::ccHSVValue p0, HSVWidgetDelegate* p1, gd::string p2);

    /**
     * @note[short] MacOS (ARM): 0x398990
     * @note[short] MacOS (Intel): 0x41d0a0
     * @note[short] Windows: 0x96940
     * @note[short] iOS: 0x1020a8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x398494
     * @note[short] MacOS (Intel): 0x41cb40
     * @note[short] Windows: 0x96530
     * @note[short] iOS: 0x101c80
     * @note[short] Android: Rebinded
     */
    bool init(cocos2d::ccHSVValue hsv, HSVWidgetDelegate* delegate, gd::string title);

    /**
     * @note[short] Windows: 0x96860
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    ConfigureHSVWidget* m_widget;
    HSVWidgetDelegate* m_delegate;
};
