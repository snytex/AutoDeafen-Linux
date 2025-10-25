#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EffectGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_setRScaleX
		#define GEODE_STATICS_setRScaleX
		GEODE_AS_STATIC_FUNCTION(setRScaleX) 
	#endif

	#ifndef GEODE_STATICS_setRScaleY
		#define GEODE_STATICS_setRScaleY
		GEODE_AS_STATIC_FUNCTION(setRScaleY) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_spawnXPosition
		#define GEODE_STATICS_spawnXPosition
		GEODE_AS_STATIC_FUNCTION(spawnXPosition) 
	#endif

	#ifndef GEODE_STATICS_canReverse
		#define GEODE_STATICS_canReverse
		GEODE_AS_STATIC_FUNCTION(canReverse) 
	#endif

	#ifndef GEODE_STATICS_canBeOrdered
		#define GEODE_STATICS_canBeOrdered
		GEODE_AS_STATIC_FUNCTION(canBeOrdered) 
	#endif

	#ifndef GEODE_STATICS_getObjectLabel
		#define GEODE_STATICS_getObjectLabel
		GEODE_AS_STATIC_FUNCTION(getObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_setObjectLabel
		#define GEODE_STATICS_setObjectLabel
		GEODE_AS_STATIC_FUNCTION(setObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_stateSensitiveOff
		#define GEODE_STATICS_stateSensitiveOff
		GEODE_AS_STATIC_FUNCTION(stateSensitiveOff) 
	#endif

	#ifndef GEODE_STATICS_getTargetColorIndex
		#define GEODE_STATICS_getTargetColorIndex
		GEODE_AS_STATIC_FUNCTION(getTargetColorIndex) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_playTriggerEffect
		#define GEODE_STATICS_playTriggerEffect
		GEODE_AS_STATIC_FUNCTION(playTriggerEffect) 
	#endif

	#ifndef GEODE_STATICS_resetSpawnTrigger
		#define GEODE_STATICS_resetSpawnTrigger
		GEODE_AS_STATIC_FUNCTION(resetSpawnTrigger) 
	#endif

	#ifndef GEODE_STATICS_triggerEffectFinished
		#define GEODE_STATICS_triggerEffectFinished
		GEODE_AS_STATIC_FUNCTION(triggerEffectFinished) 
	#endif

	#ifndef GEODE_STATICS_updateInteractiveHover
		#define GEODE_STATICS_updateInteractiveHover
		GEODE_AS_STATIC_FUNCTION(updateInteractiveHover) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialColor
		#define GEODE_STATICS_updateSpecialColor
		GEODE_AS_STATIC_FUNCTION(updateSpecialColor) 
	#endif

	#ifndef GEODE_STATICS_updateSpeedModType
		#define GEODE_STATICS_updateSpeedModType
		GEODE_AS_STATIC_FUNCTION(updateSpeedModType) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerObject
		#define GEODE_CONCEPT_CHECK_triggerObject
		GEODE_CONCEPT_FUNCTION_CHECK(triggerObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScaleX
		#define GEODE_CONCEPT_CHECK_setRScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setRScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScaleY
		#define GEODE_CONCEPT_CHECK_setRScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setRScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerActivated
		#define GEODE_CONCEPT_CHECK_triggerActivated
		GEODE_CONCEPT_FUNCTION_CHECK(triggerActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreObject
		#define GEODE_CONCEPT_CHECK_restoreObject
		GEODE_CONCEPT_FUNCTION_CHECK(restoreObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnXPosition
		#define GEODE_CONCEPT_CHECK_spawnXPosition
		GEODE_CONCEPT_FUNCTION_CHECK(spawnXPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canReverse
		#define GEODE_CONCEPT_CHECK_canReverse
		GEODE_CONCEPT_FUNCTION_CHECK(canReverse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialSpawnObject
		#define GEODE_CONCEPT_CHECK_isSpecialSpawnObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialSpawnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canBeOrdered
		#define GEODE_CONCEPT_CHECK_canBeOrdered
		GEODE_CONCEPT_FUNCTION_CHECK(canBeOrdered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectLabel
		#define GEODE_CONCEPT_CHECK_getObjectLabel
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectLabel
		#define GEODE_CONCEPT_CHECK_setObjectLabel
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stateSensitiveOff
		#define GEODE_CONCEPT_CHECK_stateSensitiveOff
		GEODE_CONCEPT_FUNCTION_CHECK(stateSensitiveOff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetColorIndex
		#define GEODE_CONCEPT_CHECK_getTargetColorIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetColorIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playTriggerEffect
		#define GEODE_CONCEPT_CHECK_playTriggerEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playTriggerEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSpawnTrigger
		#define GEODE_CONCEPT_CHECK_resetSpawnTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(resetSpawnTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetID
		#define GEODE_CONCEPT_CHECK_setTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetID2
		#define GEODE_CONCEPT_CHECK_setTargetID2
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerEffectFinished
		#define GEODE_CONCEPT_CHECK_triggerEffectFinished
		GEODE_CONCEPT_FUNCTION_CHECK(triggerEffectFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInteractiveHover
		#define GEODE_CONCEPT_CHECK_updateInteractiveHover
		GEODE_CONCEPT_FUNCTION_CHECK(updateInteractiveHover) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpecialColor
		#define GEODE_CONCEPT_CHECK_updateSpecialColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpecialColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpeedModType
		#define GEODE_CONCEPT_CHECK_updateSpeedModType
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpeedModType) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EffectGameObject> : ModifyBase<ModifyDerive<Der, EffectGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EffectGameObject>>;
		using ModifyBase<ModifyDerive<Der, EffectGameObject>>::ModifyBase;
		using Base = EffectGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x47d040, Thiscall, EffectGameObject, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d790, Thiscall, EffectGameObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48ffb0, Thiscall, EffectGameObject, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48ffd0, Thiscall, EffectGameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d7d0, Thiscall, EffectGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x490230, Thiscall, EffectGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4932b0, Thiscall, EffectGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d210, Thiscall, EffectGameObject, setRScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d260, Thiscall, EffectGameObject, setRScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48ff90, Thiscall, EffectGameObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48fd80, Thiscall, EffectGameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48ff50, Thiscall, EffectGameObject, spawnXPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x493160, Thiscall, EffectGameObject, canReverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EffectGameObject, isSpecialSpawnObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x493240, Thiscall, EffectGameObject, canBeOrdered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47d2b0, Thiscall, EffectGameObject, getObjectLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47d2c0, Thiscall, EffectGameObject, setObjectLabel, cocos2d::CCLabelBMFont*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48fcd0, Thiscall, EffectGameObject, stateSensitiveOff, GJBaseGameLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, getTargetColorIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d1a0, Thiscall, EffectGameObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d2b0, Thiscall, EffectGameObject, playTriggerEffect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EffectGameObject, resetSpawnTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EffectGameObject, setTargetID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EffectGameObject, setTargetID2, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48d780, Thiscall, EffectGameObject, triggerEffectFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48fe30, Thiscall, EffectGameObject, updateInteractiveHover, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48fdb0, Thiscall, EffectGameObject, updateSpecialColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x493010, Thiscall, EffectGameObject, updateSpeedModType, )
		}
	};
}
