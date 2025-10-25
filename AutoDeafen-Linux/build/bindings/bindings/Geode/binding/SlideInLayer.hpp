#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SlideInLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "SlideInLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SlideInLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Android
     */
    static SlideInLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x2265e8
     * @note[short] MacOS (Intel): 0x27c670
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x226cac
     * @note[short] MacOS (Intel): 0x27cda0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x226ce8
     * @note[short] MacOS (Intel): 0x27cdd0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x226d08
     * @note[short] MacOS (Intel): 0x27ce30
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x226cf8
     * @note[short] MacOS (Intel): 0x27cdf0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x226d00
     * @note[short] MacOS (Intel): 0x27ce10
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2269cc
     * @note[short] MacOS (Intel): 0x27caa0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x226a04
     * @note[short] MacOS (Intel): 0x27cae0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x226968
     * @note[short] MacOS (Intel): 0x27ca20
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x226994
     * @note[short] MacOS (Intel): 0x27ca70
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x226a28
     * @note[short] MacOS (Intel): 0x27cb20
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x226a8c
     * @note[short] MacOS (Intel): 0x27cb70
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x226b7c
     * @note[short] MacOS (Intel): 0x27cc60
     * @note[short] Android
     */
    virtual void hideLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x226c4c
     * @note[short] MacOS (Intel): 0x27cd40
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x226c5c
     * @note[short] MacOS (Intel): 0x27cd60
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x226c48
     * @note[short] MacOS (Intel): 0x27cd30
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x22696c
     * @note[short] MacOS (Intel): 0x27ca30
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x226980
     * @note[short] MacOS (Intel): 0x27ca50
     * @note[short] Android
     */
    virtual void enableUI();
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCSprite* m_exitSprite;
    CCMenuItemSpriteExtra* m_exitButton;
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    void* m_delegate;
    bool m_closeOnHide;
};
