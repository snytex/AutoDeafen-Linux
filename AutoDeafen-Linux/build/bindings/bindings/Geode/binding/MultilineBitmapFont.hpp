#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MultilineBitmapFont : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "MultilineBitmapFont";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MultilineBitmapFont, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MultilineBitmapFont();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~MultilineBitmapFont();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23415c
     * @note[short] Android: Rebinded
     */
    static MultilineBitmapFont* createWithFont(char const* p0, gd::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);

    /**
     * @note[short] MacOS (ARM): 0x3e4ad8
     * @note[short] MacOS (Intel): 0x476100
     * @note[short] Windows: 0x6c750
     * @note[short] iOS: 0x235548
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x3e30c0
     * @note[short] MacOS (Intel): 0x474500
     * @note[short] Windows: 0x6bea0
     * @note[short] iOS: 0x234280
     * @note[short] Android: Rebinded
     */
    bool initWithFont(char const* p0, gd::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);

    /**
     * @note[short] MacOS (ARM): 0x3e4bb8
     * @note[short] MacOS (Intel): 0x476200
     * @note[short] Windows: 0x6d0a0
     * @note[short] Android
     */
    unsigned int moveSpecialDescriptors(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3e388c
     * @note[short] MacOS (Intel): 0x474e10
     * @note[short] Windows: 0x6c7d0
     * @note[short] Android: Rebinded
     */
    gd::string readColorInfo(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x3e4524
     * @note[short] MacOS (Intel): 0x475b20
     * @note[short] Windows: 0x6d130
     * @note[short] Android: Rebinded
     */
    gd::string stringWithMaxWidth(gd::string p0, float p1, float p2);
    std::array<int, 300> m_hugeIntArray;
    cocos2d::CCArray* m_specialDescriptors;
    cocos2d::CCArray* m_characters;
    cocos2d::CCArray* m_lines;
    int m_unkInt;
    bool m_unkBool;
    void* m_unkPtr;
    int m_height;
    int m_width;
    cocos2d::CCPoint m_position;
    float m_maxWidth;
    bool m_disableColor;
};
