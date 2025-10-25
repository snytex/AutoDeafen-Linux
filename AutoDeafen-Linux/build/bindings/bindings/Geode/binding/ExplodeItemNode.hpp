#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ExplodeItemNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ExplodeItemNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExplodeItemNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x1b6f88
     * @note[short] MacOS (Intel): 0x201ac0
     * @note[short] Windows: 0x36e780
     * @note[short] iOS: 0x6031c
     * @note[short] Android
     */
    static ExplodeItemNode* create(cocos2d::CCRenderTexture* p0);

    /**
     * @note[short] MacOS (ARM): 0x1b7f14
     * @note[short] MacOS (Intel): 0x202b30
     * @note[short] Windows: 0x36f1f0
     * @note[short] iOS: 0x6105c
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x1b703c
     * @note[short] MacOS (Intel): 0x201b70
     * @note[short] Windows: 0x36e840
     * @note[short] iOS: 0x603a8
     * @note[short] Android
     */
    void createSprites(int p0, int p1, float p2, float p3, float p4, float p5, float p6, float p7, cocos2d::ccColor4F p8, cocos2d::ccColor4F p9, bool p10);

    /**
     * @note[short] MacOS (ARM): 0x1b7e18
     * @note[short] MacOS (Intel): 0x202a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x60f6c
     * @note[short] Android
     */
    bool init(cocos2d::CCRenderTexture* p0);
    cocos2d::CCRenderTexture* m_renderTexture;
    cocos2d::CCArray* m_sprites;
    float m_unk1;
    float m_floorHeight;
    bool m_noGravity;
};
