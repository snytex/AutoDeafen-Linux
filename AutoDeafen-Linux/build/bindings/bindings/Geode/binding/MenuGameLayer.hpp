#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGroundLayer.hpp"
#include "GameToolbox.hpp"

class MenuGameLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MenuGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x394760
     * @note[short] Android: Out of line
     */
     MenuGameLayer();

    /**
     * @note[short] MacOS (ARM): 0x4486c4
     * @note[short] MacOS (Intel): 0x4e65f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39325c
     * @note[short] Android
     */
    static MenuGameLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x449800
     * @note[short] MacOS (Intel): 0x4e78b0
     * @note[short] Windows: 0x31d380
     * @note[short] iOS: 0x394154
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4487ac
     * @note[short] MacOS (Intel): 0x4e6700
     * @note[short] Windows: 0x31c560
     * @note[short] iOS: 0x3932d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x449cf4
     * @note[short] MacOS (Intel): 0x4e7e20
     * @note[short] Windows: 0x31e740
     * @note[short] iOS: 0x3945e4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x449e0c
     * @note[short] MacOS (Intel): 0x4e7f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3946fc
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x449e14
     * @note[short] MacOS (Intel): 0x4e7f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x394704
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x449e1c
     * @note[short] MacOS (Intel): 0x4e7f80
     * @note[short] Windows: 0x71210
     * @note[short] iOS: 0x39470c
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x449e38
     * @note[short] MacOS (Intel): 0x4e7fc0
     * @note[short] Windows: 0x31e8f0
     * @note[short] iOS: 0x394728
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x449af8
     * @note[short] MacOS (Intel): 0x4e7c20
     * @note[short] Windows: 0x31e480
     * @note[short] iOS: 0x3943f4
     * @note[short] Android
     */
    void destroyPlayer();

    /**
     * @note[short] MacOS (ARM): 0x448bc0
     * @note[short] MacOS (Intel): 0x4e6b60
     * @note[short] Windows: 0x31cde0
     * @note[short] iOS: 0x3936e8
     * @note[short] Android
     */
    cocos2d::ccColor3B getBGColor(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4490e0
     * @note[short] MacOS (Intel): 0x4e7060
     * @note[short] Windows: 0x31d850
     * @note[short] iOS: 0x393aec
     * @note[short] Android
     */
    void resetPlayer();

    /**
     * @note[short] MacOS (ARM): 0x448cc4
     * @note[short] MacOS (Intel): 0x4e6c00
     * @note[short] Windows: 0x31d0b0
     * @note[short] iOS: 0x393788
     * @note[short] Android
     */
    void tryJump(float p0);

    /**
     * @note[short] MacOS (ARM): 0x448f34
     * @note[short] MacOS (Intel): 0x4e6e60
     * @note[short] Windows: 0x31cc90
     * @note[short] iOS: 0x3939d4
     * @note[short] Android
     */
    void updateColor(float p0);

    /**
     * @note[short] MacOS (ARM): 0x449788
     * @note[short] MacOS (Intel): 0x4e7840
     * @note[short] iOS: 0x3940dc
     * @note[short] Android
     */
    void updateColors();
    bool m_videoOptionsOpen;
    float m_deltaCount;
    bool m_isDestroyingPlayer;
    int m_initCount;
    cocos2d::CCPoint m_unused1;
    PlayerObject* m_playerObject;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    float m_backgroundSpeed;
};
