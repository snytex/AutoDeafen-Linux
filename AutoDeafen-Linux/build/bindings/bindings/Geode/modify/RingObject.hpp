#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RingObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_setRScale
		#define GEODE_STATICS_setRScale
		GEODE_AS_STATIC_FUNCTION(setRScale) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_shouldDrawEditorHitbox
		#define GEODE_STATICS_shouldDrawEditorHitbox
		GEODE_AS_STATIC_FUNCTION(shouldDrawEditorHitbox) 
	#endif

	#ifndef GEODE_STATICS_powerOnObject
		#define GEODE_STATICS_powerOnObject
		GEODE_AS_STATIC_FUNCTION(powerOnObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_spawnCircle
		#define GEODE_STATICS_spawnCircle
		GEODE_AS_STATIC_FUNCTION(spawnCircle) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScale
		#define GEODE_CONCEPT_CHECK_setScale
		GEODE_CONCEPT_FUNCTION_CHECK(setScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation
		#define GEODE_CONCEPT_CHECK_setRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScale
		#define GEODE_CONCEPT_CHECK_setRScale
		GEODE_CONCEPT_FUNCTION_CHECK(setRScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerActivated
		#define GEODE_CONCEPT_CHECK_triggerActivated
		GEODE_CONCEPT_FUNCTION_CHECK(triggerActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDrawEditorHitbox
		#define GEODE_CONCEPT_CHECK_shouldDrawEditorHitbox
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDrawEditorHitbox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_powerOnObject
		#define GEODE_CONCEPT_CHECK_powerOnObject
		GEODE_CONCEPT_FUNCTION_CHECK(powerOnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnCircle
		#define GEODE_CONCEPT_CHECK_spawnCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnCircle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RingObject> : ModifyBase<ModifyDerive<Der, RingObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RingObject>>;
		using ModifyBase<ModifyDerive<Der, RingObject>>::ModifyBase;
		using Base = RingObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x489570, Default, RingObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4898f0, Thiscall, RingObject, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x38c9f0, Thiscall, RingObject, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4898d0, Thiscall, RingObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4899b0, Thiscall, RingObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x489ad0, Thiscall, RingObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x489920, Thiscall, RingObject, setRScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x489620, Thiscall, RingObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4899a0, Thiscall, RingObject, shouldDrawEditorHitbox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x489630, Thiscall, RingObject, powerOnObject, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RingObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4896d0, Thiscall, RingObject, spawnCircle, )
		}
	};
}
