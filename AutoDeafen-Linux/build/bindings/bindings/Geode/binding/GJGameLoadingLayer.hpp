#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGameLoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGameLoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x1282f4
     * @note[short] MacOS (Intel): 0x1546e0
     * @note[short] iOS: 0x20b54c
     * @note[short] Android
     */
    static GJGameLoadingLayer* create(GJGameLevel* level, bool editor);

    /**
     * @note[short] Windows: 0x242890
     * @note[short] iOS: 0x20b4c0
     * @note[short] Android
     */
    static GJGameLoadingLayer* transitionToLoadingLayer(GJGameLevel* level, bool editor);

    /**
     * @note[short] MacOS (ARM): 0x1286f4
     * @note[short] MacOS (Intel): 0x154bb0
     * @note[short] Windows: 0x52db0
     * @note[short] iOS: 0x20b7f4
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x1286f0
     * @note[short] MacOS (Intel): 0x154ba0
     * @note[short] Windows: 0x242b20
     * @note[short] iOS: 0x20b7f0
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] Android
     */
    void gameLayerDidUnload();

    /**
     * @note[short] MacOS (ARM): 0x128590
     * @note[short] MacOS (Intel): 0x154a40
     * @note[short] iOS: 0x20b698
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool editor);

    /**
     * @note[short] MacOS (ARM): 0x12868c
     * @note[short] MacOS (Intel): 0x154b40
     * @note[short] Windows: 0x242a80
     * @note[short] Android
     */
    void loadLevel();
    GJGameLevel* m_level;
    bool m_editor;
};
