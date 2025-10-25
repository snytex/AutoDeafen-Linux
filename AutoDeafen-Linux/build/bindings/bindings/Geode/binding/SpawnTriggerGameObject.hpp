#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceObject.hpp"
#include "EffectGameObject.hpp"

class SpawnTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static SpawnTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x17f0fc
     * @note[short] MacOS (Intel): 0x1c1560
     * @note[short] Windows: 0x4a0530
     * @note[short] iOS: 0x387770
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x17f408
     * @note[short] MacOS (Intel): 0x1c1900
     * @note[short] Windows: 0x4a06a0
     * @note[short] iOS: 0x3879b8
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x17f980
     * @note[short] MacOS (Intel): 0x1c1de0
     * @note[short] Windows: 0x4a0a10
     * @note[short] iOS: 0x387d78
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x17fd34
     * @note[short] MacOS (Intel): 0x1c2240
     * @note[short] Windows: 0x4a0d50
     * @note[short] iOS: 0x3880cc
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    void addRemap(int p0, int p1);

    /**
     * @note[short] Android
     */
    void changeRemap(int p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    void removeRemap(int p0, int p1);

    /**
     * @note[short] Windows: 0x4a05a0
     * @note[short] Android: Rebinded
     */
    void updateRemapKeys(gd::vector<int> const& p0);
    gd::vector<ChanceObject> m_remapObjects;
    int m_remapKey;
    gd::vector<int> m_remapKeys;
    double m_currentDelay;
    float m_spawnDelay;
    float m_delayRange;
    bool m_resetRemap;
};
