#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NodePoint.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NodePoint> : ModifyBase<ModifyDerive<Der, NodePoint>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NodePoint>>;
		using ModifyBase<ModifyDerive<Der, NodePoint>>::ModifyBase;
		using Base = NodePoint;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NodePoint, create, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NodePoint, init, cocos2d::CCPoint)
		}
	};
}
