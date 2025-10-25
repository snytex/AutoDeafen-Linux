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

class SecretLayer3 : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer3";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer3, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer3();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SecretLayer3();

    /**
     * @note[short] MacOS (ARM): 0x3fd114
     * @note[short] MacOS (Intel): 0x490490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30ddb4
     * @note[short] Android
     */
    static SecretLayer3* create();

    /**
     * @note[short] MacOS (ARM): 0x3faa88
     * @note[short] MacOS (Intel): 0x48dc80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30c760
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3fd1cc
     * @note[short] MacOS (Intel): 0x490560
     * @note[short] Windows: 0x3d2b20
     * @note[short] iOS: 0x30de60
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x401c1c
     * @note[short] MacOS (Intel): 0x4953f0
     * @note[short] Windows: 0x3d8430
     * @note[short] iOS: 0x31197c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x401c10
     * @note[short] MacOS (Intel): 0x4953c0
     * @note[short] Windows: 0x3d8420
     * @note[short] iOS: 0x311970
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4018d8
     * @note[short] MacOS (Intel): 0x4950a0
     * @note[short] Windows: 0x3d7e20
     * @note[short] iOS: 0x311714
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] Android
     */
    TodoReturn animateEyes();

    /**
     * @note[short] Android
     */
    TodoReturn firstInteractionStep1();

    /**
     * @note[short] MacOS (ARM): 0x3ffa5c
     * @note[short] MacOS (Intel): 0x493020
     * @note[short] Android
     */
    TodoReturn firstInteractionStep2();

    /**
     * @note[short] Android
     */
    TodoReturn firstInteractionStep3();

    /**
     * @note[short] MacOS (ARM): 0x3fffa0
     * @note[short] MacOS (Intel): 0x4935b0
     * @note[short] Android
     */
    TodoReturn firstInteractionStep4();

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onChest02(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fe930
     * @note[short] MacOS (Intel): 0x491cf0
     * @note[short] Windows: 0x3d5090
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn revealStep1();

    /**
     * @note[short] MacOS (ARM): 0x400938
     * @note[short] MacOS (Intel): 0x493f90
     * @note[short] Windows: 0x3d6aa0
     * @note[short] Android
     */
    TodoReturn revealStep2();

    /**
     * @note[short] Android
     */
    TodoReturn revealStep3();

    /**
     * @note[short] MacOS (ARM): 0x400cdc
     * @note[short] MacOS (Intel): 0x494350
     * @note[short] Windows: 0x3d6f30
     * @note[short] Android
     */
    TodoReturn revealStep4();

    /**
     * @note[short] MacOS (ARM): 0x401420
     * @note[short] MacOS (Intel): 0x494b70
     * @note[short] Windows: 0x3d7780
     * @note[short] Android
     */
    TodoReturn revealStep5();

    /**
     * @note[short] MacOS (ARM): 0x4003cc
     * @note[short] MacOS (Intel): 0x4939e0
     * @note[short] Windows: 0x3d63a0
     * @note[short] Android
     */
    void showUnlockDialog();
    DungeonBarsSprite* m_dungeonBars;
    bool m_lockInput;
    cocos2d::CCArray* m_locksArray;
    cocos2d::CCSprite* m_demonEyes;
    cocos2d::CCSprite* m_demonBody;
    CCMenuItemSpriteExtra* m_secretChest;
};
