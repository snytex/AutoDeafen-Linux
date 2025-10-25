#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class SetupObjectOptionsPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupObjectOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectOptionsPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupObjectOptionsPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SetupObjectOptionsPopup();

    /**
     * @note[short] MacOS (ARM): 0x29a778
     * @note[short] MacOS (Intel): 0x302ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42654
     * @note[short] Android
     */
    static SetupObjectOptionsPopup* create(GameObject* p0, cocos2d::CCArray* p1, SetGroupIDLayer* p2);

    /**
     * @note[short] MacOS (ARM): 0x29dd48
     * @note[short] MacOS (Intel): 0x306b70
     * @note[short] Windows: 0x250330
     * @note[short] iOS: 0x45288
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x29dd6c
     * @note[short] MacOS (Intel): 0x306bb0
     * @note[short] Windows: 0x8ba30
     * @note[short] iOS: 0x452ac
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x29da98
     * @note[short] MacOS (Intel): 0x306760
     * @note[short] Windows: 0x3e7cd0
     * @note[short] iOS: 0x450a4
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x29ddb8
     * @note[short] MacOS (Intel): 0x306c10
     * @note[short] Windows: 0x84620
     * @note[short] iOS: 0x452f8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29b3ac
     * @note[short] MacOS (Intel): 0x3039a0
     * @note[short] Windows: 0x3e62f0
     * @note[short] iOS: 0x42e7c
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1, SetGroupIDLayer* p2);

    /**
     * @note[short] Windows: 0x3e8500
     * @note[short] Android
     */
    void onAlwaysHide(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e88f0
     * @note[short] Android
     */
    void onApplyScaleStick(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8dd0
     * @note[short] Android
     */
    void onCenterEffect(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e83e0
     * @note[short] Android
     */
    void onDisableGlow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8230
     * @note[short] Android
     */
    void onDisableObject(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8740
     * @note[short] Android
     */
    void onDontBoost(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e87d0
     * @note[short] Android
     */
    void onDontBoostX(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8080
     * @note[short] Android
     */
    void onDontEnter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e7ff0
     * @note[short] Android
     */
    void onDontFade(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8b30
     * @note[short] Android
     */
    void onExtendedCollision(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e86b0
     * @note[short] Android
     */
    void onExtraSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8350
     * @note[short] Android
     */
    void onGripSlope(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8110
     * @note[short] Android
     */
    void onHideEffects(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8aa0
     * @note[short] Android
     */
    void onHighDetail(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e7f60
     * @note[short] Android
     */
    void onIceBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8860
     * @note[short] Android
     */
    void onNoAudioScale(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8590
     * @note[short] Android
     */
    void onNonStickX(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8620
     * @note[short] Android
     */
    void onNonStickY(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e81a0
     * @note[short] Android
     */
    void onNoParticle(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8470
     * @note[short] Android
     */
    void onPassable(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8c60
     * @note[short] Android
     */
    void onReverse(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8d20
     * @note[short] Android
     */
    void onSinglePlayerTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8a10
     * @note[short] Android
     */
    void onToggleAreaParent(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e8980
     * @note[short] Android
     */
    void onToggleGroupParent(cocos2d::CCObject* sender);
    GameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    bool m_iceBlock;
    bool m_dontFade;
    bool m_dontEnter;
    bool m_noEffects;
    bool m_noParticle;
    bool m_noTouch;
    bool m_passable;
    bool m_hide;
    bool m_nonStickX;
    bool m_nonStickY;
    bool m_extraSticky;
    bool m_dontBoostY;
    bool m_dontBoostX;
    bool m_noAudioScale;
    bool m_scaleStick;
    bool m_highDetail;
    bool m_groupParent;
    bool m_areaParent;
    bool m_gripSlope;
    bool m_noGlow;
    bool m_reverse;
    bool m_extendedCollision;
    bool m_unk2a6;
    SetGroupIDLayer* m_groupIDLayer;
    bool m_effectObject;
    bool m_singlePlayerTouch;
    bool m_centerEffect;
};
