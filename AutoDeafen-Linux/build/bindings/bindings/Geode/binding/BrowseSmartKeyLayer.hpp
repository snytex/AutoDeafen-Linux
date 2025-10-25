#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BrowseSmartTemplateLayer.hpp"

class BrowseSmartKeyLayer : public BrowseSmartTemplateLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartKeyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartKeyLayer, BrowseSmartTemplateLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BrowseSmartKeyLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    static BrowseSmartKeyLayer* create(GJSmartTemplate* p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x43c764
     * @note[short] MacOS (Intel): 0x4d9020
     * @note[short] Windows: 0x4441b0
     * @note[short] iOS: 0x779e0
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void addChanceToSelected(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void createTemplateObjects();

    /**
     * @note[short] Android
     */
    void deletedSelectedItems();

    /**
     * @note[short] Windows: 0x443ed0
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSelectedBlocks();

    /**
     * @note[short] MacOS (ARM): 0x43b4bc
     * @note[short] MacOS (Intel): 0x4d7c90
     * @note[short] Windows: 0x4430d0
     * @note[short] Android: Rebinded
     */
    bool init(GJSmartTemplate* p0, gd::string p1);

    /**
     * @note[short] Windows: 0x443ab0
     * @note[short] Android
     */
    void onButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4440d0
     * @note[short] Android
     */
    void onPrefabObject(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x443fa0
     * @note[short] Android
     */
    void updateChanceValues();
    gd::string m_prefabKey;
    int m_templatePage;
};
