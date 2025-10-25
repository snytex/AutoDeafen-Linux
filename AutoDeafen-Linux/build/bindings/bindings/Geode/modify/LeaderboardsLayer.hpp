#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LeaderboardsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFailed
		#define GEODE_STATICS_updateUserScoreFailed
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFinished
		#define GEODE_STATICS_loadLeaderboardFinished
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFailed
		#define GEODE_STATICS_loadLeaderboardFailed
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFailed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onCreators
		#define GEODE_STATICS_onCreators
		GEODE_AS_STATIC_FUNCTION(onCreators) 
	#endif

	#ifndef GEODE_STATICS_onGlobal
		#define GEODE_STATICS_onGlobal
		GEODE_AS_STATIC_FUNCTION(onGlobal) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onTop
		#define GEODE_STATICS_onTop
		GEODE_AS_STATIC_FUNCTION(onTop) 
	#endif

	#ifndef GEODE_STATICS_onWeek
		#define GEODE_STATICS_onWeek
		GEODE_AS_STATIC_FUNCTION(onWeek) 
	#endif

	#ifndef GEODE_STATICS_refreshTabs
		#define GEODE_STATICS_refreshTabs
		GEODE_AS_STATIC_FUNCTION(refreshTabs) 
	#endif

	#ifndef GEODE_STATICS_selectLeaderboard
		#define GEODE_STATICS_selectLeaderboard
		GEODE_AS_STATIC_FUNCTION(selectLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_setupLevelBrowser
		#define GEODE_STATICS_setupLevelBrowser
		GEODE_AS_STATIC_FUNCTION(setupLevelBrowser) 
	#endif

	#ifndef GEODE_STATICS_setupTabs
		#define GEODE_STATICS_setupTabs
		GEODE_AS_STATIC_FUNCTION(setupTabs) 
	#endif

	#ifndef GEODE_STATICS_toggleTabButtons
		#define GEODE_STATICS_toggleTabButtons
		GEODE_AS_STATIC_FUNCTION(toggleTabButtons) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFinished
		#define GEODE_CONCEPT_CHECK_updateUserScoreFinished
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFailed
		#define GEODE_CONCEPT_CHECK_updateUserScoreFailed
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLeaderboardFinished
		#define GEODE_CONCEPT_CHECK_loadLeaderboardFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLeaderboardFailed
		#define GEODE_CONCEPT_CHECK_loadLeaderboardFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLeaderboardFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCorrect
		#define GEODE_CONCEPT_CHECK_isCorrect
		GEODE_CONCEPT_FUNCTION_CHECK(isCorrect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreators
		#define GEODE_CONCEPT_CHECK_onCreators
		GEODE_CONCEPT_FUNCTION_CHECK(onCreators) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGlobal
		#define GEODE_CONCEPT_CHECK_onGlobal
		GEODE_CONCEPT_FUNCTION_CHECK(onGlobal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTop
		#define GEODE_CONCEPT_CHECK_onTop
		GEODE_CONCEPT_FUNCTION_CHECK(onTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onWeek
		#define GEODE_CONCEPT_CHECK_onWeek
		GEODE_CONCEPT_FUNCTION_CHECK(onWeek) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshTabs
		#define GEODE_CONCEPT_CHECK_refreshTabs
		GEODE_CONCEPT_FUNCTION_CHECK(refreshTabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectLeaderboard
		#define GEODE_CONCEPT_CHECK_selectLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(selectLeaderboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLevelBrowser
		#define GEODE_CONCEPT_CHECK_setupLevelBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupLevelBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTabs
		#define GEODE_CONCEPT_CHECK_setupTabs
		GEODE_CONCEPT_FUNCTION_CHECK(setupTabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleTabButtons
		#define GEODE_CONCEPT_CHECK_toggleTabButtons
		GEODE_CONCEPT_FUNCTION_CHECK(toggleTabButtons) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LeaderboardsLayer> : ModifyBase<ModifyDerive<Der, LeaderboardsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LeaderboardsLayer>>;
		using ModifyBase<ModifyDerive<Der, LeaderboardsLayer>>::ModifyBase;
		using Base = LeaderboardsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LeaderboardsLayer, create, LeaderboardState)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LeaderboardsLayer, scene, LeaderboardState)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bbf50, Thiscall, LeaderboardsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bbea0, Thiscall, LeaderboardsLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bb1f0, Thiscall, LeaderboardsLayer, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bb210, Thiscall, LeaderboardsLayer, updateUserScoreFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bb220, Thiscall, LeaderboardsLayer, loadLeaderboardFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bb2b0, Thiscall, LeaderboardsLayer, loadLeaderboardFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b9cd0, Thiscall, LeaderboardsLayer, init, LeaderboardState)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LeaderboardsLayer, isCorrect, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bbed0, Thiscall, LeaderboardsLayer, onBack, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LeaderboardsLayer, onCreators, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LeaderboardsLayer, onGlobal, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LeaderboardsLayer, onInfo, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LeaderboardsLayer, onTop, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LeaderboardsLayer, onWeek, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bac80, Thiscall, LeaderboardsLayer, refreshTabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2badb0, Thiscall, LeaderboardsLayer, selectLeaderboard, LeaderboardState)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bab20, Thiscall, LeaderboardsLayer, setupLevelBrowser, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LeaderboardsLayer, setupTabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bb000, Thiscall, LeaderboardsLayer, toggleTabButtons, )
		}
	};
}
