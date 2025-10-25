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

class GJSpecialColorSelect : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJSpecialColorSelect";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpecialColorSelect, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x53a934
     * @note[short] MacOS (Intel): 0x60dd40
     * @note[short] Windows: 0x2b0670
     * @note[short] Android
     */
    static GJSpecialColorSelect* create(int p0, GJSpecialColorSelectDelegate* p1, ColorSelectType p2);

    /**
     * @note[short] MacOS (ARM): 0x53c684
     * @note[short] MacOS (Intel): 0x610110
     * @note[short] Windows: 0x2b13c0
     * @note[short] iOS: 0x1b37b0
     * @note[short] Android
     */
    static const char* textForColorIdx(int p0);

    /**
     * @note[short] MacOS (ARM): 0x53c8cc
     * @note[short] MacOS (Intel): 0x610360
     * @note[short] Windows: 0x2b1370
     * @note[short] iOS: 0x1b38d8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    ButtonSprite* getButtonByTag(int p0);

    /**
     * @note[short] Android
     */
    void highlightSelected(ButtonSprite* p0);

    /**
     * @note[short] MacOS (ARM): 0x53aa54
     * @note[short] MacOS (Intel): 0x60deb0
     * @note[short] Windows: 0x2b0780
     * @note[short] iOS: 0x1b2268
     * @note[short] Android
     */
    bool init(int p0, GJSpecialColorSelectDelegate* p1, ColorSelectType p2);

    /**
     * @note[short] Windows: 0x2b1320
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x53c6ac
     * @note[short] MacOS (Intel): 0x610140
     * @note[short] Windows: 0x2b1240
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);
    GJSpecialColorSelectDelegate* m_delegate;
    int m_colorID;
    cocos2d::CCArray* m_buttonSprites;
};
