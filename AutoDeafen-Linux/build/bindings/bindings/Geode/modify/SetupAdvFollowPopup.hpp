#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAdvFollowPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_selectPremadeClosed
		#define GEODE_STATICS_selectPremadeClosed
		GEODE_AS_STATIC_FUNCTION(selectPremadeClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onMode
		#define GEODE_STATICS_onMode
		GEODE_AS_STATIC_FUNCTION(onMode) 
	#endif

	#ifndef GEODE_STATICS_onPremade
		#define GEODE_STATICS_onPremade
		GEODE_AS_STATIC_FUNCTION(onPremade) 
	#endif

	#ifndef GEODE_STATICS_updateMode
		#define GEODE_STATICS_updateMode
		GEODE_AS_STATIC_FUNCTION(updateMode) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		#define GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		#define GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectPremadeClosed
		#define GEODE_CONCEPT_CHECK_selectPremadeClosed
		GEODE_CONCEPT_FUNCTION_CHECK(selectPremadeClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMode
		#define GEODE_CONCEPT_CHECK_onMode
		GEODE_CONCEPT_FUNCTION_CHECK(onMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPremade
		#define GEODE_CONCEPT_CHECK_onPremade
		GEODE_CONCEPT_FUNCTION_CHECK(onPremade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMode
		#define GEODE_CONCEPT_CHECK_updateMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateMode) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAdvFollowPopup> : ModifyBase<ModifyDerive<Der, SetupAdvFollowPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAdvFollowPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAdvFollowPopup>>::ModifyBase;
		using Base = SetupAdvFollowPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ea770, Default, SetupAdvFollowPopup, create, AdvancedFollowTriggerObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x287920, Thiscall, SetupAdvFollowPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ed950, Thiscall, SetupAdvFollowPopup, updateDefaultTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3eda40, Thiscall, SetupAdvFollowPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3edd80, Thiscall, SetupAdvFollowPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ee030, Thiscall, SetupAdvFollowPopup, selectPremadeClosed, SelectPremadeLayer*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ea890, Thiscall, SetupAdvFollowPopup, init, AdvancedFollowTriggerObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ede30, Thiscall, SetupAdvFollowPopup, onMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3edf00, Thiscall, SetupAdvFollowPopup, onPremade, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ede60, Thiscall, SetupAdvFollowPopup, updateMode, int)
		}
	};
}
