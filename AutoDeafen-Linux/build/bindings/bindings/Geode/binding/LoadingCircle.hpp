#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingCircle : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "LoadingCircle";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircle, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LoadingCircle();

    /**
     * @note[short] MacOS (ARM): 0x414ec0
     * @note[short] MacOS (Intel): 0x4abd70
     * @note[short] Windows: 0x6b840
     * @note[short] iOS: 0x392c28
     * @note[short] Android
     */
    static LoadingCircle* create();

    /**
     * @note[short] MacOS (ARM): 0x414fbc
     * @note[short] MacOS (Intel): 0x4abee0
     * @note[short] Windows: 0x6b940
     * @note[short] iOS: 0x392d14
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x415220
     * @note[short] MacOS (Intel): 0x4ac130
     * @note[short] Windows: 0x6bbc0
     * @note[short] iOS: 0x392f78
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x415230
     * @note[short] MacOS (Intel): 0x4ac150
     * @note[short] Windows: 0x6bbe0
     * @note[short] iOS: 0x392f88
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x415170
     * @note[short] MacOS (Intel): 0x4ac0a0
     * @note[short] Windows: 0x6bb20
     * @note[short] iOS: 0x392ec4
     * @note[short] Android
     */
    void fadeAndRemove();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setFade(bool fade);
	inline void setParentLayer(cocos2d::CCLayer* layer) {
        m_parentLayer = layer;
    }

    /**
     * @note[short] MacOS (ARM): 0x415078
     * @note[short] MacOS (Intel): 0x4abfb0
     * @note[short] Windows: 0x6ba20
     * @note[short] iOS: 0x392dd0
     * @note[short] Android
     */
    void show();
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCLayer* m_parentLayer;
    bool m_fade;
};
