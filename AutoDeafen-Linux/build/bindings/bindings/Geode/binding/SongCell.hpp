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

class SongCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     SongCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1f13c8
     * @note[short] MacOS (Intel): 0x241b80
     * @note[short] Windows: 0x3c7f0
     * @note[short] iOS: 0x112de8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f13f8
     * @note[short] MacOS (Intel): 0x241bc0
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x112e18
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e5430
     * @note[short] MacOS (Intel): 0x235330
     * @note[short] Windows: 0xb3990
     * @note[short] iOS: 0x1081fc
     * @note[short] Android
     */
    void loadFromObject(SongObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1f13d4
     * @note[short] MacOS (Intel): 0x241ba0
     * @note[short] Windows: 0xb3da0
     * @note[short] iOS: 0x112df4
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x10862c
     * @note[short] Android
     */
    void updateBGColor(int p0);
    SongObject* m_songObject;
};
