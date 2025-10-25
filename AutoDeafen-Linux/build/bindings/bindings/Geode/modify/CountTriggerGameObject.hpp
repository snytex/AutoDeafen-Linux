#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CountTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
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

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CountTriggerGameObject> : ModifyBase<ModifyDerive<Der, CountTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CountTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, CountTriggerGameObject>>::ModifyBase;
		using Base = CountTriggerGameObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CountTriggerGameObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a26c0, Thiscall, CountTriggerGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a2b30, Thiscall, CountTriggerGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a2e90, Thiscall, CountTriggerGameObject, getSaveString, GJBaseGameLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CountTriggerGameObject, init, char const*)
		}
	};
}
