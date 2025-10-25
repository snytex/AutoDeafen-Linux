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
#include "TextInputDelegate.hpp"

class MoreVideoOptionsLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreVideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreVideoOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MoreVideoOptionsLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~MoreVideoOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf4170
     * @note[short] Android
     */
    static MoreVideoOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x69ee4c
     * @note[short] MacOS (Intel): 0x78b270
     * @note[short] Windows: 0x362eb0
     * @note[short] iOS: 0xf4504
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6a0f54
     * @note[short] MacOS (Intel): 0x78d440
     * @note[short] Windows: 0x3657d0
     * @note[short] iOS: 0xf5950
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x3639b0
     * @note[short] iOS: 0xf491c
     * @note[short] Android
     */
    void addToggle(char const* label, char const* key, char const* description);

    /**
     * @note[short] Windows: 0x364010
     * @note[short] Android
     */
    int countForPage(int p0);

    /**
     * @note[short] Windows: 0x364430
     * @note[short] Android
     */
    void goToPage(int p0);

    /**
     * @note[short] Android
     */
    void incrementCountForPage(int p0);

    /**
     * @note[short] Android
     */
    const char* infoKey(int p0);

    /**
     * @note[short] Windows: 0x364270
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int p0);

    /**
     * @note[short] Android
     */
    const char* layerKey(int p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int p0);

    /**
     * @note[short] Android
     */
    const char* objectKey(int p0);

    /**
     * @note[short] Windows: 0x3640e0
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int p0);

    /**
     * @note[short] Windows: 0x3652b0
     * @note[short] Android
     */
    void onApplyFPS(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x365780
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3655a0
     * @note[short] iOS: 0xf573c
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x364410
     * @note[short] iOS: 0xf4d18
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x364420
     * @note[short] iOS: 0xf4d0c
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x364840
     * @note[short] iOS: 0xf519c
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    const char* pageKey(int p0);

    /**
     * @note[short] Windows: 0x3651e0
     * @note[short] Android
     */
    void updateFPSButtons();
    int m_page;
    int m_toggleCount;
    int m_pageCount;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCTextInputNode* m_fpsInput;
    cocos2d::CCArray* m_fpsNodes;
};
