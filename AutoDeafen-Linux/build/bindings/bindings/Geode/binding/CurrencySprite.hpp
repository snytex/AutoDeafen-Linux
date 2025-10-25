#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class CurrencySprite : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CurrencySprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CurrencySprite, CCSpritePlus)

    /**
     * @note[short] Windows: 0x9f3c0
     * @note[short] Android: Rebinded
     */
     CurrencySprite();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~CurrencySprite();

    /**
     * @note[short] MacOS (ARM): 0x6a56c4
     * @note[short] MacOS (Intel): 0x792020
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CurrencySprite* create(CurrencySpriteType type, bool burst);

    /**
     * @note[short] MacOS (ARM): 0x6a63c0
     * @note[short] MacOS (Intel): 0x792ed0
     * @note[short] Windows: 0xa44b0
     * @note[short] Android
     */
    static CurrencySprite* createWithSprite(cocos2d::CCSprite* p0);

    /**
     * @note[short] Android
     */
    static CurrencySpriteType rewardToSpriteType(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6a5574
     * @note[short] MacOS (Intel): 0x791f20
     * @note[short] Windows: 0xa4780
     * @note[short] Android
     */
    static gd::string spriteTypeToStat(CurrencySpriteType p0);

    /**
     * @note[short] MacOS (ARM): 0x6a74c0
     * @note[short] MacOS (Intel): 0x794180
     * @note[short] Windows: 0xa2cd0
     * @note[short] Android
     */
    bool init(CurrencySpriteType p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x6a7dc8
     * @note[short] MacOS (Intel): 0x794ad0
     * @note[short] Android
     */
    bool initWithSprite(cocos2d::CCSprite* p0);
    float m_unkFloat1;
    float m_unkFloat2;
    float m_unkFloat3;
    float m_remaining;
    int m_count;
    cocos2d::CCParticleSystemQuad* m_particleSystem;
    CurrencySpriteType m_spriteType;
    cocos2d::CCPoint m_position;
    cocos2d::CCSprite* m_burstSprite;
};
