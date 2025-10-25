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

class CheckpointGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CheckpointGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CheckpointGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static CheckpointGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x180db0
     * @note[short] MacOS (Intel): 0x1c36c0
     * @note[short] Windows: 0x4a1240
     * @note[short] iOS: 0x388610
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1811f0
     * @note[short] MacOS (Intel): 0x1c3b10
     * @note[short] Windows: 0x4a1680
     * @note[short] iOS: 0x3889e4
     * @note[short] Android: Rebinded
     */
    virtual void setupCustomSprites(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x18256c
     * @note[short] MacOS (Intel): 0x1c5120
     * @note[short] Windows: 0x4a2470
     * @note[short] iOS: 0x389524
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x180e0c
     * @note[short] MacOS (Intel): 0x1c3720
     * @note[short] Windows: 0x4a12c0
     * @note[short] iOS: 0x38866c
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x182434
     * @note[short] MacOS (Intel): 0x1c4fe0
     * @note[short] Windows: 0x4a2340
     * @note[short] iOS: 0x38941c
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x181b0c
     * @note[short] MacOS (Intel): 0x1c44f0
     * @note[short] Windows: 0x4a2070
     * @note[short] iOS: 0x389178
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x180e24
     * @note[short] MacOS (Intel): 0x1c3740
     * @note[short] Windows: 0x4a12e0
     * @note[short] iOS: 0x388684
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS (ARM): 0x1825c4
     * @note[short] MacOS (Intel): 0x1c5190
     * @note[short] Windows: 0x4a2680
     * @note[short] iOS: 0x389574
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x181770
     * @note[short] MacOS (Intel): 0x1c40f0
     * @note[short] Windows: 0x4a1d20
     * @note[short] iOS: 0x388de8
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float p0, int p1);

    /**
     * @note[short] Windows: 0x4a24f0
     * @note[short] Android
     */
    void resetCheckpoint();

    /**
     * @note[short] Android
     */
    void updateCheckpointSpriteVisibility();
    bool m_checkpointActivated;
    int m_respawnID;
};
