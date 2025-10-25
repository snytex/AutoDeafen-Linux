#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class GJOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJOptionsLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x285940
     * @note[short] Android: Rebinded
     */
     GJOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x232af8
     * @note[short] MacOS (Intel): 0x289c00
     * @note[short] Android
     */
    static GJOptionsLayer* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2333c8
     * @note[short] MacOS (Intel): 0x28a640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d3b84
     * @note[short] Android: Out of line
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x1f2810
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didToggleGV(gd::string variable);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didToggle(int toggle);

    /**
     * @note[short] MacOS (ARM): 0x2333cc
     * @note[short] MacOS (Intel): 0x28a650
     * @note[short] Windows: 0x288470
     * @note[short] Android
     */
    void addGVToggle(char const* title, char const* variable, char const* description);

    /**
     * @note[short] MacOS (ARM): 0x2339d0
     * @note[short] MacOS (Intel): 0x28ac90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d3c4c
     * @note[short] Android
     */
    void addToggle(char const* title, int id, bool initial, char const* description);

    /**
     * @note[short] MacOS (ARM): 0x233518
     * @note[short] MacOS (Intel): 0x28a780
     * @note[short] Windows: 0x2885b0
     * @note[short] Android
     */
    void addToggleInternal(char const* title, int id, bool initial, char const* description);

    /**
     * @note[short] MacOS (ARM): 0x234378
     * @note[short] MacOS (Intel): 0x28b620
     * @note[short] Android
     */
    int countForPage(int p0);

    /**
     * @note[short] Android
     */
    void goToPage(int p0);

    /**
     * @note[short] Windows: 0x288b80
     * @note[short] Android
     */
    void incrementCountForPage(int p0);

    /**
     * @note[short] Android
     */
    const char* infoKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x232c90
     * @note[short] MacOS (Intel): 0x289e50
     * @note[short] Windows: 0x288130
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x233acc
     * @note[short] MacOS (Intel): 0x28ada0
     * @note[short] Windows: 0x288e10
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int p0);

    /**
     * @note[short] Android
     */
    const char* layerKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2339d4
     * @note[short] MacOS (Intel): 0x28aca0
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
     * @note[short] MacOS (ARM): 0x2333a4
     * @note[short] MacOS (Intel): 0x28a610
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void offsetToNextPage();

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x233cb8
     * @note[short] MacOS (Intel): 0x28afa0
     * @note[short] Windows: 0x2893e0
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    const char* pageKey(int p0);
    float m_gap;
    int m_page;
    int m_togglesPerPage;
    int m_toggleCount;
    int m_maxPage;
    float m_maxLabelScale;
    float m_maxLabelWidth;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    float m_offset;
};
