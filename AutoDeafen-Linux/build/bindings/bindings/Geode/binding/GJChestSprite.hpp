#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChestSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJChestSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChestSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x1bfc94
     * @note[short] MacOS (Intel): 0x20b1d0
     * @note[short] Windows: 0x3ba270
     * @note[short] Android
     */
    static GJChestSprite* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1c2724
     * @note[short] MacOS (Intel): 0x20df10
     * @note[short] Windows: 0x3ba400
     * @note[short] iOS: 0x1c8f68
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x1c2650
     * @note[short] MacOS (Intel): 0x20de20
     * @note[short] Windows: 0x3ba340
     * @note[short] iOS: 0x1c8e98
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x1c25ec
     * @note[short] MacOS (Intel): 0x20ddc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x1c103c
     * @note[short] MacOS (Intel): 0x20c800
     * @note[short] Windows: 0x3ba470
     * @note[short] iOS: 0x1c7a00
     * @note[short] Android
     */
    void switchToState(ChestSpriteState p0, bool p1);
    int m_chestType;
    ChestSpriteState m_spriteState;
    bool m_dark;
};
