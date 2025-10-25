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

class RingObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RingObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RingObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x489570
     * @note[short] Android
     */
    static RingObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x165ca8
     * @note[short] MacOS (Intel): 0x1a3520
     * @note[short] Windows: 0x4898f0
     * @note[short] iOS: 0x37b5e4
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x165d08
     * @note[short] MacOS (Intel): 0x1a3580
     * @note[short] Windows: 0x38c9f0
     * @note[short] iOS: 0x37b634
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x165c7c
     * @note[short] MacOS (Intel): 0x1a3500
     * @note[short] Windows: 0x4898d0
     * @note[short] iOS: 0x37b5b8
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x165d1c
     * @note[short] MacOS (Intel): 0x1a35b0
     * @note[short] Windows: 0x4899b0
     * @note[short] iOS: 0x37b648
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x165e28
     * @note[short] MacOS (Intel): 0x1a3700
     * @note[short] Windows: 0x489ad0
     * @note[short] iOS: 0x37b748
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x165cd8
     * @note[short] MacOS (Intel): 0x1a3550
     * @note[short] Windows: 0x489920
     * @note[short] iOS: 0x37b60c
     * @note[short] Android
     */
    virtual void setRScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x165b30
     * @note[short] MacOS (Intel): 0x1a33a0
     * @note[short] Windows: 0x489620
     * @note[short] iOS: 0x37b46c
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS (ARM): 0x165d0c
     * @note[short] MacOS (Intel): 0x1a3590
     * @note[short] Windows: 0x4899a0
     * @note[short] iOS: 0x37b638
     * @note[short] Android
     */
    virtual bool shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS (ARM): 0x165b3c
     * @note[short] MacOS (Intel): 0x1a33b0
     * @note[short] Windows: 0x489630
     * @note[short] iOS: 0x37b478
     * @note[short] Android
     */
    virtual void powerOnObject(int p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);

    /**
     * @note[short] Windows: 0x4896d0
     * @note[short] Android
     */
    void spawnCircle();
    bool m_claimTouch;
    bool m_isSpawnOnly;
};
