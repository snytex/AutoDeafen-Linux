#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class EditorPauseLayer : public CCBlockLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "EditorPauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorPauseLayer, CCBlockLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditorPauseLayer();

    /**
     * @note[short] MacOS (ARM): 0x228ae4
     * @note[short] MacOS (Intel): 0x27f120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x394884
     * @note[short] Android
     */
    static EditorPauseLayer* create(LevelEditorLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x22c910
     * @note[short] MacOS (Intel): 0x283060
     * @note[short] Windows: 0xdd0c0
     * @note[short] iOS: 0x3976d4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x22c9f0
     * @note[short] MacOS (Intel): 0x283150
     * @note[short] Windows: 0xdd0d0
     * @note[short] iOS: 0x3976e0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x2296c0
     * @note[short] MacOS (Intel): 0x27fa70
     * @note[short] Windows: 0xd9020
     * @note[short] iOS: 0x394ef0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x22c834
     * @note[short] MacOS (Intel): 0x282f80
     * @note[short] Windows: 0xdcfa0
     * @note[short] iOS: 0x397610
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    void doResetUnused();

    /**
     * @note[short] MacOS (ARM): 0x228bbc
     * @note[short] MacOS (Intel): 0x27f220
     * @note[short] Windows: 0xd8990
     * @note[short] iOS: 0x394950
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x22b9d4
     * @note[short] MacOS (Intel): 0x282020
     * @note[short] Windows: 0xdb9e0
     * @note[short] iOS: 0x396e30
     * @note[short] Android
     */
    void onAlignX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22ba08
     * @note[short] MacOS (Intel): 0x282050
     * @note[short] Windows: 0xdba10
     * @note[short] iOS: 0x396e64
     * @note[short] Android
     */
    void onAlignY(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22b9a8
     * @note[short] MacOS (Intel): 0x281fc0
     * @note[short] Windows: 0xdb7b0
     * @note[short] Android
     */
    void onBuildHelper(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdb7f0
     * @note[short] Android
     */
    void onCopyWColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdb760
     * @note[short] Android
     */
    void onCreateExtras(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22b9b8
     * @note[short] MacOS (Intel): 0x281fe0
     * @note[short] Windows: 0xdb7d0
     * @note[short] iOS: 0x396e14
     * @note[short] Android
     */
    void onCreateLoop(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCreateTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22c7fc
     * @note[short] MacOS (Intel): 0x282f40
     * @note[short] Windows: 0xdcd60
     * @note[short] iOS: 0x3975d8
     * @note[short] Android
     */
    void onExitEditor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22b51c
     * @note[short] MacOS (Intel): 0x281ad0
     * @note[short] Windows: 0xdce30
     * @note[short] iOS: 0x396a80
     * @note[short] Android
     */
    void onExitNoSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdd050
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22bc3c
     * @note[short] MacOS (Intel): 0x282310
     * @note[short] Windows: 0xdba40
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22ba68
     * @note[short] MacOS (Intel): 0x2820f0
     * @note[short] Windows: 0xdb830
     * @note[short] iOS: 0x396ec4
     * @note[short] Android
     */
    void onNewGroupX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22ba78
     * @note[short] MacOS (Intel): 0x282110
     * @note[short] Windows: 0xdb850
     * @note[short] iOS: 0x396ed4
     * @note[short] Android
     */
    void onNewGroupY(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdb390
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdb810
     * @note[short] Android
     */
    void onPasteWColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdb790
     * @note[short] Android
     */
    void onReGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22b850
     * @note[short] MacOS (Intel): 0x281e30
     * @note[short] Windows: 0xdb5c0
     * @note[short] Android
     */
    void onResetUnusedColors(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22b2c4
     * @note[short] MacOS (Intel): 0x2818a0
     * @note[short] Windows: 0xdc140
     * @note[short] iOS: 0x396874
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22b42c
     * @note[short] MacOS (Intel): 0x2819f0
     * @note[short] Windows: 0xdcbf0
     * @note[short] iOS: 0x3969c4
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22b3c0
     * @note[short] MacOS (Intel): 0x281980
     * @note[short] Windows: 0xdcd20
     * @note[short] iOS: 0x396970
     * @note[short] Android
     */
    void onSaveAndExit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22b330
     * @note[short] MacOS (Intel): 0x281910
     * @note[short] Windows: 0xdc9a0
     * @note[short] iOS: 0x3968e0
     * @note[short] Android
     */
    void onSaveAndPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22ba3c
     * @note[short] MacOS (Intel): 0x282090
     * @note[short] Windows: 0xdb870
     * @note[short] iOS: 0x396e98
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22ba48
     * @note[short] MacOS (Intel): 0x2820b0
     * @note[short] Windows: 0xdb9a0
     * @note[short] iOS: 0x396ea4
     * @note[short] Android
     */
    void onSelectAllLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22ba58
     * @note[short] MacOS (Intel): 0x2820d0
     * @note[short] Windows: 0xdb9c0
     * @note[short] iOS: 0x396eb4
     * @note[short] Android
     */
    void onSelectAllRight(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSong(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdb720
     * @note[short] Android
     */
    void onUnlockAllLayers(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22c6d0
     * @note[short] MacOS (Intel): 0x282e10
     * @note[short] Windows: 0xdca20
     * @note[short] iOS: 0x3974d0
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x22c7a0
     * @note[short] MacOS (Intel): 0x282ee0
     * @note[short] Windows: 0xdcb50
     * @note[short] iOS: 0x3975a0
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x22c274
     * @note[short] MacOS (Intel): 0x282980
     * @note[short] Windows: 0xdc310
     * @note[short] iOS: 0x3970b4
     * @note[short] Android
     */
    void saveLevel();

    /**
     * @note[short] Windows: 0xdbdd0
     * @note[short] Android
     */
    void toggleDebugDraw(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void toggleEditorBackground(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorColorMode(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xdbee0
     * @note[short] Android
     */
    void toggleEditorGrid(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdbe20
     * @note[short] Android
     */
    void toggleEditorGround(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn toggleEffectDuration(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleEffectLines(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleFollowPlayer(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleGridOnTop(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xdbb10
     * @note[short] Android
     */
    void toggleHideInvisible(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdba60
     * @note[short] Android
     */
    void toggleIgnoreDamage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void togglePlaytestMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22bba4
     * @note[short] MacOS (Intel): 0x282270
     * @note[short] Windows: 0xdbc10
     * @note[short] iOS: 0x397000
     * @note[short] Android
     */
    void togglePreviewAnim(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdbb60
     * @note[short] Android
     */
    void togglePreviewParticles(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdbbc0
     * @note[short] Android
     */
    void togglePreviewShaders(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn toggleRecordOrder(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xdbf90
     * @note[short] Android
     */
    void toggleSelectFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdbf30
     * @note[short] Android
     */
    void toggleShowObjectInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22b784
     * @note[short] MacOS (Intel): 0x281d60
     * @note[short] Windows: 0xdb4e0
     * @note[short] Android
     */
    void uncheckAllPortals(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateSongButton();
    bool m_saved;
    CCMenuItemSpriteExtra* m_guidelinesOffButton;
    CCMenuItemSpriteExtra* m_guidelinesOnButton;
    LevelEditorLayer* m_editorLayer;
    GEODE_PAD(32);
};
