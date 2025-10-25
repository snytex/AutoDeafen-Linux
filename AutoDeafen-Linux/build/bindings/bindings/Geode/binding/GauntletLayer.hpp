#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"

class GauntletLayer : public cocos2d::CCLayer, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~GauntletLayer();

    /**
     * @note[short] MacOS (ARM): 0x30fc28
     * @note[short] MacOS (Intel): 0x37f700
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GauntletLayer* create(GauntletType gauntletType);

    /**
     * @note[short] MacOS (ARM): 0x30fb40
     * @note[short] MacOS (Intel): 0x37f5f0
     * @note[short] Windows: 0x1f2920
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GauntletType p0);

    /**
     * @note[short] MacOS (ARM): 0x311db0
     * @note[short] MacOS (Intel): 0x381960
     * @note[short] Windows: 0x1f4f50
     * @note[short] iOS: 0x233c90
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x311274
     * @note[short] MacOS (Intel): 0x380f10
     * @note[short] Windows: 0x1f3440
     * @note[short] iOS: 0x2335f0
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x31141c
     * @note[short] MacOS (Intel): 0x3810b0
     * @note[short] Windows: 0x1f3650
     * @note[short] iOS: 0x2336c4
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x30fcf0
     * @note[short] MacOS (Intel): 0x37f7e0
     * @note[short] Windows: 0x1f2c50
     * @note[short] iOS: 0x2320d4
     * @note[short] Android
     */
    bool init(GauntletType p0);

    /**
     * @note[short] MacOS (ARM): 0x31034c
     * @note[short] MacOS (Intel): 0x37fe50
     * @note[short] Windows: 0x1f4f00
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3116ec
     * @note[short] MacOS (Intel): 0x381320
     * @note[short] Windows: 0x1f4880
     * @note[short] iOS: 0x233854
     * @note[short] Android
     */
    void onLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x310394
     * @note[short] MacOS (Intel): 0x37fea0
     * @note[short] Windows: 0x1f3850
     * @note[short] iOS: 0x23273c
     * @note[short] Android
     */
    void setupGauntlet(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x311730
     * @note[short] MacOS (Intel): 0x381360
     * @note[short] Windows: 0x1f48f0
     * @note[short] iOS: 0x233898
     * @note[short] Android
     */
    void unlockActiveItem();
    cocos2d::CCArray* m_levels;
    LoadingCircle* m_loadingCircle;
    GauntletType m_gauntletType;
    cocos2d::CCSprite* m_backgroundSprite;
    void* m_unkPtr;
    CCMenuItemSpriteExtra* m_activeItemButton;
    cocos2d::CCArray* m_activeObjects;
    TextArea* m_tryAgainText;
};
