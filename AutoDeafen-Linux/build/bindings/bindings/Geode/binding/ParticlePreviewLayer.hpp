#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ParticlePreviewLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ParticlePreviewLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ParticlePreviewLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ParticlePreviewLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ParticlePreviewLayer* create(cocos2d::CCParticleSystemQuad* p0);

    /**
     * @note[short] MacOS (ARM): 0x3d4c08
     * @note[short] MacOS (Intel): 0x464c10
     * @note[short] Windows: 0x41d700
     * @note[short] iOS: 0x2d1c18
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x3d4a80
     * @note[short] MacOS (Intel): 0x464a90
     * @note[short] Windows: 0x41d620
     * @note[short] iOS: 0x2d1b38
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCParticleSystemQuad* p0);

    /**
     * @note[short] Android
     */
    void postVisit();

    /**
     * @note[short] Android
     */
    void preVisitWithClippingRect(cocos2d::CCRect p0);
    int m_particleMode;
    int m_drawMode;
    cocos2d::CCParticleSystemQuad* m_particleSystem;
    bool m_gravityMode;
};
