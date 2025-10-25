#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCountdown : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCCountdown";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCountdown, cocos2d::CCSprite)

    /**
     * @note[short] Android
     */
    static CCCountdown* create();

    /**
     * @note[short] MacOS (ARM): 0x6c2084
     * @note[short] MacOS (Intel): 0x7b0e20
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6c2434
     * @note[short] MacOS (Intel): 0x7b11e0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Android
     */
    void lapFinished();

    /**
     * @note[short] Android
     */
    void startTimerWithSeconds(float p0, cocos2d::SEL_CallFunc p1, cocos2d::CCNode* p2);
    cocos2d::CCProgressTimer* m_progressTimer;
    float m_unk260;
    int m_seconds;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    cocos2d::SEL_CallFunc m_callbackSelector;
    cocos2d::CCNode* m_targetNode;
};
