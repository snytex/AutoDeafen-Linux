#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGameState.hpp"
#include "GJShaderState.hpp"
#include "FMODAudioState.hpp"
#include "EffectManagerState.hpp"
#include "SavedObjectStateRef.hpp"
#include "SavedActiveObjectState.hpp"
#include "SavedSpecialObjectState.hpp"
#include "SequenceTriggerState.hpp"

class CheckpointObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CheckpointObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CheckpointObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0xb4190
     * @note[short] MacOS (Intel): 0xcaa60
     * @note[short] Windows: 0x38e330
     * @note[short] iOS: 0x12aa1c
     * @note[short] Android: Rebinded
     */
     CheckpointObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~CheckpointObject();

    /**
     * @note[short] MacOS (ARM): 0xab538
     * @note[short] MacOS (Intel): 0xbc3a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x123900
     * @note[short] Android
     */
    static CheckpointObject* create();

    /**
     * @note[short] MacOS (ARM): 0xae344
     * @note[short] MacOS (Intel): 0xbfa20
     * @note[short] Windows: 0x77db0
     * @note[short] iOS: 0x126110
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    TodoReturn getObject();

    /**
     * @note[short] Android
     */
    void setObject(GameObject* p0);
    GJGameState m_gameState;
    GJShaderState m_shaderState;
    FMODAudioState m_audioState;
    GameObject* m_physicalCheckpointObject;
    PlayerCheckpoint* m_player1Checkpoint;
    PlayerCheckpoint* m_player2Checkpoint;
    int m_unke78;
    int m_unke7c;
    float m_unke80;
    bool m_ground2Invisible;
    bool m_streakBlend;
    int m_uniqueID;
    int m_respawnID;
    gd::vector<SavedObjectStateRef> m_vectorSavedObjectStateRef;
    gd::vector<SavedActiveObjectState> m_vectorActiveSaveObjectState;
    gd::vector<SavedSpecialObjectState> m_vectorSpecialSaveObjectState;
    EffectManagerState m_effectManagerState;
    cocos2d::CCArray* m_gradientTriggerObjectArray;
    bool m_unk11e8;
    gd::unordered_map<int,SequenceTriggerState> m_sequenceTriggerStateUnorderedMap;
    int m_commandIndex;
};
