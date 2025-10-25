#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "KeyframeObject.hpp"

class GroupCommandObject2 {
public:
    static constexpr auto CLASS_NAME = "GroupCommandObject2";

    /**
     * @note[short] Android
     */
    TodoReturn reset();

    /**
     * @note[short] Android
     */
    TodoReturn resetDelta(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn runFollowCommand(double p0, double p1, double p2);

    /**
     * @note[short] Android
     */
    TodoReturn runMoveCommand(cocos2d::CCPoint p0, double p1, int p2, double p3, bool p4, bool p5, bool p6, bool p7, double p8, double p9);

    /**
     * @note[short] Android
     */
    TodoReturn runPlayerFollowCommand(double p0, double p1, int p2, double p3, double p4);

    /**
     * @note[short] Android
     */
    TodoReturn runRotateCommand(double p0, double p1, int p2, double p3, bool p4, int p5);

    /**
     * @note[short] Android
     */
    TodoReturn runTransformCommand(double p0, int p1, double p2);

    /**
     * @note[short] Android
     */
    TodoReturn step(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn stepTransformCommand(float p0, bool p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn updateAction(int p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn updateEffectAction(float p0, int p1);
    int m_groupCommandUniqueID;
    cocos2d::CCPoint m_moveOffset;
    EasingType m_easingType;
    double m_easingRate;
    double m_duration;
    double m_deltaTime;
    int m_targetGroupID;
    int m_centerGroupID;
    double m_currentXOffset;
    double m_currentYOffset;
    double m_deltaX;
    double m_deltaY;
    double m_oldDeltaX;
    double m_oldDeltaY;
    double m_lockedCurrentXOffset;
    double m_lockedCurrentYOffset;
    bool m_finished;
    bool m_disabled;
    bool m_finishRelated;
    bool m_lockToPlayerX;
    bool m_lockToPlayerY;
    bool m_lockToCameraX;
    bool m_lockToCameraY;
    bool m_lockedInX;
    bool m_lockedInY;
    double m_moveModX;
    double m_moveModY;
    double m_currentRotateOrTransformValue;
    double m_currentRotateOrTransformDelta;
    double m_someInterpValue1RelatedOne;
    double m_someInterpValue2RelatedOne;
    double m_rotationOffset;
    bool m_lockObjectRotation;
    int m_targetPlayer;
    double m_followXMod;
    double m_followYMod;
    int m_commandType;
    double m_someInterpValue1;
    double m_someInterpValue2;
    double m_keyframeRelated;
    double m_targetScaleX;
    double m_targetScaleY;
    double m_transformTriggerProperty450;
    double m_transformTriggerProperty451;
    double m_someInterpValue1RelatedZero;
    double m_someInterpValue2RelatedZero;
    bool m_onlyMove;
    bool m_transformRelatedFalse;
    bool m_relativeRotation;
    double m_someInterpValue1Related;
    double m_someInterpValue2Related;
    double m_followYSpeed;
    double m_followYDelay;
    int m_followYOffset;
    double m_followYMaxSpeed;
    int m_triggerUniqueID;
    int m_controlID;
    double m_deltaX_3;
    double m_deltaY_3;
    double m_oldDeltaX_3;
    double m_oldDeltaY_3;
    double m_Delta_3_Related;
    double m_unkDoubleMaybeUnused;
    int m_actionType1;
    int m_actionType2;
    double m_actionValue1;
    double m_actionValue2;
    bool m_someInterpValue1RelatedFalse;
    float m_deltaTimeInFloat;
    bool m_alreadyUpdated;
    bool m_doUpdate;
    gd::vector<KeyframeObject> m_keyframes;
    cocos2d::CCPoint m_splineRelated;
    GameObject* m_gameObject;
    float m_gameObjectRotation;
    gd::vector<int> m_remapKeys;
    bool m_someInterpValue2RelatedTrue;
    float m_unkFloat204;
};
