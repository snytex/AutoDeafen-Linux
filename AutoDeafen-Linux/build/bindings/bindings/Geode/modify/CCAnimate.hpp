#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_initWithAnimation
		#define GEODE_STATICS_initWithAnimation
		GEODE_AS_STATIC_FUNCTION(initWithAnimation) 
	#endif

	#ifndef GEODE_STATICS_getAnimation
		#define GEODE_STATICS_getAnimation
		GEODE_AS_STATIC_FUNCTION(getAnimation) 
	#endif

	#ifndef GEODE_STATICS_getRecenterChildren
		#define GEODE_STATICS_getRecenterChildren
		GEODE_AS_STATIC_FUNCTION(getRecenterChildren) 
	#endif

	#ifndef GEODE_STATICS_getRecenterFrames
		#define GEODE_STATICS_getRecenterFrames
		GEODE_AS_STATIC_FUNCTION(getRecenterFrames) 
	#endif

	#ifndef GEODE_STATICS_setAnimation
		#define GEODE_STATICS_setAnimation
		GEODE_AS_STATIC_FUNCTION(setAnimation) 
	#endif

	#ifndef GEODE_STATICS_setRecenterChildren
		#define GEODE_STATICS_setRecenterChildren
		GEODE_AS_STATIC_FUNCTION(setRecenterChildren) 
	#endif

	#ifndef GEODE_STATICS_setRecenterFrames
		#define GEODE_STATICS_setRecenterFrames
		GEODE_AS_STATIC_FUNCTION(setRecenterFrames) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif

	#ifndef GEODE_STATICS_stop
		#define GEODE_STATICS_stop
		GEODE_AS_STATIC_FUNCTION(stop) 
	#endif

	#ifndef GEODE_STATICS_reverse
		#define GEODE_STATICS_reverse
		GEODE_AS_STATIC_FUNCTION(reverse) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithAnimation
		#define GEODE_CONCEPT_CHECK_initWithAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(initWithAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAnimation
		#define GEODE_CONCEPT_CHECK_getAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(getAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRecenterChildren
		#define GEODE_CONCEPT_CHECK_getRecenterChildren
		GEODE_CONCEPT_FUNCTION_CHECK(getRecenterChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRecenterFrames
		#define GEODE_CONCEPT_CHECK_getRecenterFrames
		GEODE_CONCEPT_FUNCTION_CHECK(getRecenterFrames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAnimation
		#define GEODE_CONCEPT_CHECK_setAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(setAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRecenterChildren
		#define GEODE_CONCEPT_CHECK_setRecenterChildren
		GEODE_CONCEPT_FUNCTION_CHECK(setRecenterChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRecenterFrames
		#define GEODE_CONCEPT_CHECK_setRecenterFrames
		GEODE_CONCEPT_FUNCTION_CHECK(setRecenterFrames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startWithTarget
		#define GEODE_CONCEPT_CHECK_startWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(startWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stop
		#define GEODE_CONCEPT_CHECK_stop
		GEODE_CONCEPT_FUNCTION_CHECK(stop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverse
		#define GEODE_CONCEPT_CHECK_reverse
		GEODE_CONCEPT_FUNCTION_CHECK(reverse) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCAnimate> : ModifyBase<ModifyDerive<Der, cocos2d::CCAnimate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCAnimate>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCAnimate>>::ModifyBase;
		using Base = cocos2d::CCAnimate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCAnimation*>::func(&cocos2d::CCAnimate::create)), Default, cocos2d::CCAnimate, create, cocos2d::CCAnimation*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCAnimation*>::func(&cocos2d::CCAnimate::initWithAnimation)), Thiscall, cocos2d::CCAnimate, initWithAnimation, cocos2d::CCAnimation*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCAnimate::getAnimation)), Thiscall, cocos2d::CCAnimate, getAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCAnimate::getRecenterChildren)), Thiscall, cocos2d::CCAnimate, getRecenterChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCAnimate::getRecenterFrames)), Thiscall, cocos2d::CCAnimate, getRecenterFrames, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCAnimation*>::func(&cocos2d::CCAnimate::setAnimation)), Thiscall, cocos2d::CCAnimate, setAnimation, cocos2d::CCAnimation*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCAnimate::setRecenterChildren)), Thiscall, cocos2d::CCAnimate, setRecenterChildren, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCAnimate::setRecenterFrames)), Thiscall, cocos2d::CCAnimate, setRecenterFrames, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCAnimate::copyWithZone)), Thiscall, cocos2d::CCAnimate, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCAnimate::update)), Thiscall, cocos2d::CCAnimate, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCAnimate::startWithTarget)), Thiscall, cocos2d::CCAnimate, startWithTarget, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCAnimate::stop)), Thiscall, cocos2d::CCAnimate, stop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCAnimate::reverse)), Thiscall, cocos2d::CCAnimate, reverse, )
		}
	};
}
