#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GauntletSelectLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerWillScrollToPage
		#define GEODE_STATICS_scrollLayerWillScrollToPage
		GEODE_AS_STATIC_FUNCTION(scrollLayerWillScrollToPage) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerScrolledToPage
		#define GEODE_STATICS_scrollLayerScrolledToPage
		GEODE_AS_STATIC_FUNCTION(scrollLayerScrolledToPage) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFinished
		#define GEODE_STATICS_loadLevelsFinished
		GEODE_AS_STATIC_FUNCTION(loadLevelsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFailed
		#define GEODE_STATICS_loadLevelsFailed
		GEODE_AS_STATIC_FUNCTION(loadLevelsFailed) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNext
		#define GEODE_STATICS_onNext
		GEODE_AS_STATIC_FUNCTION(onNext) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onPrev
		#define GEODE_STATICS_onPrev
		GEODE_AS_STATIC_FUNCTION(onPrev) 
	#endif

	#ifndef GEODE_STATICS_onRefresh
		#define GEODE_STATICS_onRefresh
		GEODE_AS_STATIC_FUNCTION(onRefresh) 
	#endif

	#ifndef GEODE_STATICS_setupGauntlets
		#define GEODE_STATICS_setupGauntlets
		GEODE_AS_STATIC_FUNCTION(setupGauntlets) 
	#endif

	#ifndef GEODE_STATICS_unblockPlay
		#define GEODE_STATICS_unblockPlay
		GEODE_AS_STATIC_FUNCTION(unblockPlay) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerWillScrollToPage
		#define GEODE_CONCEPT_CHECK_scrollLayerWillScrollToPage
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerWillScrollToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerScrolledToPage
		#define GEODE_CONCEPT_CHECK_scrollLayerScrolledToPage
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerScrolledToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFinished
		#define GEODE_CONCEPT_CHECK_loadLevelsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFailed
		#define GEODE_CONCEPT_CHECK_loadLevelsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNext
		#define GEODE_CONCEPT_CHECK_onNext
		GEODE_CONCEPT_FUNCTION_CHECK(onNext) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlay
		#define GEODE_CONCEPT_CHECK_onPlay
		GEODE_CONCEPT_FUNCTION_CHECK(onPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrev
		#define GEODE_CONCEPT_CHECK_onPrev
		GEODE_CONCEPT_FUNCTION_CHECK(onPrev) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRefresh
		#define GEODE_CONCEPT_CHECK_onRefresh
		GEODE_CONCEPT_FUNCTION_CHECK(onRefresh) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupGauntlets
		#define GEODE_CONCEPT_CHECK_setupGauntlets
		GEODE_CONCEPT_FUNCTION_CHECK(setupGauntlets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unblockPlay
		#define GEODE_CONCEPT_CHECK_unblockPlay
		GEODE_CONCEPT_FUNCTION_CHECK(unblockPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateArrows
		#define GEODE_CONCEPT_CHECK_updateArrows
		GEODE_CONCEPT_FUNCTION_CHECK(updateArrows) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GauntletSelectLayer> : ModifyBase<ModifyDerive<Der, GauntletSelectLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GauntletSelectLayer>>;
		using ModifyBase<ModifyDerive<Der, GauntletSelectLayer>>::ModifyBase;
		using Base = GauntletSelectLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GauntletSelectLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f5570, Default, GauntletSelectLayer, scene, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7920, Thiscall, GauntletSelectLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7180, Thiscall, GauntletSelectLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7090, Thiscall, GauntletSelectLayer, scrollLayerWillScrollToPage, BoomScrollLayer*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7090, Thiscall, GauntletSelectLayer, scrollLayerScrolledToPage, BoomScrollLayer*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6470, Thiscall, GauntletSelectLayer, loadLevelsFinished, cocos2d::CCArray*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6620, Thiscall, GauntletSelectLayer, loadLevelsFailed, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6f20, Thiscall, GauntletSelectLayer, goToPage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f56a0, Thiscall, GauntletSelectLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f70d0, Thiscall, GauntletSelectLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6210, Thiscall, GauntletSelectLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6ee0, Thiscall, GauntletSelectLayer, onNext, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7190, Thiscall, GauntletSelectLayer, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6f00, Thiscall, GauntletSelectLayer, onPrev, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6350, Thiscall, GauntletSelectLayer, onRefresh, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6790, Thiscall, GauntletSelectLayer, setupGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7080, Thiscall, GauntletSelectLayer, unblockPlay, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GauntletSelectLayer, updateArrows, )
		}
	};
}
