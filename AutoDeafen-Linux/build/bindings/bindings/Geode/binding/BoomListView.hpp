#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewDelegate.hpp"
#include "TableViewDataSource.hpp"

class BoomListView : public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
public:
    static constexpr auto CLASS_NAME = "BoomListView";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomListView, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BoomListView();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~BoomListView();

    /**
     * @note[short] MacOS (ARM): 0x29114c
     * @note[short] MacOS (Intel): 0x2f86d0
     * @note[short] Android
     */
    static BoomListView* create(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);

    /**
     * @note[short] MacOS (ARM): 0x291c44
     * @note[short] MacOS (Intel): 0x2f9360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d1398
     * @note[short] Android: Out of line
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x29145c
     * @note[short] MacOS (Intel): 0x2f8a30
     * @note[short] Windows: 0x3c350
     * @note[short] iOS: 0x1d0df4
     * @note[short] Android
     */
    virtual void setupList(float p0);

    /**
     * @note[short] MacOS (ARM): 0x2914dc
     * @note[short] MacOS (Intel): 0x2f8ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d0e74
     * @note[short] Android: Out of line
     */
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] MacOS (ARM): 0x2914ec
     * @note[short] MacOS (Intel): 0x2f8b10
     * @note[short] Windows: 0x3c3e0
     * @note[short] iOS: 0x1d0e84
     * @note[short] Android
     */
    virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] MacOS (ARM): 0x2914fc
     * @note[short] MacOS (Intel): 0x2f8b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d0e94
     * @note[short] Android: Out of line
     */
    virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] MacOS (ARM): 0x291504
     * @note[short] MacOS (Intel): 0x2f8b50
     * @note[short] Windows: 0x3c3f0
     * @note[short] iOS: 0x1d0e9c
     * @note[short] Android
     */
    virtual int numberOfRowsInSection(unsigned int p0, TableView* p1);

    /**
     * @note[short] MacOS (ARM): 0x291514
     * @note[short] MacOS (Intel): 0x2f8b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d0eac
     * @note[short] Android: Out of line
     */
    virtual unsigned int numberOfSectionsInTableView(TableView* p0);

    /**
     * @note[short] MacOS (ARM): 0x291524
     * @note[short] MacOS (Intel): 0x2f8ba0
     * @note[short] Windows: 0x3c410
     * @note[short] iOS: 0x1d0ebc
     * @note[short] Android
     */
    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] MacOS (ARM): 0x291c3c
     * @note[short] MacOS (Intel): 0x2f9340
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d1390
     * @note[short] Android: Out of line
     */
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);

    /**
     * @note[short] MacOS (ARM): 0x2914e4
     * @note[short] MacOS (Intel): 0x2f8af0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d0e7c
     * @note[short] Android: Out of line
     */
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] MacOS (ARM): 0x291640
     * @note[short] MacOS (Intel): 0x2f8cb0
     * @note[short] Windows: 0x3c4a0
     * @note[short] iOS: 0x1d0f50
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x2917e4
     * @note[short] MacOS (Intel): 0x2f8ef0
     * @note[short] Windows: 0x3c610
     * @note[short] iOS: 0x1d1048
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn addObjectToList(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x291258
     * @note[short] MacOS (Intel): 0x2f8800
     * @note[short] Windows: 0x3bfe0
     * @note[short] iOS: 0x1d0c00
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool init(cocos2d::CCArray* entries, BoomListType type, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x2913f0
     * @note[short] MacOS (Intel): 0x2f89b0
     * @note[short] Android
     */
    void lockList(bool p0);
    TableView* m_tableView;
    cocos2d::CCArray* m_entries;
    BoomListType m_type;
    float m_height;
    float m_width;
    float m_itemSeparation;
    int m_currentPage;
    bool m_locked;
};
