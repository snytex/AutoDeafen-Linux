#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJBigSpriteNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJBigSpriteNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBigSpriteNode, cocos2d::CCNode)

    /**
     * @note[short] Android
     */
    static GJBigSpriteNode* create();

    /**
     * @note[short] MacOS (ARM): 0x204a00
     * @note[short] MacOS (Intel): 0x257eb0
     * @note[short] Android
     */
    virtual bool init();
    gd::string m_spriteName;
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCRect m_spriteRect;
    bool m_spriteVisible;
};
