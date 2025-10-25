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

class UploadActionPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "UploadActionPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadActionPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x238c74
     * @note[short] MacOS (Intel): 0x290720
     * @note[short] Windows: 0x28db20
     * @note[short] iOS: 0x2d7fb4
     * @note[short] Android: Rebinded
     */
    static UploadActionPopup* create(UploadPopupDelegate* delegate, gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x239564
     * @note[short] MacOS (Intel): 0x291070
     * @note[short] Windows: 0x28e320
     * @note[short] iOS: 0x2d86e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void closePopup();

    /**
     * @note[short] MacOS (ARM): 0x238df0
     * @note[short] MacOS (Intel): 0x2908c0
     * @note[short] Windows: 0x28dc60
     * @note[short] iOS: 0x2d80e0
     * @note[short] Android: Rebinded
     */
    bool init(UploadPopupDelegate* delegate, gd::string str);

    /**
     * @note[short] Windows: 0x28e2d0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2393d4
     * @note[short] MacOS (Intel): 0x290ee0
     * @note[short] Windows: 0x28e1d0
     * @note[short] iOS: 0x2d85c8
     * @note[short] Android: Rebinded
     */
    void showFailMessage(gd::string message);

    /**
     * @note[short] MacOS (ARM): 0x23926c
     * @note[short] MacOS (Intel): 0x290d70
     * @note[short] Windows: 0x28e0c0
     * @note[short] iOS: 0x2d84d8
     * @note[short] Android: Rebinded
     */
    void showSuccessMessage(gd::string message);
    UploadPopupDelegate* m_delegate;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
    bool m_succeeded;
};
