#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMGLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJMGLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMGLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJMGLayer();

    /**
     * @note[short] MacOS (ARM): 0x5075c4
     * @note[short] MacOS (Intel): 0x5d3a40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJMGLayer* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x508038
     * @note[short] MacOS (Intel): 0x5d4520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31548
     * @note[short] Android: Out of line
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x508008
     * @note[short] MacOS (Intel): 0x5d44f0
     * @note[short] Windows: 0x2774c0
     * @note[short] iOS: 0x3153c
     * @note[short] Android
     */
    virtual void showGround();

    /**
     * @note[short] MacOS (ARM): 0x508014
     * @note[short] MacOS (Intel): 0x5d4500
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deactivateGround();

    /**
     * @note[short] MacOS (ARM): 0x5075a4
     * @note[short] MacOS (Intel): 0x5d3a20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static float defaultYOffsetForBG2(int p0);

    /**
     * @note[short] MacOS (ARM): 0x5076a0
     * @note[short] MacOS (Intel): 0x5d3b50
     * @note[short] Windows: 0x2776d0
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x507b28
     * @note[short] MacOS (Intel): 0x5d4000
     * @note[short] Windows: 0x277bd0
     * @note[short] Android
     */
    void loadGroundSprites(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x507ea8
     * @note[short] MacOS (Intel): 0x5d4380
     * @note[short] Android
     */
    float scaleGround(float p0);

    /**
     * @note[short] MacOS (ARM): 0x507d74
     * @note[short] MacOS (Intel): 0x5d4230
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleVisible01(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x507da4
     * @note[short] MacOS (Intel): 0x5d4270
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleVisible02(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x507ce4
     * @note[short] MacOS (Intel): 0x5d41a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGroundColor(cocos2d::ccColor3B color, bool ground2);

    /**
     * @note[short] MacOS (ARM): 0x507e20
     * @note[short] MacOS (Intel): 0x5d4300
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGroundOpacity(unsigned char opacity, bool ground2);

    /**
     * @note[short] MacOS (ARM): 0x507dd0
     * @note[short] MacOS (Intel): 0x5d42b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGroundPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x507f24
     * @note[short] MacOS (Intel): 0x5d4410
     * @note[short] Android
     */
    void updateGroundWidth(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x50803c
     * @note[short] MacOS (Intel): 0x5d4530
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMG01Blend(bool blend);

    /**
     * @note[short] MacOS (ARM): 0x508078
     * @note[short] MacOS (Intel): 0x5d4580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMG02Blend(bool blend);
    cocos2d::CCSprite* m_ground1Sprite;
    cocos2d::CCSprite* m_ground2Sprite;
    float m_textureWidth;
    void* m_unk1b0;
    bool m_showGround;
    float m_groundWidth;
    bool m_showGround1;
    bool m_showGround2;
    float m_unk1c4;
    bool m_cameraRotated;
    bool m_blendMG1;
    bool m_blendMG2;
    cocos2d::CCSpriteBatchNode* m_mg1BatchNode;
    cocos2d::CCSpriteBatchNode* m_mg2BatchNode;
    float m_groundScale;
    float m_ground2Offset;
};
