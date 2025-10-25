#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJTransformState.hpp"

class UndoObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "UndoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UndoObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UndoObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~UndoObject();

    /**
     * @note[short] MacOS (ARM): 0xc7594
     * @note[short] MacOS (Intel): 0xe0290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x359568
     * @note[short] Android
     */
    static UndoObject* create(GameObject* object, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xca030
     * @note[short] MacOS (Intel): 0xe2fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35b554
     * @note[short] Android
     */
    static UndoObject* createWithArray(cocos2d::CCArray* array, UndoCommand command);

    /**
     * @note[short] Android
     */
    static UndoObject* createWithTransformObjects(cocos2d::CCArray* p0, UndoCommand p1);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* array, UndoCommand command);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GameObject* object, UndoCommand command);

    /**
     * @note[short] Android
     */
    bool initWithTransformObjects(cocos2d::CCArray* p0, UndoCommand p1);

    /**
     * @note[short] Android
     */
    void setObjects(cocos2d::CCArray* p0);
    GameObjectCopy* m_objectCopy;
    UndoCommand m_command;
    cocos2d::CCArray* m_objects;
    bool m_redo;
    bool m_undoTransform;
    GJTransformState m_transformState;
};
