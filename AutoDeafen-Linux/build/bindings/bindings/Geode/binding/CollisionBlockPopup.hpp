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

class CollisionBlockPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "CollisionBlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CollisionBlockPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x8a8d0
     * @note[short] Android
     */
    static CollisionBlockPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x220028
     * @note[short] MacOS (Intel): 0x2753b0
     * @note[short] Windows: 0x8bb20
     * @note[short] iOS: 0x89a70
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x21ffdc
     * @note[short] MacOS (Intel): 0x275350
     * @note[short] Windows: 0x8ba30
     * @note[short] iOS: 0x89a24
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x21fe7c
     * @note[short] MacOS (Intel): 0x275190
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x89988
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x21fe98
     * @note[short] MacOS (Intel): 0x2751d0
     * @note[short] Windows: 0x8b7a0
     * @note[short] iOS: 0x899a4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x220034
     * @note[short] MacOS (Intel): 0x2753e0
     * @note[short] Windows: 0x7b5c0
     * @note[short] iOS: 0x89a7c
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x220104
     * @note[short] MacOS (Intel): 0x2754a0
     * @note[short] Windows: 0x7b620
     * @note[short] iOS: 0x89ae8
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x21ec48
     * @note[short] MacOS (Intel): 0x273e80
     * @note[short] Windows: 0x8a9f0
     * @note[short] iOS: 0x88cd0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x21f6a4
     * @note[short] MacOS (Intel): 0x274950
     * @note[short] Windows: 0x8ba80
     * @note[short] iOS: 0x8967c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x8b550
     * @note[short] Android
     */
    void onDynamicBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21f87c
     * @note[short] MacOS (Intel): 0x274b60
     * @note[short] Windows: 0x8b600
     * @note[short] iOS: 0x89734
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x8b650
     * @note[short] Android
     */
    void onNextItemID(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x8b890
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] Windows: 0x8b990
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] Windows: 0x8b910
     * @note[short] Android
     */
    void updateTextInputLabel();
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    CCTextInputNode* m_blockIDInput;
    int m_blockID;
    bool m_dynamicBlock;
    bool m_disableDelegate;
};
