#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class CCSpritePart : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CCSpritePart";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpritePart, CCSpritePlus)

    /**
     * @note[short] Android
     */
    static CCSpritePart* create(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] MacOS (ARM): 0x2f51d8
     * @note[short] MacOS (Intel): 0x362320
     * @note[short] Windows: 0x46a30
     * @note[short] iOS: 0x8375c
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] Android
     */
    static CCSpritePart* createWithSpriteFrameName(char const* p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn frameChanged(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn getBeingUsed();

    /**
     * @note[short] Android
     */
    TodoReturn hideInactive();

    /**
     * @note[short] Android
     */
    TodoReturn markAsNotBeingUsed();

    /**
     * @note[short] Android
     */
    TodoReturn resetTextureRect();

    /**
     * @note[short] Android
     */
    void setBeingUsed(bool p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn updateDisplayFrame(gd::string p0);
    bool m_isBeingUsed;
    gd::string m_spriteFrameName;
    SpritePartDelegate* m_delegate;
};
