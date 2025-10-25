#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"
#include "SelectArtDelegate.hpp"

class SetupArtSwitchPopup : public SetupTriggerPopup, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupArtSwitchPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupArtSwitchPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x459210
     * @note[short] Android
     */
    static SetupArtSwitchPopup* create(ArtTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x4c38e4
     * @note[short] MacOS (Intel): 0x56ee90
     * @note[short] Windows: 0x459ed0
     * @note[short] iOS: 0x4092dc
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x4c32b0
     * @note[short] MacOS (Intel): 0x56e840
     * @note[short] Windows: 0x4594d0
     * @note[short] Android
     */
    bool init(ArtTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] Windows: 0x459e80
     * @note[short] Android
     */
    void onArt(cocos2d::CCObject* sender);
    SelectArtType m_artType;
    cocos2d::CCSprite* m_artSprite;
};
