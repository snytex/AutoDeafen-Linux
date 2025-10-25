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

class NewgroundsInfoLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "NewgroundsInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NewgroundsInfoLayer, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static NewgroundsInfoLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x1baac0
     * @note[short] MacOS (Intel): 0x205a50
     * @note[short] Windows: 0xc4930
     * @note[short] iOS: 0x1491ec
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1bb5c4
     * @note[short] MacOS (Intel): 0x206530
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x149c54
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1bb56c
     * @note[short] MacOS (Intel): 0x2064d0
     * @note[short] Windows: 0xc5690
     * @note[short] iOS: 0x149bfc
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    void onArtists(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bb3ac
     * @note[short] MacOS (Intel): 0x206360
     * @note[short] Android
     */
    void onChanges(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bb364
     * @note[short] MacOS (Intel): 0x206320
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bb488
     * @note[short] MacOS (Intel): 0x206420
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bb340
     * @note[short] MacOS (Intel): 0x206300
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1bb388
     * @note[short] MacOS (Intel): 0x206340
     * @note[short] Android
     */
    void onSupporter(cocos2d::CCObject* sender);
};
