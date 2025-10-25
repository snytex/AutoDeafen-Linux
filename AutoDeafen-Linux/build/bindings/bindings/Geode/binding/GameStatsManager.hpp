#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameStatsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameStatsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameStatsManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GameStatsManager* get();

    /**
     * @note[short] MacOS (ARM): 0x50108
     * @note[short] MacOS (Intel): 0x5a460
     * @note[short] Windows: 0x1cdf20
     * @note[short] iOS: 0x325804
     * @note[short] Android
     */
    static GameStatsManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x50450
     * @note[short] MacOS (Intel): 0x5a940
     * @note[short] Windows: 0x1ce140
     * @note[short] iOS: 0x3259a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2acc74
     * @note[short] MacOS (Intel): 0x3171d0
     * @note[short] Android
     */
    int accountIDForIcon(int p0, UnlockType p1);

    /**
     * @note[short] Windows: 0x1e6d10
     * @note[short] Android: Rebinded
     */
    void addSimpleSpecialChestReward(gd::string p0, UnlockType p1, int p2, bool p3);

    /**
     * @note[short] Android: Rebinded
     */
    void addSpecialRewardDescription(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x5a758
     * @note[short] MacOS (Intel): 0x660d0
     * @note[short] Windows: 0x1d1000
     * @note[short] iOS: 0x32bb90
     * @note[short] Android
     */
    void addStoreItem(int p0, int p1, int p2, int p3, ShopType p4);

    /**
     * @note[short] MacOS (ARM): 0x663dc
     * @note[short] MacOS (Intel): 0x729b0
     * @note[short] Android
     */
    bool areChallengesLoaded();

    /**
     * @note[short] MacOS (ARM): 0x6599c
     * @note[short] MacOS (Intel): 0x71f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3333c4
     * @note[short] Android
     */
    bool areRewardsLoaded();

    /**
     * @note[short] MacOS (ARM): 0x64700
     * @note[short] MacOS (Intel): 0x70c90
     * @note[short] Windows: 0x1dd990
     * @note[short] iOS: 0x33282c
     * @note[short] Android
     */
    void awardCurrencyForLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x1de170
     * @note[short] iOS: 0x332ce4
     * @note[short] Android
     */
    void awardDiamondsForLevel(GJGameLevel* p0);

    /**
     * @note[short] iOS: 0x33e2ec
     * @note[short] Android
     */
    TodoReturn awardSecretKey();

    /**
     * @note[short] Android
     */
    TodoReturn canItemBeUnlocked(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x5b28c
     * @note[short] MacOS (Intel): 0x66d20
     * @note[short] Windows: 0x1d2470
     * @note[short] Android
     */
    void checkAchievement(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x60414
     * @note[short] MacOS (Intel): 0x6c8d0
     * @note[short] Windows: 0x1da830
     * @note[short] iOS: 0x33052c
     * @note[short] Android
     */
    void checkCoinAchievement(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x633a0
     * @note[short] MacOS (Intel): 0x6f9a0
     * @note[short] Android
     */
    void checkCoinsForLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn claimListReward(GJLevelList* p0);

    /**
     * @note[short] iOS: 0x333564
     * @note[short] Android
     */
    void collectReward(GJRewardType p0, GJRewardItem* p1);

    /**
     * @note[short] Android
     */
    TodoReturn collectVideoReward(int p0);

    /**
     * @note[short] MacOS (ARM): 0x67008
     * @note[short] MacOS (Intel): 0x734a0
     * @note[short] Android
     */
    void completedChallenge(GJChallengeItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x67884
     * @note[short] MacOS (Intel): 0x73c90
     * @note[short] Windows: 0x1dfe10
     * @note[short] Android
     */
    GJRewardItem* completedDailyLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x613f8
     * @note[short] MacOS (Intel): 0x6d7f0
     * @note[short] iOS: 0x330e60
     * @note[short] Android
     */
    void completedDemonLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x6129c
     * @note[short] MacOS (Intel): 0x6d6b0
     * @note[short] iOS: 0x330d54
     * @note[short] Android
     */
    void completedLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x1dbe30
     * @note[short] Android
     */
    void completedMapPack(GJMapPack* p0);

    /**
     * @note[short] MacOS (ARM): 0x61598
     * @note[short] MacOS (Intel): 0x6d990
     * @note[short] iOS: 0x330f2c
     * @note[short] Android
     */
    void completedStarLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fa48
     * @note[short] MacOS (Intel): 0x8bdd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33e264
     * @note[short] Android
     */
    int countSecretChests(GJRewardType rewardType);

    /**
     * @note[short] MacOS (ARM): 0x7fa8c
     * @note[short] MacOS (Intel): 0x8be30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33e2a8
     * @note[short] Android
     */
    int countUnlockedSecretChests(GJRewardType rewardType);

    /**
     * @note[short] iOS: 0x332fb4
     * @note[short] Android: Rebinded
     */
    TodoReturn createReward(GJRewardType p0, int p1, gd::string p2);

    /**
     * @note[short] MacOS (ARM): 0x5243c
     * @note[short] MacOS (Intel): 0x5d080
     * @note[short] Android
     */
    void createSecretChestItems();

    /**
     * @note[short] Windows: 0x1e7760
     * @note[short] Android
     */
    void createSecretChestRewards();

    /**
     * @note[short] MacOS (ARM): 0x52580
     * @note[short] MacOS (Intel): 0x5d1d0
     * @note[short] Windows: 0x1e2c90
     * @note[short] Android
     */
    void createSpecialChestItems();

    /**
     * @note[short] MacOS (ARM): 0x504f8
     * @note[short] MacOS (Intel): 0x5a9f0
     * @note[short] Windows: 0x1ce830
     * @note[short] iOS: 0x325a70
     * @note[short] Android
     */
    void createStoreItems();

    /**
     * @note[short] MacOS (ARM): 0x808bc
     * @note[short] MacOS (Intel): 0x8cee0
     * @note[short] Windows: 0x1ef0b0
     * @note[short] iOS: 0x33f030
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x803f4
     * @note[short] MacOS (Intel): 0x8c9c0
     * @note[short] iOS: 0x33ec78
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x59b18
     * @note[short] MacOS (Intel): 0x651f0
     * @note[short] Windows: 0x1ce340
     * @note[short] Android
     */
    void generateItemUnlockableData();

    /**
     * @note[short] MacOS (ARM): 0x6450c
     * @note[short] MacOS (Intel): 0x70ab0
     * @note[short] Windows: 0x1dd750
     * @note[short] iOS: 0x3326e0
     * @note[short] Android
     */
    int getAwardedCurrencyForLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x64cb4
     * @note[short] MacOS (Intel): 0x712a0
     * @note[short] Windows: 0x1ddf40
     * @note[short] iOS: 0x332bac
     * @note[short] Android
     */
    int getAwardedDiamondsForLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    int getBaseCurrency(int stars, bool featured, int levelID);

    /**
     * @note[short] MacOS (ARM): 0x642c4
     * @note[short] MacOS (Intel): 0x708c0
     * @note[short] Windows: 0x1dd4b0
     * @note[short] iOS: 0x3325b8
     * @note[short] Android
     */
    int getBaseCurrencyForLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x64c64
     * @note[short] MacOS (Intel): 0x71240
     * @note[short] Android
     */
    void getBaseDiamonds(int p0);

    /**
     * @note[short] MacOS (ARM): 0x64c78
     * @note[short] MacOS (Intel): 0x71260
     * @note[short] Android
     */
    int getBonusDiamonds(int p0);

    /**
     * @note[short] MacOS (ARM): 0x66a90
     * @note[short] MacOS (Intel): 0x73000
     * @note[short] Windows: 0x1dee70
     * @note[short] iOS: 0x333cf4
     * @note[short] Android
     */
    GJChallengeItem* getChallenge(int p0);

    /**
     * @note[short] MacOS (ARM): 0x66e24
     * @note[short] MacOS (Intel): 0x73370
     * @note[short] Android
     */
    TodoReturn getChallengeKey(GJChallengeItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x608b4
     * @note[short] MacOS (Intel): 0x6cd40
     * @note[short] Windows: 0x1dabd0
     * @note[short] iOS: 0x330730
     * @note[short] Android
     */
    int getCollectedCoinsForLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x6230c
     * @note[short] MacOS (Intel): 0x6e6c0
     * @note[short] Windows: 0x1dc180
     * @note[short] iOS: 0x331520
     * @note[short] Android
     */
    cocos2d::CCArray* getCompletedMapPacks();

    /**
     * @note[short] MacOS (ARM): 0x64184
     * @note[short] MacOS (Intel): 0x70790
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    gd::string getCurrencyKey(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn getDailyLevelKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x60c5c
     * @note[short] MacOS (Intel): 0x6d140
     * @note[short] Android
     */
    TodoReturn getDemonLevelKey(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getEventRewardKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6b024
     * @note[short] MacOS (Intel): 0x77710
     * @note[short] Windows: 0x1e6e40
     * @note[short] iOS: 0x3129e8
     * @note[short] Android
     */
    gd::string getGauntletRewardKey(int p0);

    /**
     * @note[short] Windows: 0x1de9b0
     * @note[short] iOS: 0x32ba84
     * @note[short] Android
     */
    gd::string getItemKey(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x6a898
     * @note[short] MacOS (Intel): 0x77010
     * @note[short] Windows: 0x1e2b30
     * @note[short] iOS: 0x336148
     * @note[short] Android
     */
    int getItemUnlockState(int itemID, UnlockType unlockType);

    /**
     * @note[short] Android
     */
    int getItemUnlockStateLite(int p0, UnlockType p1);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    gd::string getLevelKey(GJGameLevel* level);

    /**
     * @note[short] Windows: 0x1dad50
     * @note[short] Android
     */
    gd::string getLevelKey(int levelID, bool isOnline, bool isDaily, bool isGauntlet, bool isEvent);

    /**
     * @note[short] MacOS (ARM): 0x671f8
     * @note[short] MacOS (Intel): 0x73610
     * @note[short] Android
     */
    TodoReturn getListRewardKey(GJLevelList* p0);

    /**
     * @note[short] Android
     */
    char const* getMapPackKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getNextGoldChestID();

    /**
     * @note[short] Android
     */
    TodoReturn getNextVideoAdReward();

    /**
     * @note[short] Windows: 0x1e7330
     * @note[short] Android
     */
    gd::string getPathRewardKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x66b94
     * @note[short] MacOS (Intel): 0x73100
     * @note[short] Windows: 0x1def40
     * @note[short] iOS: 0x333d78
     * @note[short] Android
     */
    GJChallengeItem* getQueuedChallenge(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getRewardForSecretChest(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getRewardForSpecialChest(gd::string p0);

    /**
     * @note[short] iOS: 0x3333b8
     * @note[short] Android
     */
    GJRewardItem* getRewardItem(GJRewardType p0);

    /**
     * @note[short] iOS: 0x3333e8
     * @note[short] Android
     */
    gd::string getRewardKey(GJRewardType p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x66c98
     * @note[short] MacOS (Intel): 0x73200
     * @note[short] Android
     */
    GJChallengeItem* getSecondaryQueuedChallenge(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSecretChestForItem(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x63ad4
     * @note[short] MacOS (Intel): 0x700d0
     * @note[short] Android
     */
    char const* getSecretCoinKey(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x6beb0
     * @note[short] MacOS (Intel): 0x78550
     * @note[short] Android
     */
    gd::string getSecretOnlineRewardKey(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getSpecialChestKeyForItem(int p0, UnlockType p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn getSpecialRewardDescription(gd::string p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x6b4a4
     * @note[short] MacOS (Intel): 0x77bb0
     * @note[short] Windows: 0x1e6fb0
     * @note[short] iOS: 0x336794
     * @note[short] Android
     */
    gd::string getSpecialUnlockDescription(int p0, UnlockType p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x60ce4
     * @note[short] MacOS (Intel): 0x6d1a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x330a04
     * @note[short] Android
     */
    char const* getStarLevelKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x5aca0
     * @note[short] MacOS (Intel): 0x66610
     * @note[short] Windows: 0x1d21e0
     * @note[short] iOS: 0x32bf54
     * @note[short] Android
     */
    int getStat(char const* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getStatFromKey(StatKey key);

    /**
     * @note[short] Android
     */
    TodoReturn getStoreItem(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getStoreItem(int p0);

    /**
     * @note[short] MacOS (ARM): 0x67fc4
     * @note[short] MacOS (Intel): 0x743f0
     * @note[short] Windows: 0x1e08b0
     * @note[short] iOS: 0x3349f0
     * @note[short] Android
     */
    int getTotalCollectedCurrency();

    /**
     * @note[short] MacOS (ARM): 0x68c58
     * @note[short] MacOS (Intel): 0x751c0
     * @note[short] Windows: 0x1e1180
     * @note[short] Android
     */
    int getTotalCollectedDiamonds();

    /**
     * @note[short] MacOS (ARM): 0x672c8
     * @note[short] MacOS (Intel): 0x736d0
     * @note[short] Windows: 0x1dfc30
     * @note[short] iOS: 0x334154
     * @note[short] Android
     */
    bool hasClaimedListReward(GJLevelList* p0);

    /**
     * @note[short] MacOS (ARM): 0x66ef8
     * @note[short] MacOS (Intel): 0x73430
     * @note[short] Android
     */
    bool hasCompletedChallenge(GJChallengeItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x67750
     * @note[short] MacOS (Intel): 0x73b50
     * @note[short] Windows: 0x1dfd10
     * @note[short] Android
     */
    bool hasCompletedDailyLevel(int p0);

    /**
     * @note[short] Android
     */
    bool hasCompletedDemonLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x60f64
     * @note[short] MacOS (Intel): 0x6d3b0
     * @note[short] Windows: 0x1db1a0
     * @note[short] Android
     */
    bool hasCompletedGauntletLevel(int p0);

    /**
     * @note[short] MacOS (ARM): 0x60e04
     * @note[short] MacOS (Intel): 0x6d280
     * @note[short] Windows: 0x1dafb0
     * @note[short] iOS: 0x330af4
     * @note[short] Android
     */
    bool hasCompletedLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x60d6c
     * @note[short] MacOS (Intel): 0x6d200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x330a74
     * @note[short] Android
     */
    bool hasCompletedMainLevel(int levelID);

    /**
     * @note[short] Android
     */
    bool hasCompletedMapPack(int p0);

    /**
     * @note[short] MacOS (ARM): 0x60ecc
     * @note[short] MacOS (Intel): 0x6d330
     * @note[short] Windows: 0x1db070
     * @note[short] iOS: 0x330b64
     * @note[short] Android
     */
    bool hasCompletedOnlineLevel(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6114c
     * @note[short] MacOS (Intel): 0x6d570
     * @note[short] Android
     */
    bool hasCompletedStarLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x636cc
     * @note[short] MacOS (Intel): 0x6fcf0
     * @note[short] Windows: 0x1dce90
     * @note[short] iOS: 0x331ee0
     * @note[short] Android
     */
    bool hasPendingUserCoin(char const* p0);

    /**
     * @note[short] iOS: 0x3334f4
     * @note[short] Android
     */
    bool hasRewardBeenCollected(GJRewardType p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x60930
     * @note[short] MacOS (Intel): 0x6cdc0
     * @note[short] Windows: 0x1dcf50
     * @note[short] iOS: 0x33078c
     * @note[short] Android
     */
    bool hasSecretCoin(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x637c4
     * @note[short] MacOS (Intel): 0x6fde0
     * @note[short] Windows: 0x1dcd10
     * @note[short] iOS: 0x331f50
     * @note[short] Android
     */
    bool hasUserCoin(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn incrementActivePath(int p0);

    /**
     * @note[short] MacOS (ARM): 0x5eb10
     * @note[short] MacOS (Intel): 0x6b0c0
     * @note[short] Windows: 0x1df0f0
     * @note[short] iOS: 0x32f8b4
     * @note[short] Android
     */
    void incrementChallenge(GJChallengeType type, int amount);

    /**
     * @note[short] MacOS (ARM): 0x5afdc
     * @note[short] MacOS (Intel): 0x66960
     * @note[short] Windows: 0x1d1500
     * @note[short] iOS: 0x32c170
     * @note[short] Android
     */
    void incrementStat(char const* p0, int p1);

    /**
     * @note[short] iOS: 0x32c168
     * @note[short] Android
     */
    TodoReturn incrementStat(char const* p0);

    /**
     * @note[short] Android
     */
    bool isGauntletChestUnlocked(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6ac58
     * @note[short] MacOS (Intel): 0x773c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x336220
     * @note[short] Android
     */
    bool isItemEnabled(UnlockType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x5ee84
     * @note[short] MacOS (Intel): 0x6b3b0
     * @note[short] Windows: 0x1e2850
     * @note[short] iOS: 0x32fb64
     * @note[short] Android
     */
    bool isItemUnlocked(UnlockType p0, int p1);

    /**
     * @note[short] Android
     */
    bool isPathChestUnlocked(int p0);

    /**
     * @note[short] Android
     */
    bool isPathUnlocked(StatKey p0);

    /**
     * @note[short] MacOS (ARM): 0x6a68c
     * @note[short] MacOS (Intel): 0x76e10
     * @note[short] Windows: 0x1e74d0
     * @note[short] iOS: 0x336044
     * @note[short] Android
     */
    bool isSecretChestUnlocked(int p0);

    /**
     * @note[short] MacOS (ARM): 0x63c18
     * @note[short] MacOS (Intel): 0x70200
     * @note[short] Android: Rebinded
     */
    bool isSecretCoin(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    bool isSecretCoinValid(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    bool isSpecialChestLiteUnlockable(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x6a794
     * @note[short] MacOS (Intel): 0x76f10
     * @note[short] Windows: 0x1e7160
     * @note[short] iOS: 0x3360cc
     * @note[short] Android: Rebinded
     */
    bool isSpecialChestUnlocked(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x5a978
     * @note[short] MacOS (Intel): 0x662e0
     * @note[short] Windows: 0x1d1210
     * @note[short] iOS: 0x32bd28
     * @note[short] Android
     */
    bool isStoreItemUnlocked(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6a2a4
     * @note[short] MacOS (Intel): 0x76a40
     * @note[short] Android
     */
    int keyCostForSecretChest(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn linkSpecialChestUnlocks(GJRewardItem* p0, gd::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn logCoins();

    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsCompletedAndClaimed(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x1f0460
     * @note[short] Android
     */
    void postLoadGameStats();

    /**
     * @note[short] Windows: 0x1deb00
     * @note[short] Android
     */
    void preProcessReward(GJRewardItem* p0);

    /**
     * @note[short] Windows: 0x1f0630
     * @note[short] Android
     */
    void preSaveGameStats();

    /**
     * @note[short] MacOS (ARM): 0x67160
     * @note[short] MacOS (Intel): 0x73590
     * @note[short] Windows: 0x1df950
     * @note[short] iOS: 0x334078
     * @note[short] Android
     */
    void processChallengeQueue(int position);

    /**
     * @note[short] Android
     */
    TodoReturn processOnlineChests();

    /**
     * @note[short] MacOS (ARM): 0x5aa80
     * @note[short] MacOS (Intel): 0x663e0
     * @note[short] Windows: 0x1d12e0
     * @note[short] iOS: 0x32bdb0
     * @note[short] Android
     */
    bool purchaseItem(int p0);

    /**
     * @note[short] MacOS (ARM): 0x69188
     * @note[short] MacOS (Intel): 0x75760
     * @note[short] iOS: 0x3351a4
     * @note[short] Android
     */
    void recountSpecialStats();

    /**
     * @note[short] Android
     */
    TodoReturn recountUserCoins(bool p0);

    /**
     * @note[short] Windows: 0x1ee170
     * @note[short] iOS: 0x333604
     * @note[short] Android
     */
    void registerRewardsFromItem(GJRewardItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x6650c
     * @note[short] MacOS (Intel): 0x72ae0
     * @note[short] Android
     */
    void removeChallenge(int songID);

    /**
     * @note[short] Windows: 0x1f0310
     * @note[short] Android
     */
    void removeErrorFromSpecialChests();

    /**
     * @note[short] MacOS (ARM): 0x66740
     * @note[short] MacOS (Intel): 0x72cf0
     * @note[short] Android
     */
    TodoReturn removeQueuedChallenge(int p0);

    /**
     * @note[short] MacOS (ARM): 0x66978
     * @note[short] MacOS (Intel): 0x72f00
     * @note[short] Android
     */
    TodoReturn removeQueuedSecondaryChallenge(int p0);

    /**
     * @note[short] Android
     */
    void resetChallengeTimer();

    /**
     * @note[short] Android
     */
    TodoReturn resetPreSync();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn resetSpecialChest(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x6a2f8
     * @note[short] MacOS (Intel): 0x76aa0
     * @note[short] Android
     */
    TodoReturn resetSpecialStatAchievements();

    /**
     * @note[short] Android
     */
    TodoReturn resetUserCoins();

    /**
     * @note[short] Android
     */
    TodoReturn restorePostSync();

    /**
     * @note[short] Android
     */
    void setAwardedBonusKeys(int p0);

    /**
     * @note[short] Windows: 0x1dc090
     * @note[short] Android
     */
    void setStarsForMapPack(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x5ae04
     * @note[short] MacOS (Intel): 0x66770
     * @note[short] Windows: 0x1d2300
     * @note[short] iOS: 0x32c038
     * @note[short] Android
     */
    void setStat(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    void setStatIfHigher(char const* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x2acd6c
     * @note[short] MacOS (Intel): 0x3172c0
     * @note[short] Windows: 0x1c1190
     * @note[short] Android
     */
    void setupIconCredits();

    /**
     * @note[short] Android
     */
    TodoReturn shopTypeForItemID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn shouldAwardSecretKey();

    /**
     * @note[short] Android
     */
    TodoReturn starsForMapPack(int p0);

    /**
     * @note[short] MacOS (ARM): 0x663ec
     * @note[short] MacOS (Intel): 0x729d0
     * @note[short] Android
     */
    TodoReturn storeChallenge(int p0, GJChallengeItem* p1);

    /**
     * @note[short] MacOS (ARM): 0x66370
     * @note[short] MacOS (Intel): 0x72930
     * @note[short] Android
     */
    void storeChallengeTime(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn storeEventChest(int p0, GJRewardItem* p1);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn storeOnlineChest(gd::string p0, GJRewardItem* p1);

    /**
     * @note[short] Android
     */
    TodoReturn storePendingUserCoin(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x66620
     * @note[short] MacOS (Intel): 0x72be0
     * @note[short] Windows: 0x1ded90
     * @note[short] iOS: 0x333ae4
     * @note[short] Android
     */
    void storeQueuedChallenge(int position, GJChallengeItem* challenge);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn storeRewardState(GJRewardType p0, int p1, int p2, gd::string p3);

    /**
     * @note[short] Android
     */
    TodoReturn storeSecondaryQueuedChallenge(int p0, GJChallengeItem* p1);

    /**
     * @note[short] Android
     */
    TodoReturn storeSecretCoin(char const* p0);

    /**
     * @note[short] Windows: 0x1dcdd0
     * @note[short] Android
     */
    void storeUserCoin(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn tempClear();

    /**
     * @note[short] MacOS (ARM): 0x6ad1c
     * @note[short] MacOS (Intel): 0x77450
     * @note[short] Windows: 0x1e2c00
     * @note[short] iOS: 0x3362b8
     * @note[short] Android
     */
    void toggleEnableItem(UnlockType p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x5f61c
     * @note[short] MacOS (Intel): 0x6ba70
     * @note[short] Windows: 0x1d1810
     * @note[short] Android
     */
    void tryFixPathBug();

    /**
     * @note[short] MacOS (ARM): 0x5f0c4
     * @note[short] MacOS (Intel): 0x6b5e0
     * @note[short] Android
     */
    void trySelectActivePath();

    /**
     * @note[short] Windows: 0x1dbbc0
     * @note[short] Android
     */
    void uncompleteLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    void unlockGauntletChest(int p0);

    /**
     * @note[short] iOS: 0x33e16c
     * @note[short] Android
     */
    TodoReturn unlockGoldChest(int p0);

    /**
     * @note[short] Windows: 0x1e7410
     * @note[short] Android: Rebinded
     */
    void unlockOnlineChest(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn unlockPathChest(int p0);

    /**
     * @note[short] MacOS (ARM): 0x7f6f4
     * @note[short] MacOS (Intel): 0x8ba60
     * @note[short] Windows: 0x1e75a0
     * @note[short] iOS: 0x33e00c
     * @note[short] Android
     */
    GJRewardItem* unlockSecretChest(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6b8c8
     * @note[short] MacOS (Intel): 0x77ff0
     * @note[short] Windows: 0x1e7250
     * @note[short] iOS: 0x336884
     * @note[short] Android: Rebinded
     */
    GJRewardItem* unlockSpecialChest(gd::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateActivePath(StatKey p0);

    /**
     * @note[short] Android
     */
    gd::string usernameForAccountID(int p0);

    /**
     * @note[short] MacOS (ARM): 0x601c0
     * @note[short] MacOS (Intel): 0x6c680
     * @note[short] Windows: 0x1d1f80
     * @note[short] Android
     */
    void verifyPathAchievements();

    /**
     * @note[short] Windows: 0x1dcc30
     * @note[short] Android
     */
    void verifyUserCoins();
    bool m_usePlayerStatsCCDictionary;
    cocos2d::CCString* m_trueString;
    cocos2d::CCDictionary* m_allStoreItems;
    cocos2d::CCDictionary* m_storeItems;
    cocos2d::CCDictionary* m_allTreasureRoomChests;
    cocos2d::CCDictionary* m_allTreasureRoomChestItems;
    cocos2d::CCDictionary* m_allSpecialChests;
    cocos2d::CCDictionary* m_allSpecialChestItems;
    gd::unordered_map<int, gd::string> m_specialRewardDescriptions;
    gd::unordered_map<int, gd::string> m_createSpecialChestItemsMap;
    cocos2d::CCDictionary* m_specialChestsLite;
    cocos2d::CCArray* m_storeItemArray;
    cocos2d::CCDictionary* m_rewardItems;
    cocos2d::CCDictionary* m_dailyChests;
    cocos2d::CCDictionary* m_worldAdvertChests;
    cocos2d::CCDictionary* m_activeChallenges;
    cocos2d::CCDictionary* m_upcomingChallenges;
    double m_challengeTime;
    cocos2d::CCDictionary* m_playerStats;
    gd::unordered_map<int, int> m_playerStatsRandMap;
    gd::unordered_map<int, int> m_playerStatsSeedMap;
    cocos2d::CCDictionary* m_completedLevels;
    cocos2d::CCDictionary* m_verifiedUserCoins;
    cocos2d::CCDictionary* m_pendingUserCoins;
    cocos2d::CCDictionary* m_purchasedItems;
    cocos2d::CCDictionary* m_onlineCurrencyScores;
    cocos2d::CCDictionary* m_mainCurrencyScores;
    cocos2d::CCDictionary* m_gauntletCurrencyScores;
    cocos2d::CCDictionary* m_timelyCurrencyScores;
    cocos2d::CCDictionary* m_onlineStars;
    cocos2d::CCDictionary* m_timelyStars;
    cocos2d::CCDictionary* m_gauntletDiamondScores;
    cocos2d::CCDictionary* m_timelyDiamondScores;
    cocos2d::CCDictionary* m_unusedCurrencyAwardDict;
    cocos2d::CCDictionary* m_challengeDiamonds;
    cocos2d::CCDictionary* m_completedMappacks;
    cocos2d::CCDictionary* m_completedLists;
    cocos2d::CCDictionary* m_weeklyChest;
    cocos2d::CCDictionary* m_eventChest;
    cocos2d::CCDictionary* m_treasureRoomChests;
    geode::SeedValueSRV m_bonusKey;
    cocos2d::CCDictionary* m_miscChests;
    cocos2d::CCDictionary* m_enabledItems;
    cocos2d::CCDictionary* m_wraithChests;
    bool m_skipIncrementChallenge;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_unlockedItems;
    gd::map<std::pair<int, UnlockType>, int> m_accountIDForIcon;
    gd::map<int, gd::string> m_usernameForAccountID;
    gd::set<std::pair<UnlockType, int>> m_wraithIcons;
    bool m_pathBugFixed;
    bool m_tryFixPathBug;
    int m_activePath;
};
