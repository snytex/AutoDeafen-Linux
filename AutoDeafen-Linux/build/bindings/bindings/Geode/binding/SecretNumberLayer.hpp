#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SecretNumberLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretNumberLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretNumberLayer, cocos2d::CCLayer)

    /**
     * @note[short] Android
     */
    static SecretNumberLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x3fcf14
     * @note[short] MacOS (Intel): 0x4901a0
     * @note[short] Windows: 0x3ec90
     * @note[short] iOS: 0x30dd14
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    TodoReturn playNumberEffect(int p0);
};
