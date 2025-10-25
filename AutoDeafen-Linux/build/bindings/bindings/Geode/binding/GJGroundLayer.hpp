#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGroundLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGroundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGroundLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x50636c
     * @note[short] MacOS (Intel): 0x5d2760
     * @note[short] Windows: 0x276870
     * @note[short] iOS: 0x2fddc
     * @note[short] Android
     */
    static GJGroundLayer* create(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x50745c
     * @note[short] MacOS (Intel): 0x5d38a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30c08
     * @note[short] Android: Out of line
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x507250
     * @note[short] MacOS (Intel): 0x5d36c0
     * @note[short] Windows: 0x2774c0
     * @note[short] iOS: 0x30aa0
     * @note[short] Android
     */
    virtual void showGround();

    /**
     * @note[short] MacOS (ARM): 0x50725c
     * @note[short] MacOS (Intel): 0x5d36d0
     * @note[short] Windows: 0x2774d0
     * @note[short] iOS: 0x30aac
     * @note[short] Android
     */
    virtual void fadeInGround(float p0);

    /**
     * @note[short] MacOS (ARM): 0x507430
     * @note[short] MacOS (Intel): 0x5d3870
     * @note[short] Windows: 0x2776c0
     * @note[short] iOS: 0x30c00
     * @note[short] Android
     */
    virtual void fadeOutGround(float p0);

    /**
     * @note[short] MacOS (ARM): 0x506958
     * @note[short] MacOS (Intel): 0x5d2d50
     * @note[short] Windows: 0x277120
     * @note[short] Android
     */
    void createLine(int p0);

    /**
     * @note[short] MacOS (ARM): 0x507438
     * @note[short] MacOS (Intel): 0x5d3880
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deactivateGround();

    /**
     * @note[short] MacOS (ARM): 0x5072dc
     * @note[short] MacOS (Intel): 0x5d3740
     * @note[short] Windows: 0x2774c0
     * @note[short] Android
     */
    void fadeInFinished();

    /**
     * @note[short] MacOS (ARM): 0x5074a8
     * @note[short] MacOS (Intel): 0x5d38f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getGroundY();

    /**
     * @note[short] MacOS (ARM): 0x5072e8
     * @note[short] MacOS (Intel): 0x5d3750
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideShadows();

    /**
     * @note[short] MacOS (ARM): 0x506450
     * @note[short] MacOS (Intel): 0x5d2870
     * @note[short] Windows: 0x2768f0
     * @note[short] iOS: 0x2fe60
     * @note[short] Android
     */
    bool init(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x506af4
     * @note[short] MacOS (Intel): 0x5d2f10
     * @note[short] Windows: 0x276e60
     * @note[short] Android
     */
    void loadGroundSprites(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x507460
     * @note[short] MacOS (Intel): 0x5d38b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void positionGround(float y);

    /**
     * @note[short] MacOS (ARM): 0x506f20
     * @note[short] MacOS (Intel): 0x5d3350
     * @note[short] Windows: 0x277310
     * @note[short] Android
     */
    float scaleGround(float p0);

    /**
     * @note[short] MacOS (ARM): 0x506df0
     * @note[short] MacOS (Intel): 0x5d31f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleVisible01(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x506e20
     * @note[short] MacOS (Intel): 0x5d3230
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleVisible02(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x506d70
     * @note[short] MacOS (Intel): 0x5d3170
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGround01Color(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x506e9c
     * @note[short] MacOS (Intel): 0x5d32c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGround02Color(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x506e4c
     * @note[short] MacOS (Intel): 0x5d3270
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGroundPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x507014
     * @note[short] MacOS (Intel): 0x5d3460
     * @note[short] Android
     */
    void updateGroundWidth(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x507214
     * @note[short] MacOS (Intel): 0x5d3670
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateLineBlend(bool blend);

    /**
     * @note[short] MacOS (ARM): 0x507180
     * @note[short] MacOS (Intel): 0x5d35e0
     * @note[short] Windows: 0x277550
     * @note[short] Android
     */
    void updateShadows();

    /**
     * @note[short] MacOS (ARM): 0x507368
     * @note[short] MacOS (Intel): 0x5d37b0
     * @note[short] Windows: 0x2775f0
     * @note[short] Android
     */
    void updateShadowXPos(float p0, float p1);
    cocos2d::CCSprite* m_ground1Sprite;
    cocos2d::CCSprite* m_ground2Sprite;
    float m_textureWidth;
    cocos2d::CCSprite* m_lineSprite;
    bool m_showGround;
    bool m_blendLine;
    float m_ground1Offset;
    int m_lineType;
    float m_groundWidth;
    bool m_showGround1;
    bool m_showGround2;
    float m_unk1cc;
    bool m_cameraRotated;
};
