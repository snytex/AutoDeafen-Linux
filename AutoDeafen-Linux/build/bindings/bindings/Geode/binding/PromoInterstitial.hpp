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

class PromoInterstitial : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PromoInterstitial";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PromoInterstitial, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static PromoInterstitial* create(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x265a58
     * @note[short] MacOS (Intel): 0x2c16d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x265cc8
     * @note[short] MacOS (Intel): 0x2c18f0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x265ba8
     * @note[short] MacOS (Intel): 0x2c17d0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x265c58
     * @note[short] MacOS (Intel): 0x2c1870
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2658d4
     * @note[short] MacOS (Intel): 0x2c1530
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2658a8
     * @note[short] MacOS (Intel): 0x2c1500
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x2659e0
     * @note[short] MacOS (Intel): 0x2c1650
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x26567c
     * @note[short] MacOS (Intel): 0x2c12a0
     * @note[short] Android
     */
    void setup();
    bool m_fullVersion;
    cocos2d::CCMenu* m_closeMenu;
    bool m_promoTouched;
    gd::string m_marketLink;
    bool m_showAdBanner;
};
