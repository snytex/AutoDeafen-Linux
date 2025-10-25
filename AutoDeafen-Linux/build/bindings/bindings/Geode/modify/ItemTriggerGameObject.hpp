#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ItemTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
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

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ItemTriggerGameObject> : ModifyBase<ModifyDerive<Der, ItemTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ItemTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, ItemTriggerGameObject>>::ModifyBase;
		using Base = ItemTriggerGameObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ItemTriggerGameObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a7160, Thiscall, ItemTriggerGameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a71a0, Thiscall, ItemTriggerGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a8280, Thiscall, ItemTriggerGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a7300, Thiscall, ItemTriggerGameObject, getSaveString, GJBaseGameLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ItemTriggerGameObject, init, char const*)
		}
	};
}
