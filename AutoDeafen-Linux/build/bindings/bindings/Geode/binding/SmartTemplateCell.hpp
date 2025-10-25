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

class SmartTemplateCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SmartTemplateCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartTemplateCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     SmartTemplateCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1f57a0
     * @note[short] MacOS (Intel): 0x246ed0
     * @note[short] Windows: 0x3c7f0
     * @note[short] iOS: 0x1158f0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f585c
     * @note[short] MacOS (Intel): 0x246fa0
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x1159a0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1eb3d4
     * @note[short] MacOS (Intel): 0x23b400
     * @note[short] Windows: 0xbd8c0
     * @note[short] Android
     */
    void loadFromObject(GJSmartTemplate* p0);

    /**
     * @note[short] Windows: 0xbdda0
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xbdcb0
     * @note[short] Android
     */
    void updateBGColor(int p0);
    GJSmartTemplate* m_smartTemplate;
};
