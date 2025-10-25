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

class WorldLevelPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "WorldLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(WorldLevelPage, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static WorldLevelPage* create(GJGameLevel* p0, GJWorldNode* p1);

    /**
     * @note[short] MacOS (ARM): 0x33f3cc
     * @note[short] MacOS (Intel): 0x3b3c50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x33f284
     * @note[short] MacOS (Intel): 0x3b3b10
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x33dfa0
     * @note[short] MacOS (Intel): 0x3b27f0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, GJWorldNode* p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSong(cocos2d::CCObject* sender);
    GJWorldNode* m_worldNode;
    GJGameLevel* m_level;
};
