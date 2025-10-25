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

class GJRobotSprite : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "GJRobotSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRobotSprite, CCAnimatedSprite)

    /**
     * @note[short] MacOS (ARM): 0x4f8c84
     * @note[short] MacOS (Intel): 0x5c3a10
     * @note[short] Windows: 0x29efd0
     * @note[short] iOS: 0x23eff0
     * @note[short] Android
     */
    static GJRobotSprite* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4f9e1c
     * @note[short] MacOS (Intel): 0x5c4dd0
     * @note[short] Windows: 0x29fcc0
     * @note[short] iOS: 0x23fe10
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x4f9f00
     * @note[short] MacOS (Intel): 0x5c4ee0
     * @note[short] Windows: 0x2a03b0
     * @note[short] iOS: 0x23fef4
     * @note[short] Android
     */
    virtual void hideSecondary();

    /**
     * @note[short] MacOS (ARM): 0x4f9ad0
     * @note[short] MacOS (Intel): 0x5c49e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23fac8
     * @note[short] Android
     */
    void hideGlow();

    /**
     * @note[short] MacOS (ARM): 0x4f8e44
     * @note[short] MacOS (Intel): 0x5c3bc0
     * @note[short] Windows: 0x29f080
     * @note[short] iOS: 0x23f13c
     * @note[short] Android: Rebinded
     */
    bool init(int p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4f8db4
     * @note[short] MacOS (Intel): 0x5c3b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23f0b8
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4f9abc
     * @note[short] MacOS (Intel): 0x5c49c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23fab4
     * @note[short] Android
     */
    void showGlow();

    /**
     * @note[short] MacOS (ARM): 0x4f9ae4
     * @note[short] MacOS (Intel): 0x5c4a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23fadc
     * @note[short] Android
     */
    void updateColor01(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x4f9d90
     * @note[short] MacOS (Intel): 0x5c4d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23fd84
     * @note[short] Android
     */
    void updateColor02(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x4f9af8
     * @note[short] MacOS (Intel): 0x5c4a20
     * @note[short] Windows: 0x29f810
     * @note[short] iOS: 0x23faf0
     * @note[short] Android
     */
    void updateColors();

    /**
     * @note[short] MacOS (ARM): 0x4f9378
     * @note[short] MacOS (Intel): 0x5c4140
     * @note[short] Windows: 0x29fdc0
     * @note[short] iOS: 0x23f5ec
     * @note[short] Android
     */
    void updateFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4f9da0
     * @note[short] MacOS (Intel): 0x5c4d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23fd94
     * @note[short] Android
     */
    void updateGlowColor(cocos2d::ccColor3B p0, bool p1);
    cocos2d::CCArray* m_unkArray;
    bool m_hasExtra;
    cocos2d::ccColor3B m_color;
    cocos2d::ccColor3B m_secondColor;
    cocos2d::CCArray* m_secondArray;
    cocos2d::CCSprite* m_glowSprite;
    cocos2d::CCSprite* m_extraSprite;
    IconType m_iconType;
    int m_iconRequestID;
    CCSpritePart* m_headSprite;
    CCSpritePart* m_footSprite;
};
