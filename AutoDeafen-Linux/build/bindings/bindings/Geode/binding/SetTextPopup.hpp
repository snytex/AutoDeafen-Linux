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

class SetTextPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetTextPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTextPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x242618
     * @note[short] MacOS (Intel): 0x29abf0
     * @note[short] Windows: 0x2957d0
     * @note[short] iOS: 0x2df0cc
     * @note[short] Android: Rebinded
     */
    static SetTextPopup* create(gd::string value, gd::string placeholder, int maxLength, gd::string title, gd::string okBtnText, bool showResetBtn, float p6);

    /**
     * @note[short] MacOS (ARM): 0x2437e4
     * @note[short] MacOS (Intel): 0x29bf80
     * @note[short] Windows: 0x296490
     * @note[short] iOS: 0x2dfde0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x243798
     * @note[short] MacOS (Intel): 0x29bf20
     * @note[short] Windows: 0x8ba30
     * @note[short] iOS: 0x2dfd94
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x24365c
     * @note[short] MacOS (Intel): 0x29bdf0
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x2dfcf0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x243678
     * @note[short] MacOS (Intel): 0x29be30
     * @note[short] Windows: 0x296280
     * @note[short] iOS: 0x2dfd0c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x242cc0
     * @note[short] MacOS (Intel): 0x29b3e0
     * @note[short] Windows: 0x295940
     * @note[short] Android: Rebinded
     */
    bool init(gd::string p0, gd::string p1, int p2, gd::string p3, gd::string p4, bool p5, float p6);

    /**
     * @note[short] Windows: 0x296370
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2435a0
     * @note[short] MacOS (Intel): 0x29bd30
     * @note[short] Windows: 0x296400
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x296220
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x203e84
     * @note[short] MacOS (Intel): 0x2571f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_input;
    bool m_disableDelegate;
    gd::string m_value;
    SetTextPopupDelegate* m_delegate;
};
