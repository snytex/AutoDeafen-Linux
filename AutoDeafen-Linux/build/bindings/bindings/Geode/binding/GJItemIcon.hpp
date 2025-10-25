#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJItemIcon : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJItemIcon";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJItemIcon, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJItemIcon();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~GJItemIcon();

    /**
     * @note[short] MacOS (ARM): 0x2f0ba0
     * @note[short] MacOS (Intel): 0x35d940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x307bd8
     * @note[short] Android
     */
    static GJItemIcon* create(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);

    /**
     * @note[short] MacOS (ARM): 0x2edf50
     * @note[short] MacOS (Intel): 0x35a800
     * @note[short] Windows: 0x273070
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJItemIcon* createBrowserItem(UnlockType unlockType, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x2f0b84
     * @note[short] MacOS (Intel): 0x35d910
     * @note[short] Windows: 0x272f40
     * @note[short] Android
     */
    static GJItemIcon* createStoreItem(UnlockType p0, int p1, bool p2, cocos2d::ccColor3B p3);

    /**
     * @note[short] MacOS (ARM): 0x2edf70
     * @note[short] MacOS (Intel): 0x35a830
     * @note[short] Windows: 0x273d90
     * @note[short] iOS: 0x305b68
     * @note[short] Android
     */
    static float scaleForType(UnlockType p0);

    /**
     * @note[short] MacOS (ARM): 0x2f130c
     * @note[short] MacOS (Intel): 0x35e100
     * @note[short] Android
     */
    static cocos2d::ccColor3B unlockedColorForType(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2f11e0
     * @note[short] MacOS (Intel): 0x35dfc0
     * @note[short] Windows: 0x2738a0
     * @note[short] iOS: 0x308148
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x2ee474
     * @note[short] MacOS (Intel): 0x35af50
     * @note[short] Windows: 0x273cb0
     * @note[short] iOS: 0x306088
     * @note[short] Android
     */
    void changeToLockedState(float p0);

    /**
     * @note[short] MacOS (ARM): 0x2f1374
     * @note[short] MacOS (Intel): 0x35e160
     * @note[short] Windows: 0x2739c0
     * @note[short] Android
     */
    void darkenStoreItem(cocos2d::ccColor3B p0);

    /**
     * @note[short] Windows: 0x273940
     * @note[short] Android
     */
    void darkenStoreItem(ShopType p0);

    /**
     * @note[short] MacOS (ARM): 0x2f0cb0
     * @note[short] MacOS (Intel): 0x35da60
     * @note[short] Windows: 0x273190
     * @note[short] iOS: 0x307c98
     * @note[short] Android
     */
    bool init(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);

    /**
     * @note[short] MacOS (ARM): 0x2ee554
     * @note[short] MacOS (Intel): 0x35b000
     * @note[short] Windows: 0x273bf0
     * @note[short] Android
     */
    void toggleEnabledState(bool p0);
    cocos2d::CCSprite* m_player;
    int m_iconRequestID;
    cocos2d::CCSize m_playerSize;
    bool m_isIcon;
    int m_unlockID;
    UnlockType m_unlockType;
};
