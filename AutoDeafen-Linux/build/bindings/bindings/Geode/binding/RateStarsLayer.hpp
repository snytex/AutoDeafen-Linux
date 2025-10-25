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
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class RateStarsLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateStarsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateStarsLayer, FLAlertLayer)

    /**
     * @note[short] Android: Rebinded
     */
     RateStarsLayer();

    /**
     * @note[short] MacOS (ARM): 0x223a90
     * @note[short] MacOS (Intel): 0x279820
     * @note[short] Windows: 0x3b2c40
     * @note[short] iOS: 0x84128
     * @note[short] Android
     */
    static RateStarsLayer* create(int p0, bool p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x224d64
     * @note[short] MacOS (Intel): 0x27ab50
     * @note[short] Windows: 0x3b3b90
     * @note[short] iOS: 0x84c9c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2249d8
     * @note[short] MacOS (Intel): 0x27a810
     * @note[short] Windows: 0x3b3990
     * @note[short] iOS: 0x84b00
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x224b18
     * @note[short] MacOS (Intel): 0x27a900
     * @note[short] Windows: 0x3b3a10
     * @note[short] iOS: 0x84b8c
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x224c78
     * @note[short] MacOS (Intel): 0x27aa70
     * @note[short] Windows: 0x3b3ad0
     * @note[short] iOS: 0x84c20
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Windows: 0x3b3470
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0x223bd8
     * @note[short] MacOS (Intel): 0x2799b0
     * @note[short] Windows: 0x3b2d90
     * @note[short] iOS: 0x841b4
     * @note[short] Android
     */
    bool init(int p0, bool p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x224850
     * @note[short] MacOS (Intel): 0x27a680
     * @note[short] Windows: 0x3b3b50
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224838
     * @note[short] MacOS (Intel): 0x27a650
     * @note[short] Windows: 0x3b3440
     * @note[short] iOS: 0x8496c
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2248ac
     * @note[short] MacOS (Intel): 0x27a6d0
     * @note[short] Windows: 0x3b37a0
     * @note[short] iOS: 0x849e0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22466c
     * @note[short] MacOS (Intel): 0x27a4b0
     * @note[short] Windows: 0x3b35b0
     * @note[short] iOS: 0x84808
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* p0);
    bool m_uploadFinished;
    bool m_moderator;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_buttons;
    int m_levelID;
    int m_starsRate;
    bool m_coinsToggled;
    cocos2d::CCSprite* m_coinSprite;
    UploadActionPopup* m_popup;
    GJDifficultySprite* m_difficultySprite;
    int m_featureState;
    RateLevelDelegate* m_delegate;
};
