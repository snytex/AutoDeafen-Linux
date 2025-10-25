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

class ItemInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ItemInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2eecf8
     * @note[short] MacOS (Intel): 0x35b830
     * @note[short] Windows: 0x273e30
     * @note[short] iOS: 0x306750
     * @note[short] Android
     */
    static ItemInfoPopup* create(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x2f26cc
     * @note[short] MacOS (Intel): 0x35f670
     * @note[short] Windows: 0x275ef0
     * @note[short] iOS: 0x309430
     * @note[short] Android
     */
    static gd::string nameForUnlockType(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x2f2a7c
     * @note[short] MacOS (Intel): 0x35f9b0
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x3095a4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2f14e8
     * @note[short] MacOS (Intel): 0x35e340
     * @note[short] Windows: 0x273f20
     * @note[short] iOS: 0x3083b8
     * @note[short] Android
     */
    bool init(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x2f2a1c
     * @note[short] MacOS (Intel): 0x35f950
     * @note[short] Android
     */
    bool isUnlockedByDefault(int p0, UnlockType p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f2a48
     * @note[short] MacOS (Intel): 0x35f980
     * @note[short] Windows: 0x275ec0
     * @note[short] Android
     */
    void onCredit(cocos2d::CCObject* sender);
    int m_itemID;
    UnlockType m_unlockType;
    int m_accountID;
};
