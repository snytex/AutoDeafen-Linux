#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCMenuItemSpriteExtra.hpp"

class InfoAlertButton : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "InfoAlertButton";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoAlertButton, CCMenuItemSpriteExtra)

    /**
     * @note[short] MacOS (ARM): 0x4b57b8
     * @note[short] MacOS (Intel): 0x55ec10
     * @note[short] Windows: 0x2b2d80
     * @note[short] iOS: 0x16e934
     * @note[short] Android: Rebinded
     */
    static InfoAlertButton* create(gd::string title, gd::string desc, float spriteScale);

    /**
     * @note[short] MacOS (ARM): 0x4b5a48
     * @note[short] MacOS (Intel): 0x55ee90
     * @note[short] Windows: 0x2b2f80
     * @note[short] iOS: 0x16eb48
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS (ARM): 0x4b59a4
     * @note[short] MacOS (Intel): 0x55edf0
     * @note[short] Android: Rebinded
     */
    bool init(gd::string title, gd::string desc, float spriteScale);
    gd::string m_title;
    gd::string m_description;
    float m_textScale;
    bool m_scroll;
};
