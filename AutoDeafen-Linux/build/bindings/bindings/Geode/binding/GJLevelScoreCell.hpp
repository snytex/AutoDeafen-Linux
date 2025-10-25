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

class GJLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLevelScoreCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     GJLevelScoreCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1f2e24
     * @note[short] MacOS (Intel): 0x243de0
     * @note[short] Windows: 0x3c7f0
     * @note[short] iOS: 0x11405c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f2e6c
     * @note[short] MacOS (Intel): 0x243e30
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x1140a4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e8cec
     * @note[short] MacOS (Intel): 0x238d60
     * @note[short] Windows: 0xb93d0
     * @note[short] iOS: 0x10b8d4
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);

    /**
     * @note[short] Windows: 0xb9e30
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
    GJUserScore* m_userScore;
};
