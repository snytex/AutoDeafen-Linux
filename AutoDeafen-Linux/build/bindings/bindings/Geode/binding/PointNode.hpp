#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PointNode : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "PointNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PointNode, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     PointNode();

    /**
     * @note[short] MacOS (ARM): 0x90144
     * @note[short] MacOS (Intel): 0x9d620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x61d5c
     * @note[short] Android
     */
    static PointNode* create(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x90478
     * @note[short] MacOS (Intel): 0x9d9a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint p0);
    cocos2d::CCPoint m_point;
};
