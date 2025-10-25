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
#include "ListUploadDelegate.hpp"

class UploadListPopup : public FLAlertLayer, public ListUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadListPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UploadListPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~UploadListPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UploadListPopup* create(GJLevelList* p0);

    /**
     * @note[short] MacOS (ARM): 0x2e50c0
     * @note[short] MacOS (Intel): 0x350cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x248e44
     * @note[short] Android: Out of line
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2e5060
     * @note[short] MacOS (Intel): 0x350c50
     * @note[short] Windows: 0x2f7220
     * @note[short] iOS: 0x248de4
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x2e4b64
     * @note[short] MacOS (Intel): 0x350750
     * @note[short] Windows: 0x2f6cc0
     * @note[short] iOS: 0x24893c
     * @note[short] Android
     */
    virtual void listUploadFinished(GJLevelList* p0);

    /**
     * @note[short] MacOS (ARM): 0x2e4d68
     * @note[short] MacOS (Intel): 0x350970
     * @note[short] Windows: 0x2f6e90
     * @note[short] iOS: 0x248b30
     * @note[short] Android
     */
    virtual void listUploadFailed(GJLevelList* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x2e46b4
     * @note[short] MacOS (Intel): 0x350240
     * @note[short] Windows: 0x2f6780
     * @note[short] Android
     */
    bool init(GJLevelList* p0);

    /**
     * @note[short] Windows: 0x2f7280
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x84620
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f71d0
     * @note[short] Android
     */
    void onReturnToList(cocos2d::CCObject* sender);
    GJLevelList* m_levelList;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_backButton;
};
