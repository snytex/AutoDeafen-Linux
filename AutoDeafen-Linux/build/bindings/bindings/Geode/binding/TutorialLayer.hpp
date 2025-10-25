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

class TutorialLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x42e884
     * @note[short] MacOS (Intel): 0x4c9130
     * @note[short] Windows: 0x4b30b0
     * @note[short] iOS: 0x1bf0cc
     * @note[short] Android
     */
    static TutorialLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x42e988
     * @note[short] MacOS (Intel): 0x4c9280
     * @note[short] Windows: 0x4b31c0
     * @note[short] iOS: 0x1bf188
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x42f414
     * @note[short] MacOS (Intel): 0x4c9cc0
     * @note[short] Windows: 0x4b3de0
     * @note[short] iOS: 0x1bfa70
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x42ef60
     * @note[short] MacOS (Intel): 0x4c9800
     * @note[short] Windows: 0x4b3730
     * @note[short] iOS: 0x1bf678
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x42ee10
     * @note[short] MacOS (Intel): 0x4c96e0
     * @note[short] Windows: 0x4b3d60
     * @note[short] iOS: 0x1bf608
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x42eea4
     * @note[short] MacOS (Intel): 0x4c9760
     * @note[short] Windows: 0x4b3710
     * @note[short] iOS: 0x1bf660
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x42f3bc
     * @note[short] MacOS (Intel): 0x4c9c70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1bfa18
     * @note[short] Android
     */
    void removeTutorialTexture();
    cocos2d::CCLayer* m_tutorialLayer;
    int m_page;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_exitButton;
};
