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

class EventLinkTrigger : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EventLinkTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EventLinkTrigger, EffectGameObject)

    /**
     * @note[short] Android
     */
    static EventLinkTrigger* create();

    /**
     * @note[short] MacOS (ARM): 0x17dc54
     * @note[short] MacOS (Intel): 0x1bfdd0
     * @note[short] Windows: 0x49fce0
     * @note[short] iOS: 0x386e24
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x17dca4
     * @note[short] MacOS (Intel): 0x1bfe20
     * @note[short] Windows: 0x49fd50
     * @note[short] iOS: 0x386e74
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x17e8e0
     * @note[short] MacOS (Intel): 0x1c0cf0
     * @note[short] Windows: 0x4a0220
     * @note[short] iOS: 0x387270
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x17dd78
     * @note[short] MacOS (Intel): 0x1bff00
     * @note[short] Windows: 0x49fe30
     * @note[short] iOS: 0x386ef8
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    gd::set<int> m_eventIDs;
    bool m_resetRemap;
    int m_extraID;
    int m_extraID2;
};
