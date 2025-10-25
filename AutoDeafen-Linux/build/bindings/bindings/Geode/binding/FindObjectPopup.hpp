#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetIDPopup.hpp"

class FindObjectPopup : public SetIDPopup {
public:
    static constexpr auto CLASS_NAME = "FindObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindObjectPopup, SetIDPopup)

    /**
     * @note[short] Android
     */
    static FindObjectPopup* create();

    /**
     * @note[short] MacOS (ARM): 0x241b10
     * @note[short] MacOS (Intel): 0x299fd0
     * @note[short] Windows: 0x294db0
     * @note[short] iOS: 0x2de9e8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onFindObjectID(cocos2d::CCObject* sender);
    bool m_unknownBool;
};
