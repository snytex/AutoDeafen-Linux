#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CommunityCreditNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CommunityCreditNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CommunityCreditNode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x93ec0
     * @note[short] Android: Rebinded
     */
    static CommunityCreditNode* create(int p0, int p1, int p2, gd::string p3);

    /**
     * @note[short] MacOS (ARM): 0x2a1170
     * @note[short] MacOS (Intel): 0x30a010
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    bool init(int unlockType, int iconID, int unknown, gd::string author);
    int m_unlockType;
    int m_iconID;
    int m_unknown;
    gd::string m_author;
};
