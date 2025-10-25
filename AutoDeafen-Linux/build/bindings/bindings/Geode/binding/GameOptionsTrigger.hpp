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

class GameOptionsTrigger : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "GameOptionsTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsTrigger, EffectGameObject)

    /**
     * @note[short] Android
     */
    static GameOptionsTrigger* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x162644
     * @note[short] MacOS (Intel): 0x19fa20
     * @note[short] Windows: 0x486d70
     * @note[short] iOS: 0x3792b0
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x160e08
     * @note[short] MacOS (Intel): 0x19db40
     * @note[short] Windows: 0x486600
     * @note[short] iOS: 0x378c58
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);
    GameOptionsSetting m_streakAdditive;
    GameOptionsSetting m_unlinkDualGravity;
    GameOptionsSetting m_hideGround;
    GameOptionsSetting m_hideP1;
    GameOptionsSetting m_hideP2;
    GameOptionsSetting m_disableP1Controls;
    GameOptionsSetting m_disableP2Controls;
    GameOptionsSetting m_hideMG;
    GameOptionsSetting m_hideAttempts;
    GameOptionsSetting m_editRespawnTime;
    float m_respawnTime;
    GameOptionsSetting m_audioOnDeath;
    GameOptionsSetting m_noDeathSFX;
    GameOptionsSetting m_boostSlide;
};
