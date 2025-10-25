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

class TriggerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TriggerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TriggerControlGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static TriggerControlGameObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x1965fc
     * @note[short] MacOS (Intel): 0x1ddd40
     * @note[short] Windows: 0x4aa7d0
     * @note[short] iOS: 0x390e54
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x1963a4
     * @note[short] MacOS (Intel): 0x1ddaf0
     * @note[short] Windows: 0x4aa6e0
     * @note[short] iOS: 0x390c9c
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x195c04
     * @note[short] MacOS (Intel): 0x1dd1f0
     * @note[short] Windows: 0x4aa480
     * @note[short] iOS: 0x390a54
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x196494
     * @note[short] MacOS (Intel): 0x1ddbe0
     * @note[short] Windows: 0x4aa800
     * @note[short] Android
     */
    void updateTriggerControlFrame();
    gd::string m_triggerControlFrame;
    GJActionCommand m_customTriggerValue;
};
