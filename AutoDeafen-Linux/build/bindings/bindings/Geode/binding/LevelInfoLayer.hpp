#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelDownloadDelegate.hpp"
#include "LevelUpdateDelegate.hpp"
#include "RateLevelDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "LevelDeleteDelegate.hpp"
#include "NumberInputDelegate.hpp"
#include "SetIDPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"

class LevelInfoLayer : public cocos2d::CCLayer, public LevelDownloadDelegate, public LevelUpdateDelegate, public RateLevelDelegate, public LikeItemDelegate, public FLAlertLayerProtocol, public LevelDeleteDelegate, public NumberInputDelegate, public SetIDPopupDelegate, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelInfoLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f310
     * @note[short] Android: Out of line
     */
     LevelInfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x24f700
     * @note[short] MacOS (Intel): 0x2a9490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x285b0
     * @note[short] Android: Rebinded
     */
     ~LevelInfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x24f8ac
     * @note[short] MacOS (Intel): 0x2a9700
     * @note[short] Windows: 0x2e2860
     * @note[short] iOS: 0x2874c
     * @note[short] Android
     */
    static LevelInfoLayer* create(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x24f850
     * @note[short] MacOS (Intel): 0x2a96b0
     * @note[short] Windows: 0x2e2810
     * @note[short] iOS: 0x286f0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x25718c
     * @note[short] MacOS (Intel): 0x2b1280
     * @note[short] Windows: 0x2ebdd0
     * @note[short] iOS: 0x2f294
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x257198
     * @note[short] MacOS (Intel): 0x2b12b0
     * @note[short] Windows: 0x2ebde0
     * @note[short] iOS: 0x2f2a0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x256974
     * @note[short] MacOS (Intel): 0x2b0a70
     * @note[short] Windows: 0x2e8e30
     * @note[short] iOS: 0x2ecd0
     * @note[short] Android
     */
    virtual void numberInputClosed(NumberInputLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x254e84
     * @note[short] MacOS (Intel): 0x2aeea0
     * @note[short] Windows: 0x2e51b0
     * @note[short] iOS: 0x2d6a0
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x255be8
     * @note[short] MacOS (Intel): 0x2afc80
     * @note[short] Windows: 0x2e7210
     * @note[short] iOS: 0x2e2c4
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x255ea8
     * @note[short] MacOS (Intel): 0x2aff70
     * @note[short] Windows: 0x2e7570
     * @note[short] iOS: 0x2e540
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x255f8c
     * @note[short] MacOS (Intel): 0x2b0060
     * @note[short] Windows: 0x2e76a0
     * @note[short] iOS: 0x2e600
     * @note[short] Android
     */
    virtual void levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);

    /**
     * @note[short] MacOS (ARM): 0x25619c
     * @note[short] MacOS (Intel): 0x2b0270
     * @note[short] Windows: 0x2e7800
     * @note[short] iOS: 0x2e720
     * @note[short] Android
     */
    virtual void levelUpdateFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x256284
     * @note[short] MacOS (Intel): 0x2b0370
     * @note[short] Windows: 0x2e7930
     * @note[short] iOS: 0x2e7e4
     * @note[short] Android
     */
    virtual void levelDeleteFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x256378
     * @note[short] MacOS (Intel): 0x2b0480
     * @note[short] Windows: 0x2e7a70
     * @note[short] iOS: 0x2e8b4
     * @note[short] Android
     */
    virtual void levelDeleteFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x256ea8
     * @note[short] MacOS (Intel): 0x2b0f70
     * @note[short] Windows: 0x2e9cd0
     * @note[short] iOS: 0x2f0ec
     * @note[short] Android
     */
    virtual void rateLevelClosed();

    /**
     * @note[short] MacOS (ARM): 0x256eb4
     * @note[short] MacOS (Intel): 0x2b0fa0
     * @note[short] Windows: 0x2e9f50
     * @note[short] iOS: 0x2f0f8
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x256fec
     * @note[short] MacOS (Intel): 0x2b10b0
     * @note[short] Windows: 0x2eb810
     * @note[short] iOS: 0x2f170
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x254fdc
     * @note[short] MacOS (Intel): 0x2aefd0
     * @note[short] Windows: 0x2e53a0
     * @note[short] iOS: 0x2d7c8
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x256564
     * @note[short] MacOS (Intel): 0x2b0660
     * @note[short] Windows: 0x2e7bb0
     * @note[short] iOS: 0x2ea38
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0x2543fc
     * @note[short] MacOS (Intel): 0x2ae480
     * @note[short] Windows: 0x2e9000
     * @note[short] iOS: 0x2ce7c
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x253af0
     * @note[short] MacOS (Intel): 0x2adbc0
     * @note[short] Windows: 0x2e9170
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x254bb0
     * @note[short] MacOS (Intel): 0x2aec10
     * @note[short] Windows: 0x2ea8a0
     * @note[short] Android
     */
    void confirmMoveToBottom(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x254ac0
     * @note[short] MacOS (Intel): 0x2aeb30
     * @note[short] Windows: 0x2ea760
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x2541c0
     * @note[short] MacOS (Intel): 0x2ae280
     * @note[short] Android
     */
    void confirmOwnerDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x2523a0
     * @note[short] MacOS (Intel): 0x2ac410
     * @note[short] Windows: 0x2e5770
     * @note[short] iOS: 0x2b0ec
     * @note[short] Android
     */
    void downloadLevel();

    /**
     * @note[short] MacOS (ARM): 0x256f44
     * @note[short] MacOS (Intel): 0x2b1020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementDislikes();

    /**
     * @note[short] MacOS (ARM): 0x256f30
     * @note[short] MacOS (Intel): 0x2b1000
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementLikes();

    /**
     * @note[short] MacOS (ARM): 0x24fa08
     * @note[short] MacOS (Intel): 0x2a98e0
     * @note[short] Windows: 0x2e2a90
     * @note[short] iOS: 0x287d0
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x2566dc
     * @note[short] MacOS (Intel): 0x2b07d0
     * @note[short] Windows: 0x2e8a00
     * @note[short] iOS: 0x2ebb0
     * @note[short] Android
     */
    void loadLevelStep();

    /**
     * @note[short] MacOS (ARM): 0x254e2c
     * @note[short] MacOS (Intel): 0x2aee40
     * @note[short] Windows: 0x2e5160
     * @note[short] iOS: 0x2d668
     * @note[short] Android
     */
    void onAddToList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x254684
     * @note[short] MacOS (Intel): 0x2ae6d0
     * @note[short] Windows: 0x2ebce0
     * @note[short] iOS: 0x2d078
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x2ee4c
     * @note[short] Android
     */
    void onClone(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x2ef30
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x254a40
     * @note[short] MacOS (Intel): 0x2aeab0
     * @note[short] Windows: 0x2e5430
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2549e8
     * @note[short] MacOS (Intel): 0x2aea50
     * @note[short] Windows: 0x2e55b0
     * @note[short] iOS: 0x2d2e4
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x253d04
     * @note[short] MacOS (Intel): 0x2addb0
     * @note[short] Windows: 0x2e8b60
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x254704
     * @note[short] MacOS (Intel): 0x2ae750
     * @note[short] Windows: 0x2ea510
     * @note[short] iOS: 0x2d0f8
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x253d3c
     * @note[short] MacOS (Intel): 0x2adde0
     * @note[short] Windows: 0x2e54d0
     * @note[short] iOS: 0x2c85c
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2ea3c0
     * @note[short] Android
     */
    void onLevelOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x253da8
     * @note[short] MacOS (Intel): 0x2ade50
     * @note[short] Windows: 0x2e9e60
     * @note[short] iOS: 0x2c8c8
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLowDetailMode(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x2ef7c
     * @note[short] Android
     */
    void onOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x251bc4
     * @note[short] MacOS (Intel): 0x2abca0
     * @note[short] Windows: 0x2e7bd0
     * @note[short] iOS: 0x2a9d0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPlayReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x256d54
     * @note[short] MacOS (Intel): 0x2b0e40
     * @note[short] Windows: 0x2e96e0
     * @note[short] iOS: 0x2efe0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x253f84
     * @note[short] MacOS (Intel): 0x2ae030
     * @note[short] Windows: 0x2e9ce0
     * @note[short] Android
     */
    void onRateDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x253e20
     * @note[short] MacOS (Intel): 0x2aded0
     * @note[short] Windows: 0x2e99c0
     * @note[short] iOS: 0x2c940
     * @note[short] Android
     */
    void onRateStars(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x254168
     * @note[short] MacOS (Intel): 0x2ae230
     * @note[short] Windows: 0x2e9c80
     * @note[short] Android
     */
    void onRateStarsMod(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x254d6c
     * @note[short] MacOS (Intel): 0x2aeda0
     * @note[short] Windows: 0x2e5300
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x253bec
     * @note[short] MacOS (Intel): 0x2adcb0
     * @note[short] Windows: 0x2ea280
     * @note[short] iOS: 0x2c79c
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x251b4c
     * @note[short] MacOS (Intel): 0x2abc20
     * @note[short] Windows: 0x2ea460
     * @note[short] iOS: 0x2a958
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2e8850
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x256650
     * @note[short] MacOS (Intel): 0x2b0740
     * @note[short] Windows: 0x2e8930
     * @note[short] iOS: 0x2eb24
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x25678c
     * @note[short] MacOS (Intel): 0x2b0880
     * @note[short] Windows: 0x2e8ab0
     * @note[short] iOS: 0x2ec60
     * @note[short] Android
     */
    void playStep4();

    /**
     * @note[short] MacOS (ARM): 0x252478
     * @note[short] MacOS (Intel): 0x2ac500
     * @note[short] Windows: 0x2e65c0
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x252fc8
     * @note[short] MacOS (Intel): 0x2ad140
     * @note[short] Windows: 0x2e5a80
     * @note[short] iOS: 0x2bc9c
     * @note[short] Android
     */
    void setupPlatformerStats();

    /**
     * @note[short] MacOS (ARM): 0x25336c
     * @note[short] MacOS (Intel): 0x2ad480
     * @note[short] Windows: 0x2e5eb0
     * @note[short] iOS: 0x2bff8
     * @note[short] Android
     */
    void setupProgressBars();

    /**
     * @note[short] Android
     */
    bool shouldDownloadLevel();

    /**
     * @note[short] MacOS (ARM): 0x25646c
     * @note[short] MacOS (Intel): 0x2b0590
     * @note[short] Android
     */
    void showSongWarning();

    /**
     * @note[short] MacOS (ARM): 0x255ffc
     * @note[short] MacOS (Intel): 0x2b00d0
     * @note[short] Windows: 0x2e7710
     * @note[short] Android
     */
    void showUpdateAlert(UpdateResponse p0);

    /**
     * @note[short] MacOS (ARM): 0x254548
     * @note[short] MacOS (Intel): 0x2ae5b0
     * @note[short] Windows: 0x2e8ba0
     * @note[short] iOS: 0x2cf6c
     * @note[short] Android
     */
    void tryCloneLevel(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn tryShowAd();

    /**
     * @note[short] MacOS (ARM): 0x25517c
     * @note[short] MacOS (Intel): 0x2af160
     * @note[short] Windows: 0x2ea9d0
     * @note[short] iOS: 0x2d910
     * @note[short] Android
     */
    void updateLabelValues();

    /**
     * @note[short] MacOS (ARM): 0x253fd8
     * @note[short] MacOS (Intel): 0x2ae090
     * @note[short] Windows: 0x2e9fc0
     * @note[short] iOS: 0x2cacc
     * @note[short] Android
     */
    void updateSideButtons();
    bool m_isBusy;
    cocos2d::CCMenu* m_playBtnMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_coins;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_starRateBtn;
    CCMenuItemSpriteExtra* m_demonRateBtn;
    void* m_unk2;
    cocos2d::CCLabelBMFont* m_lengthLabel;
    cocos2d::CCLabelBMFont* m_exactLengthLabel;
    cocos2d::CCLabelBMFont* m_downloadsLabel;
    cocos2d::CCLabelBMFont* m_likesLabel;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_folderLabel;
    CCMenuItemSpriteExtra* m_cloneBtn;
    void* m_unk3;
    cocos2d::CCSprite* m_likesIcon;
    cocos2d::CCSprite* m_orbsIcon;
    GJLevelType m_levelType;
    bool m_noUpdateAlert;
    bool m_enterTransitionFinished;
    LoadingCircle* m_circle;
    GJDifficultySprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsIcon;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCArray* m_icons;
    float m_iconOffset;
    cocos2d::CCPoint m_basePosition;
    float m_baseStarsY;
    bool m_challenge;
    cocos2d::CCScene* m_playScene;
    cocos2d::CCSprite* m_playSprite;
    cocos2d::CCProgressTimer* m_progressTimer;
    CustomSongWidget* m_songWidget;
};
