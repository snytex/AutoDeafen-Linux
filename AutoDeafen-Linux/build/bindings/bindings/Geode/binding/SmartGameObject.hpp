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

class SmartGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "SmartGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartGameObject, GameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SmartGameObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SmartGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1631f0
     * @note[short] MacOS (Intel): 0x1a0680
     * @note[short] Windows: 0x4873d0
     * @note[short] iOS: 0x379920
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x162cf4
     * @note[short] MacOS (Intel): 0x1a00c0
     * @note[short] Windows: 0x487260
     * @note[short] iOS: 0x37978c
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] Windows: 0x487070
     * @note[short] Android
     */
    void updateSmartFrame();
    bool m_referenceOnly;
    gd::string m_baseFrame;
    gd::string m_smartFrame;
};
