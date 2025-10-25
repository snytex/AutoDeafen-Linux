#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceTriggerGameObject.hpp"

class RandTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "RandTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RandTriggerGameObject, ChanceTriggerGameObject)

    /**
     * @note[short] Android
     */
    static RandTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x172148
     * @note[short] MacOS (Intel): 0x1b1b50
     * @note[short] Windows: 0x49b670
     * @note[short] iOS: 0x38250c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1723c4
     * @note[short] MacOS (Intel): 0x1b1de0
     * @note[short] Windows: 0x49b690
     * @note[short] iOS: 0x382630
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x17260c
     * @note[short] MacOS (Intel): 0x1b2040
     * @note[short] Windows: 0x49b860
     * @note[short] iOS: 0x382708
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x172bc0
     * @note[short] MacOS (Intel): 0x1b2680
     * @note[short] Windows: 0x49ba60
     * @note[short] iOS: 0x382b10
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    int getRandomGroupID();

    /**
     * @note[short] Android
     */
    int getTotalChance();
};
