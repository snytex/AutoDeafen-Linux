#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCPartAnimSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCPartAnimSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCPartAnimSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCPartAnimSprite();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCPartAnimSprite* createWithAnimDesc(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x2f4b18
     * @note[short] MacOS (Intel): 0x361ca0
     * @note[short] Windows: 0x466b0
     * @note[short] iOS: 0x833f0
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x2f4b40
     * @note[short] MacOS (Intel): 0x361cc0
     * @note[short] Windows: 0x466d0
     * @note[short] iOS: 0x83418
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x2f4af0
     * @note[short] MacOS (Intel): 0x361c80
     * @note[short] Windows: 0x46690
     * @note[short] iOS: 0x833c8
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x2f4e04
     * @note[short] MacOS (Intel): 0x361f30
     * @note[short] Windows: 0x468a0
     * @note[short] iOS: 0x83604
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x2f4b68
     * @note[short] MacOS (Intel): 0x361ce0
     * @note[short] Windows: 0x466f0
     * @note[short] iOS: 0x83440
     * @note[short] Android
     */
    virtual void setBlendFunc(cocos2d::_ccBlendFunc p0);

    /**
     * @note[short] MacOS (ARM): 0x2f46bc
     * @note[short] MacOS (Intel): 0x361840
     * @note[short] Windows: 0x460c0
     * @note[short] iOS: 0x83094
     * @note[short] Android
     */
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] MacOS (ARM): 0x2f4814
     * @note[short] MacOS (Intel): 0x3619b0
     * @note[short] Windows: 0x46330
     * @note[short] iOS: 0x831c0
     * @note[short] Android
     */
    virtual bool isFrameDisplayed(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] MacOS (ARM): 0x2f482c
     * @note[short] MacOS (Intel): 0x3619d0
     * @note[short] Windows: 0x46350
     * @note[short] iOS: 0x831d8
     * @note[short] Android
     */
    virtual cocos2d::CCSpriteFrame* displayFrame();

    /**
     * @note[short] Android
     */
    void changeTextureOfID(char const* p0, char const* p1);

    /**
     * @note[short] Android
     */
    int countParts();

    /**
     * @note[short] Android
     */
    void dirtify();

    /**
     * @note[short] Android
     */
    cocos2d::CCSprite* getSpriteForKey(char const* p0);

    /**
     * @note[short] Windows: 0x45910
     * @note[short] Android
     */
    bool initWithAnimDesc(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] Windows: 0x467c0
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setFlipX(bool p0);

    /**
     * @note[short] Android
     */
    void setFlipY(bool p0);

    /**
     * @note[short] Android
     */
    void transformSprite(SpriteDescription* p0);

    /**
     * @note[short] Android
     */
    void tweenSpriteTo(SpriteDescription* p0, float p1);

    /**
     * @note[short] Windows: 0x46360
     * @note[short] Android
     */
    void tweenToFrame(cocos2d::CCSpriteFrame* p0, float p1);
    cocos2d::CCDictionary* m_spritePartIDs;
    cocos2d::CCSpriteFrame* m_spriteFrame;
    bool m_hasChanged;
    cocos2d::CCSize m_unkSize;
    cocos2d::CCArray* m_spriteParts;
};
