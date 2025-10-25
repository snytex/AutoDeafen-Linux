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

class GJPromoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPromoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPromoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJPromoPopup();

    /**
     * @note[short] MacOS (ARM): 0x249be0
     * @note[short] MacOS (Intel): 0x2a2de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e4d9c
     * @note[short] Android: Rebinded
     */
    static GJPromoPopup* create(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x249ff4
     * @note[short] MacOS (Intel): 0x2a3260
     * @note[short] Windows: 0x29d890
     * @note[short] iOS: 0x2e515c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x24a104
     * @note[short] MacOS (Intel): 0x2a3370
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x2e519c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x24a034
     * @note[short] MacOS (Intel): 0x2a32a0
     * @note[short] Windows: 0x27db20
     * @note[short] iOS: 0x2e5190
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x24a13c
     * @note[short] MacOS (Intel): 0x2a33b0
     * @note[short] Windows: 0x867a0
     * @note[short] iOS: 0x2e51d4
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x249d48
     * @note[short] MacOS (Intel): 0x2a2f80
     * @note[short] Windows: 0x29d590
     * @note[short] iOS: 0x2e4eb4
     * @note[short] Android: Rebinded
     */
    bool init(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x249f8c
     * @note[short] MacOS (Intel): 0x2a3200
     * @note[short] Windows: 0x27dac0
     * @note[short] iOS: 0x2e50f4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    gd::string m_promoFrame;
};
