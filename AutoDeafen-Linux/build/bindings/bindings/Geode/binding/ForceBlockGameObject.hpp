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

class ForceBlockGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ForceBlockGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ForceBlockGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static ForceBlockGameObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x193bfc
     * @note[short] MacOS (Intel): 0x1dacc0
     * @note[short] Windows: 0x4a91e0
     * @note[short] iOS: 0x38f9a8
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x192f78
     * @note[short] MacOS (Intel): 0x1d9d40
     * @note[short] Windows: 0x4a8e00
     * @note[short] iOS: 0x38f600
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: 0x4a9370
     * @note[short] Android
     */
    cocos2d::CCPoint calculateForceToTarget(GameObject* p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);
    float m_force;
    float m_minForce;
    float m_maxForce;
    bool m_relativeForce;
    bool m_forceRange;
    int m_forceID;
};
