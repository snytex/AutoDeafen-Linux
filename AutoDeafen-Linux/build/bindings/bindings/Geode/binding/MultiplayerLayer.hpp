#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MultiplayerLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MultiplayerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MultiplayerLayer, cocos2d::CCLayer)

    /**
     * @note[short] Android
     */
    static MultiplayerLayer* create();

    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3178dc
     * @note[short] MacOS (Intel): 0x387db0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3179b4
     * @note[short] MacOS (Intel): 0x387ea0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);
};
