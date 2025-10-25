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
#include "TextInputDelegate.hpp"

class MoreSearchLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreSearchLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MoreSearchLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~MoreSearchLayer();

    /**
     * @note[short] MacOS (ARM): 0x541374
     * @note[short] MacOS (Intel): 0x615070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x57e9c
     * @note[short] Android
     */
    static MoreSearchLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x5441d0
     * @note[short] MacOS (Intel): 0x618230
     * @note[short] Windows: 0x301c60
     * @note[short] iOS: 0x5a488
     * @note[short] Android
     */
    void audioNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54415c
     * @note[short] MacOS (Intel): 0x6181c0
     * @note[short] Windows: 0x301d80
     * @note[short] iOS: 0x5a444
     * @note[short] Android
     */
    void audioPrevious(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x302730
     * @note[short] Android: Rebinded
     */
    void createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] MacOS (ARM): 0x543960
     * @note[short] MacOS (Intel): 0x617a10
     * @note[short] Windows: 0x302990
     * @note[short] iOS: 0x59c50
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEpic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54423c
     * @note[short] MacOS (Intel): 0x6182a0
     * @note[short] Windows: 0x3025e0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLegendary(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMythic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNoStar(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x543dfc
     * @note[short] MacOS (Intel): 0x617e50
     * @note[short] Windows: 0x3012c0
     * @note[short] iOS: 0x5a0d8
     * @note[short] Android
     */
    void onSongFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54400c
     * @note[short] MacOS (Intel): 0x618070
     * @note[short] Windows: 0x301fe0
     * @note[short] iOS: 0x5a2e8
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTwoPlayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUncompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x544498
     * @note[short] MacOS (Intel): 0x618510
     * @note[short] Windows: 0x301ea0
     * @note[short] iOS: 0x5a66c
     * @note[short] Android
     */
    void selectSong(int songID);

    /**
     * @note[short] MacOS (ARM): 0x544394
     * @note[short] MacOS (Intel): 0x6183d0
     * @note[short] Windows: 0x3024a0
     * @note[short] Android
     */
    void toggleSongNodes(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x5444e0
     * @note[short] MacOS (Intel): 0x618560
     * @note[short] Windows: 0x3019a0
     * @note[short] iOS: 0x5a6b4
     * @note[short] Android
     */
    void updateAudioLabel();

    /**
     * @note[short] MacOS (ARM): 0x542794
     * @note[short] MacOS (Intel): 0x616620
     * @note[short] Windows: 0x2fe020
     * @note[short] iOS: 0x58bc4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5447b8
     * @note[short] MacOS (Intel): 0x6187f0
     * @note[short] Windows: 0x302d90
     * @note[short] iOS: 0x5a8b8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x544630
     * @note[short] MacOS (Intel): 0x618680
     * @note[short] Windows: 0x7b5c0
     * @note[short] iOS: 0x5a7ec
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x544700
     * @note[short] MacOS (Intel): 0x618740
     * @note[short] Windows: 0x7b620
     * @note[short] iOS: 0x5a858
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
    cocos2d::CCLabelBMFont* m_audioTrackName;
    CCMenuItemSpriteExtra* m_songLeftBtn;
    CCMenuItemSpriteExtra* m_songRightBtn;
    CCMenuItemSpriteExtra* m_normalBtn;
    CCMenuItemSpriteExtra* m_customBtn;
    CCTextInputNode* m_enterSongID;
    cocos2d::CCArray* m_commonSongNodes;
    cocos2d::CCArray* m_normalSongNodes;
    cocos2d::CCArray* m_customSongNodes;
};
