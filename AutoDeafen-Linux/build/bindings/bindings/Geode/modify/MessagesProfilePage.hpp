#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MessagesProfilePage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_loadMessagesFinished
		#define GEODE_STATICS_loadMessagesFinished
		GEODE_AS_STATIC_FUNCTION(loadMessagesFinished) 
	#endif

	#ifndef GEODE_STATICS_loadMessagesFailed
		#define GEODE_STATICS_loadMessagesFailed
		GEODE_AS_STATIC_FUNCTION(loadMessagesFailed) 
	#endif

	#ifndef GEODE_STATICS_forceReloadMessages
		#define GEODE_STATICS_forceReloadMessages
		GEODE_AS_STATIC_FUNCTION(forceReloadMessages) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_deleteSelected
		#define GEODE_STATICS_deleteSelected
		GEODE_AS_STATIC_FUNCTION(deleteSelected) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onSentMessages
		#define GEODE_STATICS_onSentMessages
		GEODE_AS_STATIC_FUNCTION(onSentMessages) 
	#endif

	#ifndef GEODE_STATICS_onToggleAllObjects
		#define GEODE_STATICS_onToggleAllObjects
		GEODE_AS_STATIC_FUNCTION(onToggleAllObjects) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_setupCommentsBrowser
		#define GEODE_STATICS_setupCommentsBrowser
		GEODE_AS_STATIC_FUNCTION(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_STATICS_untoggleAll
		#define GEODE_STATICS_untoggleAll
		GEODE_AS_STATIC_FUNCTION(untoggleAll) 
	#endif

	#ifndef GEODE_STATICS_updateLevelsLabel
		#define GEODE_STATICS_updateLevelsLabel
		GEODE_AS_STATIC_FUNCTION(updateLevelsLabel) 
	#endif

	#ifndef GEODE_STATICS_updatePageArrows
		#define GEODE_STATICS_updatePageArrows
		GEODE_AS_STATIC_FUNCTION(updatePageArrows) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadMessagesFinished
		#define GEODE_CONCEPT_CHECK_loadMessagesFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadMessagesFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadMessagesFailed
		#define GEODE_CONCEPT_CHECK_loadMessagesFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadMessagesFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceReloadMessages
		#define GEODE_CONCEPT_CHECK_forceReloadMessages
		GEODE_CONCEPT_FUNCTION_CHECK(forceReloadMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSelected
		#define GEODE_CONCEPT_CHECK_deleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCorrect
		#define GEODE_CONCEPT_CHECK_isCorrect
		GEODE_CONCEPT_FUNCTION_CHECK(isCorrect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPage
		#define GEODE_CONCEPT_CHECK_loadPage
		GEODE_CONCEPT_FUNCTION_CHECK(loadPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSelected
		#define GEODE_CONCEPT_CHECK_onDeleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSentMessages
		#define GEODE_CONCEPT_CHECK_onSentMessages
		GEODE_CONCEPT_FUNCTION_CHECK(onSentMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleAllObjects
		#define GEODE_CONCEPT_CHECK_onToggleAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCommentsBrowser
		#define GEODE_CONCEPT_CHECK_setupCommentsBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_untoggleAll
		#define GEODE_CONCEPT_CHECK_untoggleAll
		GEODE_CONCEPT_FUNCTION_CHECK(untoggleAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelsLabel
		#define GEODE_CONCEPT_CHECK_updateLevelsLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelsLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageArrows
		#define GEODE_CONCEPT_CHECK_updatePageArrows
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageArrows) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MessagesProfilePage> : ModifyBase<ModifyDerive<Der, MessagesProfilePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MessagesProfilePage>>;
		using ModifyBase<ModifyDerive<Der, MessagesProfilePage>>::ModifyBase;
		using Base = MessagesProfilePage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3216b0, Default, MessagesProfilePage, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x425d0, Thiscall, MessagesProfilePage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322cb0, Thiscall, MessagesProfilePage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322a50, Thiscall, MessagesProfilePage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13d2a0, Thiscall, MessagesProfilePage, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322a80, Thiscall, MessagesProfilePage, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13d460, Thiscall, MessagesProfilePage, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323300, Thiscall, MessagesProfilePage, loadMessagesFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13dc50, Thiscall, MessagesProfilePage, loadMessagesFailed, char const*, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323450, Thiscall, MessagesProfilePage, forceReloadMessages, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323470, Thiscall, MessagesProfilePage, setupPageInfo, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3227d0, Thiscall, MessagesProfilePage, deleteSelected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x321850, Thiscall, MessagesProfilePage, init, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessagesProfilePage, isCorrect, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322d60, Thiscall, MessagesProfilePage, loadPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322bf0, Thiscall, MessagesProfilePage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3224e0, Thiscall, MessagesProfilePage, onDeleteSelected, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323610, Thiscall, MessagesProfilePage, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323620, Thiscall, MessagesProfilePage, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322450, Thiscall, MessagesProfilePage, onSentMessages, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322270, Thiscall, MessagesProfilePage, onToggleAllObjects, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessagesProfilePage, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323170, Thiscall, MessagesProfilePage, setupCommentsBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322cc0, Thiscall, MessagesProfilePage, untoggleAll, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessagesProfilePage, updateLevelsLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessagesProfilePage, updatePageArrows, )
		}
	};
}
