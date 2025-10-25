#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "GJAccountDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountHelpLayer : public GJDropDownLayer, public GJAccountDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountHelpLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountHelpLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0xb7368
     * @note[short] MacOS (Intel): 0xce580
     * @note[short] iOS: 0x2655a4
     * @note[short] Android
     */
    static AccountHelpLayer* create();

    /**
     * @note[short] MacOS (ARM): 0xb77d4
     * @note[short] MacOS (Intel): 0xceb60
     * @note[short] Windows: 0x7f5c0
     * @note[short] iOS: 0x16a644
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0xb844c
     * @note[short] MacOS (Intel): 0xcf810
     * @note[short] Windows: 0x80320
     * @note[short] iOS: 0x16b0cc
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0xb8300
     * @note[short] MacOS (Intel): 0xcf6d0
     * @note[short] Windows: 0x7fcc0
     * @note[short] iOS: 0x16b018
     * @note[short] Android
     */
    virtual void accountStatusChanged();

    /**
     * @note[short] MacOS (ARM): 0xb830c
     * @note[short] MacOS (Intel): 0xcf700
     * @note[short] Windows: 0x7ffa0
     * @note[short] iOS: 0x16b024
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    void doUnlink();

    /**
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0xb7bf0
     * @note[short] MacOS (Intel): 0xcefa0
     * @note[short] Windows: 0x7fa10
     * @note[short] iOS: 0x16aa60
     * @note[short] Android
     */
    void onAccountManagement(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb7b80
     * @note[short] MacOS (Intel): 0xcef40
     * @note[short] Windows: 0x7f9d0
     * @note[short] iOS: 0x16a9e8
     * @note[short] Android
     */
    void onReLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb7cc4
     * @note[short] MacOS (Intel): 0xcf070
     * @note[short] Windows: 0x7fb20
     * @note[short] iOS: 0x16ab14
     * @note[short] Android
     */
    void onUnlink(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb7e88
     * @note[short] MacOS (Intel): 0xcf230
     * @note[short] Windows: 0x7fcd0
     * @note[short] iOS: 0x16ac58
     * @note[short] Android
     */
    void updatePage();

    /**
     * @note[short] MacOS (ARM): 0xb81d4
     * @note[short] MacOS (Intel): 0xcf580
     * @note[short] iOS: 0x16af54
     * @note[short] Android
     */
    void verifyUnlink();
    cocos2d::CCLabelBMFont* m_loginStatusLabel;
    TextArea* m_textArea;
    CCMenuItemSpriteExtra* m_refreshLoginButton;
    CCMenuItemSpriteExtra* m_unlinkAccountButton;
    bool m_unk290;
};
