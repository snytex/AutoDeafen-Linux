#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CheckpointGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setupCustomSprites
		#define GEODE_STATICS_setupCustomSprites
		GEODE_AS_STATIC_FUNCTION(setupCustomSprites) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
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

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_updateSyncedAnimation
		#define GEODE_STATICS_updateSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(updateSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_resetCheckpoint
		#define GEODE_STATICS_resetCheckpoint
		GEODE_AS_STATIC_FUNCTION(resetCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_updateCheckpointSpriteVisibility
		#define GEODE_STATICS_updateCheckpointSpriteVisibility
		GEODE_AS_STATIC_FUNCTION(updateCheckpointSpriteVisibility) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCustomSprites
		#define GEODE_CONCEPT_CHECK_setupCustomSprites
		GEODE_CONCEPT_FUNCTION_CHECK(setupCustomSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
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

	#ifndef GEODE_CONCEPT_CHECK_triggerActivated
		#define GEODE_CONCEPT_CHECK_triggerActivated
		GEODE_CONCEPT_FUNCTION_CHECK(triggerActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreObject
		#define GEODE_CONCEPT_CHECK_restoreObject
		GEODE_CONCEPT_FUNCTION_CHECK(restoreObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSyncedAnimation
		#define GEODE_CONCEPT_CHECK_updateSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(updateSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCheckpoint
		#define GEODE_CONCEPT_CHECK_resetCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(resetCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCheckpointSpriteVisibility
		#define GEODE_CONCEPT_CHECK_updateCheckpointSpriteVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateCheckpointSpriteVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CheckpointGameObject> : ModifyBase<ModifyDerive<Der, CheckpointGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CheckpointGameObject>>;
		using ModifyBase<ModifyDerive<Der, CheckpointGameObject>>::ModifyBase;
		using Base = CheckpointGameObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointGameObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a1240, Thiscall, CheckpointGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a1680, Thiscall, CheckpointGameObject, setupCustomSprites, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a2470, Thiscall, CheckpointGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a12c0, Thiscall, CheckpointGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a2340, Thiscall, CheckpointGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a2070, Thiscall, CheckpointGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a12e0, Thiscall, CheckpointGameObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a2680, Thiscall, CheckpointGameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a1d20, Thiscall, CheckpointGameObject, updateSyncedAnimation, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a24f0, Thiscall, CheckpointGameObject, resetCheckpoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CheckpointGameObject, updateCheckpointSpriteVisibility, )
		}
	};
}
