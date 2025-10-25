#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomListView.hpp"

class CustomListView : public BoomListView {
public:
    static constexpr auto CLASS_NAME = "CustomListView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomListView, BoomListView)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CustomListView();

    /**
     * @note[short] MacOS (ARM): 0x1df724
     * @note[short] MacOS (Intel): 0x22eb50
     * @note[short] Windows: 0xaa010
     * @note[short] iOS: 0x10364c
     * @note[short] Android
     */
    static CustomListView* create(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CustomListView* create(cocos2d::CCArray* entries, BoomListType type, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1eb7bc
     * @note[short] MacOS (Intel): 0x23b7f0
     * @note[short] Windows: 0xab5c0
     * @note[short] iOS: 0x10e1ec
     * @note[short] Android
     */
    virtual void setupList(float p0);

    /**
     * @note[short] MacOS (ARM): 0x1df834
     * @note[short] MacOS (Intel): 0x22ec90
     * @note[short] Windows: 0xaa140
     * @note[short] iOS: 0x10375c
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x1e0870
     * @note[short] MacOS (Intel): 0x230830
     * @note[short] Windows: 0xaaf00
     * @note[short] iOS: 0x103ec4
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1e01b0
     * @note[short] MacOS (Intel): 0x22fd60
     * @note[short] Windows: 0xaadf0
     * @note[short] iOS: 0x103e9c
     * @note[short] Android
     */
    static float getCellHeight(BoomListType p0);

    /**
     * @note[short] MacOS (ARM): 0x1ebe10
     * @note[short] MacOS (Intel): 0x23bfe0
     * @note[short] Windows: 0xabc90
     * @note[short] iOS: 0x10e7b0
     * @note[short] Android
     */
    void reloadAll();
    int m_cellMode;
};
