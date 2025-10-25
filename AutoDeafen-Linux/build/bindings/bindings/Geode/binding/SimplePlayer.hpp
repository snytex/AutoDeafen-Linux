#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SimplePlayer : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "SimplePlayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SimplePlayer, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x2ead40
     * @note[short] MacOS (Intel): 0x357600
     * @note[short] Windows: 0x271ac0
     * @note[short] iOS: 0x303450
     * @note[short] Android
     */
    static SimplePlayer* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2f092c
     * @note[short] MacOS (Intel): 0x35d690
     * @note[short] Windows: 0x272e70
     * @note[short] iOS: 0x307a98
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x2f05c0
     * @note[short] MacOS (Intel): 0x35d330
     * @note[short] Windows: 0x272320
     * @note[short] iOS: 0x307734
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x2f0394
     * @note[short] MacOS (Intel): 0x35d120
     * @note[short] Android
     */
    void asyncLoadIcon(int p0, IconType p1);

    /**
     * @note[short] MacOS (ARM): 0x2eadfc
     * @note[short] MacOS (Intel): 0x3576c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x303500
     * @note[short] Android
     */
    void createRobotSprite(int frame);

    /**
     * @note[short] MacOS (ARM): 0x2eae5c
     * @note[short] MacOS (Intel): 0x357720
     * @note[short] Windows: 0x272290
     * @note[short] iOS: 0x303560
     * @note[short] Android
     */
    void createSpiderSprite(int p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void disableCustomGlowColor();
	inline void disableGlowOutline() {
        disableCustomGlowColor();
        m_hasGlowOutline = false;
        updateColors();
    }

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void enableCustomGlowColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2f04ac
     * @note[short] MacOS (Intel): 0x35d230
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideAll();

    /**
     * @note[short] MacOS (ARM): 0x2f0650
     * @note[short] MacOS (Intel): 0x35d3c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideSecondary();

    /**
     * @note[short] MacOS (ARM): 0x2f0570
     * @note[short] MacOS (Intel): 0x35d2e0
     * @note[short] Android
     */
    void iconFinishedLoading(int p0, IconType p1);

    /**
     * @note[short] MacOS (ARM): 0x2efd98
     * @note[short] MacOS (Intel): 0x35ca00
     * @note[short] Windows: 0x271bb0
     * @note[short] iOS: 0x307278
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2eec44
     * @note[short] MacOS (Intel): 0x35b770
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setColors(cocos2d::ccColor3B const& color1, cocos2d::ccColor3B const& color2);

    /**
     * @note[short] MacOS (ARM): 0x2f0704
     * @note[short] MacOS (Intel): 0x35d470
     * @note[short] Windows: 0x272c40
     * @note[short] iOS: 0x307878
     * @note[short] Android
     */
    void setFrames(char const* p0, char const* p1, char const* p2, char const* p3, char const* p4);
	inline void setGlowOutline(cocos2d::ccColor3B color) {
        enableCustomGlowColor(color);
        m_hasGlowOutline = true;
        updateColors();
    }

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setSecondColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2ee780
     * @note[short] MacOS (Intel): 0x35b230
     * @note[short] Windows: 0x272350
     * @note[short] iOS: 0x3062ec
     * @note[short] Android
     */
    void updateColors();

    /**
     * @note[short] MacOS (ARM): 0x2eb020
     * @note[short] MacOS (Intel): 0x3578d0
     * @note[short] Windows: 0x272710
     * @note[short] iOS: 0x303714
     * @note[short] Android
     */
    void updatePlayerFrame(int p0, IconType p1);
    cocos2d::CCSprite* m_firstLayer;
    cocos2d::CCSprite* m_secondLayer;
    cocos2d::CCSprite* m_birdDome;
    cocos2d::CCSprite* m_outlineSprite;
    cocos2d::CCSprite* m_detailSprite;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    int m_unknown;
    bool m_hasGlowOutline;
    int m_iconRequestID;
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    bool m_iconLoaded;
};
