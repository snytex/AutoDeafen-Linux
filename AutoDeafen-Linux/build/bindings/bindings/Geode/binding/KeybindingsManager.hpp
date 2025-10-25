#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class KeybindingsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "KeybindingsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(KeybindingsManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x2b96b0
     * @note[short] Android
     */
    static KeybindingsManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x4364a8
     * @note[short] MacOS (Intel): 0x4d22c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x346ccc
     * @note[short] Android: Out of line
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    bool commandForKey(cocos2d::enumKeyCodes p0, GJKeyGroup p1, bool p2, bool p3, bool p4);

    /**
     * @note[short] Android
     */
    bool commandForKeyMods(cocos2d::enumKeyCodes p0, GJKeyGroup p1);

    /**
     * @note[short] Android
     */
    bool commandForKeyNoMods(cocos2d::enumKeyCodes p0, GJKeyGroup p1);

    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* commandToKeyForGroup(GJKeyGroup p0);

    /**
     * @note[short] MacOS (ARM): 0x436984
     * @note[short] MacOS (Intel): 0x4d27e0
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] Android
     */
    GJKeyGroup groupForCommand(GJKeyCommand p0);

    /**
     * @note[short] Android
     */
    cocos2d::enumKeyCodes keyForCommand(GJKeyCommand p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* keyToCommandForGroup(GJKeyGroup p0);
    cocos2d::CCDictionary* m_keyToCommandDict;
    cocos2d::CCDictionary* m_commandToKeyDict;
};
