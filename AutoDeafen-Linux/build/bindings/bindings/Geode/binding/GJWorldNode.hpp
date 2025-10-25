#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJWorldNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJWorldNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJWorldNode, cocos2d::CCNode)

    /**
     * @note[short] Android
     */
    static GJWorldNode* create(int p0, WorldSelectLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x33d2d0
     * @note[short] MacOS (Intel): 0x3b1940
     * @note[short] Android
     */
    float addDotsToLevel(int p0, bool p1);

    /**
     * @note[short] Android
     */
    cocos2d::CCPoint dotPositionForLevel(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x33c8b8
     * @note[short] MacOS (Intel): 0x3b0e80
     * @note[short] Android
     */
    bool init(int p0, WorldSelectLayer* p1);

    /**
     * @note[short] Android
     */
    void onLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void playStep1();

    /**
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] Android
     */
    cocos2d::CCPoint positionForLevelButton(int p0);

    /**
     * @note[short] Android
     */
    void unlockActiveItem();
    cocos2d::CCArray* m_activeObjects;
    CCMenuItemSpriteExtra* m_activeButton;
    GJGameLevel* m_level;
    WorldSelectLayer* m_selectLayer;
    bool m_unlocked;
    cocos2d::CCPoint m_levelPosition;
    cocos2d::ccColor3B m_particleColor;
    int m_islandType;
    bool m_islandUnlocked;
    cocos2d::CCSprite* m_arrowSprite;
};
