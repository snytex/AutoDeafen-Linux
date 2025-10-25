#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CurrencyRewardLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CurrencyRewardLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CurrencyRewardLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x6a36f8
     * @note[short] MacOS (Intel): 0x78ff00
     * @note[short] Windows: 0x9f500
     * @note[short] iOS: 0x31e9b4
     * @note[short] Android
     */
    static CurrencyRewardLayer* create(int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType rewardType, float p10, float time);

    /**
     * @note[short] MacOS (ARM): 0x6a64a8
     * @note[short] MacOS (Intel): 0x792fd0
     * @note[short] Windows: 0xa2230
     * @note[short] iOS: 0x3212a4
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x6a57c0
     * @note[short] MacOS (Intel): 0x792130
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createObjects(CurrencySpriteType type, int count, cocos2d::CCPoint position, float time);

    /**
     * @note[short] MacOS (ARM): 0x6a5884
     * @note[short] MacOS (Intel): 0x7921d0
     * @note[short] Windows: 0xa1520
     * @note[short] iOS: 0x320790
     * @note[short] Android
     */
    void createObjectsFull(CurrencySpriteType p0, int p1, cocos2d::CCSprite* p2, cocos2d::CCPoint p3, float p4);

    /**
     * @note[short] MacOS (ARM): 0x6a5828
     * @note[short] MacOS (Intel): 0x792180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x320734
     * @note[short] Android
     */
    void createUnlockObject(cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float time);

    /**
     * @note[short] MacOS (ARM): 0x6a6b18
     * @note[short] MacOS (Intel): 0x793700
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6a6f08
     * @note[short] MacOS (Intel): 0x793b50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementDiamondsCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6a6db8
     * @note[short] MacOS (Intel): 0x7939e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementMoonsCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6a71a8
     * @note[short] MacOS (Intel): 0x793e30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementSpecialCount1(int count);

    /**
     * @note[short] MacOS (ARM): 0x6a7058
     * @note[short] MacOS (Intel): 0x793cc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementSpecialCount2(int count);

    /**
     * @note[short] MacOS (ARM): 0x6a6c68
     * @note[short] MacOS (Intel): 0x793870
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementStarsCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6a3800
     * @note[short] MacOS (Intel): 0x78ffe0
     * @note[short] Windows: 0x9f750
     * @note[short] iOS: 0x31eabc
     * @note[short] Android
     */
    bool init(int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType rewardType, float p10, float time);

    /**
     * @note[short] MacOS (ARM): 0x6a72f8
     * @note[short] MacOS (Intel): 0x793fa0
     * @note[short] Windows: 0xa2c00
     * @note[short] Android
     */
    void pulseSprite(cocos2d::CCSprite* p0);
    CurrencyRewardDelegate* m_delegate;
    cocos2d::CCArray* m_objects;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCLabelBMFont* m_moonsLabel;
    cocos2d::CCLabelBMFont* m_diamondsLabel;
    cocos2d::CCLabelBMFont* m_keysLabel;
    cocos2d::CCLabelBMFont* m_shardsLabel;
    cocos2d::CCSprite* m_orbsSprite;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCSprite* m_moonsSprite;
    cocos2d::CCSprite* m_diamondsSprite;
    CurrencySprite* m_keysSprite;
    CurrencySprite* m_shardsSprite;
    cocos2d::CCSpriteBatchNode* m_currencyBatchNode;
    cocos2d::CCSpriteBatchNode* m_orbBatchNode;
    int m_orbs;
    int m_stars;
    int m_moons;
    int m_diamonds;
    int m_keys;
    int m_shards;
    float m_elapsed;
    float m_unknown;
    float m_time;
    cocos2d::CCPoint m_orbsPosition;
    cocos2d::CCPoint m_starsPosition;
    cocos2d::CCPoint m_moonsPosition;
    cocos2d::CCPoint m_diamondsPosition;
    cocos2d::CCPoint m_keysPosition;
    cocos2d::CCPoint m_shardsPosition;
    bool m_particlesAdded;
    bool m_objectsAdded;
    cocos2d::CCNode* m_mainNode;
    int m_rewardCount;
    CurrencyRewardType m_rewardType;
};
