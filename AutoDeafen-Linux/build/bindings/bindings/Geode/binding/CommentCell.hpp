#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "LikeItemDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CommentCell : public TableViewCell, public LikeItemDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CommentCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommentCell, TableViewCell)

    /**
     * @note[short] Windows: 0xb53c0
     * @note[short] Android: Rebinded
     */
     CommentCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1f202c
     * @note[short] MacOS (Intel): 0x242d60
     * @note[short] Windows: 0xb5460
     * @note[short] iOS: 0x11371c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f22f4
     * @note[short] MacOS (Intel): 0x243070
     * @note[short] Windows: 0xad710
     * @note[short] iOS: 0x1139b8
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1f23a0
     * @note[short] MacOS (Intel): 0x243140
     * @note[short] Windows: 0xb7750
     * @note[short] iOS: 0x113a64
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x1f271c
     * @note[short] MacOS (Intel): 0x2434e0
     * @note[short] Windows: 0xb79c0
     * @note[short] iOS: 0x113bdc
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn incrementDislikes();

    /**
     * @note[short] Android
     */
    TodoReturn incrementLikes();

    /**
     * @note[short] MacOS (ARM): 0x1e5f14
     * @note[short] MacOS (Intel): 0x235d50
     * @note[short] Windows: 0xb5480
     * @note[short] iOS: 0x108cb0
     * @note[short] Android
     */
    void loadFromComment(GJComment* p0);

    /**
     * @note[short] MacOS (ARM): 0x1f220c
     * @note[short] MacOS (Intel): 0x242f80
     * @note[short] Windows: 0xb7850
     * @note[short] iOS: 0x1138fc
     * @note[short] Android
     */
    void onConfirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f26a0
     * @note[short] MacOS (Intel): 0x243450
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] MacOS (ARM): 0x1f2078
     * @note[short] MacOS (Intel): 0x242dc0
     * @note[short] Windows: 0xb7b20
     * @note[short] iOS: 0x113768
     * @note[short] Android
     */
    void onGoToLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f212c
     * @note[short] MacOS (Intel): 0x242e90
     * @note[short] Windows: 0xb75f0
     * @note[short] iOS: 0x11381c
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onUndelete();

    /**
     * @note[short] MacOS (ARM): 0x1f2120
     * @note[short] MacOS (Intel): 0x242e70
     * @note[short] Windows: 0xb7b00
     * @note[short] Android
     */
    void onUnhide(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f2044
     * @note[short] MacOS (Intel): 0x242d90
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x10a674
     * @note[short] Android
     */
    void updateBGColor(int p0);

    /**
     * @note[short] Android
     */
    void updateLabelValues();
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCLabelBMFont* m_likeLabel;
    GJComment* m_comment;
    bool m_accountComment;
};
