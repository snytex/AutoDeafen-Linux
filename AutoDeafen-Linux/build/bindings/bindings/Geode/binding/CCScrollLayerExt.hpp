#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCContentLayer.hpp"

class CCScrollLayerExt : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CCScrollLayerExt";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCScrollLayerExt, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x396eb8
     * @note[short] MacOS (Intel): 0x41b380
     * @note[short] Windows: 0x46a50
     * @note[short] iOS: 0x300a10
     * @note[short] Android: Rebinded
     */
     CCScrollLayerExt(cocos2d::CCRect p0);

    /**
     * @note[short] MacOS (ARM): 0x3980f4
     * @note[short] MacOS (Intel): 0x41c710
     * @note[short] Windows: 0x47ad0
     * @note[short] iOS: 0x3019ec
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x397afc
     * @note[short] MacOS (Intel): 0x41c0b0
     * @note[short] Windows: 0x47580
     * @note[short] iOS: 0x301428
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x397eb8
     * @note[short] MacOS (Intel): 0x41c4d0
     * @note[short] Windows: 0x47950
     * @note[short] iOS: 0x3017c4
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x397c18
     * @note[short] MacOS (Intel): 0x41c1d0
     * @note[short] Windows: 0x476a0
     * @note[short] iOS: 0x301534
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x397e54
     * @note[short] MacOS (Intel): 0x41c470
     * @note[short] Windows: 0x47920
     * @note[short] iOS: 0x301760
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x397ac4
     * @note[short] MacOS (Intel): 0x41c070
     * @note[short] Windows: 0x47530
     * @note[short] iOS: 0x3013f0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3981e8
     * @note[short] MacOS (Intel): 0x41c810
     * @note[short] Windows: 0x47c00
     * @note[short] iOS: 0x301ae0
     * @note[short] Android
     */
    virtual void preVisitWithClippingRect(cocos2d::CCRect p0);

    /**
     * @note[short] MacOS (ARM): 0x39827c
     * @note[short] MacOS (Intel): 0x41c890
     * @note[short] Windows: 0x47ca0
     * @note[short] iOS: 0x301b74
     * @note[short] Android
     */
    virtual void postVisit();

    /**
     * @note[short] Android
     */
    TodoReturn constraintContent();

    /**
     * @note[short] Android
     */
    TodoReturn doConstraintContent(bool p0);
	inline float getMaxY() {
        return m_scrollLimitBottom;
    }
	inline float getMinY() {
        return this->getContentSize().height - m_contentLayer->getContentSize().height - m_scrollLimitTop;
    }

    /**
     * @note[short] MacOS (ARM): 0x3975d4
     * @note[short] MacOS (Intel): 0x41baa0
     * @note[short] Windows: 0x47000
     * @note[short] iOS: 0x301054
     * @note[short] Android
     */
    void moveToTop();

    /**
     * @note[short] MacOS (ARM): 0x39752c
     * @note[short] MacOS (Intel): 0x41ba00
     * @note[short] Windows: 0x46f60
     * @note[short] iOS: 0x300fac
     * @note[short] Android
     */
    void moveToTopWithOffset(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn scrollingEnd();

    /**
     * @note[short] MacOS (ARM): 0x39802c
     * @note[short] MacOS (Intel): 0x41c650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x301924
     * @note[short] Android
     */
    void scrollLayer(float offset);

    /**
     * @note[short] Android
     */
    void setContentLayerSize(cocos2d::CCSize p0);

    /**
     * @note[short] Android
     */
    void setContentOffset(cocos2d::CCPoint p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateIndicators(float p0);
    cocos2d::CCTouch* m_touch;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_touchStartPosition;
    cocos2d::cc_timeval m_timeValue;
    bool m_touchDown;
    bool m_notAtEndOfScroll;
    cocos2d::CCLayerColor* m_verticalScrollbar;
    cocos2d::CCLayerColor* m_horizontalScrollbar;
    CCScrollLayerExtDelegate* m_delegate;
    CCContentLayer* m_contentLayer;
    bool m_cutContent;
    bool m_vScrollbarVisible;
    bool m_hScrollbarVisible;
    bool m_disableHorizontal;
    bool m_disableVertical;
    bool m_disableMovement;
    float m_scrollLimitTop;
    float m_scrollLimitBottom;
    float m_peekLimitTop;
    float m_peekLimitBottom;
};
