#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMapObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMapObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMapObject, cocos2d::CCNode)

    /**
     * @note[short] Android
     */
    static GJMapObject* create(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    static GJMapObject* createMonster(int p0);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    void monsterIdle();

    /**
     * @note[short] Android
     */
    void monsterJump();

    /**
     * @note[short] Android
     */
    void moveFinished();

    /**
     * @note[short] Android
     */
    void moveMonster();

    /**
     * @note[short] Android
     */
    void moveMonster(cocos2d::CCPoint p0, float p1);

    /**
     * @note[short] Android
     */
    void playerJump();

    /**
     * @note[short] Android
     */
    void setObjectOrigin(cocos2d::CCPoint p0, float p1);

    /**
     * @note[short] Android
     */
    void startMonsterJumpLoop();

    /**
     * @note[short] Android
     */
    void startPlayerJumpLoop();

    /**
     * @note[short] Android
     */
    void touchMonster();

    /**
     * @note[short] Android
     */
    void updateShadow(float p0, float p1, cocos2d::CCPoint p2);
    float m_jumpStopTime;
    cocos2d::CCNode* m_mainNode;
    cocos2d::CCSprite* m_shadowSprite;
    cocos2d::CCPoint m_objectOrigin;
    float m_objectOffset;
    bool m_monsterIdle;
    bool m_monsterMoving;
    float m_moveStopTime;
    int m_monstersTouched;
};
