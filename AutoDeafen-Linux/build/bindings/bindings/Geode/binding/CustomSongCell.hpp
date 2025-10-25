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
#include "CustomSongDelegate.hpp"

class CustomSongCell : public TableViewCell, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongCell, TableViewCell)

    /**
     * @note[short] Windows: 0xb3e80
     * @note[short] Android: Rebinded
     */
     CustomSongCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1f152c
     * @note[short] MacOS (Intel): 0x241da0
     * @note[short] Windows: 0xb3f00
     * @note[short] iOS: 0x112efc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f16b0
     * @note[short] MacOS (Intel): 0x241fb0
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x113088
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1f15f4
     * @note[short] MacOS (Intel): 0x241e90
     * @note[short] Windows: 0xb40d0
     * @note[short] iOS: 0x112fc4
     * @note[short] Android
     */
    virtual void songIDChanged(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1f1650
     * @note[short] MacOS (Intel): 0x241f10
     * @note[short] Windows: 0xb4110
     * @note[short] iOS: 0x113020
     * @note[short] Android
     */
    virtual int getActiveSongID();

    /**
     * @note[short] MacOS (ARM): 0x1f1688
     * @note[short] MacOS (Intel): 0x241f70
     * @note[short] Windows: 0xb4130
     * @note[short] iOS: 0x113058
     * @note[short] Android
     */
    virtual gd::string getSongFileName();

    /**
     * @note[short] MacOS (ARM): 0x1f16a0
     * @note[short] MacOS (Intel): 0x241f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x113078
     * @note[short] Android: Out of line
     */
    virtual LevelSettingsObject* getLevelSettings();

    /**
     * @note[short] MacOS (ARM): 0x1e2320
     * @note[short] MacOS (Intel): 0x2323a0
     * @note[short] Windows: 0xb3f10
     * @note[short] iOS: 0x105228
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* p0);

    /**
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn shouldReload();

    /**
     * @note[short] iOS: 0x1053cc
     * @note[short] Android
     */
    void updateBGColor(int p0);
    SongInfoObject* m_songInfoObject;
    bool m_selected;
};
