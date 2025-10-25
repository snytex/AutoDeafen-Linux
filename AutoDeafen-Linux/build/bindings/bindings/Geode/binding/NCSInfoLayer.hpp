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

class NCSInfoLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "NCSInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NCSInfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NCSInfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x1b96c0
     * @note[short] MacOS (Intel): 0x2044d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static NCSInfoLayer* create(CustomSongLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x1bbda8
     * @note[short] MacOS (Intel): 0x206d40
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x14a3ac
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1bb640
     * @note[short] MacOS (Intel): 0x2065a0
     * @note[short] Windows: 0xc56c0
     * @note[short] Android
     */
    bool init(CustomSongLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x1bb2d0
     * @note[short] MacOS (Intel): 0x2062a0
     * @note[short] Windows: 0x84620
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bbc9c
     * @note[short] MacOS (Intel): 0x206c40
     * @note[short] Windows: 0xc5f10
     * @note[short] Android
     */
    void onLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bbd00
     * @note[short] MacOS (Intel): 0x206cb0
     * @note[short] Windows: 0xc5eb0
     * @note[short] Android
     */
    void onNCS(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bbd24
     * @note[short] MacOS (Intel): 0x206cd0
     * @note[short] Windows: 0xc5ed0
     * @note[short] Android
     */
    void onNCSIO(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bbd48
     * @note[short] MacOS (Intel): 0x206cf0
     * @note[short] Windows: 0xc5ef0
     * @note[short] Android
     */
    void onNCSUsage(cocos2d::CCObject* sender);
    CustomSongLayer* m_songLayer;
};
