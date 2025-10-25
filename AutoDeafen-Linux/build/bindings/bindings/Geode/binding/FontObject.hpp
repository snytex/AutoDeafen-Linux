#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FontObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "FontObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FontObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     FontObject();

    /**
     * @note[short] MacOS (ARM): 0x1c2f68
     * @note[short] MacOS (Intel): 0x20e860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f38b4
     * @note[short] Android
     */
    static FontObject* createWithConfigFile(char const* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1c38d8
     * @note[short] MacOS (Intel): 0x20f360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f3e58
     * @note[short] Android
     */
    int getFontWidth(int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool initWithConfigFile(char const* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1c2ff4
     * @note[short] MacOS (Intel): 0x20e8e0
     * @note[short] Windows: 0x3b620
     * @note[short] iOS: 0x2f3928
     * @note[short] Android
     */
    void parseConfigFile(char const* p0, float p1);
    std::array<int, 300> m_hugeIntArray;
};
