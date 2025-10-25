#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJDropDownLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJDropDownLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDropDownLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJDropDownLayer();

    /**
     * @note[short] MacOS (ARM): 0x503e08
     * @note[short] MacOS (Intel): 0x5cfc90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJDropDownLayer* create(const char* title, float height, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x50432c
     * @note[short] MacOS (Intel): 0x5d01d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJDropDownLayer* create(const char* title);

    /**
     * @note[short] MacOS (ARM): 0x5046c0
     * @note[short] MacOS (Intel): 0x5d05d0
     * @note[short] Windows: 0x426f0
     * @note[short] iOS: 0x3ab0a0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5046fc
     * @note[short] MacOS (Intel): 0x5d0600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ab0dc
     * @note[short] Android: Out of line
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x50471c
     * @note[short] MacOS (Intel): 0x5d0660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ab0fc
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x50470c
     * @note[short] MacOS (Intel): 0x5d0620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ab0ec
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x504714
     * @note[short] MacOS (Intel): 0x5d0640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ab0f4
     * @note[short] Android: Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x5043b0
     * @note[short] MacOS (Intel): 0x5d0290
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x3aad90
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x5043e8
     * @note[short] MacOS (Intel): 0x5d02d0
     * @note[short] Windows: 0x250330
     * @note[short] iOS: 0x3aadc8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x50434c
     * @note[short] MacOS (Intel): 0x5d0210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3aad2c
     * @note[short] Android: Out of line
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x504378
     * @note[short] MacOS (Intel): 0x5d0260
     * @note[short] Windows: 0x425a0
     * @note[short] iOS: 0x3aad58
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x50440c
     * @note[short] MacOS (Intel): 0x5d0310
     * @note[short] Windows: 0x250350
     * @note[short] iOS: 0x3aadec
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x504458
     * @note[short] MacOS (Intel): 0x5d0350
     * @note[short] Windows: 0x250390
     * @note[short] iOS: 0x3aae38
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x50455c
     * @note[short] MacOS (Intel): 0x5d0460
     * @note[short] Windows: 0x2504e0
     * @note[short] iOS: 0x3aaf3c
     * @note[short] Android
     */
    virtual void hideLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x504660
     * @note[short] MacOS (Intel): 0x5d0570
     * @note[short] Windows: 0x426a0
     * @note[short] iOS: 0x3ab040
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x504670
     * @note[short] MacOS (Intel): 0x5d0590
     * @note[short] Windows: 0x250630
     * @note[short] iOS: 0x3ab050
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x50465c
     * @note[short] MacOS (Intel): 0x5d0560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ab03c
     * @note[short] Android: Out of line
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x504350
     * @note[short] MacOS (Intel): 0x5d0220
     * @note[short] Windows: 0x2502f0
     * @note[short] iOS: 0x3aad30
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x504364
     * @note[short] MacOS (Intel): 0x5d0240
     * @note[short] Windows: 0x250310
     * @note[short] iOS: 0x3aad44
     * @note[short] Android
     */
    virtual void enableUI();

    /**
     * @note[short] MacOS (ARM): 0x503f2c
     * @note[short] MacOS (Intel): 0x5cfdd0
     * @note[short] Windows: 0x24feb0
     * @note[short] iOS: 0x3aa920
     * @note[short] Android
     */
    bool init(char const* p0, float p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x50433c
     * @note[short] MacOS (Intel): 0x5d01f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3aad1c
     * @note[short] Android
     */
    bool init(char const* title);
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    cocos2d::CCLayer* m_mainLayer;
    bool m_closeOnHide;
    GJDropDownLayerDelegate* m_delegate;
    bool m_fastMenu;
};
