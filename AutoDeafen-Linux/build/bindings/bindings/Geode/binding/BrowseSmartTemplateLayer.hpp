#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SmartPrefabResult.hpp"
#include "FLAlertLayer.hpp"

class BrowseSmartTemplateLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartTemplateLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x43e390
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BrowseSmartTemplateLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x441980
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~BrowseSmartTemplateLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static BrowseSmartTemplateLayer* create(GJSmartTemplate* p0, SmartBrowseFilter p1);

    /**
     * @note[short] MacOS (ARM): 0x43b324
     * @note[short] MacOS (Intel): 0x4d7a20
     * @note[short] Windows: 0x443040
     * @note[short] iOS: 0x76884
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x43b348
     * @note[short] MacOS (Intel): 0x4d7a60
     * @note[short] Windows: 0x443060
     * @note[short] iOS: 0x768a8
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4424b0
     * @note[short] Android
     */
    void addObjectToPage(cocos2d::CCObject* p0, int p1);

    /**
     * @note[short] Windows: 0x4420b0
     * @note[short] Android
     */
    void addPrefabMenuItem(SmartPrefabResult p0, int p1);

    /**
     * @note[short] Windows: 0x442540
     * @note[short] Android
     */
    void baseSetup();

    /**
     * @note[short] Android
     */
    void createDots();

    /**
     * @note[short] Windows: 0x442c60
     * @note[short] Android: Rebinded
     */
    void createPrefab(gd::string p0, int p1);

    /**
     * @note[short] Windows: 0x442af0
     * @note[short] Android
     */
    void goToPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x439948
     * @note[short] MacOS (Intel): 0x4d5f10
     * @note[short] Windows: 0x441a40
     * @note[short] Android
     */
    bool init(GJSmartTemplate* p0, SmartBrowseFilter p1);

    /**
     * @note[short] Windows: 0x442ff0
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x442d30
     * @note[short] Android
     */
    void onTemplateObject(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateDots();
    GJSmartTemplate* m_template;
    cocos2d::CCArray* m_pages;
    int m_page;
    cocos2d::CCNode* m_nextPageBtn;
    cocos2d::CCNode* m_prevPageBtn;
    cocos2d::CCArray* m_dotsArray;
};
