#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayerFireBoostSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "PlayerFireBoostSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerFireBoostSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x36c2a4
     * @note[short] MacOS (Intel): 0x3ea580
     * @note[short] Windows: 0x38cf30
     * @note[short] iOS: 0x219854
     * @note[short] Android
     */
    static PlayerFireBoostSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x388cac
     * @note[short] MacOS (Intel): 0x40b6c0
     * @note[short] Windows: 0x38cfd0
     * @note[short] iOS: 0x22e9e0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x384370
     * @note[short] MacOS (Intel): 0x4066d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22b19c
     * @note[short] Android
     */
    void animateFireIn();

    /**
     * @note[short] MacOS (ARM): 0x3843f0
     * @note[short] MacOS (Intel): 0x406740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22b214
     * @note[short] Android
     */
    void animateFireOut();

    /**
     * @note[short] MacOS (ARM): 0x384094
     * @note[short] MacOS (Intel): 0x4063f0
     * @note[short] Windows: 0x38d030
     * @note[short] iOS: 0x22af54
     * @note[short] Android
     */
    void loopFireAnimation();
    float m_size;
};
