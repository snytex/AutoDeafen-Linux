#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJScaleControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJScaleControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJScaleControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJScaleControl();

    /**
     * @note[short] MacOS (ARM): 0xd3e0
     * @note[short] MacOS (Intel): 0xbfe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJScaleControl* create();

    /**
     * @note[short] MacOS (ARM): 0x49688
     * @note[short] MacOS (Intel): 0x52280
     * @note[short] Windows: 0x127cc0
     * @note[short] iOS: 0x3f2c10
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x49cc0
     * @note[short] MacOS (Intel): 0x52930
     * @note[short] Windows: 0x1287b0
     * @note[short] iOS: 0x3f31a4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x49e5c
     * @note[short] MacOS (Intel): 0x52b20
     * @note[short] Windows: 0x1289c0
     * @note[short] iOS: 0x3f3330
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4a2a0
     * @note[short] MacOS (Intel): 0x52ff0
     * @note[short] Windows: 0x128de0
     * @note[short] iOS: 0x3f3684
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4a3c8
     * @note[short] MacOS (Intel): 0x53150
     * @note[short] Windows: 0x71210
     * @note[short] iOS: 0x3f37ac
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    void finishTouch();

    /**
     * @note[short] MacOS (ARM): 0x3a07c
     * @note[short] MacOS (Intel): 0x3f670
     * @note[short] Windows: 0x128190
     * @note[short] iOS: 0x3e76f0
     * @note[short] Android: Rebinded
     */
    void loadValues(GameObject* p0, cocos2d::CCArray* p1, gd::unordered_map<int, GameObjectEditorState>& p2);

    /**
     * @note[short] MacOS (ARM): 0x49a6c
     * @note[short] MacOS (Intel): 0x52690
     * @note[short] Windows: 0x128100
     * @note[short] iOS: 0x3f2ff4
     * @note[short] Android
     */
    void onToggleLockScale(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x49c44
     * @note[short] MacOS (Intel): 0x52860
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float scaleFromValue(float value);

    /**
     * @note[short] MacOS (ARM): 0x49c80
     * @note[short] MacOS (Intel): 0x528a0
     * @note[short] Android
     */
    float skewFromValue(float p0);

    /**
     * @note[short] MacOS (ARM): 0x49adc
     * @note[short] MacOS (Intel): 0x526f0
     * @note[short] Windows: 0x1287a0
     * @note[short] iOS: 0x3f3064
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x49b0c
     * @note[short] MacOS (Intel): 0x52740
     * @note[short] Windows: 0x128f20
     * @note[short] iOS: 0x3f306c
     * @note[short] Android
     */
    void updateLabelX(float value);

    /**
     * @note[short] MacOS (ARM): 0x49bdc
     * @note[short] MacOS (Intel): 0x52800
     * @note[short] Windows: 0x129020
     * @note[short] iOS: 0x3f313c
     * @note[short] Android
     */
    void updateLabelXY(float value);

    /**
     * @note[short] MacOS (ARM): 0x49b74
     * @note[short] MacOS (Intel): 0x527a0
     * @note[short] Windows: 0x128fa0
     * @note[short] iOS: 0x3f30d4
     * @note[short] Android
     */
    void updateLabelY(float value);

    /**
     * @note[short] MacOS (ARM): 0x49c98
     * @note[short] MacOS (Intel): 0x528f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float valueFromScale(float scale);

    /**
     * @note[short] Android
     */
    float valueFromSkew(float p0);
    Slider* m_sliderX;
    Slider* m_sliderY;
    Slider* m_sliderXY;
    int m_touchID;
    float m_valueX;
    float m_valueY;
    int m_unkSize4;
    float m_changedValueX;
    float m_changedValueY;
    bool m_scale1Lock;
    short m_scaleButtonType;
    cocos2d::CCLabelBMFont* m_scaleXLabel;
    cocos2d::CCLabelBMFont* m_scaleYLabel;
    cocos2d::CCLabelBMFont* m_scaleLabel;
    GJScaleControlDelegate* m_delegate;
    float m_upperBound;
    float m_lowerBound;
    int m_senderTag;
    CCMenuItemSpriteExtra* m_scaleLockButton;
    bool m_scaleLocked;
};
