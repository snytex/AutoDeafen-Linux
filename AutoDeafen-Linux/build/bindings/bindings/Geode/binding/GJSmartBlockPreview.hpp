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

class GJSmartBlockPreview : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreview";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreview, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x2ae310
     * @note[short] Android: Rebinded
     */
    static GJSmartBlockPreview* create(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x392550
     * @note[short] MacOS (Intel): 0x416ac0
     * @note[short] Windows: 0x2af0b0
     * @note[short] Android
     */
    void addChance(int p0, int p1);

    /**
     * @note[short] Android
     */
    void addCount(int p0);

    /**
     * @note[short] Windows: 0x2aef30
     * @note[short] Android: Rebinded
     */
    void addPreview(gd::string p0, gd::string p1, LevelEditorLayer* p2);

    /**
     * @note[short] Windows: 0x2ae450
     * @note[short] Android: Rebinded
     */
    void addTemplateGuide(gd::string p0, int p1);

    /**
     * @note[short] Windows: 0x2ae6e0
     * @note[short] Android
     */
    cocos2d::CCArray* addTemplateGuide(SmartPrefabResult p0, float p1);

    /**
     * @note[short] Android
     */
    void createInfoLabel();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    bool init(gd::string key);

    /**
     * @note[short] Android
     */
    void toggleSelectItem(bool p0);
    gd::string m_prefabKey;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCSprite* m_selectSprite;
    bool m_selected;
};
