#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ExplodeItemSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ExplodeItemSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExplodeItemSprite, cocos2d::CCSprite)

    /**
     * @note[short] Android
     */
    static ExplodeItemSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x1b8200
     * @note[short] MacOS (Intel): 0x202eb0
     * @note[short] Windows: 0x36f5c0
     * @note[short] iOS: 0x6132c
     * @note[short] Android
     */
    virtual bool init();
    float m_xVelocity;
    float m_yVelocity;
    float m_timeRemaining;
    float m_fadeOutTime;
    float m_rotVelocity;
    cocos2d::CCParticleSystemQuad* m_particles;
};
