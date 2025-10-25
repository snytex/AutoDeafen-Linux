#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"

class StatsCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "StatsCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StatsCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     StatsCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1f05d8
     * @note[short] MacOS (Intel): 0x240e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x112528
     * @note[short] Android: Out of line
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f1224
     * @note[short] MacOS (Intel): 0x241930
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x112c98
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1f05e0
     * @note[short] MacOS (Intel): 0x240e50
     * @note[short] Android
     */
    TodoReturn getTitleFromKey(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x1e50c0
     * @note[short] MacOS (Intel): 0x235030
     * @note[short] Windows: 0xb2630
     * @note[short] iOS: 0x107ea4
     * @note[short] Android
     */
    void loadFromObject(StatsObject* p0);

    /**
     * @note[short] iOS: 0x10819c
     * @note[short] Android
     */
    void updateBGColor(int p0);
};
