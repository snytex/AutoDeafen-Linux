#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomScrollLayerDelegate.hpp"
#include "DynamicScrollDelegate.hpp"

class LevelSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public DynamicScrollDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x39a698
     * @note[short] MacOS (Intel): 0x41f070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f97fc
     * @note[short] Android
     */
    static LevelSelectLayer* create(int page);

    /**
     * @note[short] MacOS (ARM): 0x39a5b0
     * @note[short] MacOS (Intel): 0x41ef50
     * @note[short] Windows: 0x303710
     * @note[short] iOS: 0x3f97b0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int p0);

    /**
     * @note[short] MacOS (ARM): 0x39d1bc
     * @note[short] MacOS (Intel): 0x421c50
     * @note[short] Windows: 0x304ed0
     * @note[short] iOS: 0x3fb7b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x39d250
     * @note[short] MacOS (Intel): 0x421cf0
     * @note[short] Windows: 0x304f20
     * @note[short] iOS: 0x3fb7bc
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x39b4a8
     * @note[short] MacOS (Intel): 0x41ffe0
     * @note[short] Windows: 0x304650
     * @note[short] iOS: 0x3fa324
     * @note[short] Android
     */
    virtual void updatePageWithObject(cocos2d::CCObject* p0, cocos2d::CCObject* p1);

    /**
     * @note[short] MacOS (ARM): 0x39cd34
     * @note[short] MacOS (Intel): 0x4217c0
     * @note[short] Windows: 0x3046c0
     * @note[short] iOS: 0x3fb4a4
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x39d12c
     * @note[short] MacOS (Intel): 0x421bd0
     * @note[short] Windows: 0x3049e0
     * @note[short] iOS: 0x3fb724
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x39ce88
     * @note[short] MacOS (Intel): 0x421930
     * @note[short] iOS: 0x3fb5f4
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue(int p0, int p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x39a760
     * @note[short] MacOS (Intel): 0x41f160
     * @note[short] Windows: 0x303840
     * @note[short] iOS: 0x3f98b8
     * @note[short] Android
     */
    bool init(int page);

    /**
     * @note[short] MacOS (ARM): 0x39b424
     * @note[short] MacOS (Intel): 0x41ff50
     * @note[short] Windows: 0x304e80
     * @note[short] iOS: 0x3fa2c0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39b36c
     * @note[short] MacOS (Intel): 0x41fea0
     * @note[short] Windows: 0x304600
     * @note[short] iOS: 0x3fa208
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39b46c
     * @note[short] MacOS (Intel): 0x41ffa0
     * @note[short] Windows: 0x305000
     * @note[short] iOS: 0x3fa308
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39b3f4
     * @note[short] MacOS (Intel): 0x41ff20
     * @note[short] Windows: 0x304d80
     * @note[short] iOS: 0x3fa290
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39d328
     * @note[short] MacOS (Intel): 0x421ea0
     * @note[short] iOS: 0x3fb884
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39b3c4
     * @note[short] MacOS (Intel): 0x41fef0
     * @note[short] Windows: 0x304e00
     * @note[short] iOS: 0x3fa260
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void tryShowAd();
    float m_width;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    BoomScrollLayer* m_scrollLayer;
    int m_unknown;
    int m_scrolls;
    bool m_masterDetectiveUnlocked;
};
