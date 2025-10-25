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

class LevelCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1e03b0
     * @note[short] MacOS (Intel): 0x230090
     * @note[short] Windows: 0xad870
     * @note[short] iOS: 0x10ed34
     * @note[short] Android: Rebinded
     */
     LevelCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1ec704
     * @note[short] MacOS (Intel): 0x23caa0
     * @note[short] Android
     */
    static LevelCell* create(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1ec890
     * @note[short] MacOS (Intel): 0x23cc50
     * @note[short] Windows: 0xad920
     * @note[short] iOS: 0x10edb8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1efb40
     * @note[short] MacOS (Intel): 0x240220
     * @note[short] Windows: 0xb12e0
     * @note[short] iOS: 0x111dd4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1ed1f0
     * @note[short] MacOS (Intel): 0x23d540
     * @note[short] Windows: 0xadb20
     * @note[short] iOS: 0x10f6e4
     * @note[short] Android
     */
    void loadCustomLevelCell();

    /**
     * @note[short] MacOS (ARM): 0x1e2d4c
     * @note[short] MacOS (Intel): 0x232d00
     * @note[short] Windows: 0xad940
     * @note[short] iOS: 0x105c2c
     * @note[short] Android
     */
    void loadFromLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x1ec8ac
     * @note[short] MacOS (Intel): 0x23cc80
     * @note[short] Windows: 0xb05f0
     * @note[short] iOS: 0x10edd4
     * @note[short] Android
     */
    void loadLocalLevelCell();

    /**
     * @note[short] MacOS (ARM): 0x1ef99c
     * @note[short] MacOS (Intel): 0x240090
     * @note[short] Windows: 0xb1080
     * @note[short] iOS: 0x111c5c
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x111c44
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1efb00
     * @note[short] MacOS (Intel): 0x2401f0
     * @note[short] Windows: 0xb12a0
     * @note[short] iOS: 0x111d94
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x105dc0
     * @note[short] Android
     */
    void updateBGColor(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1ec39c
     * @note[short] MacOS (Intel): 0x23c6a0
     * @note[short] Windows: 0xb0df0
     * @note[short] Android
     */
    void updateCellMode(int p0);

    /**
     * @note[short] Android
     */
    void updateToggle();
    CCMenuItemSpriteExtra* m_button;
    GJGameLevel* m_level;
    bool m_cellDrawn;
    CCMenuItemToggler* m_toggler;
    cocos2d::CCPoint m_point;
    cocos2d::CCMenu* m_mainMenu;
    bool m_compactView;
    int m_cellMode;
};
