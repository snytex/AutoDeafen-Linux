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

class GJPathRewardPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPathRewardPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathRewardPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x284e5c
     * @note[short] MacOS (Intel): 0x2ea940
     * @note[short] Android
     */
    static GJPathRewardPopup* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x289388
     * @note[short] MacOS (Intel): 0x2ef260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b45c0
     * @note[short] Android: Out of line
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x27dac0
     * @note[short] Android
     */
    void closePopup();

    /**
     * @note[short] MacOS (ARM): 0x288d28
     * @note[short] MacOS (Intel): 0x2eec40
     * @note[short] Windows: 0x2825f0
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2891c4
     * @note[short] MacOS (Intel): 0x2ef0d0
     * @note[short] Windows: 0x282ad0
     * @note[short] Android
     */
    void onClaim(cocos2d::CCObject* sender);
    int m_pathNumber;
};
