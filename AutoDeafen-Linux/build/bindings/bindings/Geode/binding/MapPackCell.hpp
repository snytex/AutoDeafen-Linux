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

class MapPackCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "MapPackCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MapPackCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     MapPackCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1efea8
     * @note[short] MacOS (Intel): 0x2406c0
     * @note[short] Windows: 0xb1480
     * @note[short] iOS: 0x111f90
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f0368
     * @note[short] MacOS (Intel): 0x240b70
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x112380
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e2f88
     * @note[short] MacOS (Intel): 0x232f20
     * @note[short] Windows: 0xb14e0
     * @note[short] iOS: 0x105e40
     * @note[short] Android
     */
    void loadFromMapPack(GJMapPack* p0);

    /**
     * @note[short] MacOS (ARM): 0x1f00b0
     * @note[short] MacOS (Intel): 0x2408c0
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb2000
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f012c
     * @note[short] MacOS (Intel): 0x240940
     * @note[short] Windows: 0xb21d0
     * @note[short] Android
     */
    void playCompleteEffect();

    /**
     * @note[short] MacOS (ARM): 0x1ec340
     * @note[short] MacOS (Intel): 0x23c5f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reloadCell();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10690c
     * @note[short] Android
     */
    void updateBGColor(int idx);
    GJMapPack* m_mapPack;
    CCMenuItemSpriteExtra* m_viewButton;
    CCMenuItemSpriteExtra* m_rewardButton;
    cocos2d::CCArray* m_rewardLabels;
    cocos2d::CCArray* m_rewardSprites;
};
