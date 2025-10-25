#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class EditorOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "EditorOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): 0x2347d0
     * @note[short] MacOS (Intel): 0x28bbe0
     * @note[short] Android
     */
    static EditorOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x23496c
     * @note[short] MacOS (Intel): 0x28be40
     * @note[short] Windows: 0x2896d0
     * @note[short] iOS: 0x2d46d8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x235368
     * @note[short] MacOS (Intel): 0x28c810
     * @note[short] Windows: 0x28a100
     * @note[short] iOS: 0x2d50d0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234988
     * @note[short] MacOS (Intel): 0x28be70
     * @note[short] Windows: 0x289700
     * @note[short] iOS: 0x2d46f4
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x2352e8
     * @note[short] MacOS (Intel): 0x28c7a0
     * @note[short] Windows: 0x28a070
     * @note[short] iOS: 0x2d5050
     * @note[short] Android
     */
    void onButtonRows(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x235260
     * @note[short] MacOS (Intel): 0x28c720
     * @note[short] Windows: 0x289fe0
     * @note[short] iOS: 0x2d4fc8
     * @note[short] Android
     */
    void onButtonsPerRow(cocos2d::CCObject* sender);
    int m_buttonsPerRow;
    int m_buttonRows;
    cocos2d::CCLabelBMFont* m_buttonsPerRowLabel;
    cocos2d::CCLabelBMFont* m_buttonRowsLabel;
};
