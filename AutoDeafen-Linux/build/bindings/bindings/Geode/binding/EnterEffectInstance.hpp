#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EnterEffectInstance {
public:
    static constexpr auto CLASS_NAME = "EnterEffectInstance";

    /**
     * @note[short] Android: Out of line
     */
     EnterEffectInstance();

    /**
     * @note[short] Android: Rebinded
     */
     EnterEffectInstance(EnterEffectObject* p0, int p1, int p2, int p3, int p4, int p5, int p6);

    /**
     * @note[short] Windows: 0x1378e0
     * @note[short] Android
     */
    void animateValue(int p0, float p1, float p2, float p3, int p4, float p5, int p6);

    /**
     * @note[short] Android
     */
    float getValue(int p0);

    /**
     * @note[short] Windows: 0x136d00
     * @note[short] Android
     */
    void loadTransitions(EnterEffectObject* p0, float p1);

    /**
     * @note[short] Windows: 0x136b60
     * @note[short] Android
     */
    void loadValuesFromObject(EnterEffectObject* p0);

    /**
     * @note[short] Windows: 0x137d00
     * @note[short] Android
     */
    void setValue(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4f1338
     * @note[short] MacOS (Intel): 0x5bb680
     * @note[short] Windows: 0x137ad0
     * @note[short] Android
     */
    void updateTransitions(float p0, GJBaseGameLayer* p1);
    gd::map<int,EnterEffectAnimValue> m_enterEffectAnimMap;
    float m_length;
    float m_lengthVariance;
    float m_offset;
    float m_offsetVariance;
    float m_offsetY;
    float m_offsetYVariance;
    float m_modFront;
    float m_modBack;
    float m_deadzone;
    float m_moveDistance;
    float m_moveDistanceVariance;
    float m_moveAngle;
    float m_moveAngleVariance;
    float m_moveX;
    float m_moveXVariance;
    float m_moveY;
    float m_moveYVariance;
    float m_relativeFade;
    float m_scaleX;
    float m_scaleXVariance;
    float m_scaleY;
    float m_scaleYVariance;
    float m_rotation;
    float m_rotationVariance;
    float m_tint;
    float m_unk074;
    float m_toOpacity;
    float m_fromOpacity;
    cocos2d::ccHSVValue m_hsvValue;
    float m_hue;
    float m_saturation;
    float m_value;
    EnterEffectObject* m_gameObject;
    bool m_unkBool1;
    int m_targetID;
    int m_centerID;
    float m_unkFloat3;
    float m_unkFloat4;
    bool m_unkBool2;
    bool m_unkBool3;
    bool m_unkBool4;
    int m_unkFloat5;
    gd::vector<int> m_unkVecInt;
    int m_controlID;
};
