#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSpecialColorSelect.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_textForColorIdx
		#define GEODE_STATICS_textForColorIdx
		GEODE_AS_STATIC_FUNCTION(textForColorIdx) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_getButtonByTag
		#define GEODE_STATICS_getButtonByTag
		GEODE_AS_STATIC_FUNCTION(getButtonByTag) 
	#endif

	#ifndef GEODE_STATICS_highlightSelected
		#define GEODE_STATICS_highlightSelected
		GEODE_AS_STATIC_FUNCTION(highlightSelected) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSelectColor
		#define GEODE_STATICS_onSelectColor
		GEODE_AS_STATIC_FUNCTION(onSelectColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textForColorIdx
		#define GEODE_CONCEPT_CHECK_textForColorIdx
		GEODE_CONCEPT_FUNCTION_CHECK(textForColorIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getButtonByTag
		#define GEODE_CONCEPT_CHECK_getButtonByTag
		GEODE_CONCEPT_FUNCTION_CHECK(getButtonByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_highlightSelected
		#define GEODE_CONCEPT_CHECK_highlightSelected
		GEODE_CONCEPT_FUNCTION_CHECK(highlightSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectColor
		#define GEODE_CONCEPT_CHECK_onSelectColor
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSpecialColorSelect> : ModifyBase<ModifyDerive<Der, GJSpecialColorSelect>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSpecialColorSelect>>;
		using ModifyBase<ModifyDerive<Der, GJSpecialColorSelect>>::ModifyBase;
		using Base = GJSpecialColorSelect;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b0670, Default, GJSpecialColorSelect, create, int, GJSpecialColorSelectDelegate*, ColorSelectType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b13c0, Default, GJSpecialColorSelect, textForColorIdx, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b1370, Thiscall, GJSpecialColorSelect, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpecialColorSelect, getButtonByTag, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSpecialColorSelect, highlightSelected, ButtonSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b0780, Thiscall, GJSpecialColorSelect, init, int, GJSpecialColorSelectDelegate*, ColorSelectType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b1320, Thiscall, GJSpecialColorSelect, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b1240, Thiscall, GJSpecialColorSelect, onSelectColor, cocos2d::CCObject*)
		}
	};
}
