#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCExtenderNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCExtenderNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCExtenderNode, cocos2d::CCNode)

    /**
     * @note[short] Android
     */
    void setOpacity(unsigned int opacity);
};
