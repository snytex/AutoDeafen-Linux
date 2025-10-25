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

class LikeItemLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LikeItemLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LikeItemLayer, FLAlertLayer)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     LikeItemLayer();

    /**
     * @note[short] MacOS (ARM): 0x513b04
     * @note[short] MacOS (Intel): 0x5e1410
     * @note[short] Windows: 0x318ea0
     * @note[short] iOS: 0x24bbb0
     * @note[short] Android
     */
    static LikeItemLayer* create(LikeItemType p0, int p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x514184
     * @note[short] MacOS (Intel): 0x5e1b00
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x24c0fc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x513c28
     * @note[short] MacOS (Intel): 0x5e1580
     * @note[short] Windows: 0x318fa0
     * @note[short] iOS: 0x24bc88
     * @note[short] Android
     */
    bool init(LikeItemType p0, int p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x513fdc
     * @note[short] MacOS (Intel): 0x5e1950
     * @note[short] Windows: 0x84620
     * @note[short] iOS: 0x24c034
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x514090
     * @note[short] MacOS (Intel): 0x5e1a00
     * @note[short] Windows: 0x319380
     * @note[short] iOS: 0x24c078
     * @note[short] Android
     */
    void onDislike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x514018
     * @note[short] MacOS (Intel): 0x5e1980
     * @note[short] Windows: 0x319370
     * @note[short] iOS: 0x24c070
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x514108
     * @note[short] MacOS (Intel): 0x5e1a80
     * @note[short] Windows: 0x319390
     * @note[short] iOS: 0x24c080
     * @note[short] Android
     */
    void triggerLike(bool isLiked);
    LikeItemType m_itemType;
    int m_itemID;
    int m_commentSourceID;
    LikeItemDelegate* m_likeDelegate;
};
