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

class SelectListIconLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectListIconLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectListIconLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectListIconLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~SelectListIconLayer();

    /**
     * @note[short] MacOS (ARM): 0x2e15b8
     * @note[short] MacOS (Intel): 0x34cd20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SelectListIconLayer* create(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x2e2acc
     * @note[short] MacOS (Intel): 0x34e2e0
     * @note[short] Windows: 0x2f5080
     * @note[short] iOS: 0x246fb0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2e241c
     * @note[short] MacOS (Intel): 0x34dcc0
     * @note[short] Windows: 0x2f4790
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e297c
     * @note[short] MacOS (Intel): 0x34e1d0
     * @note[short] Windows: 0x2f4f80
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    cocos2d::CCArray* m_difficulties;
    int m_currentDifficulty;
    SelectListIconDelegate* m_delegate;
};
