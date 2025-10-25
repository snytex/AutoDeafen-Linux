#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class ObjectControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ObjectControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ObjectControlGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static ObjectControlGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x19559c
     * @note[short] MacOS (Intel): 0x1dcad0
     * @note[short] Windows: 0x4aa210
     * @note[short] iOS: 0x390708
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x195a5c
     * @note[short] MacOS (Intel): 0x1dd030
     * @note[short] Windows: 0x4aa3f0
     * @note[short] iOS: 0x3908e8
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x1955ec
     * @note[short] MacOS (Intel): 0x1dcb20
     * @note[short] Windows: 0x4aa280
     * @note[short] iOS: 0x390758
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
