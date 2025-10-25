#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObjectEditorState.hpp"
#include "GJTransformState.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "ColorSelectDelegate.hpp"
#include "GJRotationControlDelegate.hpp"
#include "GJScaleControlDelegate.hpp"
#include "GJTransformControlDelegate.hpp"
#include "MusicDownloadDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditorUI : public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public GJTransformControlDelegate, public MusicDownloadDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorUI";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditorUI, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0xdd4b0
     * @note[short] Android: Rebinded
     */
     EditorUI();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~EditorUI();

    /**
     * @note[short] MacOS (ARM): 0xaccc
     * @note[short] MacOS (Intel): 0x96b0
     * @note[short] Android
     */
    static EditorUI* create(LevelEditorLayer* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static EditorUI* get();

    /**
     * @note[short] MacOS (ARM): 0x463fc
     * @note[short] MacOS (Intel): 0x4e7d0
     * @note[short] Windows: 0x121120
     * @note[short] iOS: 0x3f0124
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x46de4
     * @note[short] MacOS (Intel): 0x4f290
     * @note[short] Windows: 0x121c60
     * @note[short] iOS: 0x3f07a0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x473c0
     * @note[short] MacOS (Intel): 0x4f8b0
     * @note[short] Windows: 0x1222e0
     * @note[short] iOS: 0x3f0ce4
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x478e8
     * @note[short] MacOS (Intel): 0x4fe60
     * @note[short] Windows: 0x122a30
     * @note[short] iOS: 0x3f11c8
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x48094
     * @note[short] MacOS (Intel): 0x50780
     * @note[short] Windows: 0x71210
     * @note[short] iOS: 0x3f1938
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x480b0
     * @note[short] MacOS (Intel): 0x507c0
     * @note[short] Windows: 0x9b1a0
     * @note[short] iOS: 0x3f1954
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x39b48
     * @note[short] MacOS (Intel): 0x3f0f0
     * @note[short] Windows: 0x1130e0
     * @note[short] iOS: 0x3e7358
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x480e8
     * @note[short] MacOS (Intel): 0x50800
     * @note[short] Windows: 0x123770
     * @note[short] iOS: 0x3f198c
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): 0x546c0
     * @note[short] Windows: 0xdd8f0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual EditorUI* getUI();

    /**
     * @note[short] MacOS (ARM): 0x32e34
     * @note[short] MacOS (Intel): 0x337d0
     * @note[short] Windows: 0xe5580
     * @note[short] iOS: 0x3e213c
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x32c64
     * @note[short] MacOS (Intel): 0x33640
     * @note[short] Windows: 0xe5390
     * @note[short] iOS: 0x3e2060
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3b2bc
     * @note[short] MacOS (Intel): 0x40b50
     * @note[short] Windows: 0x113b60
     * @note[short] iOS: 0x3e8214
     * @note[short] Android
     */
    virtual void updateTransformControl();

    /**
     * @note[short] MacOS (ARM): 0x3bb74
     * @note[short] MacOS (Intel): 0x414f0
     * @note[short] Windows: 0x114050
     * @note[short] iOS: 0x3e89b4
     * @note[short] Android
     */
    virtual void transformChangeBegin();

    /**
     * @note[short] MacOS (ARM): 0x3bc20
     * @note[short] MacOS (Intel): 0x415d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e8a60
     * @note[short] Android: Out of line
     */
    virtual void transformChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x4b658
     * @note[short] MacOS (Intel): 0x546d0
     * @note[short] Windows: 0xdd900
     * @note[short] iOS: 0x3f4498
     * @note[short] Android
     */
    virtual cocos2d::CCNode* getTransformNode();

    /**
     * @note[short] MacOS (ARM): 0x44ec0
     * @note[short] MacOS (Intel): 0x4d000
     * @note[short] Windows: 0x11fca0
     * @note[short] iOS: 0x3ef7c8
     * @note[short] Android
     */
    virtual void transformScaleXChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x45088
     * @note[short] MacOS (Intel): 0x4d210
     * @note[short] Windows: 0x11fcc0
     * @note[short] iOS: 0x3ef868
     * @note[short] Android
     */
    virtual void transformScaleYChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x451bc
     * @note[short] MacOS (Intel): 0x4d370
     * @note[short] Windows: 0x11fce0
     * @note[short] iOS: 0x3ef880
     * @note[short] Android
     */
    virtual void transformScaleXYChanged(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x452f4
     * @note[short] MacOS (Intel): 0x4d4e0
     * @note[short] Windows: 0x11fd00
     * @note[short] iOS: 0x3ef89c
     * @note[short] Android
     */
    virtual void transformSkewXChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x45428
     * @note[short] MacOS (Intel): 0x4d640
     * @note[short] Windows: 0x11fd20
     * @note[short] iOS: 0x3ef8b4
     * @note[short] Android
     */
    virtual void transformSkewYChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4555c
     * @note[short] MacOS (Intel): 0x4d7a0
     * @note[short] Windows: 0x11fd40
     * @note[short] iOS: 0x3ef8cc
     * @note[short] Android
     */
    virtual void transformRotationXChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x45690
     * @note[short] MacOS (Intel): 0x4d900
     * @note[short] Windows: 0x11fd60
     * @note[short] iOS: 0x3ef8e4
     * @note[short] Android
     */
    virtual void transformRotationYChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x457c4
     * @note[short] MacOS (Intel): 0x4da60
     * @note[short] Windows: 0x11fd80
     * @note[short] iOS: 0x3ef8fc
     * @note[short] Android
     */
    virtual void transformRotationChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x458fc
     * @note[short] MacOS (Intel): 0x4dbd0
     * @note[short] Windows: 0x11fda0
     * @note[short] iOS: 0x3ef918
     * @note[short] Android
     */
    virtual void transformResetRotation();

    /**
     * @note[short] MacOS (ARM): 0x459b4
     * @note[short] MacOS (Intel): 0x4dcc0
     * @note[short] Windows: 0x11fdd0
     * @note[short] iOS: 0x3ef95c
     * @note[short] Android
     */
    virtual void transformRestoreRotation();

    /**
     * @note[short] MacOS (ARM): 0x38a48
     * @note[short] MacOS (Intel): 0x3df50
     * @note[short] Windows: 0x110990
     * @note[short] iOS: 0x3e68b4
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x4342c
     * @note[short] MacOS (Intel): 0x4a5a0
     * @note[short] Windows: 0x11dcd0
     * @note[short] iOS: 0x3edf18
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x48dcc
     * @note[short] MacOS (Intel): 0x51920
     * @note[short] Windows: 0x124a00
     * @note[short] iOS: 0x3f2630
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x48e44
     * @note[short] MacOS (Intel): 0x519c0
     * @note[short] Windows: 0x124a40
     * @note[short] iOS: 0x3f26a8
     * @note[short] Android
     */
    virtual void scrollWheel(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x464d4
     * @note[short] MacOS (Intel): 0x4e8b0
     * @note[short] Windows: 0x121560
     * @note[short] iOS: 0x3f01fc
     * @note[short] Android
     */
    virtual void angleChangeBegin();

    /**
     * @note[short] MacOS (ARM): 0x464f0
     * @note[short] MacOS (Intel): 0x4e8f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f0218
     * @note[short] Android: Out of line
     */
    virtual void angleChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x464f8
     * @note[short] MacOS (Intel): 0x4e910
     * @note[short] Windows: 0x121570
     * @note[short] iOS: 0x3f0220
     * @note[short] Android
     */
    virtual void angleChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x39f48
     * @note[short] MacOS (Intel): 0x3f540
     * @note[short] Windows: 0x113550
     * @note[short] iOS: 0x3e75c4
     * @note[short] Android
     */
    virtual void updateScaleControl();

    /**
     * @note[short] MacOS (ARM): 0x3bc28
     * @note[short] MacOS (Intel): 0x415f0
     * @note[short] Windows: 0x114060
     * @note[short] iOS: 0x3e8a68
     * @note[short] Android
     */
    virtual void anchorPointMoved(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x3a590
     * @note[short] MacOS (Intel): 0x3fc70
     * @note[short] Windows: 0x1136b0
     * @note[short] iOS: 0x3e7aac
     * @note[short] Android
     */
    virtual void scaleChangeBegin();

    /**
     * @note[short] MacOS (ARM): 0x3a5ac
     * @note[short] MacOS (Intel): 0x3fcb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e7ac8
     * @note[short] Android: Out of line
     */
    virtual void scaleChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x3a5b4
     * @note[short] MacOS (Intel): 0x3fcd0
     * @note[short] Windows: 0x1136c0
     * @note[short] iOS: 0x3e7ad0
     * @note[short] Android
     */
    virtual void scaleXChanged(float p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3abec
     * @note[short] MacOS (Intel): 0x40440
     * @note[short] Windows: 0x113770
     * @note[short] iOS: 0x3e7ec4
     * @note[short] Android
     */
    virtual void scaleYChanged(float p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3ad30
     * @note[short] MacOS (Intel): 0x40590
     * @note[short] Windows: 0x113820
     * @note[short] iOS: 0x3e7f6c
     * @note[short] Android
     */
    virtual void scaleXYChanged(float p0, float p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x3878c
     * @note[short] MacOS (Intel): 0x3dc70
     * @note[short] Windows: 0x121420
     * @note[short] iOS: 0x3e6664
     * @note[short] Android
     */
    void activateRotationControl(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x39c78
     * @note[short] MacOS (Intel): 0x3f250
     * @note[short] Windows: 0x113280
     * @note[short] iOS: 0x3e7408
     * @note[short] Android
     */
    void activateScaleControl(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x3aec4
     * @note[short] MacOS (Intel): 0x40720
     * @note[short] Windows: 0x1138d0
     * @note[short] iOS: 0x3e803c
     * @note[short] Android
     */
    void activateTransformControl(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x114390
     * @note[short] Android
     */
    void addObjectsToSmartTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    TodoReturn addSnapPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x45afc
     * @note[short] MacOS (Intel): 0x4de50
     * @note[short] Windows: 0x1203a0
     * @note[short] iOS: 0x3efa20
     * @note[short] Android
     */
    void alignObjects(cocos2d::CCArray* objects, bool axisY);

    /**
     * @note[short] Windows: 0x120d40
     * @note[short] iOS: 0x3e4a18
     * @note[short] Android
     */
    void applyOffset(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn applySpecialOffset(cocos2d::CCPoint p0, GameObject* p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Android
     */
    TodoReturn arrayContainsClass(cocos2d::CCArray* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3f6a0
     * @note[short] MacOS (Intel): 0x45970
     * @note[short] Windows: 0x1178c0
     * @note[short] iOS: 0x3eb650
     * @note[short] Android
     */
    void assignNewGroups(bool groupY);

    /**
     * @note[short] Android
     */
    TodoReturn canAllowMultiActivate(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x373c8
     * @note[short] MacOS (Intel): 0x3c770
     * @note[short] Windows: 0x10ec30
     * @note[short] iOS: 0x3e57f8
     * @note[short] Android
     */
    bool canSelectObject(GameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn centerCameraOnObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn changeSelectedObjects(cocos2d::CCArray* p0, bool p1);

    /**
     * @note[short] Windows: 0x1140e0
     * @note[short] Android
     */
    TodoReturn checkDiffAfterTransformAnchor(cocos2d::CCPoint p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x10ef50
     * @note[short] Android
     */
    void checkLiveColorSelect();

    /**
     * @note[short] MacOS (ARM): 0x2d9d4
     * @note[short] MacOS (Intel): 0x2dfa0
     * @note[short] Windows: 0xe1040
     * @note[short] iOS: 0x3dea18
     * @note[short] Android
     */
    void clickOnPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn closeLiveColorSelect();

    /**
     * @note[short] Android
     */
    TodoReturn closeLiveHSVSelect();

    /**
     * @note[short] Android
     */
    void colorSelectClosed(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void constrainGameLayerPosition();

    /**
     * @note[short] MacOS (ARM): 0x2b208
     * @note[short] MacOS (Intel): 0x2afb0
     * @note[short] Windows: 0x120dd0
     * @note[short] iOS: 0x3dc880
     * @note[short] Android
     */
    void constrainGameLayerPosition(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn convertKeyBasedOnNeighbors(int p0, int p1, cocos2d::CCPoint p2, cocos2d::CCArray* p3);

    /**
     * @note[short] Android
     */
    TodoReturn convertToBaseKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x309d4
     * @note[short] MacOS (Intel): 0x31280
     * @note[short] Windows: 0x111560
     * @note[short] iOS: 0x3e0a08
     * @note[short] Android
     */
    gd::string copyObjects(cocos2d::CCArray* objects, bool copyColors, bool sort);

    /**
     * @note[short] Android
     */
    TodoReturn copyObjectsDetailed(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x3122c
     * @note[short] MacOS (Intel): 0x31b80
     * @note[short] Windows: 0xe30e0
     * @note[short] iOS: 0x3e0ec8
     * @note[short] Android
     */
    cocos2d::CCArray* createCustomItems();

    /**
     * @note[short] Android
     */
    TodoReturn createEdgeForObject(GameObject* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn createExtraObject(int p0, cocos2d::CCPoint p1, GameObject* p2, cocos2d::CCArray* p3, int p4, int p5);

    /**
     * @note[short] Android
     */
    TodoReturn createExtras(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createExtrasForObject(int p0, GameObject* p1, cocos2d::CCArray* p2);

    /**
     * @note[short] Android
     */
    TodoReturn createGlow();

    /**
     * @note[short] MacOS (ARM): 0x3fa34
     * @note[short] MacOS (Intel): 0x45d70
     * @note[short] Windows: 0x117c90
     * @note[short] iOS: 0x3eb930
     * @note[short] Android
     */
    void createLoop();

    /**
     * @note[short] MacOS (ARM): 0x400a8
     * @note[short] MacOS (Intel): 0x464d0
     * @note[short] Windows: 0x119350
     * @note[short] iOS: 0x3ebe14
     * @note[short] Android
     */
    void createMoveMenu();

    /**
     * @note[short] Windows: 0x1179f0
     * @note[short] Android
     */
    void createNewKeyframeAnim();

    /**
     * @note[short] MacOS (ARM): 0x35d7c
     * @note[short] MacOS (Intel): 0x3aa80
     * @note[short] Windows: 0x10e840
     * @note[short] iOS: 0x3e4914
     * @note[short] Android
     */
    GameObject* createObject(int p0, cocos2d::CCPoint p1);

    /**
     * @note[short] Android
     */
    TodoReturn createOutlines(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x3dfc0
     * @note[short] MacOS (Intel): 0x43f80
     * @note[short] Windows: 0x1160f0
     * @note[short] iOS: 0x3ea55c
     * @note[short] Android: Rebinded
     */
    void createPrefab(GJSmartTemplate* p0, gd::string p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x52bf0c
     * @note[short] MacOS (Intel): 0x5fd600
     * @note[short] Windows: 0x12da00
     * @note[short] Android
     */
    cocos2d::CCArray* createRockBases(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createRockEdges(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x115580
     * @note[short] Android
     */
    void createSmartObjectsFromTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1, bool p2, bool p3, bool p4, bool p5);

    /**
     * @note[short] Windows: 0x116660
     * @note[short] Android
     */
    void createSmartObjectsFromType(int p0, cocos2d::CCArray* p1, bool p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x37f50
     * @note[short] MacOS (Intel): 0x3d3e0
     * @note[short] Windows: 0x10f830
     * @note[short] iOS: 0x3e62ac
     * @note[short] Android
     */
    UndoObject* createUndoObject(UndoCommand p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x2e58c
     * @note[short] MacOS (Intel): 0x2ebf0
     * @note[short] Windows: 0x10fb50
     * @note[short] iOS: 0x3df104
     * @note[short] Android
     */
    void createUndoSelectObject(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xd338
     * @note[short] MacOS (Intel): 0xbf40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bf430
     * @note[short] Android
     */
    void deactivateRotationControl();

    /**
     * @note[short] Windows: 0x113480
     * @note[short] Android
     */
    void deactivateScaleControl();

    /**
     * @note[short] MacOS (ARM): 0xd5dc
     * @note[short] MacOS (Intel): 0xc200
     * @note[short] Windows: 0x113ad0
     * @note[short] iOS: 0x3bf614
     * @note[short] Android
     */
    void deactivateTransformControl();

    /**
     * @note[short] MacOS (ARM): 0x325f8
     * @note[short] MacOS (Intel): 0x32f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e1e9c
     * @note[short] Android
     */
    void deleteObject(GameObject* object, bool noUndo);

    /**
     * @note[short] Windows: 0x116500
     * @note[short] Android
     */
    void deleteSmartBlocksFromObjects(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteTypeFromObjects(int id, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x328b0
     * @note[short] MacOS (Intel): 0x33240
     * @note[short] Windows: 0x10fd80
     * @note[short] iOS: 0x3e1f84
     * @note[short] Android
     */
    void deselectAll();

    /**
     * @note[short] MacOS (ARM): 0x32a98
     * @note[short] MacOS (Intel): 0x33450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e2010
     * @note[short] Android
     */
    void deselectObject();

    /**
     * @note[short] MacOS (ARM): 0x32808
     * @note[short] MacOS (Intel): 0x331a0
     * @note[short] Windows: 0x10fc60
     * @note[short] iOS: 0x3e1f00
     * @note[short] Android
     */
    void deselectObject(GameObject* p0);

    /**
     * @note[short] Windows: 0x10f0b0
     * @note[short] Android
     */
    void deselectObjectsColor();

    /**
     * @note[short] MacOS (ARM): 0x324a8
     * @note[short] MacOS (Intel): 0x32e10
     * @note[short] Windows: 0xe51b0
     * @note[short] Android
     */
    void deselectTargetPortals();

    /**
     * @note[short] Android
     */
    TodoReturn disableButton(CreateMenuItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x391d4
     * @note[short] MacOS (Intel): 0x3e700
     * @note[short] Windows: 0x111900
     * @note[short] iOS: 0x3e6d64
     * @note[short] Android
     */
    void doCopyObjects(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn doPasteInPlace(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x392cc
     * @note[short] MacOS (Intel): 0x3e820
     * @note[short] Windows: 0x111a90
     * @note[short] iOS: 0x3e6e5c
     * @note[short] Android
     */
    void doPasteObjects(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x3ed20
     * @note[short] MacOS (Intel): 0x44e10
     * @note[short] Windows: 0x117000
     * @note[short] iOS: 0x3eafa8
     * @note[short] Android
     */
    void dynamicGroupUpdate(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn edgeForObject(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4238c
     * @note[short] MacOS (Intel): 0x492e0
     * @note[short] Android
     */
    bool editButton2Usable();

    /**
     * @note[short] MacOS (ARM): 0x41e60
     * @note[short] MacOS (Intel): 0x48580
     * @note[short] Windows: 0x1182f0
     * @note[short] iOS: 0x3eccac
     * @note[short] Android
     */
    bool editButtonUsable();

    /**
     * @note[short] Android
     */
    TodoReturn editColor();

    /**
     * @note[short] Android
     */
    TodoReturn editColorButtonUsable();

    /**
     * @note[short] MacOS (ARM): 0x2c4d0
     * @note[short] MacOS (Intel): 0x2c8f0
     * @note[short] Windows: 0x11d880
     * @note[short] Android
     */
    void editGroup(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn editHSV();

    /**
     * @note[short] MacOS (ARM): 0x2b750
     * @note[short] MacOS (Intel): 0x2b550
     * @note[short] Windows: 0x11a510
     * @note[short] iOS: 0x3dcd18
     * @note[short] Android
     */
    void editObject(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x2b748
     * @note[short] MacOS (Intel): 0x2b540
     * @note[short] Windows: 0x11c4a0
     * @note[short] iOS: 0x3dcd10
     * @note[short] Android
     */
    void editObject2(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4304c
     * @note[short] MacOS (Intel): 0x4a0e0
     * @note[short] Android
     */
    void editObject3(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x42aa0
     * @note[short] MacOS (Intel): 0x499d0
     * @note[short] Windows: 0x11c4b0
     * @note[short] iOS: 0x3ed75c
     * @note[short] Android
     */
    void editObjectSpecial(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn editorLayerForArray(cocos2d::CCArray* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn enableButton(CreateMenuItem* p0);

    /**
     * @note[short] Android
     */
    TodoReturn findAndSelectObject(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x46738
     * @note[short] MacOS (Intel): 0x4eb50
     * @note[short] Windows: 0x121790
     * @note[short] iOS: 0x3f0448
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCArray* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x46620
     * @note[short] MacOS (Intel): 0x4ea40
     * @note[short] Windows: 0x121690
     * @note[short] iOS: 0x3f0338
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCPoint p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn findTriggerTest();

    /**
     * @note[short] MacOS (ARM): 0x3ddc0
     * @note[short] MacOS (Intel): 0x43d70
     * @note[short] Windows: 0x11f0f0
     * @note[short] iOS: 0x3ea3d4
     * @note[short] Android
     */
    void flipObjectsX(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x3dc18
     * @note[short] MacOS (Intel): 0x43ba0
     * @note[short] Windows: 0x11f2d0
     * @note[short] iOS: 0x3ea24c
     * @note[short] Android
     */
    void flipObjectsY(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getButton(char const* p0, int p1, cocos2d::SEL_MenuHandler p2, cocos2d::CCMenu* p3);

    /**
     * @note[short] MacOS (ARM): 0x332f0
     * @note[short] MacOS (Intel): 0x33c60
     * @note[short] Windows: 0x10d2a0
     * @note[short] iOS: 0x3e24b8
     * @note[short] Android
     */
    CreateMenuItem* getCreateBtn(int id, int bg);

    /**
     * @note[short] MacOS (ARM): 0x2eb94
     * @note[short] MacOS (Intel): 0x2f190
     * @note[short] iOS: 0x3df54c
     * @note[short] Android
     */
    CreateMenuItem* getCreateMenuItemButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);

    /**
     * @note[short] Android
     */
    TodoReturn getCycledObject(cocos2d::CCArray* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x43088
     * @note[short] MacOS (Intel): 0x4a120
     * @note[short] Android
     */
    void getEditColorTargets(ColorAction*& p0, ColorAction*& p1, EffectGameObject*& p2);

    /**
     * @note[short] MacOS (ARM): 0x35130
     * @note[short] MacOS (Intel): 0x35c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e3cc8
     * @note[short] Android
     */
    cocos2d::CCPoint getGridSnappedPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x36e28
     * @note[short] MacOS (Intel): 0x3c1b0
     * @note[short] Windows: 0x121190
     * @note[short] iOS: 0x3e5280
     * @note[short] Android
     */
    cocos2d::CCPoint getGroupCenter(cocos2d::CCArray* objs, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getGroupInfo(GameObject* p0, cocos2d::CCArray* p1, int& p2, int& p3, int& p4);

    /**
     * @note[short] Windows: 0x11e6f0
     * @note[short] iOS: 0x3ee478
     * @note[short] Android
     */
    cocos2d::CCPoint getLimitedPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getModeBtn(char const* p0, int p1);

    /**
     * @note[short] Windows: 0x116f30
     * @note[short] Android
     */
    cocos2d::CCNode* getNeighbor(int p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);

    /**
     * @note[short] Android
     */
    TodoReturn getRandomStartKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x35c3c
     * @note[short] MacOS (Intel): 0x3a960
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativeOffset(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x37eac
     * @note[short] MacOS (Intel): 0x3d330
     * @note[short] Windows: 0x10f780
     * @note[short] iOS: 0x3e6210
     * @note[short] Android
     */
    cocos2d::CCArray* getSelectedObjects();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getSimpleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] Windows: 0x116e10
     * @note[short] Android
     */
    SmartGameObject* getSmartNeighbor(SmartGameObject* p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);

    /**
     * @note[short] Android
     */
    static int getSmartObjectKey(int p0, GJSmartDirection p1);

    /**
     * @note[short] MacOS (ARM): 0x43b14
     * @note[short] MacOS (Intel): 0x4ad60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ee4e4
     * @note[short] Android
     */
    float getSnapAngle(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0xd81c
     * @note[short] MacOS (Intel): 0xc440
     * @note[short] Windows: 0xe11d0
     * @note[short] iOS: 0x3bf6f8
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* spriteFrameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int buttonKind, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0xd6b0
     * @note[short] MacOS (Intel): 0xc2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* spriteFrameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (ARM): 0x2e9a0
     * @note[short] MacOS (Intel): 0x2efb0
     * @note[short] Windows: 0xe1260
     * @note[short] iOS: 0x3df454
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(cocos2d::CCSprite* sprite, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int buttonKind, cocos2d::CCPoint offset);

    /**
     * @note[short] Android
     */
    TodoReturn getTouchPoint(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn getTransformState();

    /**
     * @note[short] MacOS (ARM): 0x2ee78
     * @note[short] MacOS (Intel): 0x2f470
     * @note[short] Android
     */
    float getXMin(int p0);

    /**
     * @note[short] MacOS (ARM): 0xad4c
     * @note[short] MacOS (Intel): 0x9710
     * @note[short] Windows: 0xdde60
     * @note[short] iOS: 0x3bd3d4
     * @note[short] Android
     */
    bool init(LevelEditorLayer* editorLayer);

    /**
     * @note[short] Android
     */
    bool isLiveColorSelectTrigger(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x44de8
     * @note[short] MacOS (Intel): 0x4c2f0
     * @note[short] Windows: 0x1272b0
     * @note[short] Android
     */
    bool isSpecialSnapObject(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn liveEditColorUsable();

    /**
     * @note[short] MacOS (ARM): 0x315a4
     * @note[short] MacOS (Intel): 0x31f10
     * @note[short] Windows: 0x10d090
     * @note[short] iOS: 0x3e1170
     * @note[short] Android: Rebinded
     */
    CreateMenuItem* menuItemFromObjectString(gd::string p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x435fc
     * @note[short] MacOS (Intel): 0x4a7d0
     * @note[short] Windows: 0x11de20
     * @note[short] iOS: 0x3ee010
     * @note[short] Android
     */
    cocos2d::CCPoint moveForCommand(EditCommand command);

    /**
     * @note[short] MacOS (ARM): 0x2f18c
     * @note[short] MacOS (Intel): 0x2f800
     * @note[short] Windows: 0xe16b0
     * @note[short] iOS: 0x3dfa64
     * @note[short] Android
     */
    void moveGamelayer(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x399d4
     * @note[short] MacOS (Intel): 0x3ef90
     * @note[short] Windows: 0x11e290
     * @note[short] iOS: 0x3e7270
     * @note[short] Android
     */
    void moveObject(GameObject* p0, cocos2d::CCPoint p1);

    /**
     * @note[short] MacOS (ARM): 0x42a38
     * @note[short] MacOS (Intel): 0x49970
     * @note[short] Windows: 0x11dfd0
     * @note[short] iOS: 0x3ed6f4
     * @note[short] Android
     */
    void moveObjectCall(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x437a8
     * @note[short] MacOS (Intel): 0x4a9d0
     * @note[short] Windows: 0x11e000
     * @note[short] iOS: 0x3ee190
     * @note[short] Android
     */
    void moveObjectCall(EditCommand p0);

    /**
     * @note[short] MacOS (ARM): 0x35208
     * @note[short] MacOS (Intel): 0x35d10
     * @note[short] Windows: 0x124bf0
     * @note[short] iOS: 0x3e3d3c
     * @note[short] Android
     */
    cocos2d::CCPoint offsetForKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn onAssignNewGroupID();

    /**
     * @note[short] MacOS (ARM): 0x31b94
     * @note[short] MacOS (Intel): 0x324d0
     * @note[short] Windows: 0xe5bd0
     * @note[short] Android
     */
    void onColorFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2c538
     * @note[short] MacOS (Intel): 0x2c960
     * @note[short] Windows: 0x112ac0
     * @note[short] iOS: 0x3ddb38
     * @note[short] Android
     */
    void onCopyState(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2dfac
     * @note[short] MacOS (Intel): 0x2e600
     * @note[short] Windows: 0x10dd10
     * @note[short] iOS: 0x3dee84
     * @note[short] Android
     */
    bool onCreate();

    /**
     * @note[short] MacOS (ARM): 0x342c0
     * @note[short] MacOS (Intel): 0x34d30
     * @note[short] Windows: 0x10d880
     * @note[short] iOS: 0x3e32f0
     * @note[short] Android
     */
    void onCreateButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34758
     * @note[short] MacOS (Intel): 0x35170
     * @note[short] Windows: 0x10df10
     * @note[short] iOS: 0x3e35c0
     * @note[short] Android
     */
    void onCreateObject(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2db50
     * @note[short] MacOS (Intel): 0x2e140
     * @note[short] Windows: 0xe4760
     * @note[short] iOS: 0x3deb7c
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31018
     * @note[short] MacOS (Intel): 0x31960
     * @note[short] Windows: 0xe2e80
     * @note[short] iOS: 0x3e0dbc
     * @note[short] Android
     */
    void onDeleteCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3198c
     * @note[short] MacOS (Intel): 0x32320
     * @note[short] Android
     */
    void onDeleteInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xdb78
     * @note[short] MacOS (Intel): 0xc7a0
     * @note[short] Windows: 0xe4d80
     * @note[short] iOS: 0x3bf9c8
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x318b8
     * @note[short] MacOS (Intel): 0x32240
     * @note[short] Windows: 0xe5310
     * @note[short] Android
     */
    void onDeleteSelectedType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31890
     * @note[short] MacOS (Intel): 0x32210
     * @note[short] Windows: 0xe5360
     * @note[short] iOS: 0x3e13f4
     * @note[short] Android
     */
    void onDeleteStartPos(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2c478
     * @note[short] MacOS (Intel): 0x2c890
     * @note[short] Windows: 0x10fd40
     * @note[short] iOS: 0x3dda90
     * @note[short] Android
     */
    void onDeselectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b4dc
     * @note[short] MacOS (Intel): 0x2b2e0
     * @note[short] Windows: 0x1113e0
     * @note[short] iOS: 0x3dcae4
     * @note[short] Android
     */
    void onDuplicate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11d0b0
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFindObject(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x112f40
     * @note[short] iOS: 0x3ddd20
     * @note[short] Android
     */
    void onGoToBaseLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2c624
     * @note[short] MacOS (Intel): 0x2ca60
     * @note[short] Windows: 0x112de0
     * @note[short] Android
     */
    void onGoToLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11da90
     * @note[short] iOS: 0x3ddd04
     * @note[short] Android
     */
    void onGroupDown(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31a68
     * @note[short] MacOS (Intel): 0x323d0
     * @note[short] Windows: 0xe5a80
     * @note[short] Android
     */
    void onGroupIDFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xe2d4
     * @note[short] MacOS (Intel): 0xcf70
     * @note[short] Windows: 0x1110f0
     * @note[short] iOS: 0x3bff98
     * @note[short] Android
     */
    void onGroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11da70
     * @note[short] iOS: 0x3ddcec
     * @note[short] Android
     */
    void onGroupUp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2c7fc
     * @note[short] MacOS (Intel): 0x2cc80
     * @note[short] Windows: 0x11dc00
     * @note[short] iOS: 0x3e16e8
     * @note[short] Android
     */
    void onLockLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x304d0
     * @note[short] MacOS (Intel): 0x30d30
     * @note[short] Windows: 0xe2990
     * @note[short] iOS: 0x3e073c
     * @note[short] Android
     */
    void onNewCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2c5d0
     * @note[short] MacOS (Intel): 0x2ca00
     * @note[short] Windows: 0x112cd0
     * @note[short] iOS: 0x3ddbd0
     * @note[short] Android
     */
    void onPasteColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPasteInPlace(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2c57c
     * @note[short] MacOS (Intel): 0x2c9a0
     * @note[short] Windows: 0x112b40
     * @note[short] iOS: 0x3ddb7c
     * @note[short] Android
     */
    void onPasteState(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2afc0
     * @note[short] MacOS (Intel): 0x2ad50
     * @note[short] Windows: 0xe03d0
     * @note[short] iOS: 0x3dc64c
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xdce0
     * @note[short] MacOS (Intel): 0xc930
     * @note[short] Windows: 0x110390
     * @note[short] iOS: 0x3bfb28
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xdef4
     * @note[short] MacOS (Intel): 0xcb90
     * @note[short] Windows: 0x1109a0
     * @note[short] iOS: 0x3bfd14
     * @note[short] Android
     */
    void onPlaytest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31bec
     * @note[short] MacOS (Intel): 0x32530
     * @note[short] Android
     */
    void onResetSpecialFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x33940
     * @note[short] MacOS (Intel): 0x34310
     * @note[short] Windows: 0x112f60
     * @note[short] iOS: 0x3e298c
     * @note[short] Android
     */
    void onSelectBuildTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b46c
     * @note[short] MacOS (Intel): 0x2b270
     * @note[short] Windows: 0xe0350
     * @note[short] iOS: 0x3dca74
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xe134
     * @note[short] MacOS (Intel): 0xcdd0
     * @note[short] Windows: 0x110d40
     * @note[short] iOS: 0x3bfea8
     * @note[short] Android
     */
    void onStopPlaytest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45f90
     * @note[short] MacOS (Intel): 0x4e330
     * @note[short] Windows: 0x120860
     * @note[short] iOS: 0x3efe54
     * @note[short] Android
     */
    void onTargetIDChange(int p0);

    /**
     * @note[short] Android
     */
    void onToggleGuide(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn onToggleSelectedOrder(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xe318
     * @note[short] MacOS (Intel): 0xcfc0
     * @note[short] Windows: 0x111130
     * @note[short] iOS: 0x3bffdc
     * @note[short] Android
     */
    void onUngroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31900
     * @note[short] MacOS (Intel): 0x32290
     * @note[short] Windows: 0xe5e30
     * @note[short] iOS: 0x3e1464
     * @note[short] Android
     */
    void onUpdateDeleteFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe3050
     * @note[short] Android
     */
    void orderDownCustomItem(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xe2fc0
     * @note[short] Android
     */
    void orderUpCustomItem(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x35f00
     * @note[short] MacOS (Intel): 0x3ac10
     * @note[short] Windows: 0x111d10
     * @note[short] iOS: 0x3e4a98
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* pasteObjects(gd::string p0, bool p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn playCircleAnim(cocos2d::CCPoint p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn playerTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn playerTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x38a54
     * @note[short] MacOS (Intel): 0x3df80
     * @note[short] Windows: 0x110d80
     * @note[short] iOS: 0x3e68c0
     * @note[short] Android
     */
    void playtestStopped();

    /**
     * @note[short] Android
     */
    TodoReturn positionIsInSnapped(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn positionWithoutOffset(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x38398
     * @note[short] MacOS (Intel): 0x3d880
     * @note[short] Windows: 0x110060
     * @note[short] Android
     */
    void processSelectObjects(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x116b80
     * @note[short] Android
     */
    void processSmartObjectsFromType(int p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2, cocos2d::CCArray* p3, cocos2d::CCArray* p4);

    /**
     * @note[short] Android
     */
    void recreateButtonTabs();

    /**
     * @note[short] MacOS (ARM): 0xdb14
     * @note[short] MacOS (Intel): 0xc740
     * @note[short] Windows: 0x110190
     * @note[short] iOS: 0x3bf964
     * @note[short] Android
     */
    void redoLastAction(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x30fac
     * @note[short] MacOS (Intel): 0x318f0
     * @note[short] Windows: 0xe35f0
     * @note[short] iOS: 0x3e0d50
     * @note[short] Android
     */
    void reloadCustomItems();

    /**
     * @note[short] Windows: 0x120cb0
     * @note[short] iOS: 0x3e4998
     * @note[short] Android
     */
    void removeOffset(GameObject* p0);

    /**
     * @note[short] Windows: 0x117680
     * @note[short] Android
     */
    void replaceGroupID(GameObject* p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x112a20
     * @note[short] iOS: 0x3e30e4
     * @note[short] Android
     */
    void repositionObjectsToCenter(cocos2d::CCArray* p0, cocos2d::CCPoint p1, bool p2);

    /**
     * @note[short] Android
     */
    void resetObjectEditorValues(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x43568
     * @note[short] MacOS (Intel): 0x4a720
     * @note[short] Windows: 0x11dd50
     * @note[short] iOS: 0x3edf7c
     * @note[short] Android
     */
    void resetSelectedObjectsColor();

    /**
     * @note[short] MacOS (ARM): 0x2aeac
     * @note[short] MacOS (Intel): 0x2ac40
     * @note[short] Windows: 0xe36d0
     * @note[short] iOS: 0x3dc538
     * @note[short] Android
     */
    void resetUI();

    /**
     * @note[short] MacOS (ARM): 0x37044
     * @note[short] MacOS (Intel): 0x3c3d0
     * @note[short] Windows: 0x11f4b0
     * @note[short] iOS: 0x3e5484
     * @note[short] Android
     */
    void rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);

    /**
     * @note[short] MacOS (ARM): 0x43788
     * @note[short] MacOS (Intel): 0x4a9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float rotationforCommand(EditCommand p0);

    /**
     * @note[short] MacOS (ARM): 0x3a654
     * @note[short] MacOS (Intel): 0x3fd70
     * @note[short] Windows: 0x11f8d0
     * @note[short] iOS: 0x3e7b70
     * @note[short] Android
     */
    void scaleObjects(cocos2d::CCArray* p0, float p1, float p2, cocos2d::CCPoint p3, ObjectScaleType p4, bool p5);

    /**
     * @note[short] iOS: 0x3e6388
     * @note[short] Android
     */
    void selectAll();

    /**
     * @note[short] MacOS (ARM): 0x38480
     * @note[short] MacOS (Intel): 0x3d960
     * @note[short] iOS: 0x3e651c
     * @note[short] Android
     */
    void selectAllWithDirection(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x33974
     * @note[short] MacOS (Intel): 0x34340
     * @note[short] Windows: 0x112f90
     * @note[short] iOS: 0x3e29c0
     * @note[short] Android
     */
    void selectBuildTab(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2e5c8
     * @note[short] MacOS (Intel): 0x2ec30
     * @note[short] Windows: 0x10ee50
     * @note[short] iOS: 0x3df140
     * @note[short] Android
     */
    void selectObject(GameObject* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3749c
     * @note[short] MacOS (Intel): 0x3c830
     * @note[short] Windows: 0x10f140
     * @note[short] iOS: 0x3e58c4
     * @note[short] Android
     */
    void selectObjects(cocos2d::CCArray* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x37db0
     * @note[short] MacOS (Intel): 0x3d230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e612c
     * @note[short] Android
     */
    void selectObjectsInRect(cocos2d::CCRect p0);

    /**
     * @note[short] MacOS (ARM): 0xf170
     * @note[short] MacOS (Intel): 0xdf10
     * @note[short] Windows: 0xe6910
     * @note[short] iOS: 0x3c09dc
     * @note[short] Android
     */
    void setupCreateMenu();

    /**
     * @note[short] MacOS (ARM): 0xe35c
     * @note[short] MacOS (Intel): 0xd010
     * @note[short] Windows: 0xe38d0
     * @note[short] iOS: 0x3c0020
     * @note[short] Android
     */
    void setupDeleteMenu();

    /**
     * @note[short] MacOS (ARM): 0x2ae74
     * @note[short] MacOS (Intel): 0x2ac00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupEditMenu();

    /**
     * @note[short] Android
     */
    TodoReturn setupTransformControl();

    /**
     * @note[short] MacOS (ARM): 0x323a8
     * @note[short] MacOS (Intel): 0x32d40
     * @note[short] Windows: 0xe4c50
     * @note[short] Android
     */
    bool shouldDeleteObject(GameObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn shouldSnap(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x32b90
     * @note[short] MacOS (Intel): 0x33560
     * @note[short] Android
     */
    void showDeleteConfirmation();

    /**
     * @note[short] Android
     */
    void showLiveColorSelectForMode(int p0);

    /**
     * @note[short] Android
     */
    void showLiveColorSelectForModeSpecial(int p0);

    /**
     * @note[short] MacOS (ARM): 0x34474
     * @note[short] MacOS (Intel): 0x34ec0
     * @note[short] Android
     */
    void showMaxBasicError();

    /**
     * @note[short] MacOS (ARM): 0x345f0
     * @note[short] MacOS (Intel): 0x35020
     * @note[short] Android
     */
    void showMaxCoinError();

    /**
     * @note[short] MacOS (ARM): 0x342fc
     * @note[short] MacOS (Intel): 0x34d70
     * @note[short] Windows: 0x111170
     * @note[short] Android
     */
    void showMaxError();

    /**
     * @note[short] MacOS (ARM): 0x388f4
     * @note[short] MacOS (Intel): 0x3de00
     * @note[short] Windows: 0x110200
     * @note[short] iOS: 0x3e6770
     * @note[short] Android
     */
    void showUI(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xd16c
     * @note[short] MacOS (Intel): 0xbd50
     * @note[short] Windows: 0xe13a0
     * @note[short] iOS: 0x3bf328
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x12b890
     * @note[short] Android
     */
    static int smartTypeForKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x33ab0
     * @note[short] MacOS (Intel): 0x344a0
     * @note[short] Windows: 0x10c790
     * @note[short] iOS: 0x3e2af4
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* spriteFromObjectString(gd::string str, bool p1, bool p2, int objLimit, cocos2d::CCArray* p4, cocos2d::CCArray* p5, GameObject* p6);

    /**
     * @note[short] Android
     */
    TodoReturn toggleDuplicateButton();

    /**
     * @note[short] Windows: 0x118f10
     * @note[short] Android
     */
    void toggleEditObjectButton();

    /**
     * @note[short] MacOS (ARM): 0xd994
     * @note[short] MacOS (Intel): 0xc5b0
     * @note[short] Windows: 0x10eb00
     * @note[short] iOS: 0x3bf870
     * @note[short] Android
     */
    void toggleEnableRotate(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xd8b4
     * @note[short] MacOS (Intel): 0xc4c0
     * @note[short] Windows: 0x10e980
     * @note[short] iOS: 0x3bf790
     * @note[short] Android
     */
    void toggleFreeMove(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleLockUI(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x2b140
     * @note[short] MacOS (Intel): 0x2af00
     * @note[short] Windows: 0xe37f0
     * @note[short] iOS: 0x3dc7b8
     * @note[short] Android
     */
    void toggleMode(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xe1730
     * @note[short] Android
     */
    TodoReturn toggleObjectInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0xd91c
     * @note[short] MacOS (Intel): 0xc530
     * @note[short] Windows: 0x10ea20
     * @note[short] iOS: 0x3bf7f8
     * @note[short] Android
     */
    void toggleSnap(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleSpecialEditButtons();

    /**
     * @note[short] MacOS (ARM): 0x2d020
     * @note[short] MacOS (Intel): 0x2d590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3de424
     * @note[short] Android
     */
    void toggleStickyControls(bool enable);

    /**
     * @note[short] MacOS (ARM): 0xd7b4
     * @note[short] MacOS (Intel): 0xc3d0
     * @note[short] Windows: 0x10e8e0
     * @note[short] iOS: 0x3bf690
     * @note[short] Android
     */
    void toggleSwipe(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x44924
     * @note[short] MacOS (Intel): 0x4be30
     * @note[short] Windows: 0x11ed00
     * @note[short] iOS: 0x3ef1e0
     * @note[short] Android
     */
    void transformObject(GameObject* p0, EditCommand p1, bool p2);

    /**
     * @note[short] Windows: 0x11e780
     * @note[short] Android
     */
    void transformObjectCall(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x43bc8
     * @note[short] MacOS (Intel): 0x4ae10
     * @note[short] Windows: 0x11e7b0
     * @note[short] iOS: 0x3ee598
     * @note[short] Android
     */
    void transformObjectCall(EditCommand p0);

    /**
     * @note[short] MacOS (ARM): 0x3b5d4
     * @note[short] MacOS (Intel): 0x40ec0
     * @note[short] Windows: 0x11fec0
     * @note[short] iOS: 0x3e8474
     * @note[short] Android
     */
    void transformObjects(cocos2d::CCArray* objs, cocos2d::CCPoint anchor, float scaleX, float scaleY, float rotateX, float rotateY, float warpX, float warpY);

    /**
     * @note[short] MacOS (ARM): 0x44f58
     * @note[short] MacOS (Intel): 0x4d0b0
     * @note[short] Windows: 0x11fe00
     * @note[short] iOS: 0x3ef7d0
     * @note[short] Android
     */
    void transformObjectsActive();

    /**
     * @note[short] MacOS (ARM): 0x45a68
     * @note[short] MacOS (Intel): 0x4ddb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ef998
     * @note[short] Android
     */
    void transformObjectsReset();

    /**
     * @note[short] MacOS (ARM): 0x46b70
     * @note[short] MacOS (Intel): 0x4f010
     * @note[short] Windows: 0x121b80
     * @note[short] iOS: 0x3f0680
     * @note[short] Android
     */
    void triggerSwipeMode();

    /**
     * @note[short] Android
     */
    TodoReturn tryUpdateTimeMarkers();

    /**
     * @note[short] MacOS (ARM): 0xdab0
     * @note[short] MacOS (Intel): 0xc6e0
     * @note[short] Windows: 0x110120
     * @note[short] iOS: 0x3bf900
     * @note[short] Android
     */
    void undoLastAction(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x2c954
     * @note[short] MacOS (Intel): 0x2cdd0
     * @note[short] Windows: 0xe07e0
     * @note[short] iOS: 0x3dde88
     * @note[short] Android
     */
    void updateButtons();

    /**
     * @note[short] MacOS (ARM): 0x2e0e4
     * @note[short] MacOS (Intel): 0x2e710
     * @note[short] Windows: 0x10d8c0
     * @note[short] iOS: 0x3def70
     * @note[short] Android
     */
    void updateCreateMenu(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x31c94
     * @note[short] MacOS (Intel): 0x325d0
     * @note[short] Windows: 0xe5fb0
     * @note[short] iOS: 0x3e1790
     * @note[short] Android
     */
    void updateDeleteButtons();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateDeleteMenu();

    /**
     * @note[short] MacOS (ARM): 0x39b54
     * @note[short] MacOS (Intel): 0x3f120
     * @note[short] Android
     */
    void updateEditButtonColor(int p0, cocos2d::ccColor3B p1);

    /**
     * @note[short] MacOS (ARM): 0x42894
     * @note[short] MacOS (Intel): 0x497f0
     * @note[short] Android
     */
    void updateEditColorButton();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateEditMenu();

    /**
     * @note[short] MacOS (ARM): 0x2f000
     * @note[short] MacOS (Intel): 0x2f620
     * @note[short] Windows: 0xe1560
     * @note[short] iOS: 0x3df914
     * @note[short] Android
     */
    void updateGridNodeSize();

    /**
     * @note[short] Android
     */
    TodoReturn updateGridNodeSize(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateGroupIDBtn2();

    /**
     * @note[short] MacOS (ARM): 0x2c844
     * @note[short] MacOS (Intel): 0x2ccd0
     * @note[short] Windows: 0x11dac0
     * @note[short] iOS: 0x3ddd7c
     * @note[short] Android
     */
    void updateGroupIDLabel();

    /**
     * @note[short] MacOS (ARM): 0x2f208
     * @note[short] MacOS (Intel): 0x2f870
     * @note[short] Windows: 0xe17c0
     * @note[short] iOS: 0x3dfae0
     * @note[short] Android
     */
    void updateObjectInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0x2d08c
     * @note[short] MacOS (Intel): 0x2d5f0
     * @note[short] Windows: 0x110850
     * @note[short] iOS: 0x3de490
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] MacOS (ARM): 0x2b3c0
     * @note[short] MacOS (Intel): 0x2b1b0
     * @note[short] Windows: 0xe14a0
     * @note[short] iOS: 0x3dca34
     * @note[short] Android
     */
    void updateSlider();

    /**
     * @note[short] MacOS (ARM): 0x2e6c0
     * @note[short] MacOS (Intel): 0x2ed30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSpecialUIElements();

    /**
     * @note[short] MacOS (ARM): 0x38b14
     * @note[short] MacOS (Intel): 0x3e050
     * @note[short] Windows: 0x110ef0
     * @note[short] iOS: 0x3e6980
     * @note[short] Android
     */
    void updateZoom(float p0);

    /**
     * @note[short] Android
     */
    float valueFromXPos(float p0);

    /**
     * @note[short] Windows: 0x121010
     * @note[short] Android
     */
    float xPosFromValue(float p0);

    /**
     * @note[short] MacOS (ARM): 0x38d98
     * @note[short] MacOS (Intel): 0x3e320
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void zoomGameLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xe218
     * @note[short] MacOS (Intel): 0xced0
     * @note[short] Windows: 0x110e50
     * @note[short] iOS: 0x3bfee8
     * @note[short] Android
     */
    void zoomIn(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xe270
     * @note[short] MacOS (Intel): 0xcf20
     * @note[short] Windows: 0x110ea0
     * @note[short] iOS: 0x3bff3c
     * @note[short] Android
     */
    void zoomOut(cocos2d::CCObject* p0);
    gd::unordered_map<int, GameObjectEditorState> m_objectEditorStates;
    GJTransformState m_transformState;
    bool m_isPlayingMusic;
    EditButtonBar* m_customTabBar;
    bool m_alertShown;
    cocos2d::CCArray* m_uiItems;
    float m_gridSize;
    int m_playerTouchID1;
    int m_playerTouchID2;
    bool m_playbackActive;
    float m_playbackStartWarp;
    float m_playbackStartTime;
    UndoObject* m_undoObject;
    bool m_spaceSwiping;
    bool m_noSnapUndo;
    bool m_editingObject;
    bool m_increaseScale;
    bool m_refreshPosition;
    int m_rotationTouchID;
    int m_scaleTouchID;
    int m_touchID;
    int m_transformTouchID;
    cocos2d::CCLabelBMFont* m_objectInfoLabel;
    GJRotationControl* m_rotationControl;
    cocos2d::CCPoint m_pivotPoint;
    bool m_canActivateControls;
    GJScaleControl* m_scaleControl;
    GJTransformControl* m_transformControl;
    cocos2d::CCNode* m_transformNode;
    cocos2d::CCNode* m_transformChild;
    cocos2d::CCDictionary* m_editButtonDict;
    EditButtonBar* m_createButtonBar;
    EditButtonBar* m_editButtonBar;
    Slider* m_positionSlider;
    float m_unk308;
    float m_constrainedHeight;
    float m_toolbarHeight;
    bool m_swipeEnabled;
    bool m_swipeActive;
    bool m_swipeSelected;
    bool m_continuousSnap;
    bool m_freeMoveEnabled;
    bool m_snapObjectExists;
    bool m_snapSelected;
    bool m_stickyControlsEnabled;
    bool m_speedObjectsUpdated;
    cocos2d::CCPoint m_createPosition;
    cocos2d::CCArray* m_snapPositions;
    cocos2d::CCPoint m_snapPosition;
    cocos2d::CCArray* m_selectedObjects;
    cocos2d::CCMenu* m_deleteMenu;
    cocos2d::CCArray* m_customTabControls;
    CCMenuItemSpriteExtra* m_deleteModeBtn;
    CCMenuItemSpriteExtra* m_buildModeBtn;
    CCMenuItemSpriteExtra* m_editModeBtn;
    CCMenuItemSpriteExtra* m_swipeBtn;
    CCMenuItemSpriteExtra* m_freeMoveBtn;
    CCMenuItemSpriteExtra* m_deselectBtn;
    CCMenuItemSpriteExtra* m_snapBtn;
    CCMenuItemSpriteExtra* m_rotateBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_playtestBtn;
    CCMenuItemSpriteExtra* m_playtestStopBtn;
    CCMenuItemSpriteExtra* m_trashBtn;
    CCMenuItemSpriteExtra* m_linkBtn;
    CCMenuItemSpriteExtra* m_unlinkBtn;
    CCMenuItemSpriteExtra* m_undoBtn;
    CCMenuItemSpriteExtra* m_redoBtn;
    CCMenuItemSpriteExtra* m_editObjectBtn;
    CCMenuItemSpriteExtra* m_editGroupBtn;
    CCMenuItemSpriteExtra* m_editHSVBtn;
    CCMenuItemSpriteExtra* m_editSpecialBtn;
    cocos2d::CCObject* m_unk3F0;
    CCMenuItemSpriteExtra* m_copyPasteBtn;
    CCMenuItemSpriteExtra* m_copyBtn;
    CCMenuItemSpriteExtra* m_pasteBtn;
    CCMenuItemSpriteExtra* m_copyValuesBtn;
    CCMenuItemSpriteExtra* m_pasteStateBtn;
    CCMenuItemSpriteExtra* m_pasteColorBtn;
    CCMenuItemSpriteExtra* m_goToLayerBtn;
    cocos2d::CCArray* m_createButtonBars;
    cocos2d::CCMenu* m_tabsMenu;
    cocos2d::CCArray* m_tabsArray;
    cocos2d::CCSprite* m_deleteAllSprite;
    cocos2d::CCSprite* m_customDeleteSprite;
    CCMenuItemSpriteExtra* m_deleteButton;
    CCMenuItemSpriteExtra* m_deleteAllButton;
    CCMenuItemSpriteExtra* m_deleteFilterNone;
    CCMenuItemSpriteExtra* m_deleteFilterStatic;
    CCMenuItemSpriteExtra* m_deleteFilterDetails;
    CCMenuItemSpriteExtra* m_deleteFilterCustom;
    cocos2d::CCLabelBMFont* m_currentLayerLabel;
    CCMenuItemSpriteExtra* m_layerNextBtn;
    CCMenuItemSpriteExtra* m_layerPrevBtn;
    CCMenuItemSpriteExtra* m_goToBaseBtn;
    ButtonSprite* m_deleteGroupSprite;
    ButtonSprite* m_deleteColorSprite;
    void* m_unk4b8;
    void* m_unk4c0;
    int m_selectedObjectIndex;
    cocos2d::CCArray* m_createButtonArray;
    cocos2d::CCArray* m_customObjectButtonArray;
    cocos2d::CCArray* m_deleteObjects;
    int m_selectedMode;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCPoint m_swipeStart;
    cocos2d::CCPoint m_swipeEnd;
    cocos2d::CCPoint m_swipePosition;
    cocos2d::CCPoint m_lastTouchPoint;
    cocos2d::CCPoint m_cameraTest;
    cocos2d::CCPoint m_clickAtPosition;
    GameObject* m_selectedObject;
    GameObject* m_snapObject;
    bool m_isDraggingCamera;
    bool m_continueSwipe;
    bool m_findSnap;
    void* m_unk540;
    int m_selectedTab;
    int m_cycledObjectIndex;
    ColorSelectLiveOverlay* m_colorOverlay;
    HSVLiveOverlay* m_hsvOverlay;
    double m_keyTime;
    double m_keyTime2;
    bool m_swipeModeTriggered;
    cocos2d::CCSprite* m_layerLockSprite;
    void* m_unk580;
    bool m_pressedSpace;
    float m_editorZoom;
    bool m_isPaused;
    bool m_reloadItems;
};
