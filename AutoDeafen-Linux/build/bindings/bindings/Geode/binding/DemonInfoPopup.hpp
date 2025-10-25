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

class DemonInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6bd1f0
     * @note[short] MacOS (Intel): 0x7aba80
     * @note[short] Windows: 0x3afc90
     * @note[short] Android
     */
    static DemonInfoPopup* create(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x6baf10
     * @note[short] MacOS (Intel): 0x7a9640
     * @note[short] Windows: 0x3af8c0
     * @note[short] Android: Rebinded
     */
    static DemonInfoPopup* createFromString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x6bdcdc
     * @note[short] MacOS (Intel): 0x7ac5b0
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x1a0b9c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6bd34c
     * @note[short] MacOS (Intel): 0x7abc10
     * @note[short] Windows: 0x3afdf0
     * @note[short] iOS: 0x1a02a8
     * @note[short] Android
     */
    bool init(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet);

    /**
     * @note[short] Windows: 0x84620
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
