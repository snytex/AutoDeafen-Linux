#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAnimateFrameCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCAnimateFrameCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimateFrameCache, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCAnimateFrameCache* get();

    /**
     * @note[short] MacOS (ARM): 0x4ab09c
     * @note[short] MacOS (Intel): 0x5542d0
     * @note[short] Windows: 0x41450
     * @note[short] iOS: 0x1b44d8
     * @note[short] Android
     */
    static CCAnimateFrameCache* sharedSpriteFrameCache();

    /**
     * @note[short] MacOS (ARM): 0x4ab2a0
     * @note[short] MacOS (Intel): 0x554510
     * @note[short] Android
     */
    void addCustomSpriteFramesWithFile(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x4abdb0
     * @note[short] MacOS (Intel): 0x5551e0
     * @note[short] Android
     */
    cocos2d::CCDictionary* addDict(cocos2d::CCDictionary* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x4ac488
     * @note[short] MacOS (Intel): 0x5558b0
     * @note[short] Windows: 0x41670
     * @note[short] iOS: 0x1b45f4
     * @note[short] Android
     */
    cocos2d::CCDictionary* addDict(DS_Dictionary* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x4ac224
     * @note[short] MacOS (Intel): 0x555650
     * @note[short] Windows: 0x414e0
     * @note[short] iOS: 0x1b47ec
     * @note[short] Android
     */
    cocos2d::CCDictionary* addSpriteFramesWithFile(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x4ab130
     * @note[short] MacOS (Intel): 0x554370
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b4544
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] MacOS (ARM): 0x4ab174
     * @note[short] MacOS (Intel): 0x5543c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void purgeSharedSpriteFrameCache();

    /**
     * @note[short] MacOS (ARM): 0x4acbf4
     * @note[short] MacOS (Intel): 0x556030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b491c
     * @note[short] Android
     */
    void removeSpriteFrames();

    /**
     * @note[short] MacOS (ARM): 0x4acc24
     * @note[short] MacOS (Intel): 0x556060
     * @note[short] Windows: 0x41c40
     * @note[short] iOS: 0x1b494c
     * @note[short] Android
     */
    cocos2d::CCArray* spriteFrameByName(char const* p0);
    cocos2d::CCDictionary* m_animateFrames;
    cocos2d::CCDictionary* m_unk040;
    cocos2d::CCDictionary* m_animateDescriptions;
};
