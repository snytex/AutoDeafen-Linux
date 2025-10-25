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

class AchievementCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "AchievementCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     AchievementCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1ec614
     * @note[short] MacOS (Intel): 0x23c930
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10ebb4
     * @note[short] Android: Out of line
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1ec61c
     * @note[short] MacOS (Intel): 0x23c940
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x10ebbc
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e0ec4
     * @note[short] MacOS (Intel): 0x230eb0
     * @note[short] Windows: 0xac150
     * @note[short] iOS: 0x1042ec
     * @note[short] Android
     */
    void loadFromDict(cocos2d::CCDictionary* p0);

    /**
     * @note[short] iOS: 0x1051c8
     * @note[short] Android
     */
    void updateBGColor(int p0);
};
