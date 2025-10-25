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
#include "SelectArtDelegate.hpp"

class SetupSmartBlockLayer : public FLAlertLayer, public TextInputDelegate, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSmartBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartBlockLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x43e530
     * @note[short] iOS: 0x72e9c
     * @note[short] Android
     */
    static SetupSmartBlockLayer* create(SmartGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4383cc
     * @note[short] MacOS (Intel): 0x4d46d0
     * @note[short] Windows: 0x4406d0
     * @note[short] iOS: 0x74300
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x438368
     * @note[short] MacOS (Intel): 0x4d4640
     * @note[short] Windows: 0x8ba30
     * @note[short] iOS: 0x7429c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x4383b4
     * @note[short] MacOS (Intel): 0x4d46a0
     * @note[short] Windows: 0x440690
     * @note[short] iOS: 0x742e8
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* p0);

    /**
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x436e18
     * @note[short] MacOS (Intel): 0x4d2e00
     * @note[short] Windows: 0x43e670
     * @note[short] iOS: 0x72f8c
     * @note[short] Android
     */
    bool init(SmartGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x43f750
     * @note[short] Android
     */
    void onAllowFlipping(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x43f6d0
     * @note[short] Android
     */
    void onAllowRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x440030
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4400f0
     * @note[short] Android
     */
    void onCreate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x437f50
     * @note[short] MacOS (Intel): 0x4d41d0
     * @note[short] Windows: 0x43fd80
     * @note[short] iOS: 0x73f48
     * @note[short] Android
     */
    void onCreateAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x440520
     * @note[short] Android
     */
    void onCreateTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x43f890
     * @note[short] Android
     */
    void onDontDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x43f900
     * @note[short] Android
     */
    void onIgnoreCorners(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x43f820
     * @note[short] Android
     */
    void onNearbyReference(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x437d78
     * @note[short] MacOS (Intel): 0x4d3f90
     * @note[short] Windows: 0x43f980
     * @note[short] Android
     */
    void onPasteTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x43f640
     * @note[short] Android
     */
    void onReferenceOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x440620
     * @note[short] Android
     */
    void onSelectPremade(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4406a0
     * @note[short] Android
     */
    void onSelectTemplate(cocos2d::CCObject* sender);
    bool m_referenceOnly;
    bool m_allowRotation;
    bool m_allowFlipX;
    bool m_allowFlipY;
    bool m_useNearby;
    bool m_dontDelete;
    bool m_ignoreCorners;
    int m_specialTemplate;
    SmartGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
};
