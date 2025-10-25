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
#include "FLAlertLayerProtocol.hpp"

class GJPathsLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJPathsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x28446c
     * @note[short] MacOS (Intel): 0x2e9ed0
     * @note[short] Windows: 0x27d1d0
     * @note[short] Android
     */
    static GJPathsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x2842bc
     * @note[short] MacOS (Intel): 0x2e9d30
     * @note[short] Windows: 0x27cf60
     * @note[short] iOS: 0x3b068c
     * @note[short] Android
     */
    static gd::string nameForPath(int p0);

    /**
     * @note[short] MacOS (ARM): 0x28456c
     * @note[short] MacOS (Intel): 0x2ea020
     * @note[short] Windows: 0x27d2d0
     * @note[short] iOS: 0x3b07ac
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x284c94
     * @note[short] MacOS (Intel): 0x2ea730
     * @note[short] Windows: 0x27d830
     * @note[short] iOS: 0x3b0e34
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x285028
     * @note[short] MacOS (Intel): 0x2eab50
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x3b1024
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x284f58
     * @note[short] MacOS (Intel): 0x2eaa80
     * @note[short] Windows: 0x27db20
     * @note[short] iOS: 0x3b1018
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x285060
     * @note[short] MacOS (Intel): 0x2eab90
     * @note[short] Windows: 0x867a0
     * @note[short] iOS: 0x3b105c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x284ce4
     * @note[short] MacOS (Intel): 0x2ea780
     * @note[short] Android
     */
    void darkenButtons(bool p0);

    /**
     * @note[short] Windows: 0x27dac0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x284c04
     * @note[short] MacOS (Intel): 0x2ea6b0
     * @note[short] Windows: 0x27d880
     * @note[short] Android
     */
    void onPath(cocos2d::CCObject* sender);
    cocos2d::CCSprite* m_closeSprite;
    bool m_exiting;
};
