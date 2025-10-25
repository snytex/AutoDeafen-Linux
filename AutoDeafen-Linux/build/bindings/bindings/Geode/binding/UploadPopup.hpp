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
#include "LevelUploadDelegate.hpp"

class UploadPopup : public FLAlertLayer, public LevelUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UploadPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~UploadPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UploadPopup* create(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x21b974
     * @note[short] MacOS (Intel): 0x2706b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x275ffc
     * @note[short] Android: Out of line
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x21b914
     * @note[short] MacOS (Intel): 0x270640
     * @note[short] Windows: 0x2f7220
     * @note[short] iOS: 0x275f9c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x21b4e4
     * @note[short] MacOS (Intel): 0x2701e0
     * @note[short] Windows: 0x478710
     * @note[short] iOS: 0x275ba0
     * @note[short] Android
     */
    virtual void levelUploadFinished(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x21b71c
     * @note[short] MacOS (Intel): 0x270430
     * @note[short] Windows: 0x4788e0
     * @note[short] iOS: 0x275dc8
     * @note[short] Android
     */
    virtual void levelUploadFailed(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x21afc4
     * @note[short] MacOS (Intel): 0x26fc40
     * @note[short] Windows: 0x478140
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x478bb0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x84620
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x478ac0
     * @note[short] Android
     */
    void onReturnToLevel(cocos2d::CCObject* sender);
    GJGameLevel* m_level;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_backButton;
};
