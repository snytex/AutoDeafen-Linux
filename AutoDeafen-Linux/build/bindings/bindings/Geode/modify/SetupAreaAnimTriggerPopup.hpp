#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAreaAnimTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_createValueControlAdvancedAnim
		#define GEODE_STATICS_createValueControlAdvancedAnim
		GEODE_AS_STATIC_FUNCTION(createValueControlAdvancedAnim) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onDeactivateAnimValue
		#define GEODE_STATICS_onDeactivateAnimValue
		GEODE_AS_STATIC_FUNCTION(onDeactivateAnimValue) 
	#endif

	#ifndef GEODE_STATICS_updateTargetIDLabel
		#define GEODE_STATICS_updateTargetIDLabel
		GEODE_AS_STATIC_FUNCTION(updateTargetIDLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		#define GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createValueControlAdvancedAnim
		#define GEODE_CONCEPT_CHECK_createValueControlAdvancedAnim
		GEODE_CONCEPT_FUNCTION_CHECK(createValueControlAdvancedAnim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeactivateAnimValue
		#define GEODE_CONCEPT_CHECK_onDeactivateAnimValue
		GEODE_CONCEPT_FUNCTION_CHECK(onDeactivateAnimValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetIDLabel
		#define GEODE_CONCEPT_CHECK_updateTargetIDLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetIDLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAreaAnimTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAreaAnimTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAreaAnimTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAreaAnimTriggerPopup>>::ModifyBase;
		using Base = SetupAreaAnimTriggerPopup;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupAreaAnimTriggerPopup, create, EnterEffectObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fab00, Thiscall, SetupAreaAnimTriggerPopup, updateDefaultTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3facd0, Thiscall, SetupAreaAnimTriggerPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fa910, Thiscall, SetupAreaAnimTriggerPopup, createValueControlAdvancedAnim, int, gd::string, cocos2d::CCPoint, float, bool, InputValueType, int, bool, float, float, int, int, GJInputStyle)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f91a0, Thiscall, SetupAreaAnimTriggerPopup, init, EnterEffectObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fac60, Thiscall, SetupAreaAnimTriggerPopup, onDeactivateAnimValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3fabe0, Thiscall, SetupAreaAnimTriggerPopup, updateTargetIDLabel, )
		}
	};
}
