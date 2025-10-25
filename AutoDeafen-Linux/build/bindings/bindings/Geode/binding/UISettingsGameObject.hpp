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

class UISettingsGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "UISettingsGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UISettingsGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static UISettingsGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1872d4
     * @note[short] MacOS (Intel): 0x1cb1b0
     * @note[short] Windows: 0x4a4720
     * @note[short] iOS: 0x38b2f0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x187f74
     * @note[short] MacOS (Intel): 0x1cc0f0
     * @note[short] Windows: 0x4a4b40
     * @note[short] iOS: 0x38b69c
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x187324
     * @note[short] MacOS (Intel): 0x1cb200
     * @note[short] Windows: 0x4a4790
     * @note[short] iOS: 0x38b340
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    int m_xRef;
    int m_yRef;
    bool m_xRelative;
    bool m_yRelative;
};
