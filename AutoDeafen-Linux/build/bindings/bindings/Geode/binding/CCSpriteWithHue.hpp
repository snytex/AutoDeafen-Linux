#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpriteWithHue : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpriteWithHue";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpriteWithHue, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpriteWithHue();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    static CCSpriteWithHue* create(gd::string const& file, cocos2d::CCRect const& rect);

    /**
     * @note[short] MacOS (ARM): 0x50b960
     * @note[short] MacOS (Intel): 0x5d8330
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    static CCSpriteWithHue* create(gd::string const& file);

    /**
     * @note[short] MacOS (ARM): 0x50bd18
     * @note[short] MacOS (Intel): 0x5d8690
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x50be14
     * @note[short] MacOS (Intel): 0x5d8770
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    static CCSpriteWithHue* createWithSpriteFrameName(gd::string const& frameName);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x50c708
     * @note[short] MacOS (Intel): 0x5d9120
     * @note[short] Windows: 0x48c20
     * @note[short] iOS: 0x1a6eb0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x50c0bc
     * @note[short] MacOS (Intel): 0x5d89f0
     * @note[short] Windows: 0x485f0
     * @note[short] iOS: 0x1a6ac4
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] MacOS (ARM): 0x50c138
     * @note[short] MacOS (Intel): 0x5d8a60
     * @note[short] Windows: 0x48650
     * @note[short] iOS: 0x1a6b40
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1);

    /**
     * @note[short] MacOS (ARM): 0x50be48
     * @note[short] MacOS (Intel): 0x5d87b0
     * @note[short] Windows: 0x48590
     * @note[short] iOS: 0x1a68c8
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x50c148
     * @note[short] MacOS (Intel): 0x5d8a80
     * @note[short] Windows: 0x48660
     * @note[short] iOS: 0x1a6b50
     * @note[short] Android
     */
    virtual bool initWithSpriteFrame(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] MacOS (ARM): 0x50b934
     * @note[short] MacOS (Intel): 0x5d8300
     * @note[short] Windows: 0x48400
     * @note[short] iOS: 0x1a6798
     * @note[short] Android
     */
    virtual gd::string getShaderName();

    /**
     * @note[short] MacOS (ARM): 0x50c28c
     * @note[short] MacOS (Intel): 0x5d8bc0
     * @note[short] Windows: 0x48900
     * @note[short] iOS: 0x1a6c5c
     * @note[short] Android
     */
    virtual const char* shaderBody();

    /**
     * @note[short] MacOS (ARM): 0x50c2a4
     * @note[short] MacOS (Intel): 0x5d8be0
     * @note[short] Windows: 0x48910
     * @note[short] iOS: 0x1a6c68
     * @note[short] Android
     */
    virtual void updateColor();

    /**
     * @note[short] MacOS (ARM): 0x50c668
     * @note[short] MacOS (Intel): 0x5d9050
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getAlpha();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getHue();

    /**
     * @note[short] MacOS (ARM): 0x50c208
     * @note[short] MacOS (Intel): 0x5d8b50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void getUniformLocations();

    /**
     * @note[short] MacOS (ARM): 0x50bea0
     * @note[short] MacOS (Intel): 0x5d8810
     * @note[short] Windows: 0x486d0
     * @note[short] Android
     */
    void initShader();

    /**
     * @note[short] MacOS (ARM): 0x50c6f8
     * @note[short] MacOS (Intel): 0x5d9100
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setCustomLuminance(float r, float g, float b);

    /**
     * @note[short] MacOS (ARM): 0x50c6d8
     * @note[short] MacOS (Intel): 0x5d90d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a6e94
     * @note[short] Android
     */
    void setEvenLuminance(float luminance);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setHue(float hue);

    /**
     * @note[short] MacOS (ARM): 0x50c688
     * @note[short] MacOS (Intel): 0x5d9080
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setHueDegrees(float degrees);

    /**
     * @note[short] MacOS (ARM): 0x50c1e0
     * @note[short] MacOS (Intel): 0x5d8b20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setLuminance(float luminance);

    /**
     * @note[short] MacOS (ARM): 0x50be8c
     * @note[short] MacOS (Intel): 0x5d87f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupDefaultSettings();

    /**
     * @note[short] MacOS (ARM): 0x50c2c8
     * @note[short] MacOS (Intel): 0x5d8c00
     * @note[short] Windows: 0x48930
     * @note[short] Android
     */
    void updateColorMatrix();

    /**
     * @note[short] MacOS (ARM): 0x50c1ac
     * @note[short] MacOS (Intel): 0x5d8ad0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateHue(float p0);
    float m_hue;
    std::array<float, 3> m_luminance;
    std::array<std::array<float, 3>, 3> m_colorMatrix;
    int m_uHueLoc;
    int m_uAlphaLoc;
    int m_uLumLoc;
};
