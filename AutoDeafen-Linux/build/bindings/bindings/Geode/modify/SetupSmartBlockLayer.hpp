#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSmartBlockLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_selectArtClosed
		#define GEODE_STATICS_selectArtClosed
		GEODE_AS_STATIC_FUNCTION(selectArtClosed) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAllowFlipping
		#define GEODE_STATICS_onAllowFlipping
		GEODE_AS_STATIC_FUNCTION(onAllowFlipping) 
	#endif

	#ifndef GEODE_STATICS_onAllowRotation
		#define GEODE_STATICS_onAllowRotation
		GEODE_AS_STATIC_FUNCTION(onAllowRotation) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCreate
		#define GEODE_STATICS_onCreate
		GEODE_AS_STATIC_FUNCTION(onCreate) 
	#endif

	#ifndef GEODE_STATICS_onCreateAll
		#define GEODE_STATICS_onCreateAll
		GEODE_AS_STATIC_FUNCTION(onCreateAll) 
	#endif

	#ifndef GEODE_STATICS_onCreateTemplate
		#define GEODE_STATICS_onCreateTemplate
		GEODE_AS_STATIC_FUNCTION(onCreateTemplate) 
	#endif

	#ifndef GEODE_STATICS_onDontDelete
		#define GEODE_STATICS_onDontDelete
		GEODE_AS_STATIC_FUNCTION(onDontDelete) 
	#endif

	#ifndef GEODE_STATICS_onIgnoreCorners
		#define GEODE_STATICS_onIgnoreCorners
		GEODE_AS_STATIC_FUNCTION(onIgnoreCorners) 
	#endif

	#ifndef GEODE_STATICS_onNearbyReference
		#define GEODE_STATICS_onNearbyReference
		GEODE_AS_STATIC_FUNCTION(onNearbyReference) 
	#endif

	#ifndef GEODE_STATICS_onPasteTemplate
		#define GEODE_STATICS_onPasteTemplate
		GEODE_AS_STATIC_FUNCTION(onPasteTemplate) 
	#endif

	#ifndef GEODE_STATICS_onReferenceOnly
		#define GEODE_STATICS_onReferenceOnly
		GEODE_AS_STATIC_FUNCTION(onReferenceOnly) 
	#endif

	#ifndef GEODE_STATICS_onSelectPremade
		#define GEODE_STATICS_onSelectPremade
		GEODE_AS_STATIC_FUNCTION(onSelectPremade) 
	#endif

	#ifndef GEODE_STATICS_onSelectTemplate
		#define GEODE_STATICS_onSelectTemplate
		GEODE_AS_STATIC_FUNCTION(onSelectTemplate) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectArtClosed
		#define GEODE_CONCEPT_CHECK_selectArtClosed
		GEODE_CONCEPT_FUNCTION_CHECK(selectArtClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAllowFlipping
		#define GEODE_CONCEPT_CHECK_onAllowFlipping
		GEODE_CONCEPT_FUNCTION_CHECK(onAllowFlipping) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAllowRotation
		#define GEODE_CONCEPT_CHECK_onAllowRotation
		GEODE_CONCEPT_FUNCTION_CHECK(onAllowRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreate
		#define GEODE_CONCEPT_CHECK_onCreate
		GEODE_CONCEPT_FUNCTION_CHECK(onCreate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateAll
		#define GEODE_CONCEPT_CHECK_onCreateAll
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateTemplate
		#define GEODE_CONCEPT_CHECK_onCreateTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDontDelete
		#define GEODE_CONCEPT_CHECK_onDontDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDontDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onIgnoreCorners
		#define GEODE_CONCEPT_CHECK_onIgnoreCorners
		GEODE_CONCEPT_FUNCTION_CHECK(onIgnoreCorners) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNearbyReference
		#define GEODE_CONCEPT_CHECK_onNearbyReference
		GEODE_CONCEPT_FUNCTION_CHECK(onNearbyReference) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPasteTemplate
		#define GEODE_CONCEPT_CHECK_onPasteTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(onPasteTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReferenceOnly
		#define GEODE_CONCEPT_CHECK_onReferenceOnly
		GEODE_CONCEPT_FUNCTION_CHECK(onReferenceOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectPremade
		#define GEODE_CONCEPT_CHECK_onSelectPremade
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectPremade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectTemplate
		#define GEODE_CONCEPT_CHECK_onSelectTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectTemplate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSmartBlockLayer> : ModifyBase<ModifyDerive<Der, SetupSmartBlockLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSmartBlockLayer>>;
		using ModifyBase<ModifyDerive<Der, SetupSmartBlockLayer>>::ModifyBase;
		using Base = SetupSmartBlockLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43e530, Default, SetupSmartBlockLayer, create, SmartGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4406d0, Thiscall, SetupSmartBlockLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8ba30, Thiscall, SetupSmartBlockLayer, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x440690, Thiscall, SetupSmartBlockLayer, selectArtClosed, SelectArtLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupSmartBlockLayer, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43e670, Thiscall, SetupSmartBlockLayer, init, SmartGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43f750, Thiscall, SetupSmartBlockLayer, onAllowFlipping, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43f6d0, Thiscall, SetupSmartBlockLayer, onAllowRotation, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x440030, Thiscall, SetupSmartBlockLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4400f0, Thiscall, SetupSmartBlockLayer, onCreate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43fd80, Thiscall, SetupSmartBlockLayer, onCreateAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x440520, Thiscall, SetupSmartBlockLayer, onCreateTemplate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43f890, Thiscall, SetupSmartBlockLayer, onDontDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43f900, Thiscall, SetupSmartBlockLayer, onIgnoreCorners, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43f820, Thiscall, SetupSmartBlockLayer, onNearbyReference, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43f980, Thiscall, SetupSmartBlockLayer, onPasteTemplate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43f640, Thiscall, SetupSmartBlockLayer, onReferenceOnly, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x440620, Thiscall, SetupSmartBlockLayer, onSelectPremade, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4406a0, Thiscall, SetupSmartBlockLayer, onSelectTemplate, cocos2d::CCObject*)
		}
	};
}
