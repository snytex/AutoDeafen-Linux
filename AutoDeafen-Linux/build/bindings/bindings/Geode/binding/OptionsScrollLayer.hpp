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
#include "TableViewCellDelegate.hpp"

class OptionsScrollLayer : public FLAlertLayer, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "OptionsScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsScrollLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x325ca0
     * @note[short] Android
     */
    static OptionsScrollLayer* create(cocos2d::CCArray* p0, bool p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x5282bc
     * @note[short] MacOS (Intel): 0x5f90f0
     * @note[short] Windows: 0x425d0
     * @note[short] iOS: 0x3bb598
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x528198
     * @note[short] MacOS (Intel): 0x5f8fc0
     * @note[short] Windows: 0x326150
     * @note[short] iOS: 0x3bb58c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5282f4
     * @note[short] MacOS (Intel): 0x5f9130
     * @note[short] Windows: 0x326160
     * @note[short] iOS: 0x3bb5d0
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getRelevantObjects(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, bool p1, int p2);

    /**
     * @note[short] Windows: 0x3260c0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x325ef0
     * @note[short] Android
     */
    void setupList(cocos2d::CCArray* p0);
    cocos2d::CCArray* m_optionObjects;
    GJCommentListLayer* m_listLayer;
    bool m_recreateList;
    int m_minCount;
};
