#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FLAlertLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "FLAlertLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FLAlertLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     FLAlertLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x517e0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~FLAlertLayer();

    /**
     * @note[short] MacOS (ARM): 0x3f5598
     * @note[short] MacOS (Intel): 0x4880e0
     * @note[short] Windows: 0x51940
     * @note[short] iOS: 0x2aaef4
     * @note[short] Android: Rebinded
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale);

    /**
     * @note[short] MacOS (ARM): 0x3f5738
     * @note[short] MacOS (Intel): 0x4882b0
     * @note[short] Windows: 0x51890
     * @note[short] iOS: 0x2ab01c
     * @note[short] Android: Rebinded
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FLAlertLayer* create(char const* title, const gd::string& desc, char const* btn);

    /**
     * @note[short] MacOS (ARM): 0x3f6568
     * @note[short] MacOS (Intel): 0x489190
     * @note[short] Windows: 0x52a00
     * @note[short] iOS: 0x2abcac
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3f6818
     * @note[short] MacOS (Intel): 0x4893d0
     * @note[short] Windows: 0x52b50
     * @note[short] iOS: 0x2abe9c
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3f66c8
     * @note[short] MacOS (Intel): 0x4892b0
     * @note[short] Windows: 0x52aa0
     * @note[short] iOS: 0x2abd64
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3f6788
     * @note[short] MacOS (Intel): 0x489350
     * @note[short] Windows: 0x52b10
     * @note[short] iOS: 0x2abe24
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3f6a4c
     * @note[short] MacOS (Intel): 0x489600
     * @note[short] Windows: 0x52d60
     * @note[short] iOS: 0x2ac09c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3f6440
     * @note[short] MacOS (Intel): 0x489070
     * @note[short] Windows: 0x52880
     * @note[short] iOS: 0x2abc48
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f63a4
     * @note[short] MacOS (Intel): 0x488fc0
     * @note[short] Windows: 0x52800
     * @note[short] iOS: 0x2abc18
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x3f68a8
     * @note[short] MacOS (Intel): 0x489450
     * @note[short] Windows: 0x52b90
     * @note[short] iOS: 0x2abf14
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x3f6294
     * @note[short] MacOS (Intel): 0x488eb0
     * @note[short] iOS: 0x2abb08
     * @note[short] Android
     */
    void incrementForcePrio();

    /**
     * @note[short] MacOS (ARM): 0x3f5800
     * @note[short] MacOS (Intel): 0x488360
     * @note[short] Windows: 0x51b60
     * @note[short] iOS: 0x2ab0e4
     * @note[short] Android: Rebinded
     */
    bool init(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5, bool p6, float p7, float p8);

    /**
     * @note[short] MacOS (ARM): 0x3f61c0
     * @note[short] MacOS (Intel): 0x488de0
     * @note[short] Windows: 0x51a50
     * @note[short] iOS: 0x2aba58
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3f62e4
     * @note[short] MacOS (Intel): 0x488f00
     * @note[short] Windows: 0x52940
     * @note[short] iOS: 0x2abb58
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f6344
     * @note[short] MacOS (Intel): 0x488f60
     * @note[short] Windows: 0x529a0
     * @note[short] iOS: 0x2abbb8
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);
    cocos2d::CCMenu* m_buttonMenu;
    FLAlertLayerProtocol* m_alertProtocol;
    cocos2d::CCNode* m_scene;
    bool m_reverseKeyBack;
    cocos2d::ccColor3B m_color;
    cocos2d::CCLayer* m_mainLayer;
    int m_ZOrder;
    bool m_noElasticity;
    cocos2d::ccColor3B m_color2;
    ButtonSprite* m_button1;
    ButtonSprite* m_button2;
    ScrollingLayer* m_scrollingLayer;
    int m_controlConnected;
    bool m_containsBorder;
    bool m_noAction;
    int m_joystickConnected;
    bool m_forcePrioRegistered;
};
