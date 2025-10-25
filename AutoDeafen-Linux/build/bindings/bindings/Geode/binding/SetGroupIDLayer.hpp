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

class SetGroupIDLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetGroupIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetGroupIDLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2965a4
     * @note[short] MacOS (Intel): 0x2fe420
     * @note[short] Android
     */
    static SetGroupIDLayer* create(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x29b16c
     * @note[short] MacOS (Intel): 0x303620
     * @note[short] Windows: 0x3e62e0
     * @note[short] iOS: 0x42db0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x29aa40
     * @note[short] MacOS (Intel): 0x302ea0
     * @note[short] Windows: 0x8b790
     * @note[short] iOS: 0x42820
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x29aa5c
     * @note[short] MacOS (Intel): 0x302ee0
     * @note[short] Windows: 0x3e4400
     * @note[short] iOS: 0x4283c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addGroupID(int p0);

    /**
     * @note[short] Windows: 0x3e5000
     * @note[short] Android
     */
    void callRemoveFromGroup(float p0);

    /**
     * @note[short] MacOS (ARM): 0x298718
     * @note[short] MacOS (Intel): 0x300800
     * @note[short] Windows: 0x3e34b0
     * @note[short] Android: Rebinded
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint p0, int p1, int p2, gd::string p3, float p4, int p5);

    /**
     * @note[short] Android
     */
    TodoReturn determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x296704
     * @note[short] MacOS (Intel): 0x2fe5f0
     * @note[short] Windows: 0x3e1260
     * @note[short] iOS: 0x3f110
     * @note[short] Android
     */
    bool init(GameObject* obj, cocos2d::CCArray* objs);

    /**
     * @note[short] MacOS (ARM): 0x298c74
     * @note[short] MacOS (Intel): 0x300d30
     * @note[short] Windows: 0x3e52b0
     * @note[short] iOS: 0x41208
     * @note[short] Android
     */
    void onAddGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298c7c
     * @note[short] MacOS (Intel): 0x300d40
     * @note[short] Windows: 0x3e5420
     * @note[short] iOS: 0x41210
     * @note[short] Android
     */
    void onAddGroupParent(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e4390
     * @note[short] Android
     */
    void onAnim(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29a170
     * @note[short] MacOS (Intel): 0x302410
     * @note[short] Windows: 0x3e39e0
     * @note[short] iOS: 0x42264
     * @note[short] Android
     */
    void onArrow(int tag, int increment);

    /**
     * @note[short] MacOS (ARM): 0x29a100
     * @note[short] MacOS (Intel): 0x3023b0
     * @note[short] Windows: 0x3e3980
     * @note[short] iOS: 0x421f4
     * @note[short] Android
     */
    void onArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29a138
     * @note[short] MacOS (Intel): 0x3023e0
     * @note[short] Windows: 0x3e39b0
     * @note[short] iOS: 0x4222c
     * @note[short] Android
     */
    void onArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298444
     * @note[short] MacOS (Intel): 0x3004c0
     * @note[short] Windows: 0x3e5f60
     * @note[short] iOS: 0x40b20
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e3ed0
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29a028
     * @note[short] MacOS (Intel): 0x3022c0
     * @note[short] Windows: 0x3e40d0
     * @note[short] iOS: 0x4211c
     * @note[short] Android
     */
    void onExtra(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e4250
     * @note[short] Android
     */
    void onExtra2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298608
     * @note[short] MacOS (Intel): 0x3006e0
     * @note[short] Windows: 0x3e57b0
     * @note[short] iOS: 0x40ce4
     * @note[short] Android
     */
    void onNextFreeEditorLayer1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298690
     * @note[short] MacOS (Intel): 0x300770
     * @note[short] Windows: 0x3e5820
     * @note[short] iOS: 0x40d20
     * @note[short] Android
     */
    void onNextFreeEditorLayer2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29944c
     * @note[short] MacOS (Intel): 0x301650
     * @note[short] Windows: 0x3e5cc0
     * @note[short] iOS: 0x41888
     * @note[short] Android
     */
    void onNextFreeOrderChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298c40
     * @note[short] MacOS (Intel): 0x300d00
     * @note[short] Windows: 0x3e48d0
     * @note[short] iOS: 0x411d4
     * @note[short] Android
     */
    void onNextGroupID1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x299f48
     * @note[short] MacOS (Intel): 0x3021d0
     * @note[short] Windows: 0x3e3f30
     * @note[short] iOS: 0x420a8
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29ae48
     * @note[short] MacOS (Intel): 0x3032f0
     * @note[short] Windows: 0x3e51e0
     * @note[short] iOS: 0x42ac8
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSmoothEase(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleGuide(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e3410
     * @note[short] Android
     */
    void onToggleSelectedOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onZLayerShift(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn removeGroupID(int p0);

    /**
     * @note[short] Windows: 0x3e5920
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] Windows: 0x3e59b0
     * @note[short] Android
     */
    void updateEditorLabel2();

    /**
     * @note[short] Android
     */
    void updateEditorLayerID();

    /**
     * @note[short] Android
     */
    void updateEditorLayerID2();

    /**
     * @note[short] Android
     */
    void updateEditorOrder();

    /**
     * @note[short] Android
     */
    void updateEditorOrderLabel();

    /**
     * @note[short] MacOS (ARM): 0x299a60
     * @note[short] MacOS (Intel): 0x301c70
     * @note[short] Windows: 0x3e4940
     * @note[short] iOS: 0x41bd8
     * @note[short] Android
     */
    void updateGroupIDButtons();

    /**
     * @note[short] MacOS (ARM): 0x29950c
     * @note[short] MacOS (Intel): 0x301720
     * @note[short] Windows: 0x3e5ad0
     * @note[short] iOS: 0x418c4
     * @note[short] Android
     */
    void updateGroupIDLabel();

    /**
     * @note[short] Android
     */
    void updateOrderChannel();

    /**
     * @note[short] Android
     */
    void updateOrderChannelLabel();

    /**
     * @note[short] Windows: 0x3e5d30
     * @note[short] Android
     */
    void updateZLayerButtons();

    /**
     * @note[short] Windows: 0x3e5890
     * @note[short] Android
     */
    void updateZOrder();

    /**
     * @note[short] Windows: 0x3e5a40
     * @note[short] Android
     */
    void updateZOrderLabel();
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_zLayerButtons;
    cocos2d::CCArray* m_groupIDObjects;
    CCTextInputNode* m_editorLayerInput;
    CCTextInputNode* m_editorLayer2Input;
    CCTextInputNode* m_zOrderInput;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    bool m_showChannelOrder;
    int m_channelValue;
    bool m_channelUpdated;
    int m_groupIDValue;
    int m_editorLayerValue;
    int m_editorLayer2Value;
    int m_zOrderValue;
    ZLayer m_zLayerValue;
    int m_orderValue;
    bool m_channelOrderEdited;
    bool m_editorLayerEdited;
    bool m_removeGroupsLock;
    int m_groupToRemove;
    bool m_addedGroup;
    bool m_reverseChanged;
    bool m_hasTargetObjects;
    bool m_unk2ff;
    bool m_unk300;
    int m_nextFreeID;
    cocos2d::CCDictionary* m_parentGroups;
};
