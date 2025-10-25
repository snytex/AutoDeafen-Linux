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

class SetupReverbPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupReverbPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupReverbPopup, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupReverbPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x40f038
     * @note[short] MacOS (Intel): 0x4a51d0
     * @note[short] Windows: 0x42eda0
     * @note[short] iOS: 0x18304c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x40e8e0
     * @note[short] MacOS (Intel): 0x4a4a70
     * @note[short] Windows: 0x42e510
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x42ead0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x42ebc0
     * @note[short] Android
     */
    void onReverb(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x42ec50
     * @note[short] Android
     */
    void updateReverbLabel();
    cocos2d::CCLabelBMFont* m_reverbLabel;
};
