#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OptionsScrollLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_getRelevantObjects
		#define GEODE_STATICS_getRelevantObjects
		GEODE_AS_STATIC_FUNCTION(getRelevantObjects) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelevantObjects
		#define GEODE_CONCEPT_CHECK_getRelevantObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getRelevantObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupList
		#define GEODE_CONCEPT_CHECK_setupList
		GEODE_CONCEPT_FUNCTION_CHECK(setupList) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OptionsScrollLayer> : ModifyBase<ModifyDerive<Der, OptionsScrollLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OptionsScrollLayer>>;
		using ModifyBase<ModifyDerive<Der, OptionsScrollLayer>>::ModifyBase;
		using Base = OptionsScrollLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x325ca0, Default, OptionsScrollLayer, create, cocos2d::CCArray*, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x425d0, Thiscall, OptionsScrollLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x326150, Thiscall, OptionsScrollLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x326160, Thiscall, OptionsScrollLayer, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OptionsScrollLayer, getRelevantObjects, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(OptionsScrollLayer, init, cocos2d::CCArray*, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3260c0, Thiscall, OptionsScrollLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x325ef0, Thiscall, OptionsScrollLayer, setupList, cocos2d::CCArray*)
		}
	};
}
