#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextAlertPopup : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "TextAlertPopup";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextAlertPopup, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x2437f0
     * @note[short] MacOS (Intel): 0x29bfb0
     * @note[short] Windows: 0x2964a0
     * @note[short] iOS: 0x2dfdec
     * @note[short] Android: Rebinded
     */
    static TextAlertPopup* create(gd::string text, float delay, float scale, int opacity, gd::string font);

    /**
     * @note[short] MacOS (ARM): 0x243988
     * @note[short] MacOS (Intel): 0x29c130
     * @note[short] Windows: 0x2965d0
     * @note[short] iOS: 0x2dff58
     * @note[short] Android: Rebinded
     */
    bool init(gd::string text, float delay, float scale, int opacity, gd::string font);

    /**
     * @note[short] MacOS (ARM): 0x243cc8
     * @note[short] MacOS (Intel): 0x29c480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e0280
     * @note[short] Android
     */
    void setAlertPosition(cocos2d::CCPoint windowOffset, cocos2d::CCPoint pointOffset);

    /**
     * @note[short] MacOS (ARM): 0x243c8c
     * @note[short] MacOS (Intel): 0x29c440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e0244
     * @note[short] Android
     */
    void setLabelColor(cocos2d::ccColor3B color);
    float m_width;
    float m_height;
    cocos2d::CCLabelBMFont* m_label;
};
