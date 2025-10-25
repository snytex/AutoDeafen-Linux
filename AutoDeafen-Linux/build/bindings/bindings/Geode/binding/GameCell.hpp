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

class GameCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GameCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x291758
     * @note[short] MacOS (Intel): 0x2f8e00
     * @note[short] Android: Rebinded
     */
     GameCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x291d60
     * @note[short] MacOS (Intel): 0x2f9520
     * @note[short] Windows: 0x3c7f0
     * @note[short] iOS: 0x1d1424
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x291e34
     * @note[short] MacOS (Intel): 0x2f95e0
     * @note[short] Windows: 0x3cbf0
     * @note[short] iOS: 0x1d1468
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x291900
     * @note[short] MacOS (Intel): 0x2f9000
     * @note[short] Windows: 0x3c800
     * @note[short] Android: Rebinded
     */
    void loadFromString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x291d6c
     * @note[short] MacOS (Intel): 0x2f9540
     * @note[short] Windows: 0x3cbc0
     * @note[short] Android
     */
    void onTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x291db8
     * @note[short] MacOS (Intel): 0x2f9580
     * @note[short] Android
     */
    void updateBGColor(int p0);
    void* m_unk230;
    gd::string m_gameLink;
};
