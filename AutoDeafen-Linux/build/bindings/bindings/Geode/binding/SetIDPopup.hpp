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

class SetIDPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetIDPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x286480
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetIDPopup();

    /**
     * @note[short] MacOS (ARM): 0x23fd6c
     * @note[short] MacOS (Intel): 0x297e20
     * @note[short] Windows: 0x293b10
     * @note[short] iOS: 0x2dd760
     * @note[short] Android: Rebinded
     */
     ~SetIDPopup();

    /**
     * @note[short] MacOS (ARM): 0x23ff3c
     * @note[short] MacOS (Intel): 0x2980c0
     * @note[short] Windows: 0x293bb0
     * @note[short] iOS: 0x2dd808
     * @note[short] Android: Rebinded
     */
    static SetIDPopup* create(int current, int begin, int end, gd::string title, gd::string button, bool p5, int p6, float p7, bool p8, bool p9);

    /**
     * @note[short] MacOS (ARM): 0x240ee8
     * @note[short] MacOS (Intel): 0x2990b0
     * @note[short] Windows: 0x294a90
     * @note[short] iOS: 0x2de548
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x240e64
     * @note[short] MacOS (Intel): 0x299030
     * @note[short] Windows: 0x2948c0
     * @note[short] iOS: 0x2de4cc
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x240cf0
     * @note[short] MacOS (Intel): 0x298ed0
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x2de410
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x240d0c
     * @note[short] MacOS (Intel): 0x298f10
     * @note[short] Windows: 0x294710
     * @note[short] iOS: 0x2de42c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x240e60
     * @note[short] MacOS (Intel): 0x299020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2de4c8
     * @note[short] Android: Out of line
     */
    virtual void valueChanged();

    /**
     * @note[short] MacOS (ARM): 0x240198
     * @note[short] MacOS (Intel): 0x298360
     * @note[short] Windows: 0x293ce0
     * @note[short] iOS: 0x2dd9fc
     * @note[short] Android: Rebinded
     */
    bool init(int current, int begin, int end, gd::string title, gd::string button, bool p5, int p6, float p7, bool p8, bool p9);

    /**
     * @note[short] MacOS (ARM): 0x240b14
     * @note[short] MacOS (Intel): 0x298cf0
     * @note[short] Windows: 0x294950
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x240a14
     * @note[short] MacOS (Intel): 0x298bf0
     * @note[short] Windows: 0x2949f0
     * @note[short] iOS: 0x2de248
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x240ab8
     * @note[short] MacOS (Intel): 0x298ca0
     * @note[short] Windows: 0x2946a0
     * @note[short] iOS: 0x2de2ec
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x240aac
     * @note[short] MacOS (Intel): 0x298c80
     * @note[short] Windows: 0x2946f0
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x240bb4
     * @note[short] MacOS (Intel): 0x298d90
     * @note[short] Windows: 0x294810
     * @note[short] iOS: 0x2de354
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_inputNode;
    int m_value;
    bool m_disableDelegate;
    bool m_cancelled;
    int m_minimum;
    int m_maximum;
    int m_default;
    SetIDPopupDelegate* m_delegate;
};
