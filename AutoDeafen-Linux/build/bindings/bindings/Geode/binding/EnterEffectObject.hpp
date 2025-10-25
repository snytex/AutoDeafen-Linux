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

class EnterEffectObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EnterEffectObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnterEffectObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static EnterEffectObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x14e030
     * @note[short] MacOS (Intel): 0x186570
     * @note[short] Windows: 0x47fbf0
     * @note[short] iOS: 0x36ffc0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x14e368
     * @note[short] MacOS (Intel): 0x1868b0
     * @note[short] Windows: 0x47fd50
     * @note[short] iOS: 0x370254
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x140604
     * @note[short] MacOS (Intel): 0x174880
     * @note[short] Windows: 0x47df50
     * @note[short] iOS: 0x369c38
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);

    /**
     * @note[short] Android
     */
    void resetEnterAnimValues();
    int m_enterType;
    int m_length;
    int m_lengthVariance;
    int m_offset;
    int m_offsetVariance;
    int m_offsetY;
    int m_offsetYVariance;
    int m_moveDistance;
    int m_moveDistanceVariance;
    float m_areaScaleX;
    float m_areaScaleXVariance;
    float m_areaScaleY;
    float m_areaScaleYVariance;
    int m_moveAngle;
    int m_moveAngleVariance;
    bool m_startAngle;
    cocos2d::CCPoint m_anglePosition;
    bool m_relative;
    float m_relativeFade;
    EasingType m_easingInType;
    float m_easingInRate;
    int m_easingInBuffer;
    EasingType m_easingOutType;
    float m_easingOutRate;
    int m_easingOutBuffer;
    int m_moveX;
    int m_moveXVariance;
    int m_moveY;
    int m_moveYVariance;
    int m_tintChannelID;
    int m_property224;
    int m_directionType;
    bool m_xyMode;
    bool m_easeOutEnabled;
    float m_modFront;
    float m_modBack;
    float m_areaTint;
    float m_property285;
    int m_effectID;
    float m_areaRotation;
    float m_areaRotationVariance;
    float m_toOpacity;
    float m_fromOpacity;
    bool m_inbound;
    bool m_hsvEnabled;
    float m_deadzone;
    bool m_twoDirections;
    bool m_dontEditAreaParent;
    int m_priority;
    int m_unk7d8;
    int m_enterChannel;
    bool m_useEffectID;
    cocos2d::CCPoint m_unk7e4;
    cocos2d::CCPoint m_unk7ec;
    bool m_negativeTargetX;
    int m_areaRange;
    int m_unk7fc;
};
