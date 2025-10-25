#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GauntletNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletNode();

    /**
     * @note[short] MacOS (ARM): 0x4b2728
     * @note[short] MacOS (Intel): 0x55c250
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GauntletNode* create(GJMapPack* gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x4b4e50
     * @note[short] MacOS (Intel): 0x55e760
     * @note[short] Windows: 0x1f9030
     * @note[short] iOS: 0x1c333c
     * @note[short] Android
     */
    static gd::string frameForType(GauntletType p0);

    /**
     * @note[short] MacOS (ARM): 0x4b46dc
     * @note[short] MacOS (Intel): 0x55e210
     * @note[short] Windows: 0x1fa250
     * @note[short] iOS: 0x1c330c
     * @note[short] Android
     */
    static gd::string nameForType(GauntletType p0);

    /**
     * @note[short] MacOS (ARM): 0x4b2fdc
     * @note[short] MacOS (Intel): 0x55cb50
     * @note[short] Windows: 0x1f7970
     * @note[short] iOS: 0x1c1e04
     * @note[short] Android
     */
    bool init(GJMapPack* p0);

    /**
     * @note[short] MacOS (ARM): 0x4b2f30
     * @note[short] MacOS (Intel): 0x55ca80
     * @note[short] Windows: 0x1f8ff0
     * @note[short] Android
     */
    void onClaimReward();
    cocos2d::CCNode* m_gauntletInfoNode;
    cocos2d::CCNode* m_rewardNode;
};
