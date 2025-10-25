#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpriteCOpacity.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrame
		#define GEODE_STATICS_createWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithSpriteFrame
		#define GEODE_CONCEPT_CHECK_createWithSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(createWithSpriteFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		#define GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(createWithSpriteFrameName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCSpriteCOpacity> : ModifyBase<ModifyDerive<Der, CCSpriteCOpacity>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCSpriteCOpacity>>;
		using ModifyBase<ModifyDerive<Der, CCSpriteCOpacity>>::ModifyBase;
		using Base = CCSpriteCOpacity;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x483c0, Thiscall, CCSpriteCOpacity, setOpacity, unsigned char)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCSpriteCOpacity, createWithSpriteFrame, cocos2d::CCSpriteFrame*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCSpriteCOpacity, createWithSpriteFrameName, char const*)
		}
	};
}
