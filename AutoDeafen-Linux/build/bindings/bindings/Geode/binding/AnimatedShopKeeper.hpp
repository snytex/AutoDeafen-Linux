#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCAnimatedSprite.hpp"

class AnimatedShopKeeper : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "AnimatedShopKeeper";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedShopKeeper, CCAnimatedSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AnimatedShopKeeper();

    /**
     * @note[short] MacOS (ARM): 0x2a6b1c
     * @note[short] MacOS (Intel): 0x3101f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14f124
     * @note[short] Android
     */
    static AnimatedShopKeeper* create(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2aa490
     * @note[short] MacOS (Intel): 0x314230
     * @note[short] Windows: 0x2a8840
     * @note[short] iOS: 0x151d58
     * @note[short] Android
     */
    virtual void animationFinished(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x2aa3c4
     * @note[short] MacOS (Intel): 0x314180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x151ca4
     * @note[short] Android
     */
    bool init(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a936c
     * @note[short] MacOS (Intel): 0x312ec0
     * @note[short] Windows: 0x2a8520
     * @note[short] iOS: 0x150fc4
     * @note[short] Android
     */
    void playReactAnimation();

    /**
     * @note[short] MacOS (ARM): 0x2a6c78
     * @note[short] MacOS (Intel): 0x310360
     * @note[short] Windows: 0x2a87b0
     * @note[short] iOS: 0x14f1e0
     * @note[short] Android
     */
    void startAnimating();
    ShopType m_type;
    int m_idleInt1;
    int m_idleInt2;
    bool m_looking;
    bool m_reacting;
    int m_reactCount;
    int m_gruntIndex;
};
