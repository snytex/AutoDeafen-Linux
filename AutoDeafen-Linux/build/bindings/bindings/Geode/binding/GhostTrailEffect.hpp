#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GhostTrailEffect : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GhostTrailEffect";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GhostTrailEffect, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x5148f0
     * @note[short] MacOS (Intel): 0x5e22a0
     * @note[short] Windows: 0x69fd0
     * @note[short] Android
     */
    static GhostTrailEffect* create();

    /**
     * @note[short] MacOS (ARM): 0x5149c0
     * @note[short] MacOS (Intel): 0x5e2370
     * @note[short] Windows: 0x6a0b0
     * @note[short] iOS: 0x2f4eec
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x514f28
     * @note[short] MacOS (Intel): 0x5e2920
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5450
     * @note[short] Android: Out of line
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x514f18
     * @note[short] MacOS (Intel): 0x5e2900
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void doBlendAdditive();

    /**
     * @note[short] MacOS (ARM): 0x514a1c
     * @note[short] MacOS (Intel): 0x5e23d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f4f48
     * @note[short] Android
     */
    void runWithTarget(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, bool p5);

    /**
     * @note[short] MacOS (ARM): 0x514ec8
     * @note[short] MacOS (Intel): 0x5e28c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f53f0
     * @note[short] Android
     */
    void stopTrail();

    /**
     * @note[short] MacOS (ARM): 0x514ad0
     * @note[short] MacOS (Intel): 0x5e2470
     * @note[short] Windows: 0x6a110
     * @note[short] iOS: 0x2f4ff8
     * @note[short] Android
     */
    void trailSnapshot(float p0);
    float m_snapshotInterval;
    float m_fadeInterval;
    float m_ghostScale;
    bool m_scaleTwice;
    float m_playerScale;
    cocos2d::_ccBlendFunc m_blendFunc;
    cocos2d::CCSprite* m_iconSprite;
    PlayerObject* m_playerObject;
    cocos2d::CCLayer* m_objectLayer;
    float m_opacity;
    void* m_delegate;
    cocos2d::ccColor3B m_color;
    cocos2d::CCPoint m_position;
    bool m_unk194;
};
