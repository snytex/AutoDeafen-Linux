#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpriteCOpacity.hpp"

class GJPathSprite : public CCSpriteCOpacity {
public:
    static constexpr auto CLASS_NAME = "GJPathSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathSprite, CCSpriteCOpacity)

    /**
     * @note[short] MacOS (ARM): 0x284ad4
     * @note[short] MacOS (Intel): 0x2ea590
     * @note[short] Windows: 0x281720
     * @note[short] iOS: 0x3b0c80
     * @note[short] Android
     */
    static GJPathSprite* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x288c2c
     * @note[short] MacOS (Intel): 0x2eeb50
     * @note[short] Android
     */
    void addRankLabel(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2886c0
     * @note[short] MacOS (Intel): 0x2ee610
     * @note[short] Windows: 0x281d90
     * @note[short] Android
     */
    void addShardSprite();

    /**
     * @note[short] MacOS (ARM): 0x287840
     * @note[short] MacOS (Intel): 0x2ed5b0
     * @note[short] Windows: 0x281ad0
     * @note[short] Android
     */
    void changeToLockedArt();

    /**
     * @note[short] MacOS (ARM): 0x288b0c
     * @note[short] MacOS (Intel): 0x2eea20
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x284b80
     * @note[short] MacOS (Intel): 0x2ea630
     * @note[short] Windows: 0x2818f0
     * @note[short] iOS: 0x3b0d20
     * @note[short] Android
     */
    void updateState();
    int m_pathNumber;
};
