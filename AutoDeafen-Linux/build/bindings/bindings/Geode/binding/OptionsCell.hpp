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

class OptionsCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "OptionsCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     OptionsCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1e26f8
     * @note[short] MacOS (Intel): 0x232740
     * @note[short] Windows: 0xb49f0
     * @note[short] iOS: 0x1055fc
     * @note[short] Android
     */
    void loadFromObject(OptionsObject* p0);

    /**
     * @note[short] Windows: 0xb4d90
     * @note[short] Android
     */
    void onToggleOption(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
    OptionsObject* m_optionsObject;
};
