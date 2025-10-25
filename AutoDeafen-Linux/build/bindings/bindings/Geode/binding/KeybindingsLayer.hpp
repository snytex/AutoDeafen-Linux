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

class KeybindingsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "KeybindingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindingsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x2b81d0
     * @note[short] Android
     */
    static KeybindingsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x5220ec
     * @note[short] MacOS (Intel): 0x5f25f0
     * @note[short] Windows: 0x2b82c0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x523ab4
     * @note[short] MacOS (Intel): 0x5f3fc0
     * @note[short] Windows: 0x84650
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x2b8bd0
     * @note[short] Android
     */
    cocos2d::CCLabelBMFont* addKeyPair(char const* p0, char const* p1);

    /**
     * @note[short] Windows: 0x2b8f80
     * @note[short] Android
     */
    int countForPage(int p0);

    /**
     * @note[short] Windows: 0x2b9220
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
     * @note[short] Windows: 0x2b9050
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
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int p0);

    /**
     * @note[short] Windows: 0x84620
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b9200
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b9210
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    const char* pageKey(int p0);
    int m_page;
    int m_keyCount;
    int m_maxPage;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
};
