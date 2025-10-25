#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class KeyframeGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static KeyframeGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1750f4
     * @note[short] MacOS (Intel): 0x1b5420
     * @note[short] Windows: 0x49c8e0
     * @note[short] iOS: 0x383c34
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1753e0
     * @note[short] MacOS (Intel): 0x1b5700
     * @note[short] Windows: 0x49cba0
     * @note[short] iOS: 0x383ef8
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x17552c
     * @note[short] MacOS (Intel): 0x1b5860
     * @note[short] Windows: 0x49cc60
     * @note[short] iOS: 0x383fa4
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x1759d4
     * @note[short] MacOS (Intel): 0x1b5dd0
     * @note[short] Windows: 0x49d0a0
     * @note[short] iOS: 0x3843ac
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x175158
     * @note[short] MacOS (Intel): 0x1b5490
     * @note[short] Windows: 0x49c970
     * @note[short] iOS: 0x383c98
     * @note[short] Android
     */
    void updateShadowObjects(GJBaseGameLayer* p0, EditorUI* p1);
    cocos2d::CCArray* m_shadowObjects;
    cocos2d::CCSprite* m_previewSprite;
    int m_keyframeGroup;
    int m_keyframeIndex;
    bool m_referenceOnly;
    bool m_proximity;
    bool m_curve;
    bool m_closeLoop;
    int m_timeMode;
    float m_unk760;
    float m_spawnDelay;
    bool m_previewArt;
    bool m_keyframeActive;
    bool m_autoLayer;
    int m_direction;
    int m_revolutions;
    float m_lineOpacity;
};
