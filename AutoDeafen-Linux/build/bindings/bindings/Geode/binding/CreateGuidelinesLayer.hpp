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
#include "FLAlertLayerProtocol.hpp"

class CreateGuidelinesLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CreateGuidelinesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateGuidelinesLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x98fd0
     * @note[short] Android: Rebinded
     */
     CreateGuidelinesLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x99120
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~CreateGuidelinesLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CreateGuidelinesLayer* create(CustomSongDelegate* p0, AudioGuidelinesType p1);

    /**
     * @note[short] MacOS (ARM): 0x457810
     * @note[short] MacOS (Intel): 0x4f6f90
     * @note[short] Windows: 0x9adf0
     * @note[short] iOS: 0x81c38
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x457a68
     * @note[short] MacOS (Intel): 0x4f7200
     * @note[short] Windows: 0x9b0c0
     * @note[short] iOS: 0x81e38
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x457b90
     * @note[short] MacOS (Intel): 0x4f72f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x81ee4
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x457b98
     * @note[short] MacOS (Intel): 0x4f7310
     * @note[short] Windows: 0x9b140
     * @note[short] iOS: 0x81eec
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x457c68
     * @note[short] MacOS (Intel): 0x4f73b0
     * @note[short] Windows: 0x71210
     * @note[short] iOS: 0x81fb4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x457c84
     * @note[short] MacOS (Intel): 0x4f73f0
     * @note[short] Windows: 0x9b1a0
     * @note[short] iOS: 0x81fd0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x4579e4
     * @note[short] MacOS (Intel): 0x4f7160
     * @note[short] Windows: 0x9b040
     * @note[short] iOS: 0x81db4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x457cbc
     * @note[short] MacOS (Intel): 0x4f7430
     * @note[short] Windows: 0x9b1f0
     * @note[short] iOS: 0x82008
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x4578d8
     * @note[short] MacOS (Intel): 0x4f7060
     * @note[short] Windows: 0x9af60
     * @note[short] iOS: 0x81ce0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x4579a8
     * @note[short] MacOS (Intel): 0x4f7130
     * @note[short] Windows: 0x84620
     * @note[short] iOS: 0x81d78
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x457d00
     * @note[short] MacOS (Intel): 0x4f7480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8204c
     * @note[short] Android: Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x456ea4
     * @note[short] MacOS (Intel): 0x4f6610
     * @note[short] Windows: 0x9a6a0
     * @note[short] iOS: 0x814f4
     * @note[short] Android
     */
    virtual void playMusic();

    /**
     * @note[short] MacOS (ARM): 0x457a20
     * @note[short] MacOS (Intel): 0x4f71b0
     * @note[short] Windows: 0x9b060
     * @note[short] iOS: 0x81df0
     * @note[short] Android
     */
    virtual void registerTouch();

    /**
     * @note[short] MacOS (ARM): 0x457820
     * @note[short] MacOS (Intel): 0x4f6fb0
     * @note[short] Windows: 0x9ae10
     * @note[short] iOS: 0x81c48
     * @note[short] Android
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x456d90
     * @note[short] MacOS (Intel): 0x4f6500
     * @note[short] Windows: 0x9a510
     * @note[short] iOS: 0x813e4
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x456f44
     * @note[short] MacOS (Intel): 0x4f66a0
     * @note[short] Windows: 0x9a800
     * @note[short] iOS: 0x81584
     * @note[short] Android
     */
    virtual void recordingDidStop();

    /**
     * @note[short] MacOS (ARM): 0x456ce8
     * @note[short] MacOS (Intel): 0x4f6470
     * @note[short] Android
     */
    void doClearGuidelines();

    /**
     * @note[short] Windows: 0x9aa90
     * @note[short] Android: Rebinded
     */
    gd::string getMergedRecordString(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x455c70
     * @note[short] MacOS (Intel): 0x4f5320
     * @note[short] Windows: 0x991e0
     * @note[short] Android
     */
    bool init(CustomSongDelegate* p0, AudioGuidelinesType p1);

    /**
     * @note[short] MacOS (ARM): 0x456b0c
     * @note[short] MacOS (Intel): 0x4f6280
     * @note[short] Windows: 0x9a3e0
     * @note[short] Android
     */
    void onClearGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9a730
     * @note[short] Android
     */
    void onStop(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9ad10
     * @note[short] Android
     */
    void toggleItems(bool p0);
    CustomSongDelegate* m_delegate;
    CCTextInputNode* m_offsetInput;
    cocos2d::CCArray* m_nonRecordingObjects;
    cocos2d::CCArray* m_recordingObjects;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCSprite* m_circleSprite;
    float m_elapsed;
    bool m_recording;
    bool m_unk2b5;
    int m_guidelines;
    gd::string m_guidelineString;
};
