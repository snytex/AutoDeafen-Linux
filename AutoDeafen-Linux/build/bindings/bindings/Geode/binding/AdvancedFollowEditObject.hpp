#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "AdvancedFollowTriggerObject.hpp"

class AdvancedFollowEditObject : public AdvancedFollowTriggerObject {
public:
    static constexpr auto CLASS_NAME = "AdvancedFollowEditObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AdvancedFollowEditObject, AdvancedFollowTriggerObject)

    /**
     * @note[short] Android
     */
    static AdvancedFollowEditObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x160b78
     * @note[short] MacOS (Intel): 0x19d870
     * @note[short] Windows: 0x486470
     * @note[short] iOS: 0x378a1c
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x15fef0
     * @note[short] MacOS (Intel): 0x19c8a0
     * @note[short] Windows: 0x486080
     * @note[short] iOS: 0x37865c
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);
    float m_modX;
    float m_modXVariance;
    float m_modY;
    float m_modYVariance;
    bool m_redirectDirection;
};
