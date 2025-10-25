#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_cleanup
		#define GEODE_STATICS_cleanup
		GEODE_AS_STATIC_FUNCTION(cleanup) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif

	#ifndef GEODE_STATICS_sceneOrder
		#define GEODE_STATICS_sceneOrder
		GEODE_AS_STATIC_FUNCTION(sceneOrder) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cleanup
		#define GEODE_CONCEPT_CHECK_cleanup
		GEODE_CONCEPT_FUNCTION_CHECK(cleanup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDuration
		#define GEODE_CONCEPT_CHECK_initWithDuration
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sceneOrder
		#define GEODE_CONCEPT_CHECK_sceneOrder
		GEODE_CONCEPT_FUNCTION_CHECK(sceneOrder) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionScene> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionScene>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionScene>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionScene>>::ModifyBase;
		using Base = cocos2d::CCTransitionScene;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTransitionScene@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTransitionScene)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionScene::onEnter)), Thiscall, cocos2d::CCTransitionScene, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionScene::onExit)), Thiscall, cocos2d::CCTransitionScene, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionScene::cleanup)), Thiscall, cocos2d::CCTransitionScene, cleanup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionScene::draw)), Thiscall, cocos2d::CCTransitionScene, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionScene::initWithDuration)), Thiscall, cocos2d::CCTransitionScene, initWithDuration, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionScene::sceneOrder)), Thiscall, cocos2d::CCTransitionScene, sceneOrder, )
		}
	};
}
