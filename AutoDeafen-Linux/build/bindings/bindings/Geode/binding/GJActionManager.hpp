#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJActionManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJActionManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJActionManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJActionManager();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~GJActionManager();

    /**
     * @note[short] MacOS (ARM): 0x5219f8
     * @note[short] MacOS (Intel): 0x5f1dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fe5b8
     * @note[short] Android
     */
    static GJActionManager* create();

    /**
     * @note[short] MacOS (ARM): 0x521a8c
     * @note[short] MacOS (Intel): 0x5f1e50
     * @note[short] Windows: 0x1fb510
     * @note[short] iOS: 0x2fe634
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    cocos2d::CCAction* getInternalAction(int p0);

    /**
     * @note[short] MacOS (ARM): 0x521ac4
     * @note[short] MacOS (Intel): 0x5f1e80
     * @note[short] Android
     */
    void runInternalAction(cocos2d::CCAction* p0, cocos2d::CCNode* p1);

    /**
     * @note[short] Android
     */
    void stopAllInternalActions();

    /**
     * @note[short] MacOS (ARM): 0x521b0c
     * @note[short] MacOS (Intel): 0x5f1ed0
     * @note[short] Android
     */
    void stopInternalAction(int p0);

    /**
     * @note[short] Android
     */
    void updateInternalActions(float p0, bool p1);
    cocos2d::CCDictionary* m_internalActions;
};
