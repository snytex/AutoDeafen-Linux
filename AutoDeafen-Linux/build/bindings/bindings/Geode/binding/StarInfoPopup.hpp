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

class StarInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "StarInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StarInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6bdd58
     * @note[short] MacOS (Intel): 0x7ac620
     * @note[short] Windows: 0x3b0cb0
     * @note[short] iOS: 0x1a0c18
     * @note[short] Android
     */
    static StarInfoPopup* create(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, bool p9);

    /**
     * @note[short] MacOS (ARM): 0x6baa6c
     * @note[short] MacOS (Intel): 0x7a9160
     * @note[short] Windows: 0x3b0720
     * @note[short] iOS: 0x19e8c8
     * @note[short] Android: Rebinded
     */
    static StarInfoPopup* createFromString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x6bacd4
     * @note[short] MacOS (Intel): 0x7a93f0
     * @note[short] Windows: 0x3b0a00
     * @note[short] iOS: 0x19ea78
     * @note[short] Android: Rebinded
     */
    static StarInfoPopup* createFromStringMoons(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x6be87c
     * @note[short] MacOS (Intel): 0x7ad0e0
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x1a1584
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6bdeb0
     * @note[short] MacOS (Intel): 0x7ac7b0
     * @note[short] Windows: 0x3b0df0
     * @note[short] iOS: 0x1a0d34
     * @note[short] Android
     */
    bool init(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, bool p9);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
