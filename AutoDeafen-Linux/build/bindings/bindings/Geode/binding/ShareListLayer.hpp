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

class ShareListLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareListLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShareListLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~ShareListLayer();

    /**
     * @note[short] MacOS (ARM): 0x2e16e4
     * @note[short] MacOS (Intel): 0x34cec0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShareListLayer* create(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2e43a4
     * @note[short] MacOS (Intel): 0x34fe60
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x24836c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2e2da0
     * @note[short] MacOS (Intel): 0x34e6b0
     * @note[short] Windows: 0x2f50d0
     * @note[short] Android
     */
    bool init(GJLevelList* p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4024
     * @note[short] MacOS (Intel): 0x34faa0
     * @note[short] Windows: 0x2f6270
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e3f10
     * @note[short] MacOS (Intel): 0x34f9a0
     * @note[short] Windows: 0x2f6530
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e40dc
     * @note[short] MacOS (Intel): 0x34fb50
     * @note[short] Windows: 0x2f63e0
     * @note[short] Android
     */
    void onUnlisted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e41dc
     * @note[short] MacOS (Intel): 0x34fc50
     * @note[short] Windows: 0x2f6450
     * @note[short] Android
     */
    void updateUnlistedF();
    GJLevelList* m_list;
    CCMenuItemToggler* m_friendsOnlyToggler;
    cocos2d::CCLabelBMFont* m_friendsOnlyLabel;
};
