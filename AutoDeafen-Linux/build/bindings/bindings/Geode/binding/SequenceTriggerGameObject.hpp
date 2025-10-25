#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceTriggerGameObject.hpp"

class SequenceTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SequenceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SequenceTriggerGameObject, ChanceTriggerGameObject)

    /**
     * @note[short] Android
     */
    static SequenceTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x173448
     * @note[short] MacOS (Intel): 0x1b30a0
     * @note[short] Windows: 0x49bcd0
     * @note[short] iOS: 0x382e50
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x173498
     * @note[short] MacOS (Intel): 0x1b30f0
     * @note[short] Windows: 0x49bcf0
     * @note[short] iOS: 0x382ea0
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x173610
     * @note[short] MacOS (Intel): 0x1b33b0
     * @note[short] Windows: 0x49bd20
     * @note[short] iOS: 0x382ed0
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x173a9c
     * @note[short] MacOS (Intel): 0x1b3930
     * @note[short] Windows: 0x49c140
     * @note[short] iOS: 0x383188
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x173ec8
     * @note[short] MacOS (Intel): 0x1b3dd0
     * @note[short] Windows: 0x49c470
     * @note[short] iOS: 0x3834d8
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    void addCount(int p0, int p1);

    /**
     * @note[short] Android
     */
    void addTarget(int p0, int p1);

    /**
     * @note[short] Android
     */
    void deleteTarget(int p0);

    /**
     * @note[short] Android
     */
    bool reorderTarget(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void updateSequenceTotalCount();
    gd::unordered_map<int, float> m_sequenceTimes;
    gd::unordered_map<int, int> m_sequenceIndices;
    float m_minInt;
    int m_sequenceMode;
    int m_resetMode;
    float m_reset;
    int m_sequenceTotalCount;
    bool m_uniqueRemap;
};
