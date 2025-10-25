#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJCommentListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJCommentListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJCommentListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x235434
     * @note[short] MacOS (Intel): 0x28c900
     * @note[short] Windows: 0x28a320
     * @note[short] iOS: 0x2d519c
     * @note[short] Android
     */
    static GJCommentListLayer* create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);

    /**
     * @note[short] MacOS (ARM): 0x23552c
     * @note[short] MacOS (Intel): 0x28ca10
     * @note[short] Windows: 0x28a440
     * @note[short] iOS: 0x2d5280
     * @note[short] Android
     */
    bool init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);
    BoomListView* m_list;
};
