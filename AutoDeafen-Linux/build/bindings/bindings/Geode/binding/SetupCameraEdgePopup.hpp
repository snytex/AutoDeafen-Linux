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

class SetupCameraEdgePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraEdgePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraEdgePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4c5330
     * @note[short] MacOS (Intel): 0x570e20
     * @note[short] Windows: 0x3faea0
     * @note[short] iOS: 0x239aa0
     * @note[short] Android
     */
    static SetupCameraEdgePopup* create(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4c63b8
     * @note[short] MacOS (Intel): 0x5720f0
     * @note[short] Windows: 0x3fbd10
     * @note[short] iOS: 0x23a898
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x4c6600
     * @note[short] MacOS (Intel): 0x572390
     * @note[short] Windows: 0x3fc200
     * @note[short] iOS: 0x23aa70
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c6518
     * @note[short] MacOS (Intel): 0x572280
     * @note[short] Windows: 0x3fbfc0
     * @note[short] iOS: 0x23a9f0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x4c54c0
     * @note[short] MacOS (Intel): 0x571060
     * @note[short] Windows: 0x3fafd0
     * @note[short] iOS: 0x239b84
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x4c624c
     * @note[short] MacOS (Intel): 0x571f20
     * @note[short] Windows: 0x3fbe10
     * @note[short] iOS: 0x23a778
     * @note[short] Android
     */
    void onCameraEdge(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c6094
     * @note[short] MacOS (Intel): 0x571d40
     * @note[short] Windows: 0x3fbf70
     * @note[short] iOS: 0x23a694
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c633c
     * @note[short] MacOS (Intel): 0x572050
     * @note[short] Windows: 0x3fbf40
     * @note[short] iOS: 0x23a868
     * @note[short] Android
     */
    void onUnlockEdge(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3fc130
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Windows: 0x3fc0b0
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_targetIDInput;
    int m_targetID;
    int m_edgeDirection;
    cocos2d::CCArray* m_directionToggles;
};
