#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSequenceTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddChance
		#define GEODE_STATICS_onAddChance
		GEODE_AS_STATIC_FUNCTION(onAddChance) 
	#endif

	#ifndef GEODE_STATICS_onChangeOrder
		#define GEODE_STATICS_onChangeOrder
		GEODE_AS_STATIC_FUNCTION(onChangeOrder) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDButtons
		#define GEODE_STATICS_updateGroupIDButtons
		GEODE_AS_STATIC_FUNCTION(updateGroupIDButtons) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		#define GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddChance
		#define GEODE_CONCEPT_CHECK_onAddChance
		GEODE_CONCEPT_FUNCTION_CHECK(onAddChance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChangeOrder
		#define GEODE_CONCEPT_CHECK_onChangeOrder
		GEODE_CONCEPT_FUNCTION_CHECK(onChangeOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSelected
		#define GEODE_CONCEPT_CHECK_onDeleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelect
		#define GEODE_CONCEPT_CHECK_onSelect
		GEODE_CONCEPT_FUNCTION_CHECK(onSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroupIDButtons
		#define GEODE_CONCEPT_CHECK_updateGroupIDButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroupIDButtons) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSequenceTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupSequenceTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSequenceTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSequenceTriggerPopup>>::ModifyBase;
		using Base = SetupSequenceTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42b000, Default, SetupSequenceTriggerPopup, create, SequenceTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42c340, Thiscall, SetupSequenceTriggerPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42b130, Thiscall, SetupSequenceTriggerPopup, init, SequenceTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42c990, Thiscall, SetupSequenceTriggerPopup, onAddChance, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42cad0, Thiscall, SetupSequenceTriggerPopup, onChangeOrder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42cbb0, Thiscall, SetupSequenceTriggerPopup, onDeleteSelected, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42c910, Thiscall, SetupSequenceTriggerPopup, onSelect, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42c430, Thiscall, SetupSequenceTriggerPopup, updateGroupIDButtons, )
		}
	};
}
