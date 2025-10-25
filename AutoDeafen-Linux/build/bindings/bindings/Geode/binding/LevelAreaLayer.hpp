#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class LevelAreaLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelAreaLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~LevelAreaLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelAreaLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x211068
     * @note[short] MacOS (Intel): 0x265710
     * @note[short] Windows: 0x2bc0c0
     * @note[short] iOS: 0x343450
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x2111e8
     * @note[short] MacOS (Intel): 0x2658d0
     * @note[short] Windows: 0x2bc1d0
     * @note[short] iOS: 0x34353c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2133f4
     * @note[short] MacOS (Intel): 0x267ab0
     * @note[short] Windows: 0x2be1c0
     * @note[short] iOS: 0x344fe4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x213170
     * @note[short] MacOS (Intel): 0x267810
     * @note[short] Windows: 0x2bd3b0
     * @note[short] iOS: 0x344e04
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x2133a4
     * @note[short] MacOS (Intel): 0x267a60
     * @note[short] Windows: 0x2be170
     * @note[short] iOS: 0x344f94
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x2bdd20
     * @note[short] Android
     */
    void addGodRay(float p0, float p1, float p2, float p3, float p4, cocos2d::CCPoint p5);

    /**
     * @note[short] MacOS (ARM): 0x2124b0
     * @note[short] MacOS (Intel): 0x266be0
     * @note[short] Windows: 0x2bd690
     * @note[short] Android
     */
    static void addTorch(cocos2d::CCNode* p0, cocos2d::CCPoint p1, int p2, float p3, int p4, bool p5, int p6, cocos2d::CCArray* p7);

    /**
     * @note[short] Windows: 0x2bd530
     * @note[short] Android
     */
    void fadeInsideTower();

    /**
     * @note[short] Windows: 0x2be0c0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2bd3c0
     * @note[short] Android
     */
    void onClickDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21322c
     * @note[short] MacOS (Intel): 0x2678d0
     * @note[short] Windows: 0x2bd5e0
     * @note[short] Android
     */
    bool onEnterTower();

    /**
     * @note[short] MacOS (ARM): 0x212f20
     * @note[short] MacOS (Intel): 0x2675e0
     * @note[short] Windows: 0x2bd080
     * @note[short] Android
     */
    void showDialog();
    cocos2d::CCSprite* m_towerSprite;
    cocos2d::CCArray* m_godRays;
    bool m_enteringTower;
    bool m_exiting;
};
