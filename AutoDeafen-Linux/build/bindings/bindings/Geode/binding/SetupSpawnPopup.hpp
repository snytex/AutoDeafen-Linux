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

class SetupSpawnPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSpawnPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSpawnPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x445be0
     * @note[short] Android
     */
    static SetupSpawnPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x2286cc
     * @note[short] MacOS (Intel): 0x27ece0
     * @note[short] Windows: 0x40c730
     * @note[short] iOS: 0xfbd4c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2271a4
     * @note[short] MacOS (Intel): 0x27d4f0
     * @note[short] Windows: 0x445d20
     * @note[short] iOS: 0xfac18
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x446910
     * @note[short] Android
     */
    void onAddRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x446a80
     * @note[short] Android
     */
    void onDeleteRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x447440
     * @note[short] Android
     */
    void onSelectRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x228568
     * @note[short] MacOS (Intel): 0x27eb80
     * @note[short] Windows: 0x447510
     * @note[short] iOS: 0xfbc20
     * @note[short] Android
     */
    void queueUpdateButtons();

    /**
     * @note[short] MacOS (ARM): 0x227d98
     * @note[short] MacOS (Intel): 0x27e2e0
     * @note[short] Windows: 0x446c20
     * @note[short] iOS: 0xfb69c
     * @note[short] Android
     */
    void updateRemapButtons(float p0);
    bool m_isBusy;
    cocos2d::CCArray* m_remapButtons;
    gd::vector<int> m_remapGroups;
    int m_remapOriginalID;
    int m_remapNewID;
};
