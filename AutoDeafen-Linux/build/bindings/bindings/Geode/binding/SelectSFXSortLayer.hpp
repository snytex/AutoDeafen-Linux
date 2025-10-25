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

class SelectSFXSortLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSFXSortLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSFXSortLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectSFXSortLayer();

    /**
     * @note[short] MacOS (ARM): 0x3a7640
     * @note[short] MacOS (Intel): 0x42c860
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SelectSFXSortLayer* create(AudioSortType sortType);

    /**
     * @note[short] MacOS (ARM): 0x3a84bc
     * @note[short] MacOS (Intel): 0x42d760
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x16e780
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3a7f78
     * @note[short] MacOS (Intel): 0x42d250
     * @note[short] Windows: 0x468b50
     * @note[short] Android
     */
    bool init(AudioSortType p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a8450
     * @note[short] MacOS (Intel): 0x42d700
     * @note[short] Windows: 0x4691d0
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    AudioSortType m_sortType;
    SelectSFXSortDelegate* m_delegate;
};
