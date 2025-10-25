#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x4eff60
     * @note[short] MacOS (Intel): 0x5b9e00
     * @note[short] Windows: 0x277e70
     * @note[short] iOS: 0x838dc
     * @note[short] Android
     */
    static GJListLayer* create(BoomListView* p0, char const* p1, cocos2d::ccColor4B p2, float p3, float p4, int p5);

    /**
     * @note[short] MacOS (ARM): 0x4f0054
     * @note[short] MacOS (Intel): 0x5b9f10
     * @note[short] Windows: 0x277fa0
     * @note[short] iOS: 0x839d0
     * @note[short] Android
     */
    bool init(BoomListView* p0, char const* p1, cocos2d::ccColor4B p2, float p3, float p4, int p5);
    BoomListView* m_listView;
};
