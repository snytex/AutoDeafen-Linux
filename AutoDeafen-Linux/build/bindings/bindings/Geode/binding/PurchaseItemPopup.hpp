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

class PurchaseItemPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PurchaseItemPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PurchaseItemPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2a77d0
     * @note[short] MacOS (Intel): 0x310ed0
     * @note[short] Windows: 0x2a74d0
     * @note[short] iOS: 0x14fa80
     * @note[short] Android
     */
    static PurchaseItemPopup* create(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x2aa32c
     * @note[short] MacOS (Intel): 0x3140d0
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x151c10
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2a9818
     * @note[short] MacOS (Intel): 0x3134b0
     * @note[short] Windows: 0x2a75c0
     * @note[short] iOS: 0x151228
     * @note[short] Android
     */
    bool init(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x2aa27c
     * @note[short] MacOS (Intel): 0x314030
     * @note[short] Windows: 0x84620
     * @note[short] iOS: 0x151b60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2aa2b8
     * @note[short] MacOS (Intel): 0x314060
     * @note[short] Windows: 0x2a8470
     * @note[short] iOS: 0x151b9c
     * @note[short] Android
     */
    void onPurchase(cocos2d::CCObject* sender);
    GJStoreItem* m_storeItem;
    GJPurchaseDelegate* m_delegate;
};
