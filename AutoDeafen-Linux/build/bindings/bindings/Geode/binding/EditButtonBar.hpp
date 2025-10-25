#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EditButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "EditButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditButtonBar, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4fe2c0
     * @note[short] MacOS (Intel): 0x5c99e0
     * @note[short] Windows: 0xd2f40
     * @note[short] iOS: 0x418b98
     * @note[short] Android
     */
    static EditButtonBar* create(cocos2d::CCArray* objects, cocos2d::CCPoint size, int tab, bool hasCreateItems, int columns, int rows);

    /**
     * @note[short] Android
     */
    int getPage();

    /**
     * @note[short] Android
     */
    void goToPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4fe3bc
     * @note[short] MacOS (Intel): 0x5c9ad0
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* objects, cocos2d::CCPoint position, int tab, bool hasCreateItems, int columns, int rows);

    /**
     * @note[short] MacOS (ARM): 0x4fe468
     * @note[short] MacOS (Intel): 0x5c9b80
     * @note[short] Windows: 0xd30a0
     * @note[short] iOS: 0x418d0c
     * @note[short] Android
     */
    void loadFromItems(cocos2d::CCArray* p0, int p1, int p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x4fea94
     * @note[short] MacOS (Intel): 0x5ca250
     * @note[short] Windows: 0xd3a90
     * @note[short] iOS: 0x419330
     * @note[short] Android
     */
    void onLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4feadc
     * @note[short] MacOS (Intel): 0x5ca2a0
     * @note[short] Windows: 0xd3a20
     * @note[short] iOS: 0x419340
     * @note[short] Android
     */
    void onRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4fe998
     * @note[short] MacOS (Intel): 0x5ca140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x419234
     * @note[short] Android
     */
    void reloadItems(int rowCount, int columnCount);
    cocos2d::CCPoint m_position;
    int m_tabIndex;
    bool m_hasCreateItems;
    cocos2d::CCArray* m_buttonArray;
    BoomScrollLayer* m_scrollLayer;
    cocos2d::CCArray* m_pagesArray;
};
