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

class TutorialPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialPopup, FLAlertLayer)

    /**
     * @note[short] Android: Rebinded
     */
    static TutorialPopup* create(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x4f1a04
     * @note[short] MacOS (Intel): 0x5bbe00
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4f1ad8
     * @note[short] MacOS (Intel): 0x5bbed0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Android
     */
    void animateMenu();

    /**
     * @note[short] Android
     */
    void closeTutorial(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f17a0
     * @note[short] MacOS (Intel): 0x5bbba0
     * @note[short] Android: Rebinded
     */
    bool init(gd::string p0);

    /**
     * @note[short] Android
     */
    void registerForCallback(cocos2d::SEL_MenuHandler p0, cocos2d::CCNode* p1);
    gd::string m_unk298;
    bool m_callbackRegistered;
    cocos2d::SEL_MenuHandler m_callbackSelector;
    cocos2d::CCNode* m_targetNode;
    CCMenuItemSpriteExtra* m_closeButton;
};
