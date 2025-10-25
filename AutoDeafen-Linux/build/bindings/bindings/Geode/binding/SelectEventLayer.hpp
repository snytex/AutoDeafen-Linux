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

class SelectEventLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SelectEventLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectEventLayer, SetupTriggerPopup)

    /**
     * @note[short] Android: Rebinded
     */
    static SelectEventLayer* create(SetupEventLinkPopup* p0, gd::set<int>& p1);

    /**
     * @note[short] MacOS (ARM): 0x4b97a0
     * @note[short] MacOS (Intel): 0x5636b0
     * @note[short] Windows: 0x44f1d0
     * @note[short] iOS: 0x401148
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4b96e8
     * @note[short] MacOS (Intel): 0x5635e0
     * @note[short] Windows: 0x44f110
     * @note[short] iOS: 0x401108
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4b94a4
     * @note[short] MacOS (Intel): 0x5633b0
     * @note[short] Windows: 0x44ef40
     * @note[short] iOS: 0x400fe0
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44f1f0
     * @note[short] Android: Rebinded
     */
    void addToggle(int p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4b7a04
     * @note[short] MacOS (Intel): 0x561360
     * @note[short] Windows: 0x44e0d0
     * @note[short] Android: Rebinded
     */
    bool init(SetupEventLinkPopup* p0, gd::set<int>& p1);

    /**
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition();

    /**
     * @note[short] Windows: 0x44f630
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
    SetupEventLinkPopup* m_eventLinkPopup;
    bool m_eventsChanged;
    int m_unk3b4;
    int m_toggleCount;
    int m_maxPage;
    gd::map<int, gd::string> m_eventInfos;
    gd::set<int> m_eventIDs;
};
