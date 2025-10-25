#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ParentalOptionsLayer.hpp>
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

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_addToggle
		#define GEODE_STATICS_addToggle
		GEODE_AS_STATIC_FUNCTION(addToggle) 
	#endif

	#ifndef GEODE_STATICS_countForPage
		#define GEODE_STATICS_countForPage
		GEODE_AS_STATIC_FUNCTION(countForPage) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_incrementCountForPage
		#define GEODE_STATICS_incrementCountForPage
		GEODE_AS_STATIC_FUNCTION(incrementCountForPage) 
	#endif

	#ifndef GEODE_STATICS_infoKey
		#define GEODE_STATICS_infoKey
		GEODE_AS_STATIC_FUNCTION(infoKey) 
	#endif

	#ifndef GEODE_STATICS_layerForPage
		#define GEODE_STATICS_layerForPage
		GEODE_AS_STATIC_FUNCTION(layerForPage) 
	#endif

	#ifndef GEODE_STATICS_layerKey
		#define GEODE_STATICS_layerKey
		GEODE_AS_STATIC_FUNCTION(layerKey) 
	#endif

	#ifndef GEODE_STATICS_nextPosition
		#define GEODE_STATICS_nextPosition
		GEODE_AS_STATIC_FUNCTION(nextPosition) 
	#endif

	#ifndef GEODE_STATICS_objectKey
		#define GEODE_STATICS_objectKey
		GEODE_AS_STATIC_FUNCTION(objectKey) 
	#endif

	#ifndef GEODE_STATICS_objectsForPage
		#define GEODE_STATICS_objectsForPage
		GEODE_AS_STATIC_FUNCTION(objectsForPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onToggle
		#define GEODE_STATICS_onToggle
		GEODE_AS_STATIC_FUNCTION(onToggle) 
	#endif

	#ifndef GEODE_STATICS_pageKey
		#define GEODE_STATICS_pageKey
		GEODE_AS_STATIC_FUNCTION(pageKey) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToggle
		#define GEODE_CONCEPT_CHECK_addToggle
		GEODE_CONCEPT_FUNCTION_CHECK(addToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countForPage
		#define GEODE_CONCEPT_CHECK_countForPage
		GEODE_CONCEPT_FUNCTION_CHECK(countForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementCountForPage
		#define GEODE_CONCEPT_CHECK_incrementCountForPage
		GEODE_CONCEPT_FUNCTION_CHECK(incrementCountForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_infoKey
		#define GEODE_CONCEPT_CHECK_infoKey
		GEODE_CONCEPT_FUNCTION_CHECK(infoKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerForPage
		#define GEODE_CONCEPT_CHECK_layerForPage
		GEODE_CONCEPT_FUNCTION_CHECK(layerForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerKey
		#define GEODE_CONCEPT_CHECK_layerKey
		GEODE_CONCEPT_FUNCTION_CHECK(layerKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nextPosition
		#define GEODE_CONCEPT_CHECK_nextPosition
		GEODE_CONCEPT_FUNCTION_CHECK(nextPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectKey
		#define GEODE_CONCEPT_CHECK_objectKey
		GEODE_CONCEPT_FUNCTION_CHECK(objectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectsForPage
		#define GEODE_CONCEPT_CHECK_objectsForPage
		GEODE_CONCEPT_FUNCTION_CHECK(objectsForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggle
		#define GEODE_CONCEPT_CHECK_onToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageKey
		#define GEODE_CONCEPT_CHECK_pageKey
		GEODE_CONCEPT_FUNCTION_CHECK(pageKey) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ParentalOptionsLayer> : ModifyBase<ModifyDerive<Der, ParentalOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ParentalOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, ParentalOptionsLayer>>::ModifyBase;
		using Base = ParentalOptionsLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalOptionsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x365820, Thiscall, ParentalOptionsLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84650, Thiscall, ParentalOptionsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x365c70, Thiscall, ParentalOptionsLayer, addToggle, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b8f80, Thiscall, ParentalOptionsLayer, countForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b9220, Thiscall, ParentalOptionsLayer, goToPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalOptionsLayer, incrementCountForPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalOptionsLayer, infoKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366270, Thiscall, ParentalOptionsLayer, layerForPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalOptionsLayer, layerKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalOptionsLayer, nextPosition, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalOptionsLayer, objectKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3660e0, Thiscall, ParentalOptionsLayer, objectsForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84620, Thiscall, ParentalOptionsLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalOptionsLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b9200, Thiscall, ParentalOptionsLayer, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b9210, Thiscall, ParentalOptionsLayer, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x366410, Thiscall, ParentalOptionsLayer, onToggle, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalOptionsLayer, pageKey, int)
		}
	};
}
