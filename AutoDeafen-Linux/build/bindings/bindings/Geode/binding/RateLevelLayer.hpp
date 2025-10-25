#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class RateLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "RateLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateLevelLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RateLevelLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~RateLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x4a8394
     * @note[short] MacOS (Intel): 0x551030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x621ac
     * @note[short] Android
     */
    static RateLevelLayer* create(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4a8d14
     * @note[short] MacOS (Intel): 0x5519b0
     * @note[short] Windows: 0x3b2ab0
     * @note[short] iOS: 0x627b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4a8498
     * @note[short] MacOS (Intel): 0x551170
     * @note[short] Windows: 0x3b23c0
     * @note[short] iOS: 0x62268
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] iOS: 0x626ec
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4a8cac
     * @note[short] MacOS (Intel): 0x551960
     * @note[short] Windows: 0x3b2a20
     * @note[short] iOS: 0x62748
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4a8b34
     * @note[short] MacOS (Intel): 0x551830
     * @note[short] Windows: 0x3b28d0
     * @note[short] iOS: 0x625f8
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_difficulties;
    int m_levelID;
    int m_levelRate;
    RateLevelDelegate* m_delegate;
};
