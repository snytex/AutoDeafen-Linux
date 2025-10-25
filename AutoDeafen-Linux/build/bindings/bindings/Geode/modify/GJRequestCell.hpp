#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRequestCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_loadFromScore
		#define GEODE_STATICS_loadFromScore
		GEODE_AS_STATIC_FUNCTION(loadFromScore) 
	#endif

	#ifndef GEODE_STATICS_markAsRead
		#define GEODE_STATICS_markAsRead
		GEODE_AS_STATIC_FUNCTION(markAsRead) 
	#endif

	#ifndef GEODE_STATICS_onDeleteRequest
		#define GEODE_STATICS_onDeleteRequest
		GEODE_AS_STATIC_FUNCTION(onDeleteRequest) 
	#endif

	#ifndef GEODE_STATICS_onToggle
		#define GEODE_STATICS_onToggle
		GEODE_AS_STATIC_FUNCTION(onToggle) 
	#endif

	#ifndef GEODE_STATICS_onViewFriendRequest
		#define GEODE_STATICS_onViewFriendRequest
		GEODE_AS_STATIC_FUNCTION(onViewFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_updateToggle
		#define GEODE_STATICS_updateToggle
		GEODE_AS_STATIC_FUNCTION(updateToggle) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromScore
		#define GEODE_CONCEPT_CHECK_loadFromScore
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markAsRead
		#define GEODE_CONCEPT_CHECK_markAsRead
		GEODE_CONCEPT_FUNCTION_CHECK(markAsRead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteRequest
		#define GEODE_CONCEPT_CHECK_onDeleteRequest
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggle
		#define GEODE_CONCEPT_CHECK_onToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewFriendRequest
		#define GEODE_CONCEPT_CHECK_onViewFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(onViewFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateToggle
		#define GEODE_CONCEPT_CHECK_updateToggle
		GEODE_CONCEPT_FUNCTION_CHECK(updateToggle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRequestCell> : ModifyBase<ModifyDerive<Der, GJRequestCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRequestCell>>;
		using ModifyBase<ModifyDerive<Der, GJRequestCell>>::ModifyBase;
		using Base = GJRequestCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbb620, Thiscall, GJRequestCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xad710, Thiscall, GJRequestCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbc1f0, Thiscall, GJRequestCell, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbc3a0, Thiscall, GJRequestCell, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbc580, Thiscall, GJRequestCell, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbb4b0, Thiscall, GJRequestCell, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbb640, Thiscall, GJRequestCell, loadFromScore, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbbf50, Thiscall, GJRequestCell, markAsRead, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbc030, Thiscall, GJRequestCell, onDeleteRequest, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRequestCell, onToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbbea0, Thiscall, GJRequestCell, onViewFriendRequest, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRequestCell, onViewProfile, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRequestCell, updateBGColor, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRequestCell, updateToggle, )
		}
	};
}
