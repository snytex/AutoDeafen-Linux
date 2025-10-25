#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayerCheckpoint : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "PlayerCheckpoint";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerCheckpoint, cocos2d::CCNode)

    /**
     * @note[short] Android: Rebinded
     */
     PlayerCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0xab5b8
     * @note[short] MacOS (Intel): 0xbc400
     * @note[short] Windows: 0x3a4210
     * @note[short] iOS: 0x123974
     * @note[short] Android
     */
    static PlayerCheckpoint* create();

    /**
     * @note[short] MacOS (ARM): 0xae214
     * @note[short] MacOS (Intel): 0xbf850
     * @note[short] Windows: 0x77db0
     * @note[short] iOS: 0x126030
     * @note[short] Android
     */
    virtual bool init();
    cocos2d::CCPoint m_position;
    cocos2d::CCPoint m_lastPosition;
    float m_yVelocity;
    bool m_isUpsideDown;
    bool m_isSideways;
    bool m_isShip;
    bool m_isBall;
    bool m_isBird;
    bool m_isSwing;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isOnGround;
    GhostType m_ghostType;
    bool m_miniMode;
    float m_speed;
    bool m_hidden;
    bool m_goingLeft;
    float m_reverseSpeed;
    bool m_dashing;
    float m_dashX;
    float m_dashY;
    float m_dashAngle;
    float m_dashStartTime;
    DashRingObject* m_dashRingObject;
    bool m_platformerCheckpoint;
    double m_lastFlipTime;
    float m_gravityMod;
    bool m_decreaseBoostSlide;
    int m_followRelated;
    gd::vector<float> m_playerFollowFloats;
    float m_followRelated2;
};
