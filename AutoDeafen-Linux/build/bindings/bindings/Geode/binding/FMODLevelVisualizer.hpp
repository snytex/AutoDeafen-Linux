#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include <fmod.hpp>

class FMODLevelVisualizer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODLevelVisualizer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODLevelVisualizer, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x244748
     * @note[short] MacOS (Intel): 0x29cfb0
     * @note[short] Windows: 0x297150
     * @note[short] iOS: 0x2e0ba4
     * @note[short] Android
     */
    static FMODLevelVisualizer* create();

    /**
     * @note[short] MacOS (ARM): 0x2447d0
     * @note[short] MacOS (Intel): 0x29d020
     * @note[short] Windows: 0x2971d0
     * @note[short] iOS: 0x2e0c20
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x244c40
     * @note[short] MacOS (Intel): 0x29d460
     * @note[short] Windows: 0x297690
     * @note[short] iOS: 0x2e1008
     * @note[short] Android
     */
    void updateVisualizer(float volume, float peak, float time);
    float m_width;
};
