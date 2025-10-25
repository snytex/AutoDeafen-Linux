#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGradientLayer : public cocos2d::CCLayerGradient {
public:
    static constexpr auto CLASS_NAME = "GJGradientLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGradientLayer, cocos2d::CCLayerGradient)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJGradientLayer();

    /**
     * @note[short] MacOS (ARM): 0x104788
     * @note[short] MacOS (Intel): 0x1290e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJGradientLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x128178
     * @note[short] MacOS (Intel): 0x154550
     * @note[short] Windows: 0x242810
     * @note[short] iOS: 0x20b450
     * @note[short] Android
     */
    virtual bool init();
    int m_baseColor;
    int m_detailColor;
    cocos2d::CCPoint m_gradientPosition;
    GradientTriggerObject* m_triggerObject;
    bool m_noScale;
    int m_blendingMode;
    int m_blendingLayer;
    int m_gradientID;
};
