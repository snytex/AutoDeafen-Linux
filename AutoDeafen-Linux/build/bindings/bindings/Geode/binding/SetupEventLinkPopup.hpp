#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupEventLinkPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEventLinkPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEventLinkPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x44d830
     * @note[short] Android
     */
    static SetupEventLinkPopup* create(EventLinkTrigger* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4b6fa8
     * @note[short] MacOS (Intel): 0x560620
     * @note[short] Windows: 0x44d940
     * @note[short] iOS: 0x3fef1c
     * @note[short] Android
     */
    bool init(EventLinkTrigger* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x44deb0
     * @note[short] Android
     */
    void onSelectEvent(cocos2d::CCObject* sender);

    /**
     * @note[short] Android: Rebinded
     */
    void updateEventIDs(gd::set<int>& p0);
};
