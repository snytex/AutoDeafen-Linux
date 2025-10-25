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

class LevelFeatureLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LevelFeatureLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelFeatureLayer, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static LevelFeatureLayer* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4530b8
     * @note[short] MacOS (Intel): 0x4f2260
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x45260c
     * @note[short] MacOS (Intel): 0x4f1770
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDown(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDown2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRemoveValues(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSetEpicOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSetFeatured(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleEpic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUp2(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateStars();
    cocos2d::CCLabelBMFont* m_featureLabel;
    int m_levelID;
    int m_featurePosition;
    bool m_epicOnly;
    cocos2d::CCSprite* m_epicSprite;
};
