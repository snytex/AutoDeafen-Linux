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
#include "GJPurchaseDelegate.hpp"

class GJPathPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJPurchaseDelegate {
public:
    static constexpr auto CLASS_NAME = "GJPathPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x284d30
     * @note[short] MacOS (Intel): 0x2ea7c0
     * @note[short] Windows: 0x27db80
     * @note[short] Android
     */
    static GJPathPage* create(int p0, GJPathsLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x288950
     * @note[short] MacOS (Intel): 0x2ee860
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x3b3c68
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2887ec
     * @note[short] MacOS (Intel): 0x2ee720
     * @note[short] Windows: 0x281710
     * @note[short] iOS: 0x3b3c5c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x288988
     * @note[short] MacOS (Intel): 0x2ee8a0
     * @note[short] Windows: 0x867a0
     * @note[short] iOS: 0x3b3ca0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x286f08
     * @note[short] MacOS (Intel): 0x2ecb40
     * @note[short] Windows: 0x27fb40
     * @note[short] iOS: 0x3b2b2c
     * @note[short] Android
     */
    virtual void didPurchaseItem(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x285220
     * @note[short] MacOS (Intel): 0x2eada0
     * @note[short] Windows: 0x27dcb0
     * @note[short] Android
     */
    bool init(int p0, GJPathsLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x286ee0
     * @note[short] MacOS (Intel): 0x2ecb10
     * @note[short] Windows: 0x27f8e0
     * @note[short] Android
     */
    void onActivatePath(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x281670
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27f950
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x286dd4
     * @note[short] MacOS (Intel): 0x2eca20
     * @note[short] Windows: 0x27fb50
     * @note[short] Android
     */
    void onUnlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x286f0c
     * @note[short] MacOS (Intel): 0x2ecb50
     * @note[short] Windows: 0x280400
     * @note[short] Android
     */
    void playUnlockAnimation();

    /**
     * @note[short] MacOS (ARM): 0x2874bc
     * @note[short] MacOS (Intel): 0x2ed200
     * @note[short] Windows: 0x27fd30
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x287dd0
     * @note[short] MacOS (Intel): 0x2edb90
     * @note[short] Windows: 0x281540
     * @note[short] Android
     */
    void unlockAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x287b88
     * @note[short] MacOS (Intel): 0x2ed8b0
     * @note[short] Windows: 0x280a50
     * @note[short] Android
     */
    void unlockAnimationStep2();

    /**
     * @note[short] MacOS (ARM): 0x287f2c
     * @note[short] MacOS (Intel): 0x2edcf0
     * @note[short] Windows: 0x280cd0
     * @note[short] Android
     */
    void unlockAnimationStep3();
    GJPathsLayer* m_pathsLayer;
    int m_pathNumber;
    bool m_animationPlaying;
    int m_dialogIndex;
};
