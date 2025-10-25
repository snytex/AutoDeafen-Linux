#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceObject.hpp"
#include "EffectGameObject.hpp"

class ChanceTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ChanceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChanceTriggerGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    void editChanceObject(int p0, int p1);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);

    /**
     * @note[short] Windows: 0x49b580
     * @note[short] Android: Rebinded
     */
    void remapChanceObjects(gd::unordered_map<int, int> const* p0);

    /**
     * @note[short] Android
     */
    void revertChanceRemap();
    gd::vector<ChanceObject> m_chanceObjects;
};
