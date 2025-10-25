#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ChanceTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_editChanceObject
		#define GEODE_STATICS_editChanceObject
		GEODE_AS_STATIC_FUNCTION(editChanceObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_remapChanceObjects
		#define GEODE_STATICS_remapChanceObjects
		GEODE_AS_STATIC_FUNCTION(remapChanceObjects) 
	#endif

	#ifndef GEODE_STATICS_revertChanceRemap
		#define GEODE_STATICS_revertChanceRemap
		GEODE_AS_STATIC_FUNCTION(revertChanceRemap) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_editChanceObject
		#define GEODE_CONCEPT_CHECK_editChanceObject
		GEODE_CONCEPT_FUNCTION_CHECK(editChanceObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_remapChanceObjects
		#define GEODE_CONCEPT_CHECK_remapChanceObjects
		GEODE_CONCEPT_FUNCTION_CHECK(remapChanceObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_revertChanceRemap
		#define GEODE_CONCEPT_CHECK_revertChanceRemap
		GEODE_CONCEPT_FUNCTION_CHECK(revertChanceRemap) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ChanceTriggerGameObject> : ModifyBase<ModifyDerive<Der, ChanceTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ChanceTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, ChanceTriggerGameObject>>::ModifyBase;
		using Base = ChanceTriggerGameObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ChanceTriggerGameObject, editChanceObject, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ChanceTriggerGameObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49b580, Thiscall, ChanceTriggerGameObject, remapChanceObjects, gd::unordered_map<int, int> const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ChanceTriggerGameObject, revertChanceRemap, )
		}
	};
}
