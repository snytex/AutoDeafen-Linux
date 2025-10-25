#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChallengesPage.hpp"
#include "GJChallengeItem.hpp"

class ChallengeNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ChallengeNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ChallengeNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ChallengeNode();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~ChallengeNode();

    /**
     * @note[short] MacOS (ARM): 0x31a788
     * @note[short] MacOS (Intel): 0x38b290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36c94
     * @note[short] Android
     */
    static ChallengeNode* create(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x31ad04
     * @note[short] MacOS (Intel): 0x38b860
     * @note[short] Windows: 0x86ce0
     * @note[short] iOS: 0x37094
     * @note[short] Android
     */
    bool init(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x31b9cc
     * @note[short] MacOS (Intel): 0x38c470
     * @note[short] Windows: 0x87d30
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] Android: Rebinded
     */
    void updateTimeLabel(gd::string p0);
    ChallengesPage* m_challengesPage;
    GJChallengeItem* m_challengeItem;
    cocos2d::CCPoint m_unkPoint;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    bool m_unloaded;
};
