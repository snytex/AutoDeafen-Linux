#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class SpecialAnimGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "SpecialAnimGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpecialAnimGameObject, EnhancedGameObject)

    /**
     * @note[short] Android
     */
    static SpecialAnimGameObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x165528
     * @note[short] MacOS (Intel): 0x1a2cd0
     * @note[short] Windows: 0x489380
     * @note[short] iOS: 0x37b1ac
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x165534
     * @note[short] MacOS (Intel): 0x1a2cf0
     * @note[short] Windows: 0x489390
     * @note[short] iOS: 0x37b1b8
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x165594
     * @note[short] MacOS (Intel): 0x1a2d50
     * @note[short] Windows: 0x489400
     * @note[short] iOS: 0x37b218
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x165508
     * @note[short] MacOS (Intel): 0x1a2c90
     * @note[short] Windows: 0x489340
     * @note[short] iOS: 0x37b18c
     * @note[short] Android
     */
    virtual void updateMainColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x165518
     * @note[short] MacOS (Intel): 0x1a2cb0
     * @note[short] Windows: 0x489360
     * @note[short] iOS: 0x37b19c
     * @note[short] Android
     */
    virtual void updateSecondaryColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x1f8eac
     * @note[short] MacOS (Intel): 0x24b7d0
     * @note[short] Windows: 0x1a69c0
     * @note[short] iOS: 0x3487cc
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float p0, int p1);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);
    bool m_skipMainColorUpdate;
    bool m_skipSecondaryColorUpdate;
};
