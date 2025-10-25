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

class SetupKeyframePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupKeyframePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupKeyframePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x40d4a0
     * @note[short] Android
     */
    static SetupKeyframePopup* create(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);

    /**
     * @note[short] MacOS (ARM): 0x1a6778
     * @note[short] MacOS (Intel): 0x1effa0
     * @note[short] Windows: 0x40f180
     * @note[short] iOS: 0x1b7d14
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a6394
     * @note[short] MacOS (Intel): 0x1efbe0
     * @note[short] Windows: 0x40e990
     * @note[short] iOS: 0x1b7a24
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a60a8
     * @note[short] MacOS (Intel): 0x1ef920
     * @note[short] Windows: 0x40e8b0
     * @note[short] iOS: 0x1b77fc
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1a62f0
     * @note[short] MacOS (Intel): 0x1efb50
     * @note[short] Windows: 0x40e8d0
     * @note[short] iOS: 0x1b7980
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a4a58
     * @note[short] MacOS (Intel): 0x1edec0
     * @note[short] Windows: 0x40d5e0
     * @note[short] Android
     */
    bool init(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);

    /**
     * @note[short] Windows: 0x40f090
     * @note[short] Android
     */
    void onTimeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x40edf0
     * @note[short] Android
     */
    void refreshPreviewArt();

    /**
     * @note[short] Windows: 0x40f0f0
     * @note[short] Android
     */
    void updateTimeModeButtons();
    cocos2d::CCArray* m_timeModeToggles;
    LevelEditorLayer* m_editorLayer;
    bool m_groupIDChanged;
};
