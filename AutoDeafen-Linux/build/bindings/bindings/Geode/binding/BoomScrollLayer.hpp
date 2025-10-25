#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomScrollLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "BoomScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomScrollLayer, cocos2d::CCLayer)

    /**
     * @note[short] iOS: 0x12fca0
     * @note[short] Android: Rebinded
     */
     BoomScrollLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~BoomScrollLayer();

    /**
     * @note[short] MacOS (ARM): 0x3204b4
     * @note[short] MacOS (Intel): 0x391a10
     * @note[short] Windows: 0x3d060
     * @note[short] iOS: 0x12e27c
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int unk1, bool unk2, cocos2d::CCArray* unk3, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x320880
     * @note[short] MacOS (Intel): 0x391e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12e5b4
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int unk1, bool unk2);

    /**
     * @note[short] MacOS (ARM): 0x321ae4
     * @note[short] MacOS (Intel): 0x393220
     * @note[short] Windows: 0x3dbd0
     * @note[short] iOS: 0x12f1dc
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x3225ec
     * @note[short] MacOS (Intel): 0x393d50
     * @note[short] Windows: 0x3e710
     * @note[short] iOS: 0x12f7d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3226b8
     * @note[short] MacOS (Intel): 0x393e40
     * @note[short] Windows: 0x3e7c0
     * @note[short] iOS: 0x12f88c
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x322974
     * @note[short] MacOS (Intel): 0x394160
     * @note[short] Windows: 0x3eaf0
     * @note[short] iOS: 0x12faa4
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x32241c
     * @note[short] MacOS (Intel): 0x393b90
     * @note[short] Windows: 0x3e630
     * @note[short] iOS: 0x12f780
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3222a4
     * @note[short] MacOS (Intel): 0x393a00
     * @note[short] Windows: 0x3e5a0
     * @note[short] iOS: 0x12f648
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3220e0
     * @note[short] MacOS (Intel): 0x393840
     * @note[short] Android
     */
    void addPage(cocos2d::CCLayer* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x322070
     * @note[short] MacOS (Intel): 0x3937c0
     * @note[short] Android
     */
    void addPage(cocos2d::CCLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x322340
     * @note[short] MacOS (Intel): 0x393ab0
     * @note[short] Android
     */
    void cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    void claimTouch(cocos2d::CCTouch* p0);

    /**
     * @note[short] MacOS (ARM): 0x3216c0
     * @note[short] MacOS (Intel): 0x392d00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCLayer* getPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x321a10
     * @note[short] MacOS (Intel): 0x393150
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getRelativePageForNum(int page);

    /**
     * @note[short] MacOS (ARM): 0x321670
     * @note[short] MacOS (Intel): 0x392cb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativePosForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x32136c
     * @note[short] MacOS (Intel): 0x392960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getTotalPages();

    /**
     * @note[short] MacOS (ARM): 0x32056c
     * @note[short] MacOS (Intel): 0x391aa0
     * @note[short] Windows: 0x3d230
     * @note[short] iOS: 0x12e320
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);

    /**
     * @note[short] MacOS (ARM): 0x321ccc
     * @note[short] MacOS (Intel): 0x393410
     * @note[short] Windows: 0x3ddc0
     * @note[short] iOS: 0x12f2c0
     * @note[short] Android
     */
    void instantMoveToPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x321da4
     * @note[short] MacOS (Intel): 0x3934f0
     * @note[short] Windows: 0x3dea0
     * @note[short] iOS: 0x12f398
     * @note[short] Android
     */
    void moveToPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x321b3c
     * @note[short] MacOS (Intel): 0x393280
     * @note[short] Windows: 0x3dc30
     * @note[short] iOS: 0x12f234
     * @note[short] Android
     */
    void moveToPageEnded();

    /**
     * @note[short] MacOS (ARM): 0x321924
     * @note[short] MacOS (Intel): 0x393070
     * @note[short] Windows: 0x3dcc0
     * @note[short] iOS: 0x12f030
     * @note[short] Android
     */
    int pageNumberForPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x321c78
     * @note[short] MacOS (Intel): 0x3933c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint positionForPageWithNumber(int page);

    /**
     * @note[short] MacOS (ARM): 0x322018
     * @note[short] MacOS (Intel): 0x393760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12f5f0
     * @note[short] Android
     */
    void quickUpdate();

    /**
     * @note[short] MacOS (ARM): 0x322148
     * @note[short] MacOS (Intel): 0x3938b0
     * @note[short] Android
     */
    void removePage(cocos2d::CCLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x3221dc
     * @note[short] MacOS (Intel): 0x393940
     * @note[short] Android
     */
    void removePageWithNumber(int p0);

    /**
     * @note[short] MacOS (ARM): 0x320b14
     * @note[short] MacOS (Intel): 0x392090
     * @note[short] Windows: 0x3e060
     * @note[short] iOS: 0x12e79c
     * @note[short] Android
     */
    void repositionPagesLooped();

    /**
     * @note[short] Android
     */
    void selectPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x321608
     * @note[short] MacOS (Intel): 0x392c40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setDotScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x3209cc
     * @note[short] MacOS (Intel): 0x391f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12e65c
     * @note[short] Android
     */
    void setPagesIndicatorPosition(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x321124
     * @note[short] MacOS (Intel): 0x392710
     * @note[short] Windows: 0x3d5a0
     * @note[short] iOS: 0x12eaac
     * @note[short] Android
     */
    void setupDynamicScrolling(cocos2d::CCArray* p0, DynamicScrollDelegate* p1);

    /**
     * @note[short] MacOS (ARM): 0x321a78
     * @note[short] MacOS (Intel): 0x3931b0
     * @note[short] Windows: 0x3db60
     * @note[short] iOS: 0x12f170
     * @note[short] Android
     */
    void togglePageIndicators(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x321388
     * @note[short] MacOS (Intel): 0x392990
     * @note[short] Windows: 0x3d960
     * @note[short] iOS: 0x12ed10
     * @note[short] Android
     */
    void updateDots(float p0);

    /**
     * @note[short] MacOS (ARM): 0x3209f4
     * @note[short] MacOS (Intel): 0x391f70
     * @note[short] Windows: 0x3d840
     * @note[short] iOS: 0x12e684
     * @note[short] Android
     */
    void updatePages();
    cocos2d::CCArray* m_dots;
    int m_slowPage;
    float m_touchX;
    float m_touchQuotient;
    bool m_looped;
    DynamicScrollDelegate* m_dynamicDelegate;
    cocos2d::CCArray* m_dynamicObjects;
    bool m_dynamic;
    int m_touchType;
    bool m_ignoreTouchCancel;
    cocos2d::CCTouch* m_touch;
    cocos2d::CCArray* m_pages;
    double m_touchTime;
    cocos2d::CCPoint m_position;
    ExtendedLayer* m_extendedLayer;
    cocos2d::CCRect m_rect;
    float m_unkFloat1;
    float m_maxSpeed;
    float m_minSpeed;
    float m_unkFloat2;
    BoomScrollLayerDelegate* m_delegate;
    bool m_pageMoving;
    bool m_pagesInvisible;
    float m_unkFloat3;
    float m_unkFloat4;
    float m_width;
    bool m_cancelAndStealTouch;
    bool m_dotsVisible;
    cocos2d::CCPoint m_dotPosition;
    cocos2d::ccColor4B m_unkColor1;
    cocos2d::ccColor4B m_unkColor2;
    int m_page;
    float m_pageOffset;
    void* m_unkPtr;
    bool m_doVisit;
    cocos2d::CCRect m_clippingRect;
};
