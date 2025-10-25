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

class RotateGameplayGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RotateGameplayGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RotateGameplayGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static RotateGameplayGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x198058
     * @note[short] MacOS (Intel): 0x1dfcf0
     * @note[short] Windows: 0x4ab3a0
     * @note[short] iOS: 0x3918bc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x199834
     * @note[short] MacOS (Intel): 0x1e1a10
     * @note[short] Windows: 0x4abcc0
     * @note[short] iOS: 0x392124
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS (ARM): 0x199544
     * @note[short] MacOS (Intel): 0x1e1690
     * @note[short] Windows: 0x4aba30
     * @note[short] iOS: 0x391e68
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x1980a8
     * @note[short] MacOS (Intel): 0x1dfd40
     * @note[short] Windows: 0x4ab410
     * @note[short] iOS: 0x39190c
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    void updateGameplayRotation();
    int m_moveDirection;
    int m_groundDirection;
    bool m_editVelocity;
    bool m_overrideVelocity;
    float m_velocityModX;
    float m_velocityModY;
    bool m_changeChannel;
    bool m_channelOnly;
    int m_targetChannelID;
    bool m_instantOffset;
    bool m_dontSlide;
};
