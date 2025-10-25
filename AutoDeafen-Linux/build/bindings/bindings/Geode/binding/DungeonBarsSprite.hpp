#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DungeonBarsSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "DungeonBarsSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DungeonBarsSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DungeonBarsSprite();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static DungeonBarsSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x401c4c
     * @note[short] MacOS (Intel): 0x495430
     * @note[short] Windows: 0x3d8470
     * @note[short] iOS: 0x3119ac
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x401ccc
     * @note[short] MacOS (Intel): 0x4954b0
     * @note[short] Windows: 0x3d84f0
     * @note[short] iOS: 0x311a2c
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void animateOutBars();
    cocos2d::CCSprite* m_barsSprite;
};
