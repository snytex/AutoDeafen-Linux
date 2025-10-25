#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetIDPopup.hpp"
#include "SetTextPopupDelegate.hpp"

class SetFolderPopup : public SetIDPopup, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SetFolderPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetFolderPopup, SetIDPopup)

    /**
     * @note[short] MacOS (ARM): 0x241e80
     * @note[short] MacOS (Intel): 0x29a410
     * @note[short] Windows: 0x294e90
     * @note[short] iOS: 0x2deb0c
     * @note[short] Android: Rebinded
     */
    static SetFolderPopup* create(int value, bool isCreated, gd::string title);

    /**
     * @note[short] MacOS (ARM): 0x24249c
     * @note[short] MacOS (Intel): 0x29aa90
     * @note[short] Windows: 0x295250
     * @note[short] iOS: 0x2deffc
     * @note[short] Android
     */
    virtual void valueChanged();

    /**
     * @note[short] MacOS (ARM): 0x242914
     * @note[short] MacOS (Intel): 0x29af60
     * @note[short] Windows: 0x295590
     * @note[short] iOS: 0x2df330
     * @note[short] Android: Rebinded
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x24202c
     * @note[short] MacOS (Intel): 0x29a610
     * @note[short] Windows: 0x294fd0
     * @note[short] Android: Rebinded
     */
    bool init(int value, bool isCreated, gd::string title);

    /**
     * @note[short] MacOS (ARM): 0x24229c
     * @note[short] MacOS (Intel): 0x29a8a0
     * @note[short] Windows: 0x295390
     * @note[short] Android
     */
    void onSetFolderName(cocos2d::CCObject* sender);
    bool m_isCreated;
    cocos2d::CCLabelBMFont* m_titleLabel;
};
