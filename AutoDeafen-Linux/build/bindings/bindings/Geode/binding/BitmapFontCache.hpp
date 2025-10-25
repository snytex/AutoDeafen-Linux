#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BitmapFontCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "BitmapFontCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BitmapFontCache, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BitmapFontCache();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~BitmapFontCache();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void purgeSharedFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1c2b48
     * @note[short] MacOS (Intel): 0x20e400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f36a8
     * @note[short] Android
     */
    static BitmapFontCache* sharedFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1c2cd0
     * @note[short] MacOS (Intel): 0x20e5a0
     * @note[short] Windows: 0x3b380
     * @note[short] iOS: 0x2f3794
     * @note[short] Android
     */
    FontObject* fontWithConfigFile(char const* p0, float p1);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init();
    cocos2d::CCDictionary* m_cache;
};
