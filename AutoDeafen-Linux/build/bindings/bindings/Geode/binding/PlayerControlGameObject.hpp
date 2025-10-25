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

class PlayerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "PlayerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerControlGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static PlayerControlGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x194730
     * @note[short] MacOS (Intel): 0x1db900
     * @note[short] Windows: 0x4a9c60
     * @note[short] iOS: 0x390144
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x195378
     * @note[short] MacOS (Intel): 0x1dc830
     * @note[short] Windows: 0x4aa090
     * @note[short] iOS: 0x3904f0
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x194780
     * @note[short] MacOS (Intel): 0x1db950
     * @note[short] Windows: 0x4a9cd0
     * @note[short] iOS: 0x390194
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    bool m_stopJump;
    bool m_stopMove;
    bool m_stopRotation;
    bool m_stopSlide;
};
