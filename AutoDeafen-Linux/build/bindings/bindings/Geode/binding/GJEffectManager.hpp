#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DynamicMoveCalculation.hpp"
#include "PulseEffectAction.hpp"
#include "TouchToggleAction.hpp"
#include "CollisionTriggerAction.hpp"
#include "ToggleTriggerAction.hpp"
#include "SpawnTriggerAction.hpp"
#include "GroupCommandObject2.hpp"
#include "OpacityEffectAction.hpp"
#include "CountTriggerAction.hpp"
#include "TimerItem.hpp"
#include "TimerTriggerAction.hpp"

class GJEffectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJEffectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJEffectManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x2538f0
     * @note[short] Android
     */
    static GJEffectManager* create();

    /**
     * @note[short] MacOS (ARM): 0x26c924
     * @note[short] MacOS (Intel): 0x2c8f30
     * @note[short] Windows: 0x253950
     * @note[short] iOS: 0x125e8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x26d510
     * @note[short] MacOS (Intel): 0x2ca350
     * @note[short] Android
     */
    cocos2d::ccColor3B activeColorForIndex(int p0);

    /**
     * @note[short] MacOS (ARM): 0x26d668
     * @note[short] MacOS (Intel): 0x2ca4b0
     * @note[short] Android
     */
    float activeOpacityForIndex(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn addAllInheritedColorActions(cocos2d::CCArray* p0);

    /**
     * @note[short] iOS: 0x196d4
     * @note[short] Android
     */
    void addCountToItem(int itemId, int value);

    /**
     * @note[short] Android
     */
    TodoReturn addMoveCalculation(CCMoveCNode* p0, cocos2d::CCPoint p1, GameObject* p2);

    /**
     * @note[short] Android
     */
    TodoReturn calculateBaseActiveColors();

    /**
     * @note[short] Android
     */
    TodoReturn calculateInheritedColor(int p0, ColorAction* p1);

    /**
     * @note[short] Android
     */
    TodoReturn calculateLightBGColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkCollision(int const& p0, int const& p1);

    /**
     * @note[short] MacOS (ARM): 0x26e59c
     * @note[short] MacOS (Intel): 0x2cb670
     * @note[short] Android
     */
    void colorActionChanged(ColorAction* p0);

    /**
     * @note[short] MacOS (ARM): 0x26e578
     * @note[short] MacOS (Intel): 0x2cb640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13770
     * @note[short] Android
     */
    bool colorExists(int col);

    /**
     * @note[short] Android
     */
    TodoReturn colorForEffect(cocos2d::ccColor3B p0, cocos2d::ccHSVValue p1);

    /**
     * @note[short] MacOS (ARM): 0x2767c0
     * @note[short] MacOS (Intel): 0x2d5730
     * @note[short] Windows: 0x25a780
     * @note[short] iOS: 0x18ca8
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForGroupID(int p0, cocos2d::ccColor3B const& p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn colorForIndex(int p0);

    /**
     * @note[short] MacOS (ARM): 0x26e320
     * @note[short] MacOS (Intel): 0x2cb400
     * @note[short] Windows: 0x25a3d0
     * @note[short] iOS: 0x13580
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPulseEffect(cocos2d::ccColor3B const& p0, PulseEffectAction* p1);

    /**
     * @note[short] Android
     */
    TodoReturn controlActionsForControlID(int p0, GJActionCommand p1);

    /**
     * @note[short] Android
     */
    TodoReturn controlActionsForTrigger(EffectGameObject* p0, GJActionCommand p1);

    /**
     * @note[short] MacOS (ARM): 0x2777b8
     * @note[short] MacOS (Intel): 0x2d6930
     * @note[short] Windows: 0x25b060
     * @note[short] iOS: 0x19694
     * @note[short] Android
     */
    int countForItem(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn createFollowCommand(float p0, float p1, float p2, int p3, int p4, int p5, int p6);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn createKeyframeCommand(int p0, cocos2d::CCArray* p1, GameObject* p2, int p3, int p4, bool p5, float p6, float p7, float p8, float p9, float p10, float p11, gd::vector<int> const& p12);

    /**
     * @note[short] Windows: 0x255370
     * @note[short] Android
     */
    void createMoveCommand(cocos2d::CCPoint pt, int groupID, float duration, int easingType, float easingRate, bool lockPlayerX, bool lockPlayerY, bool lockCameraX, bool lockCameraY, float moveModX, float moveModY, int uniqueID, int controlID);

    /**
     * @note[short] Android
     */
    TodoReturn createPlayerFollowCommand(float p0, float p1, int p2, float p3, float p4, int p5, int p6, int p7);

    /**
     * @note[short] Android
     */
    TodoReturn createRotateCommand(float p0, float p1, int p2, int p3, int p4, float p5, bool p6, bool p7, bool p8, int p9, int p10);

    /**
     * @note[short] Android
     */
    TodoReturn createTransformCommand(double p0, double p1, double p2, double p3, bool p4, float p5, int p6, int p7, int p8, float p9, bool p10, bool p11, int p12, int p13);

    /**
     * @note[short] Android
     */
    TodoReturn getAllColorActions();

    /**
     * @note[short] Android
     */
    TodoReturn getAllColorSprites();

    /**
     * @note[short] MacOS (ARM): 0x26d3c4
     * @note[short] MacOS (Intel): 0x2ca1e0
     * @note[short] Windows: 0x254870
     * @note[short] iOS: 0x12b80
     * @note[short] Android
     */
    ColorAction* getColorAction(int p0);

    /**
     * @note[short] MacOS (ARM): 0x26d56c
     * @note[short] MacOS (Intel): 0x2ca3a0
     * @note[short] Windows: 0x254930
     * @note[short] Android
     */
    ColorActionSprite* getColorSprite(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getLoadedMoveOffset(gd::unordered_map<int, std::pair<double, double>>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn getMixedColor(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn getMoveCommandNode(GroupCommandObject2* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getMoveCommandObject();

    /**
     * @note[short] Android
     */
    TodoReturn getOpacityActionForGroup(int p0);

    /**
     * @note[short] MacOS (ARM): 0x279654
     * @note[short] MacOS (Intel): 0x2d9360
     * @note[short] Android
     */
    gd::string getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getTempGroupCommand();

    /**
     * @note[short] Android
     */
    TodoReturn handleObjectCollision(bool p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn hasActiveDualTouch();

    /**
     * @note[short] MacOS (ARM): 0x276f60
     * @note[short] MacOS (Intel): 0x2d5fd0
     * @note[short] Android
     */
    bool hasBeenTriggered(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn hasPulseEffectForGroupID(int p0);

    /**
     * @note[short] Android
     */
    bool isGroupEnabled(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn keyForGroupIDColor(int p0, cocos2d::ccColor3B const& p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x27a3c0
     * @note[short] MacOS (Intel): 0x2da290
     * @note[short] Windows: 0x25cb40
     * @note[short] Android
     */
    void loadFromState(EffectManagerState& p0);

    /**
     * @note[short] MacOS (ARM): 0x26f310
     * @note[short] MacOS (Intel): 0x2cc680
     * @note[short] Android
     */
    void objectsCollided(int p0, int p1);

    /**
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn opacityForIndex(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn opacityModForGroup(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn pauseTimer(int p0);

    /**
     * @note[short] MacOS (ARM): 0x277110
     * @note[short] MacOS (Intel): 0x2d61b0
     * @note[short] Windows: 0x25ae00
     * @note[short] iOS: 0x1921c
     * @note[short] Android
     */
    void playerButton(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    void playerDied();

    /**
     * @note[short] MacOS (ARM): 0x26f040
     * @note[short] MacOS (Intel): 0x2cc390
     * @note[short] Windows: 0x254f50
     * @note[short] iOS: 0x13cbc
     * @note[short] Android
     */
    void postCollisionCheck();

    /**
     * @note[short] MacOS (ARM): 0x275628
     * @note[short] MacOS (Intel): 0x2d4110
     * @note[short] Windows: 0x259470
     * @note[short] iOS: 0x180fc
     * @note[short] Android
     */
    void postMoveActions();

    /**
     * @note[short] MacOS (ARM): 0x26f028
     * @note[short] MacOS (Intel): 0x2cc370
     * @note[short] iOS: 0x13ca4
     * @note[short] Android
     */
    void preCollisionCheck();

    /**
     * @note[short] MacOS (ARM): 0x27353c
     * @note[short] MacOS (Intel): 0x2d16c0
     * @note[short] Windows: 0x258060
     * @note[short] iOS: 0x16a74
     * @note[short] Android
     */
    void prepareMoveActions(float p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x26d6d0
     * @note[short] MacOS (Intel): 0x2ca520
     * @note[short] Windows: 0x253fb0
     * @note[short] iOS: 0x12d30
     * @note[short] Android
     */
    void processColors();

    /**
     * @note[short] MacOS (ARM): 0x26dc58
     * @note[short] MacOS (Intel): 0x2cabf0
     * @note[short] Android
     */
    void processCopyColorPulseActions();

    /**
     * @note[short] MacOS (ARM): 0x26d980
     * @note[short] MacOS (Intel): 0x2ca840
     * @note[short] Windows: 0x254190
     * @note[short] Android
     */
    void processInheritedColors();

    /**
     * @note[short] Android
     */
    TodoReturn processMoveCalculations();

    /**
     * @note[short] Android
     */
    TodoReturn processPulseActions();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn registerCollisionTrigger(int p0, int p1, int p2, bool p3, bool p4, gd::vector<int> const& p5, int p6, int p7);

    /**
     * @note[short] Android
     */
    TodoReturn registerRotationCommand(GroupCommandObject2* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn removeAllPulseActions();

    /**
     * @note[short] Android
     */
    TodoReturn removeColorAction(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2780a0
     * @note[short] MacOS (Intel): 0x2d7520
     * @note[short] iOS: 0x19ab4
     * @note[short] Android
     */
    void removePersistentFromAllItems();

    /**
     * @note[short] Android
     */
    TodoReturn removePersistentFromAllTimers();

    /**
     * @note[short] Android
     */
    TodoReturn removeTriggeredID(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x26cb18
     * @note[short] MacOS (Intel): 0x2c9190
     * @note[short] Windows: 0x253d10
     * @note[short] iOS: 0x128dc
     * @note[short] Android
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): 0x26cc10
     * @note[short] MacOS (Intel): 0x2c93a0
     * @note[short] Windows: 0x254c90
     * @note[short] iOS: 0x12994
     * @note[short] Android
     */
    void resetEffects();

    /**
     * @note[short] Android
     */
    TodoReturn resetMoveActions();

    /**
     * @note[short] Android
     */
    TodoReturn resetTempGroupCommands(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn resetToggledGroups();

    /**
     * @note[short] Android
     */
    TodoReturn resetTriggeredIDs();

    /**
     * @note[short] Android
     */
    TodoReturn resumeTimer(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn runCountTrigger(int p0, int p1, bool p2, int p3, bool p4, gd::vector<int> const& p5, int p6, int p7);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn runDeathTrigger(int p0, bool p1, gd::vector<int> const& p2, int p3, int p4);

    /**
     * @note[short] Android
     */
    TodoReturn runOpacityActionOnGroup(int p0, float p1, float p2, int p3, int p4);

    /**
     * @note[short] Windows: 0x2598b0
     * @note[short] Android
     */
    PulseEffectAction* runPulseEffect(int p0, bool p1, float p2, float p3, float p4, PulseEffectType p5, cocos2d::ccColor3B p6, cocos2d::ccHSVValue p7, int p8, bool p9, bool p10, bool p11, bool p12, int p13, int p14);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn runTimerTrigger(int p0, double p1, bool p2, int p3, gd::vector<int> const& p4, int p5, int p6);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn runTouchTriggerCommand(int p0, bool p1, TouchTriggerType p2, TouchTriggerControl p3, bool p4, gd::vector<int> const& p5, int p6, int p7);

    /**
     * @note[short] Android
     */
    TodoReturn saveCompletedMove(int p0, double p1, double p2);

    /**
     * @note[short] Windows: 0x25c520
     * @note[short] Android
     */
    void saveToState(EffectManagerState& p0);

    /**
     * @note[short] MacOS (ARM): 0x26e4cc
     * @note[short] MacOS (Intel): 0x2cb570
     * @note[short] Windows: 0x254a90
     * @note[short] Android
     */
    void setColorAction(ColorAction* p0, int p1);

    /**
     * @note[short] Android
     */
    void setFollowing(int p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x25c290
     * @note[short] Android: Rebinded
     */
    void setupFromString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x26d69c
     * @note[short] MacOS (Intel): 0x2ca4e0
     * @note[short] Android
     */
    bool shouldBlend(int p0);

    /**
     * @note[short] Windows: 0x25a920
     * @note[short] Android: Rebinded
     */
    TodoReturn spawnGroup(int p0, float p1, bool p2, gd::vector<int> const& p3, int p4, int p5);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn spawnObject(GameObject* p0, float p1, gd::vector<int> const& p2, int p3, int p4);

    /**
     * @note[short] Windows: 0x25b5f0
     * @note[short] Android: Rebinded
     */
    void startTimer(int p0, double p1, double p2, bool p3, bool p4, bool p5, float p6, bool p7, int p8, gd::vector<int> const& p9, int p10, int p11);

    /**
     * @note[short] MacOS (ARM): 0x276d94
     * @note[short] MacOS (Intel): 0x2d5e20
     * @note[short] Windows: 0x25ac60
     * @note[short] Android
     */
    void storeTriggeredID(int p0, int p1);

    /**
     * @note[short] Windows: 0x25bfd0
     * @note[short] Android
     */
    TodoReturn timeForItem(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn timerExists(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleGroup(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void toggleItemPersistent(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void toggleTimerPersistent(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn transferPersistentItems();

    /**
     * @note[short] Android
     */
    TodoReturn traverseInheritanceChain(InheritanceNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x272cb0
     * @note[short] MacOS (Intel): 0x2d0bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1667c
     * @note[short] Android
     */
    CCMoveCNode* tryGetMoveCommandNode(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateActiveOpacityEffects();

    /**
     * @note[short] Android
     */
    TodoReturn updateColorAction(ColorAction* p0);

    /**
     * @note[short] MacOS (ARM): 0x26e6c0
     * @note[short] MacOS (Intel): 0x2cb7d0
     * @note[short] Android
     */
    void updateColorEffects(float p0);

    /**
     * @note[short] Android
     */
    void updateColors(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1);

    /**
     * @note[short] MacOS (ARM): 0x27791c
     * @note[short] MacOS (Intel): 0x2d6b10
     * @note[short] Windows: 0x25b120
     * @note[short] iOS: 0x19748
     * @note[short] Android
     */
    void updateCountForItem(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x26e5bc
     * @note[short] MacOS (Intel): 0x2cb6a0
     * @note[short] Windows: 0x254b10
     * @note[short] iOS: 0x137b4
     * @note[short] Android
     */
    void updateEffects(float p0);

    /**
     * @note[short] Android
     */
    void updateOpacityAction(OpacityEffectAction* p0);

    /**
     * @note[short] Android
     */
    void updateOpacityEffects(float p0);

    /**
     * @note[short] MacOS (ARM): 0x26e850
     * @note[short] MacOS (Intel): 0x2cb9a0
     * @note[short] Windows: 0x259e30
     * @note[short] Android
     */
    void updatePulseEffects(float p0);

    /**
     * @note[short] Windows: 0x25aa10
     * @note[short] iOS: 0x18e14
     * @note[short] Android
     */
    TodoReturn updateSpawnTriggers(float p0);

    /**
     * @note[short] Windows: 0x25b850
     * @note[short] Android
     */
    void updateTimer(int p0, double p1);

    /**
     * @note[short] MacOS (ARM): 0x2789fc
     * @note[short] MacOS (Intel): 0x2d82a0
     * @note[short] Windows: 0x25b9e0
     * @note[short] iOS: 0x19fcc
     * @note[short] Android
     */
    void updateTimers(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn wasFollowing(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn wouldCreateLoop(InheritanceNode* p0, int p1);
    TriggerEffectDelegate* m_triggerEffectDelegate;
    cocos2d::CCDictionary* m_unkObject148;
    cocos2d::CCDictionary* m_unkDict150;
    gd::vector<PulseEffectAction> m_pulseEffectVector;
    gd::unordered_map<int, gd::vector<PulseEffectAction>> m_pulseEffectMap;
    gd::unordered_map<int, OpacityEffectAction> m_opacityEffectMap;
    gd::vector<TouchToggleAction> m_unkVector1e0;
    gd::unordered_map<int, gd::vector<CountTriggerAction>> m_countTriggerActions;
    gd::vector<CollisionTriggerAction> m_unkVector230;
    gd::vector<ToggleTriggerAction> m_unkVector248;
    cocos2d::CCDictionary* m_colorActionDict;
    cocos2d::CCDictionary* m_unkDict268;
    gd::vector<InheritanceNode*> m_unkVector270;
    gd::unordered_map<int, bool> m_unkMap288;
    gd::vector<ColorAction*> m_colorActionVector;
    gd::vector<ColorActionSprite*> m_unkVector2d8;
    gd::vector<bool> m_unkVector2f0;
    gd::unordered_map<int, int> m_itemCountMap;
    gd::unordered_map<int, int> m_persistentItemCountMap;
    gd::unordered_set<int> m_persistentTimerItemSet;
    gd::unordered_map<int, TimerItem> m_timerItemMap;
    gd::unordered_map<int, gd::vector<TimerTriggerAction>> m_unkMap3f8;
    cocos2d::CCArray* m_unkArray430;
    gd::vector<bool> m_unkVector438;
    gd::unordered_set<int> m_unkMap460;
    gd::map<int, int> m_unkMap498;
    gd::unordered_set<int> m_unkMap4c8;
    gd::vector<SpawnTriggerAction> m_spawnTriggerActions;
    gd::vector<GroupCommandObject2*> m_unkVector518;
    gd::vector<GroupCommandObject2*> m_unkVector530;
    gd::vector<CCObject*> m_unkVector548;
    gd::vector<GroupCommandObject2> m_unkVector560;
    gd::unordered_map<int, std::pair<double, double>> m_unkMap578;
    gd::vector<GroupCommandObject2*> m_unkVector5b0;
    gd::unordered_map<int, gd::vector<GroupCommandObject2*>> m_unkMap5c8;
    gd::vector<GroupCommandObject2*> m_unkVector600;
    gd::unordered_map<int, CCMoveCNode*> m_unkMap618;
    gd::unordered_map<int, CCMoveCNode*> m_unkMap650;
    gd::unordered_map<int, CCMoveCNode*> m_unkMap688;
    gd::vector<CCMoveCNode*> m_unkVector6c0;
    gd::vector<CCMoveCNode*> m_unkVector6d8;
    gd::vector<CCMoveCNode*> m_unkVector6f0;
    gd::vector<DynamicMoveCalculation> m_unkVector708;
    gd::map<std::pair<int, int>, gd::vector<GroupCommandObject2*>> m_unkMap770;
    float m_unk780;
    float m_unk784;
    float m_unk788;
    float m_unk78C;
    float m_unk790;
    float m_unk794;
    bool m_unk798;
};
