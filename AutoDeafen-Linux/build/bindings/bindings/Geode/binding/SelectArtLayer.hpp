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

class SelectArtLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectArtLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectArtLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2095fc
     * @note[short] MacOS (Intel): 0x25d1d0
     * @note[short] Windows: 0x30d600
     * @note[short] Android
     */
    static SelectArtLayer* create(SelectArtType p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x20a7c0
     * @note[short] MacOS (Intel): 0x25e610
     * @note[short] Windows: 0x30e530
     * @note[short] iOS: 0x18056c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x209c2c
     * @note[short] MacOS (Intel): 0x25da00
     * @note[short] Windows: 0x30d710
     * @note[short] Android
     */
    bool init(SelectArtType p0, int p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20a718
     * @note[short] MacOS (Intel): 0x25e550
     * @note[short] Windows: 0x30e420
     * @note[short] Android
     */
    void onSelectCustom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20a5d0
     * @note[short] MacOS (Intel): 0x25e430
     * @note[short] Windows: 0x30e360
     * @note[short] Android
     */
    void selectArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x209728
     * @note[short] MacOS (Intel): 0x25d340
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSelectedCustom(int idx);
    cocos2d::CCArray* m_artSprites;
    cocos2d::CCArray* m_lineSprites;
    int m_art;
    int m_line;
    SelectArtType m_type;
    SelectArtDelegate* m_delegate;
};
