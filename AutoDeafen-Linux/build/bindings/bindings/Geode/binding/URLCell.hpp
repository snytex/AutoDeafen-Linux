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

class URLCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "URLCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(URLCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     URLCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1f5dc8
     * @note[short] MacOS (Intel): 0x2476e0
     * @note[short] Windows: 0x3c7f0
     * @note[short] iOS: 0x115ca4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f5e38
     * @note[short] MacOS (Intel): 0x247750
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x115d00
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e5cbc
     * @note[short] MacOS (Intel): 0x235b20
     * @note[short] Windows: 0xbf530
     * @note[short] iOS: 0x108a64
     * @note[short] Android
     */
    void loadFromObject(CCURLObject* p0);

    /**
     * @note[short] Windows: 0xbf760
     * @note[short] Android
     */
    void onURL(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
    CCURLObject* m_urlObject;
};
