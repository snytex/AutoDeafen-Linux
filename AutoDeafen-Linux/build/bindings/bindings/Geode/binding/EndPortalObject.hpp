#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class EndPortalObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EndPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndPortalObject, GameObject)

    /**
     * @note[short] MacOS (ARM): 0x318990
     * @note[short] MacOS (Intel): 0x3891b0
     * @note[short] Android
     */
    static EndPortalObject* create();

    /**
     * @note[short] MacOS (ARM): 0x318a2c
     * @note[short] MacOS (Intel): 0x389250
     * @note[short] Windows: 0x136110
     * @note[short] iOS: 0x3f66b0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x318ec4
     * @note[short] MacOS (Intel): 0x389750
     * @note[short] Windows: 0x136620
     * @note[short] iOS: 0x3f6b38
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x318fbc
     * @note[short] MacOS (Intel): 0x389860
     * @note[short] Windows: 0x136780
     * @note[short] iOS: 0x3f6c30
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x318e60
     * @note[short] MacOS (Intel): 0x3896d0
     * @note[short] Windows: 0x136560
     * @note[short] Android
     */
    cocos2d::CCPoint getSpawnPos();

    /**
     * @note[short] MacOS (ARM): 0x318dcc
     * @note[short] MacOS (Intel): 0x389640
     * @note[short] iOS: 0x3f6a50
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateColors(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x319020
     * @note[short] MacOS (Intel): 0x3898c0
     * @note[short] Windows: 0x1367d0
     * @note[short] iOS: 0x3f6c94
     * @note[short] Android
     */
    void updateEndPos(bool p0);
    cocos2d::CCSprite* m_gradientBar;
    bool m_flippedX;
    bool m_startPosHeightRelated;
};
