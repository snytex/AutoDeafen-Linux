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

class ParentalOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ParentalOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParentalOptionsLayer, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static ParentalOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x6a1270
     * @note[short] MacOS (Intel): 0x78d870
     * @note[short] Windows: 0x365820
     * @note[short] iOS: 0xf5a0c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6a2a4c
     * @note[short] MacOS (Intel): 0x78f100
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0xf69d8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x365c70
     * @note[short] Android
     */
    void addToggle(char const* p0, char const* p1, char const* p2);

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
     * @note[short] Windows: 0x366270
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
     * @note[short] Windows: 0x3660e0
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
     * @note[short] Windows: 0x366410
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    const char* pageKey(int p0);
    int m_page;
    int m_toggleCount;
    int m_maxPage;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
};
