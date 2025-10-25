#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ButtonSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ButtonSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ButtonSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x3ed20
     * @note[short] iOS: 0x63804
     * @note[short] Android: Rebinded
     */
     ButtonSprite();

    /**
     * @note[short] MacOS (ARM): 0x8579c
     * @note[short] MacOS (Intel): 0x92640
     * @note[short] Windows: 0x3f150
     * @note[short] iOS: 0x62f8c
     * @note[short] Android
     */
    static ButtonSprite* create(char const* caption, int width, int p2, float scale, bool absolute, char const* font, char const* bg, float height);

    /**
     * @note[short] MacOS (ARM): 0x84fe0
     * @note[short] MacOS (Intel): 0x91db0
     * @note[short] Windows: 0x3ee40
     * @note[short] iOS: 0x62878
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, int unused, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG);

    /**
Create a ButtonSprite with a top sprite and a texture.

 @param topSprite The top sprite to add on top of the sprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of top spr     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, bool absolute, float height, const char* texture, float scale);

    /**
Create a ButtonSprite with text, a font and a texture.

 @param caption The text of the ButtonSprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param font The name of the BM font file to use

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of text

 @returns Pointer to the created ButtonSprite, or nullptr on er     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(const char* caption, int width, bool absolute, const char* font, const char* texture, float height, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, int width, int p2, float scale, bool absolute, char const* font, char const* bg);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x62f74
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, int width, int p2, float scale, bool absolute);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, int unused, float height, float scale, bool absolute);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite);

    /**
     * @note[short] MacOS (ARM): 0x858d8
     * @note[short] MacOS (Intel): 0x92790
     * @note[short] Windows: 0x3f220
     * @note[short] iOS: 0x63060
     * @note[short] Android
     */
    bool init(char const* caption, int width, int p2, float scale, bool absolute, char const* font, char const* bg, float height);

    /**
     * @note[short] MacOS (ARM): 0x85114
     * @note[short] MacOS (Intel): 0x91f00
     * @note[short] Windows: 0x3eef0
     * @note[short] Android
     */
    bool init(cocos2d::CCSprite* topSprite, int width, int unused, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x85b60
     * @note[short] MacOS (Intel): 0x92a40
     * @note[short] Windows: 0x3fae0
     * @note[short] iOS: 0x632ac
     * @note[short] Android
     */
    void setString(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x85f00
     * @note[short] MacOS (Intel): 0x92e20
     * @note[short] Windows: 0x3f520
     * @note[short] iOS: 0x6364c
     * @note[short] Android
     */
    void updateBGImage(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x85368
     * @note[short] MacOS (Intel): 0x92190
     * @note[short] Windows: 0x3f660
     * @note[short] Android
     */
    void updateSpriteBGSize();

    /**
     * @note[short] MacOS (ARM): 0x8601c
     * @note[short] MacOS (Intel): 0x92f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x6375c
     * @note[short] Android
     */
    void updateSpriteOffset(cocos2d::CCPoint offset);
    int m_mode;
    float m_width;
    float m_unkFloat;
    float m_scale;
    float m_height;
    bool m_absolute;
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_subSprite;
    cocos2d::CCSprite* m_subBGSprite;
    cocos2d::extension::CCScale9Sprite* m_BGSprite;
    cocos2d::CCPoint m_textOffset;
    cocos2d::CCPoint m_spritePosition;
    gd::string m_caption;
};
