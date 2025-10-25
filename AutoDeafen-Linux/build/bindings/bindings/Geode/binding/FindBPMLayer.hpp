#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CreateGuidelinesLayer.hpp"

class FindBPMLayer : public CreateGuidelinesLayer {
public:
    static constexpr auto CLASS_NAME = "FindBPMLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindBPMLayer, CreateGuidelinesLayer)

    /**
     * @note[short] Windows: 0x9b280
     * @note[short] Android
     */
    static FindBPMLayer* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4581b8
     * @note[short] MacOS (Intel): 0x4f7a00
     * @note[short] Windows: 0x9b870
     * @note[short] iOS: 0x823f8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x458024
     * @note[short] MacOS (Intel): 0x4f7870
     * @note[short] Windows: 0x9b6e0
     * @note[short] iOS: 0x82284
     * @note[short] Android
     */
    virtual void playMusic();

    /**
     * @note[short] MacOS (ARM): 0x4580c0
     * @note[short] MacOS (Intel): 0x4f7900
     * @note[short] Windows: 0x9b780
     * @note[short] iOS: 0x82310
     * @note[short] Android
     */
    virtual void registerTouch();

    /**
     * @note[short] MacOS (ARM): 0x4581b4
     * @note[short] MacOS (Intel): 0x4f79f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x823f4
     * @note[short] Android: Out of line
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x457f44
     * @note[short] MacOS (Intel): 0x4f7760
     * @note[short] Windows: 0x9b4a0
     * @note[short] iOS: 0x821e0
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x457f7c
     * @note[short] MacOS (Intel): 0x4f77a0
     * @note[short] Windows: 0x9b660
     * @note[short] iOS: 0x82218
     * @note[short] Android
     */
    virtual void recordingDidStop();

    /**
     * @note[short] Android
     */
    void calculateBPM();

    /**
     * @note[short] Android
     */
    bool init(int p0);
    int m_songID;
    cocos2d::CCLabelBMFont* m_bpmLabel;
    float m_startOffset;
    int m_beats;
    int m_beatsPerMinute;
};
