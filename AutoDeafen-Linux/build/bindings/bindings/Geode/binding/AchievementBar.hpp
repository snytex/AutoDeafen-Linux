#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementBar : public cocos2d::CCNodeRGBA {
public:
    static constexpr auto CLASS_NAME = "AchievementBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementBar, cocos2d::CCNodeRGBA)

    /**
     * @note[short] Windows: 0x80620
     * @note[short] Android: Rebinded
     */
     AchievementBar(unsigned int idk);

    /**
     * @note[short] MacOS (ARM): 0x52f02c
     * @note[short] MacOS (Intel): 0x601520
     * @note[short] iOS: 0x269870
     * @note[short] Android
     */
    static AchievementBar* create(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x53086c
     * @note[short] MacOS (Intel): 0x602ea0
     * @note[short] Windows: 0x81ea0
     * @note[short] iOS: 0x26ab9c
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x52f0fc
     * @note[short] MacOS (Intel): 0x6015e0
     * @note[short] Windows: 0x80670
     * @note[short] iOS: 0x26992c
     * @note[short] Android
     */
    bool init(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x53062c
     * @note[short] MacOS (Intel): 0x602c50
     * @note[short] Windows: 0x81c20
     * @note[short] iOS: 0x26a97c
     * @note[short] Android
     */
    void show();
    cocos2d::CCLayerColor* m_layerColor;
    int m_unkUnused;
    cocos2d::CCScene* m_nextScene;
    cocos2d::extension::CCScale9Sprite* m_bg;
    cocos2d::extension::CCScale9Sprite* m_bg2;
    cocos2d::CCSprite* m_achievementGlowSprite;
    cocos2d::CCSprite* m_achievementSprite;
    cocos2d::CCLabelBMFont* m_titleLabel;
    TextArea* m_achievementDescription;
};
