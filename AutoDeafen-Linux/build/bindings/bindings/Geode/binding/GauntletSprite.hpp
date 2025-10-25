#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GauntletSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletSprite();

    /**
     * @note[short] MacOS (ARM): 0x3115c8
     * @note[short] MacOS (Intel): 0x381250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x233794
     * @note[short] Android
     */
    static GauntletSprite* create(GauntletType gauntletType, bool locked);

    /**
     * @note[short] MacOS (ARM): 0x311fe8
     * @note[short] MacOS (Intel): 0x381b50
     * @note[short] Windows: 0x1f4fe0
     * @note[short] Android
     */
    void addLockedSprite();

    /**
     * @note[short] MacOS (ARM): 0x311eec
     * @note[short] MacOS (Intel): 0x381a80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addNormalSprite();

    /**
     * @note[short] MacOS (ARM): 0x312314
     * @note[short] MacOS (Intel): 0x381e70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForType(GauntletType gauntletType);

    /**
     * @note[short] MacOS (ARM): 0x311e44
     * @note[short] MacOS (Intel): 0x381a00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GauntletType gauntletType, bool locked);

    /**
     * @note[short] MacOS (ARM): 0x3122f4
     * @note[short] MacOS (Intel): 0x381e40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float luminanceForType(GauntletType gauntletType);

    /**
     * @note[short] MacOS (ARM): 0x311d70
     * @note[short] MacOS (Intel): 0x381930
     * @note[short] Windows: 0x1f5310
     * @note[short] Android
     */
    void toggleLockedSprite(bool p0);
    GauntletType m_gauntletType;
};
