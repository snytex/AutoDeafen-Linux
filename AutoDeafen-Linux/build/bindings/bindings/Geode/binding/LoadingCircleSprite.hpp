#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingCircleSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "LoadingCircleSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircleSprite, cocos2d::CCSprite)

    /**
Create a Loading Circle Sprite with a spinning action

 @param spinSpeed A speed modifier, higher is faster and lower is slo     * @note[short] MacOS (ARM): 0x415268
     * @note[short] MacOS (Intel): 0x4ac190
     * @note[short] Windows: 0x6bc30
     * @note[short] iOS: 0x392fc0
     * @note[short] Android
     */
    static LoadingCircleSprite* create(float spinSpeed);

    /**
     * @note[short] MacOS (ARM): 0x4153e4
     * @note[short] MacOS (Intel): 0x4ac330
     * @note[short] Windows: 0x6bd30
     * @note[short] iOS: 0x3930ec
     * @note[short] Android
     */
    cocos2d::CCAction* fadeInCircle(bool p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x415470
     * @note[short] MacOS (Intel): 0x4ac3b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideCircle();

    /**
     * @note[short] MacOS (ARM): 0x41534c
     * @note[short] MacOS (Intel): 0x4ac270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x393058
     * @note[short] Android
     */
    bool init(float spinSpeed);
};
