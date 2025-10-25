#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SearchButton : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "SearchButton";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SearchButton, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x540198
     * @note[short] MacOS (Intel): 0x613e90
     * @note[short] Windows: 0x2fdcd0
     * @note[short] iOS: 0x56f84
     * @note[short] Android
     */
    static SearchButton* create(char const* p0, char const* p1, float p2, char const* p3);

    /**
     * @note[short] MacOS (ARM): 0x542340
     * @note[short] MacOS (Intel): 0x616050
     * @note[short] Windows: 0x2fdda0
     * @note[short] iOS: 0x588f0
     * @note[short] Android
     */
    bool init(char const* p0, char const* p1, float p2, char const* p3);
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_icon;
};
