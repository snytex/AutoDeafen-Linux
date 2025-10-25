#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SecretLayer6 : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretLayer6";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer6, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3db37c
     * @note[short] MacOS (Intel): 0x46bd70
     * @note[short] Android
     */
    static SecretLayer6* create();

    /**
     * @note[short] MacOS (ARM): 0x3db2c0
     * @note[short] MacOS (Intel): 0x46bca0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3db420
     * @note[short] MacOS (Intel): 0x46be20
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3dbf78
     * @note[short] MacOS (Intel): 0x46caa0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3db8a4
     * @note[short] MacOS (Intel): 0x46c2e0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3db8f4
     * @note[short] MacOS (Intel): 0x46c330
     * @note[short] Android
     */
    void startGame01();
    SecretGame01Layer* m_gameLayer;
};
