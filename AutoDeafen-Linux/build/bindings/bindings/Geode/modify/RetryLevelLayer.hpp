#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RetryLevelLayer.hpp>
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

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_showLayer
		#define GEODE_STATICS_showLayer
		GEODE_AS_STATIC_FUNCTION(showLayer) 
	#endif

	#ifndef GEODE_STATICS_enterAnimFinished
		#define GEODE_STATICS_enterAnimFinished
		GEODE_AS_STATIC_FUNCTION(enterAnimFinished) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoFinished
		#define GEODE_STATICS_rewardedVideoFinished
		GEODE_AS_STATIC_FUNCTION(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_STATICS_getEndText
		#define GEODE_STATICS_getEndText
		GEODE_AS_STATIC_FUNCTION(getEndText) 
	#endif

	#ifndef GEODE_STATICS_onEveryplay
		#define GEODE_STATICS_onEveryplay
		GEODE_AS_STATIC_FUNCTION(onEveryplay) 
	#endif

	#ifndef GEODE_STATICS_onMenu
		#define GEODE_STATICS_onMenu
		GEODE_AS_STATIC_FUNCTION(onMenu) 
	#endif

	#ifndef GEODE_STATICS_onReplay
		#define GEODE_STATICS_onReplay
		GEODE_AS_STATIC_FUNCTION(onReplay) 
	#endif

	#ifndef GEODE_STATICS_onRewardedVideo
		#define GEODE_STATICS_onRewardedVideo
		GEODE_AS_STATIC_FUNCTION(onRewardedVideo) 
	#endif

	#ifndef GEODE_STATICS_setupLastProgress
		#define GEODE_STATICS_setupLastProgress
		GEODE_AS_STATIC_FUNCTION(setupLastProgress) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLayer
		#define GEODE_CONCEPT_CHECK_showLayer
		GEODE_CONCEPT_FUNCTION_CHECK(showLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enterAnimFinished
		#define GEODE_CONCEPT_CHECK_enterAnimFinished
		GEODE_CONCEPT_FUNCTION_CHECK(enterAnimFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardedVideoFinished
		#define GEODE_CONCEPT_CHECK_rewardedVideoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldOffsetRewardCurrency
		#define GEODE_CONCEPT_CHECK_shouldOffsetRewardCurrency
		GEODE_CONCEPT_FUNCTION_CHECK(shouldOffsetRewardCurrency) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyUp
		#define GEODE_CONCEPT_CHECK_keyUp
		GEODE_CONCEPT_FUNCTION_CHECK(keyUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndText
		#define GEODE_CONCEPT_CHECK_getEndText
		GEODE_CONCEPT_FUNCTION_CHECK(getEndText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEveryplay
		#define GEODE_CONCEPT_CHECK_onEveryplay
		GEODE_CONCEPT_FUNCTION_CHECK(onEveryplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMenu
		#define GEODE_CONCEPT_CHECK_onMenu
		GEODE_CONCEPT_FUNCTION_CHECK(onMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReplay
		#define GEODE_CONCEPT_CHECK_onReplay
		GEODE_CONCEPT_FUNCTION_CHECK(onReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRewardedVideo
		#define GEODE_CONCEPT_CHECK_onRewardedVideo
		GEODE_CONCEPT_FUNCTION_CHECK(onRewardedVideo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLastProgress
		#define GEODE_CONCEPT_CHECK_setupLastProgress
		GEODE_CONCEPT_FUNCTION_CHECK(setupLastProgress) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RetryLevelLayer> : ModifyBase<ModifyDerive<Der, RetryLevelLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RetryLevelLayer>>;
		using ModifyBase<ModifyDerive<Der, RetryLevelLayer>>::ModifyBase;
		using Base = RetryLevelLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RetryLevelLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4c40, Thiscall, RetryLevelLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4ad0, Thiscall, RetryLevelLayer, keyDown, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3d00, Thiscall, RetryLevelLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b48a0, Thiscall, RetryLevelLayer, showLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b49c0, Thiscall, RetryLevelLayer, enterAnimFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4a00, Thiscall, RetryLevelLayer, rewardedVideoFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(RetryLevelLayer, shouldOffsetRewardCurrency, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(RetryLevelLayer, keyUp, cocos2d::enumKeyCodes)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RetryLevelLayer, getEndText, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RetryLevelLayer, onEveryplay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4b20, Thiscall, RetryLevelLayer, onMenu, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RetryLevelLayer, onReplay, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RetryLevelLayer, onRewardedVideo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4460, Thiscall, RetryLevelLayer, setupLastProgress, )
		}
	};
}
