#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextAreaDelegate.hpp"

class DialogLayer : public cocos2d::CCLayerColor, public TextAreaDelegate {
public:
    static constexpr auto CLASS_NAME = "DialogLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x33f91c
     * @note[short] MacOS (Intel): 0x3b4270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a89c
     * @note[short] Android
     */
    static DialogLayer* create(DialogObject* object, int background);

    /**
     * @note[short] MacOS (ARM): 0x33f928
     * @note[short] MacOS (Intel): 0x3b4280
     * @note[short] Windows: 0xd1f60
     * @note[short] iOS: 0x8a8a8
     * @note[short] Android
     */
    static DialogLayer* createDialogLayer(DialogObject* object, cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x33fa38
     * @note[short] MacOS (Intel): 0x3b43c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a934
     * @note[short] Android
     */
    static DialogLayer* createWithObjects(cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x3409f8
     * @note[short] MacOS (Intel): 0x3b5410
     * @note[short] Windows: 0x52db0
     * @note[short] iOS: 0x8b544
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x3408c4
     * @note[short] MacOS (Intel): 0x3b52c0
     * @note[short] Windows: 0xd2b60
     * @note[short] iOS: 0x8b428
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x340974
     * @note[short] MacOS (Intel): 0x3b5360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8b4c0
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x34093c
     * @note[short] MacOS (Intel): 0x3b5320
     * @note[short] Windows: 0xd2b90
     * @note[short] iOS: 0x8b488
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x34097c
     * @note[short] MacOS (Intel): 0x3b5380
     * @note[short] Windows: 0xd2bb0
     * @note[short] iOS: 0x8b4c8
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3409c0
     * @note[short] MacOS (Intel): 0x3b53d0
     * @note[short] Windows: 0x52d60
     * @note[short] iOS: 0x8b50c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3407a0
     * @note[short] MacOS (Intel): 0x3b5190
     * @note[short] Windows: 0xd2ad0
     * @note[short] iOS: 0x8b41c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x340d70
     * @note[short] MacOS (Intel): 0x3b57b0
     * @note[short] Windows: 0xd2e80
     * @note[short] iOS: 0x8b824
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x3409fc
     * @note[short] MacOS (Intel): 0x3b5420
     * @note[short] Windows: 0xd2bd0
     * @note[short] iOS: 0x8b548
     * @note[short] Android
     */
    virtual void fadeInTextFinished(TextArea* p0);

    /**
     * @note[short] MacOS (ARM): 0x340748
     * @note[short] MacOS (Intel): 0x3b5140
     * @note[short] Windows: 0xd2a70
     * @note[short] iOS: 0x8b3c4
     * @note[short] Android
     */
    void addToMainScene();

    /**
     * @note[short] MacOS (ARM): 0x340b4c
     * @note[short] MacOS (Intel): 0x3b5560
     * @note[short] iOS: 0x8b61c
     * @note[short] Android
     */
    void animateIn(DialogAnimationType p0);

    /**
     * @note[short] MacOS (ARM): 0x340d68
     * @note[short] MacOS (Intel): 0x3b57a0
     * @note[short] Android
     */
    void animateInDialog();

    /**
     * @note[short] MacOS (ARM): 0x340aec
     * @note[short] MacOS (Intel): 0x3b5510
     * @note[short] Windows: 0xd2c40
     * @note[short] iOS: 0x8b5c4
     * @note[short] Android
     */
    void animateInRandomSide();

    /**
     * @note[short] MacOS (ARM): 0x33ffc8
     * @note[short] MacOS (Intel): 0x3b4980
     * @note[short] Windows: 0xd2570
     * @note[short] iOS: 0x8add0
     * @note[short] Android
     */
    void displayDialogObject(DialogObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x33ff28
     * @note[short] MacOS (Intel): 0x3b48d0
     * @note[short] Windows: 0xd2510
     * @note[short] iOS: 0x8ad70
     * @note[short] Android
     */
    void displayNextObject();

    /**
     * @note[short] MacOS (ARM): 0x340620
     * @note[short] MacOS (Intel): 0x3b4ff0
     * @note[short] iOS: 0x8b2dc
     * @note[short] Android
     */
    void finishCurrentAnimation();

    /**
     * @note[short] MacOS (ARM): 0x3404c4
     * @note[short] MacOS (Intel): 0x3b4eb0
     * @note[short] Windows: 0xd2940
     * @note[short] iOS: 0x8b214
     * @note[short] Android
     */
    void handleDialogTap();

    /**
     * @note[short] MacOS (ARM): 0x33fa48
     * @note[short] MacOS (Intel): 0x3b43e0
     * @note[short] Windows: 0xd20b0
     * @note[short] iOS: 0x8a944
     * @note[short] Android
     */
    bool init(DialogObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] Windows: 0xd2ae0
     * @note[short] iOS: 0x8b334
     * @note[short] Android
     */
    void onClose();

    /**
     * @note[short] MacOS (ARM): 0x340408
     * @note[short] MacOS (Intel): 0x3b4de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8b158
     * @note[short] Android
     */
    void updateChatPlacement(DialogChatPlacement placement);

    /**
     * @note[short] MacOS (ARM): 0x3403a8
     * @note[short] MacOS (Intel): 0x3b4d70
     * @note[short] Windows: 0xd28c0
     * @note[short] iOS: 0x8b0f8
     * @note[short] Android
     */
    void updateNavButtonFrame();
    float m_animateTime;
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCLabelBMFont* m_characterLabel;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_characterSprite;
    cocos2d::CCArray* m_dialogObjects;
    int m_touchID;
    cocos2d::CCSprite* m_navButtonSprite;
    bool m_animating;
    bool m_skippable;
    DialogDelegate* m_delegate;
    bool m_handleTap;
    DialogAnimationType m_animationType;
    bool m_noRemove;
};
