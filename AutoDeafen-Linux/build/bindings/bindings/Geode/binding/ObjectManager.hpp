#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x694044
     * @note[short] MacOS (Intel): 0x77f670
     * @note[short] Windows: 0x6e3d0
     * @note[short] iOS: 0x24c1dc
     * @note[short] Android
     */
    static ObjectManager* instance();

    /**
     * @note[short] MacOS (ARM): 0x69410c
     * @note[short] MacOS (Intel): 0x77f750
     * @note[short] Windows: 0x6e460
     * @note[short] iOS: 0x24c270
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    bool animLoaded(char const* anim);

    /**
     * @note[short] MacOS (ARM): 0x695a18
     * @note[short] MacOS (Intel): 0x7811e0
     * @note[short] Windows: 0x6f870
     * @note[short] iOS: 0x24ce50
     * @note[short] Android
     */
    cocos2d::CCDictionary* getDefinition(char const* definitionKey);

    /**
     * @note[short] iOS: 0x24c8ec
     * @note[short] Android
     */
    cocos2d::CCDictionary* getGlobalAnimCopy(char const* anim);

    /**
     * @note[short] Windows: 0x6e800
     * @note[short] iOS: 0x24c2c0
     * @note[short] Android
     */
    void loadCopiedAnimations();

    /**
     * @note[short] MacOS (ARM): 0x6945cc
     * @note[short] MacOS (Intel): 0x77fb60
     * @note[short] Windows: 0x6ed50
     * @note[short] iOS: 0x24c4d4
     * @note[short] Android
     */
    void loadCopiedSets();

    /**
     * @note[short] Android
     */
    void purgeObjectManager();

    /**
     * @note[short] Windows: 0x6f1a0
     * @note[short] Android
     */
    static cocos2d::CCDictionary* replaceAllOccurencesOfString(cocos2d::CCString* p0, cocos2d::CCString* p1, cocos2d::CCDictionary* p2);

    /**
     * @note[short] Android
     */
    void setLoaded(char const* objectName);

    /**
     * @note[short] MacOS (ARM): 0x694934
     * @note[short] MacOS (Intel): 0x77ff10
     * @note[short] Windows: 0x6e4c0
     * @note[short] Android
     */
    void setup();
    cocos2d::CCDictionary* m_objectDefinitions;
    cocos2d::CCDictionary* m_loadedAnimations;
};
