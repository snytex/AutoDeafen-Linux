#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class AdvancedFollowTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "AdvancedFollowTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AdvancedFollowTriggerObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static AdvancedFollowTriggerObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x15ee0c
     * @note[short] MacOS (Intel): 0x19b5d0
     * @note[short] Windows: 0x485150
     * @note[short] iOS: 0x377698
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x157e00
     * @note[short] MacOS (Intel): 0x192350
     * @note[short] Windows: 0x482f50
     * @note[short] iOS: 0x375858
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    int getAdvancedFollowID();

    /**
     * @note[short] Android
     */
    bool init(char const* p0);
    float m_delay;
    float m_delayVariance;
    float m_startSpeed;
    float m_startSpeedVariance;
    int m_startSpeedReference;
    float m_startDirection;
    float m_startDirectionVariance;
    int m_startDirectionReference;
    float m_maxSpeed;
    float m_maxSpeedVariance;
    bool m_xOnly;
    bool m_yOnly;
    float m_maxRange;
    float m_maxRangeVariance;
    float m_property310;
    float m_property311;
    float m_acceleration;
    float m_accelerationVariance;
    float m_property312;
    float m_property313;
    float m_property314;
    float m_property315;
    float m_steerForce;
    float m_steerForceVariance;
    bool m_steerForceLowEnabled;
    float m_steerForceLow;
    float m_steerForceLowVariance;
    bool m_steerForceHighEnabled;
    float m_steerForceHigh;
    float m_steerFroceHighVariance;
    float m_speedRangeLow;
    float m_speedRangeLowVariance;
    float m_speedRangeHigh;
    float m_speedRangeHighVariance;
    float m_breakForce;
    float m_breakForceVariance;
    float m_breakAngle;
    float m_breakAngleVariance;
    float m_breakSteerForce;
    float m_breakSteerForceVariance;
    float m_breakSteerSpeedLimit;
    float m_breakSteerSpeedLimitVariance;
    bool m_targetDirection;
    bool m_ignoreDisabled;
    bool m_rotateDirection;
    float m_rotationOffset;
    float m_nearAcceleration;
    float m_nearAccelerationVariance;
    float m_nearDistance;
    float m_nearDistanceVariance;
    float m_nearFriction;
    float m_nearFrictionVariance;
    float m_friction;
    float m_frictionVariance;
    float m_easing;
    float m_easingVariance;
    float m_rotateEasing;
    float m_rotateDeadZ;
    int m_priority;
    int m_unk7fc;
    int m_maxRangeReference;
    int m_followMode;
    bool m_exclusive;
    int m_startMode;
};
