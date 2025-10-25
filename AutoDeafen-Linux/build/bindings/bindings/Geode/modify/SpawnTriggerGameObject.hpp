#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpawnTriggerGameObject.hpp>
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

	#ifndef GEODE_STATICS_addRemap
		#define GEODE_STATICS_addRemap
		GEODE_AS_STATIC_FUNCTION(addRemap) 
	#endif

	#ifndef GEODE_STATICS_changeRemap
		#define GEODE_STATICS_changeRemap
		GEODE_AS_STATIC_FUNCTION(changeRemap) 
	#endif

	#ifndef GEODE_STATICS_removeRemap
		#define GEODE_STATICS_removeRemap
		GEODE_AS_STATIC_FUNCTION(removeRemap) 
	#endif

	#ifndef GEODE_STATICS_updateRemapKeys
		#define GEODE_STATICS_updateRemapKeys
		GEODE_AS_STATIC_FUNCTION(updateRemapKeys) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_addRemap
		#define GEODE_CONCEPT_CHECK_addRemap
		GEODE_CONCEPT_FUNCTION_CHECK(addRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_changeRemap
		#define GEODE_CONCEPT_CHECK_changeRemap
		GEODE_CONCEPT_FUNCTION_CHECK(changeRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeRemap
		#define GEODE_CONCEPT_CHECK_removeRemap
		GEODE_CONCEPT_FUNCTION_CHECK(removeRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRemapKeys
		#define GEODE_CONCEPT_CHECK_updateRemapKeys
		GEODE_CONCEPT_FUNCTION_CHECK(updateRemapKeys) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpawnTriggerGameObject> : ModifyBase<ModifyDerive<Der, SpawnTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpawnTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, SpawnTriggerGameObject>>::ModifyBase;
		using Base = SpawnTriggerGameObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerGameObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0530, Thiscall, SpawnTriggerGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a06a0, Thiscall, SpawnTriggerGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0a10, Thiscall, SpawnTriggerGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0d50, Thiscall, SpawnTriggerGameObject, getSaveString, GJBaseGameLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerGameObject, addRemap, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerGameObject, changeRemap, int, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SpawnTriggerGameObject, removeRemap, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a05a0, Thiscall, SpawnTriggerGameObject, updateRemapKeys, gd::vector<int> const&)
		}
	};
}
