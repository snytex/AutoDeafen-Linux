#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCBlockLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "CCBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCBlockLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x42360
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCBlockLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCBlockLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x46163c
     * @note[short] MacOS (Intel): 0x501df0
     * @note[short] Windows: 0x424e0
     * @note[short] iOS: 0x8a2e0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4618c0
     * @note[short] MacOS (Intel): 0x5020a0
     * @note[short] Windows: 0x426f0
     * @note[short] iOS: 0x8a540
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x4618fc
     * @note[short] MacOS (Intel): 0x5020d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a57c
     * @note[short] Android: Out of line
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x46191c
     * @note[short] MacOS (Intel): 0x502130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a59c
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x46190c
     * @note[short] MacOS (Intel): 0x5020f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a58c
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x461914
     * @note[short] MacOS (Intel): 0x502110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a594
     * @note[short] Android: Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4617a4
     * @note[short] MacOS (Intel): 0x501f60
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x8a424
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x4617dc
     * @note[short] MacOS (Intel): 0x501fa0
     * @note[short] Windows: 0x42620
     * @note[short] iOS: 0x8a45c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x461760
     * @note[short] MacOS (Intel): 0x501f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a3e0
     * @note[short] Android: Out of line
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x46176c
     * @note[short] MacOS (Intel): 0x501f30
     * @note[short] Windows: 0x425a0
     * @note[short] iOS: 0x8a3ec
     * @note[short] Android
     */
    virtual TodoReturn enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x4617f8
     * @note[short] MacOS (Intel): 0x501fd0
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x8a478
     * @note[short] Android
     */
    virtual TodoReturn exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x461844
     * @note[short] MacOS (Intel): 0x502010
     * @note[short] Windows: 0x42680
     * @note[short] iOS: 0x8a4c4
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x461850
     * @note[short] MacOS (Intel): 0x502020
     * @note[short] Windows: 0x42690
     * @note[short] iOS: 0x8a4d0
     * @note[short] Android
     */
    virtual TodoReturn hideLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x461860
     * @note[short] MacOS (Intel): 0x502040
     * @note[short] Windows: 0x426a0
     * @note[short] iOS: 0x8a4e0
     * @note[short] Android
     */
    virtual TodoReturn layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x461870
     * @note[short] MacOS (Intel): 0x502060
     * @note[short] Windows: 0x426b0
     * @note[short] iOS: 0x8a4f0
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x46185c
     * @note[short] MacOS (Intel): 0x502030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a4dc
     * @note[short] Android: Out of line
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x461764
     * @note[short] MacOS (Intel): 0x501f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a3e4
     * @note[short] Android: Out of line
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x461768
     * @note[short] MacOS (Intel): 0x501f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a3e8
     * @note[short] Android: Out of line
     */
    virtual void enableUI();

    /**
     * @note[short] MacOS (ARM): 0x461924
     * @note[short] MacOS (Intel): 0x502150
     * @note[short] iOS: 0x8a5a4
     * @note[short] Android
     */
    void decrementForcePrio();

    /**
     * @note[short] Android
     */
    void incrementForcePrio();
    bool m_closeOnHide;
    bool m_forcePrioRegistered;
};
