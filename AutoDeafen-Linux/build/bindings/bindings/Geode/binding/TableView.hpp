#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCIndexPath.hpp"
#include "CCScrollLayerExt.hpp"
#include "CCScrollLayerExtDelegate.hpp"

class TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate {
public:
    static constexpr auto CLASS_NAME = "TableView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TableView, CCScrollLayerExt)
	inline TableView(cocos2d::CCRect rect) : CCScrollLayerExt(rect) {
        m_touchStartPosition2 = cocos2d::CCPointMake(0.f, 0.f);
        m_unknown2 = cocos2d::CCPointMake(0.f, 0.f);
        m_touchPosition2 = cocos2d::CCPointMake(0.f, 0.f);
        m_tableDelegate = nullptr;
        m_dataSource = nullptr;
        m_cellDelegate = nullptr;
        m_unused2 = false;
        this->setTouchEnabled(true);
        this->setMouseEnabled(true);
        m_vScrollbarVisible = false;
        m_hScrollbarVisible = false;
        m_disableHorizontal = false;
        m_unused3 = nullptr;
        m_delegate = this;
        m_touchOutOfBoundary = false;
        m_array2 = cocos2d::CCArray::create();
        m_array2->retain();
        m_cellArray = cocos2d::CCArray::create();
        m_cellArray->retain();
        m_indexPathArray = cocos2d::CCArray::create();
        m_indexPathArray->retain();
        m_touchLastY = 0.f;
        m_cancellingTouches = false;
        m_idk2 = false;
    }

    /**
     * @note[short] MacOS (ARM): 0x536c94
     * @note[short] MacOS (Intel): 0x609ab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fe96c
     * @note[short] Android
     */
    static TableView* create(TableViewDelegate* tvd, TableViewDataSource* tvds, TableViewCellDelegate* tvcd, cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x537ea4
     * @note[short] MacOS (Intel): 0x60ae40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ff6c4
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x537ea8
     * @note[short] MacOS (Intel): 0x60ae50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ff6c8
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x538024
     * @note[short] MacOS (Intel): 0x60aff0
     * @note[short] Windows: 0x75250
     * @note[short] iOS: 0x2ff804
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x538a88
     * @note[short] MacOS (Intel): 0x60bb20
     * @note[short] Windows: 0x754e0
     * @note[short] iOS: 0x2fffbc
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x538840
     * @note[short] MacOS (Intel): 0x60b8e0
     * @note[short] Windows: 0x75400
     * @note[short] iOS: 0x2ffe48
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x5389ac
     * @note[short] MacOS (Intel): 0x60ba60
     * @note[short] Windows: 0x75460
     * @note[short] iOS: 0x2fff5c
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x537eac
     * @note[short] MacOS (Intel): 0x60ae60
     * @note[short] Windows: 0x3e5a0
     * @note[short] iOS: 0x2ff6cc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x538b7c
     * @note[short] MacOS (Intel): 0x60bc10
     * @note[short] Windows: 0x75a90
     * @note[short] iOS: 0x300084
     * @note[short] Android
     */
    virtual void scrollWheel(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x5396d8
     * @note[short] MacOS (Intel): 0x60c810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30098c
     * @note[short] Android: Out of line
     */
    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] MacOS (ARM): 0x5396e0
     * @note[short] MacOS (Intel): 0x60c830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x300994
     * @note[short] Android: Out of line
     */
    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] MacOS (ARM): 0x5396e8
     * @note[short] MacOS (Intel): 0x60c850
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30099c
     * @note[short] Android: Out of line
     */
    virtual void scrollViewTouchMoving(CCScrollLayerExt* p0);

    /**
     * @note[short] MacOS (ARM): 0x5396f0
     * @note[short] MacOS (Intel): 0x60c870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3009a4
     * @note[short] Android: Out of line
     */
    virtual void scrollViewDidEndMoving(CCScrollLayerExt* p0);

    /**
     * @note[short] MacOS (ARM): 0x537f48
     * @note[short] MacOS (Intel): 0x60af10
     * @note[short] Android
     */
    void cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Android
     */
    TodoReturn cellForRowAtIndexPath(CCIndexPath& p0);

    /**
     * @note[short] Android
     */
    TodoReturn cellForTouch(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfCell(cocos2d::CCPoint& p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfCell(TableViewCell* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfContent(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkFirstCell(TableViewCell* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkLastCell(TableViewCell* p0);

    /**
     * @note[short] Android
     */
    TodoReturn claimTouch(cocos2d::CCTouch* p0);

    /**
     * @note[short] MacOS (ARM): 0x537644
     * @note[short] MacOS (Intel): 0x60a560
     * @note[short] Android
     */
    void deleteTableViewCell(TableViewCell* p0);

    /**
     * @note[short] Android
     */
    TodoReturn dequeueReusableCellWithIdentifier(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x53716c
     * @note[short] MacOS (Intel): 0x60a040
     * @note[short] Android
     */
    TodoReturn initTableViewCells();

    /**
     * @note[short] Android
     */
    bool isDuplicateIndexPath(CCIndexPath& p0);

    /**
     * @note[short] Android
     */
    bool isDuplicateInVisibleCellArray(CCIndexPath* p0);

    /**
     * @note[short] MacOS (ARM): 0x53794c
     * @note[short] MacOS (Intel): 0x60a890
     * @note[short] Windows: 0x74d00
     * @note[short] iOS: 0x2ff228
     * @note[short] Android
     */
    void reloadData();

    /**
     * @note[short] Android
     */
    TodoReturn removeIndexPathFromPathAddedArray(CCIndexPath& p0);

    /**
     * @note[short] Android
     */
    TodoReturn scrollToIndexPath(CCIndexPath& p0);

    /**
     * @note[short] Android
     */
    TodoReturn touchFinish(cocos2d::CCTouch* p0);
    bool m_touchOutOfBoundary;
    cocos2d::CCTouch* m_touchStart;
    cocos2d::CCPoint m_touchStartPosition2;
    cocos2d::CCPoint m_unknown2;
    cocos2d::CCPoint m_touchPosition2;
    TableViewCell* m_touchedCell;
    bool m_touchMoved;
    cocos2d::CCArray* m_cellArray;
    cocos2d::CCArray* m_array2;
    cocos2d::CCArray* m_indexPathArray;
    TableViewDelegate* m_tableDelegate;
    TableViewDataSource* m_dataSource;
    TableViewCellDelegate* m_cellDelegate;
    bool m_unused2;
    void* m_unused3;
    int m_unused4;
    float m_touchLastY;
    bool m_cancellingTouches;
    bool m_idk2;
};
