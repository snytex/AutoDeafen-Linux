#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getScriptEngine
		#define GEODE_STATICS_getScriptEngine
		GEODE_AS_STATIC_FUNCTION(getScriptEngine) 
	#endif

	#ifndef GEODE_STATICS_setScriptEngine
		#define GEODE_STATICS_setScriptEngine
		GEODE_AS_STATIC_FUNCTION(setScriptEngine) 
	#endif

	#ifndef GEODE_STATICS_removeScriptEngine
		#define GEODE_STATICS_removeScriptEngine
		GEODE_AS_STATIC_FUNCTION(removeScriptEngine) 
	#endif

	#ifndef GEODE_STATICS_sharedManager
		#define GEODE_STATICS_sharedManager
		GEODE_AS_STATIC_FUNCTION(sharedManager) 
	#endif

	#ifndef GEODE_STATICS_purgeSharedManager
		#define GEODE_STATICS_purgeSharedManager
		GEODE_AS_STATIC_FUNCTION(purgeSharedManager) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getScriptEngine
		#define GEODE_CONCEPT_CHECK_getScriptEngine
		GEODE_CONCEPT_FUNCTION_CHECK(getScriptEngine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScriptEngine
		#define GEODE_CONCEPT_CHECK_setScriptEngine
		GEODE_CONCEPT_FUNCTION_CHECK(setScriptEngine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeScriptEngine
		#define GEODE_CONCEPT_CHECK_removeScriptEngine
		GEODE_CONCEPT_FUNCTION_CHECK(removeScriptEngine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedManager
		#define GEODE_CONCEPT_CHECK_sharedManager
		GEODE_CONCEPT_FUNCTION_CHECK(sharedManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeSharedManager
		#define GEODE_CONCEPT_CHECK_purgeSharedManager
		GEODE_CONCEPT_FUNCTION_CHECK(purgeSharedManager) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCScriptEngineManager> : ModifyBase<ModifyDerive<Der, cocos2d::CCScriptEngineManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCScriptEngineManager>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCScriptEngineManager>>::ModifyBase;
		using Base = cocos2d::CCScriptEngineManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCScriptEngineManager::getScriptEngine)), Thiscall, cocos2d::CCScriptEngineManager, getScriptEngine, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCScriptEngineProtocol*>::func(&cocos2d::CCScriptEngineManager::setScriptEngine)), Thiscall, cocos2d::CCScriptEngineManager, setScriptEngine, cocos2d::CCScriptEngineProtocol*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCScriptEngineManager::removeScriptEngine)), Thiscall, cocos2d::CCScriptEngineManager, removeScriptEngine, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCScriptEngineManager::sharedManager)), Default, cocos2d::CCScriptEngineManager, sharedManager, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCScriptEngineManager::purgeSharedManager)), Default, cocos2d::CCScriptEngineManager, purgeSharedManager, )
		}
	};
}
