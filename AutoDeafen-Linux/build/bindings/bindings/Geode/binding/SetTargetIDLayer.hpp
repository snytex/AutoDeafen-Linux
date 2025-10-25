#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetTargetIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetTargetIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTargetIDLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x3ea050
     * @note[short] Android: Rebinded
     */
    static SetTargetIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1, gd::string p2, gd::string p3, int p4, int p5, int p6);

    /**
     * @note[short] MacOS (ARM): 0x24d528
     * @note[short] MacOS (Intel): 0x2a6e20
     * @note[short] Windows: 0x287910
     * @note[short] iOS: 0x2142c0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x24d52c
     * @note[short] MacOS (Intel): 0x2a6e30
     * @note[short] Windows: 0x3ea680
     * @note[short] iOS: 0x2142c4
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x24d190
     * @note[short] MacOS (Intel): 0x2a6a20
     * @note[short] Windows: 0x3ea1e0
     * @note[short] Android: Rebinded
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, gd::string p2, gd::string p3, int p4, int p5, int p6);
    int m_objectID;
    int m_minimumID;
    int m_maximumID;
};
