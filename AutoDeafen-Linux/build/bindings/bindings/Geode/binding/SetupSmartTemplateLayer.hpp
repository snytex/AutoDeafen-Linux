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
#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class SetupSmartTemplateLayer : public FLAlertLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SetupSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartTemplateLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x4406e0
     * @note[short] Android
     */
    static SetupSmartTemplateLayer* create(GJSmartTemplate* p0);

    /**
     * @note[short] MacOS (ARM): 0x4396d4
     * @note[short] MacOS (Intel): 0x4d5b70
     * @note[short] Windows: 0x441940
     * @note[short] iOS: 0x75228
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x439378
     * @note[short] MacOS (Intel): 0x4d5870
     * @note[short] Windows: 0x4413a0
     * @note[short] iOS: 0x74f38
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x4395c8
     * @note[short] MacOS (Intel): 0x4d5a90
     * @note[short] Windows: 0x4416e0
     * @note[short] iOS: 0x750bc
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x43945c
     * @note[short] MacOS (Intel): 0x4d5950
     * @note[short] Windows: 0x441480
     * @note[short] iOS: 0x74f9c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x4396b4
     * @note[short] MacOS (Intel): 0x4d5b50
     * @note[short] Windows: 0xc3110
     * @note[short] iOS: 0x75208
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x43875c
     * @note[short] MacOS (Intel): 0x4d4c10
     * @note[short] Windows: 0x4407f0
     * @note[short] Android
     */
    bool init(GJSmartTemplate* p0);

    /**
     * @note[short] MacOS (ARM): 0x439040
     * @note[short] MacOS (Intel): 0x4d5500
     * @note[short] Windows: 0x441840
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x439068
     * @note[short] MacOS (Intel): 0x4d5530
     * @note[short] Windows: 0x4411e0
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4392a4
     * @note[short] MacOS (Intel): 0x4d57a0
     * @note[short] Windows: 0x441870
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    GJSmartTemplate* m_smartTemplate;
    CCTextInputNode* m_nameInput;
    cocos2d::CCNode* m_unk298;
};
