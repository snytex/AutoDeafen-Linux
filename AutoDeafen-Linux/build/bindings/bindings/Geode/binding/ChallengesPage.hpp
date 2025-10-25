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
#include "GJChallengeDelegate.hpp"
#include "CurrencyRewardDelegate.hpp"

class ChallengesPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJChallengeDelegate, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "ChallengesPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChallengesPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ChallengesPage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~ChallengesPage();

    /**
     * @note[short] MacOS (ARM): 0x3193ec
     * @note[short] MacOS (Intel): 0x389da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35d18
     * @note[short] Android
     */
    static ChallengesPage* create();

    /**
     * @note[short] MacOS (ARM): 0x319508
     * @note[short] MacOS (Intel): 0x389f10
     * @note[short] Windows: 0x85300
     * @note[short] iOS: 0x35df0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x31aab4
     * @note[short] MacOS (Intel): 0x38b5d0
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x36ea8
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x31aa18
     * @note[short] MacOS (Intel): 0x38b540
     * @note[short] Windows: 0x86980
     * @note[short] iOS: 0x36e9c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x31a88c
     * @note[short] MacOS (Intel): 0x38b3a0
     * @note[short] Windows: 0x867a0
     * @note[short] iOS: 0x36d20
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x31aa10
     * @note[short] MacOS (Intel): 0x38b520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36e94
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x31a3ec
     * @note[short] MacOS (Intel): 0x38aea0
     * @note[short] Windows: 0x85db0
     * @note[short] iOS: 0x369ac
     * @note[short] Android
     */
    virtual void challengeStatusFinished();

    /**
     * @note[short] MacOS (ARM): 0x31a6a4
     * @note[short] MacOS (Intel): 0x38b1a0
     * @note[short] Windows: 0x85f40
     * @note[short] iOS: 0x36bb0
     * @note[short] Android
     */
    virtual void challengeStatusFailed();

    /**
     * @note[short] MacOS (ARM): 0x31ac1c
     * @note[short] MacOS (Intel): 0x38b740
     * @note[short] Windows: 0x86cc0
     * @note[short] iOS: 0x37010
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x31aaec
     * @note[short] MacOS (Intel): 0x38b610
     * @note[short] Windows: 0x869d0
     * @note[short] Android
     */
    void claimItem(ChallengeNode* p0, GJChallengeItem* p1, cocos2d::CCPoint p2);

    /**
     * @note[short] MacOS (ARM): 0x31a168
     * @note[short] MacOS (Intel): 0x38abe0
     * @note[short] Windows: 0x86090
     * @note[short] iOS: 0x36770
     * @note[short] Android
     */
    ChallengeNode* createChallengeNode(int number, bool skipAnimation, float animLength, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x31a5bc
     * @note[short] MacOS (Intel): 0x38b0a0
     * @note[short] Windows: 0x863c0
     * @note[short] Android
     */
    TodoReturn exitNodeAtSlot(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x319edc
     * @note[short] MacOS (Intel): 0x38a930
     * @note[short] Windows: 0x86940
     * @note[short] iOS: 0x36530
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn tryGetChallenges();

    /**
     * @note[short] MacOS (ARM): 0x31a344
     * @note[short] MacOS (Intel): 0x38add0
     * @note[short] Android
     */
    void updateDots();

    /**
     * @note[short] MacOS (ARM): 0x319f28
     * @note[short] MacOS (Intel): 0x38a970
     * @note[short] Windows: 0x864b0
     * @note[short] iOS: 0x3657c
     * @note[short] Android
     */
    void updateTimers(float p0);
    cocos2d::CCArray* m_dots;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    LoadingCircle* m_circle;
    bool m_triedToLoad;
    bool m_unkBool;
    CurrencyRewardLayer* m_currencyRewardLayer;
    cocos2d::CCDictionary* m_challengeNodes;
};
