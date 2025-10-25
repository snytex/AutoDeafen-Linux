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

class DemonFilterSelectLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonFilterSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonFilterSelectLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DemonFilterSelectLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~DemonFilterSelectLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static DemonFilterSelectLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x5449e8
     * @note[short] MacOS (Intel): 0x618b50
     * @note[short] Windows: 0x302da0
     * @note[short] iOS: 0x5a968
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x544fc8
     * @note[short] MacOS (Intel): 0x619140
     * @note[short] Windows: 0x3034f0
     * @note[short] iOS: 0x5aebc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x3034a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x544ea0
     * @note[short] MacOS (Intel): 0x619030
     * @note[short] Windows: 0x3033e0
     * @note[short] iOS: 0x5ad94
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    cocos2d::CCArray* m_demons;
    void* m_unkPtr;
    int m_currentDemon;
    DemonFilterDelegate* m_delegate;
};
