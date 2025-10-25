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

class ListCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "ListCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ListCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     ListCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x291c48
     * @note[short] MacOS (Intel): 0x2f9370
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d139c
     * @note[short] Android: Out of line
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x291c94
     * @note[short] MacOS (Intel): 0x2f9400
     * @note[short] Windows: 0x3c6f0
     * @note[short] iOS: 0x1d13a4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void loadFromObject(cocos2d::CCObject* p0, int p1, int p2, int p3);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateBGColor(int p0);
    int m_unk230;
};
