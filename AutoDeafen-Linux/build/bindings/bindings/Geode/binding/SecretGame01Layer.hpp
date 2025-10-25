#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SecretGame01Layer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretGame01Layer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretGame01Layer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3db7e4
     * @note[short] MacOS (Intel): 0x46c200
     * @note[short] Android
     */
    static SecretGame01Layer* create();

    /**
     * @note[short] MacOS (ARM): 0x3dcfe8
     * @note[short] MacOS (Intel): 0x46dc90
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x3dc234
     * @note[short] MacOS (Intel): 0x46ce50
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3dce10
     * @note[short] MacOS (Intel): 0x46dad0
     * @note[short] Android
     */
    void didSelectCorrectObject(CCMenuItemSpriteExtra* p0);

    /**
     * @note[short] MacOS (ARM): 0x3dc610
     * @note[short] MacOS (Intel): 0x46d200
     * @note[short] Android
     */
    void gameStep01();

    /**
     * @note[short] MacOS (ARM): 0x3dc890
     * @note[short] MacOS (Intel): 0x46d4d0
     * @note[short] Android
     */
    void gameStep02();

    /**
     * @note[short] MacOS (ARM): 0x3dc418
     * @note[short] MacOS (Intel): 0x46d040
     * @note[short] Android
     */
    int getCountForDifficulty(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3dc440
     * @note[short] MacOS (Intel): 0x46d070
     * @note[short] Android
     */
    gd::string getFrameForDifficulty(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3dc3f4
     * @note[short] MacOS (Intel): 0x46d010
     * @note[short] Android
     */
    int getRowsForDifficulty(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3dc504
     * @note[short] MacOS (Intel): 0x46d100
     * @note[short] Android
     */
    int getTimeForDifficulty(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3dc528
     * @note[short] MacOS (Intel): 0x46d130
     * @note[short] Android
     */
    void onSelectButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3db904
     * @note[short] MacOS (Intel): 0x46c350
     * @note[short] Android
     */
    void resetGame();

    /**
     * @note[short] MacOS (ARM): 0x3dc9d8
     * @note[short] MacOS (Intel): 0x46d630
     * @note[short] Android
     */
    void resetGameTimer();

    /**
     * @note[short] MacOS (ARM): 0x3dca50
     * @note[short] MacOS (Intel): 0x46d6c0
     * @note[short] Android
     */
    void scaleOutGame(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x3dca44
     * @note[short] MacOS (Intel): 0x46d6a0
     * @note[short] Android
     */
    void showGameOver();

    /**
     * @note[short] MacOS (ARM): 0x3dcdfc
     * @note[short] MacOS (Intel): 0x46dab0
     * @note[short] Android
     */
    void showGameWon();
    cocos2d::CCArray* m_gameObjects;
    cocos2d::CCArray* m_requiredObjects;
    cocos2d::CCMenu* m_mainMenu;
    int m_selectedObject;
    int m_gameDifficulty;
    bool m_gameActive;
    float m_timeElapsed;
    float m_gameTime;
    cocos2d::CCSprite* m_timeBarSprite;
};
