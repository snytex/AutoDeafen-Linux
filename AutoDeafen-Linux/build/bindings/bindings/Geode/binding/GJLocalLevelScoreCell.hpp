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

class GJLocalLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLocalLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLocalLevelScoreCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     GJLocalLevelScoreCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1f2cec
     * @note[short] MacOS (Intel): 0x243bf0
     * @note[short] Windows: 0x3c7f0
     * @note[short] iOS: 0x113f6c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f2cf8
     * @note[short] MacOS (Intel): 0x243c10
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x113f78
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e96ac
     * @note[short] MacOS (Intel): 0x239740
     * @note[short] Windows: 0xb8fd0
     * @note[short] Android
     */
    void loadFromScore(GJLocalScore* p0);

    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
    GJLocalScore* m_localScore;
};
