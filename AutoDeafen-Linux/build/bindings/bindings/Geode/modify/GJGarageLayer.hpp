#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGarageLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_listButtonBarSwitchedPage
		#define GEODE_STATICS_listButtonBarSwitchedPage
		GEODE_AS_STATIC_FUNCTION(listButtonBarSwitchedPage) 
	#endif

	#ifndef GEODE_STATICS_showUnlockPopup
		#define GEODE_STATICS_showUnlockPopup
		GEODE_AS_STATIC_FUNCTION(showUnlockPopup) 
	#endif

	#ifndef GEODE_STATICS_updateRate
		#define GEODE_STATICS_updateRate
		GEODE_AS_STATIC_FUNCTION(updateRate) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

	#ifndef GEODE_STATICS_playerColorChanged
		#define GEODE_STATICS_playerColorChanged
		GEODE_AS_STATIC_FUNCTION(playerColorChanged) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoFinished
		#define GEODE_STATICS_rewardedVideoFinished
		GEODE_AS_STATIC_FUNCTION(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_STATICS_achievementForUnlock
		#define GEODE_STATICS_achievementForUnlock
		GEODE_AS_STATIC_FUNCTION(achievementForUnlock) 
	#endif

	#ifndef GEODE_STATICS_descriptionForUnlock
		#define GEODE_STATICS_descriptionForUnlock
		GEODE_AS_STATIC_FUNCTION(descriptionForUnlock) 
	#endif

	#ifndef GEODE_STATICS_getItems
		#define GEODE_STATICS_getItems
		GEODE_AS_STATIC_FUNCTION(getItems) 
	#endif

	#ifndef GEODE_STATICS_getLockFrame
		#define GEODE_STATICS_getLockFrame
		GEODE_AS_STATIC_FUNCTION(getLockFrame) 
	#endif

	#ifndef GEODE_STATICS_onArrow
		#define GEODE_STATICS_onArrow
		GEODE_AS_STATIC_FUNCTION(onArrow) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNavigate
		#define GEODE_STATICS_onNavigate
		GEODE_AS_STATIC_FUNCTION(onNavigate) 
	#endif

	#ifndef GEODE_STATICS_onPaint
		#define GEODE_STATICS_onPaint
		GEODE_AS_STATIC_FUNCTION(onPaint) 
	#endif

	#ifndef GEODE_STATICS_onRewardedVideo
		#define GEODE_STATICS_onRewardedVideo
		GEODE_AS_STATIC_FUNCTION(onRewardedVideo) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_onSelectTab
		#define GEODE_STATICS_onSelectTab
		GEODE_AS_STATIC_FUNCTION(onSelectTab) 
	#endif

	#ifndef GEODE_STATICS_onShards
		#define GEODE_STATICS_onShards
		GEODE_AS_STATIC_FUNCTION(onShards) 
	#endif

	#ifndef GEODE_STATICS_onShop
		#define GEODE_STATICS_onShop
		GEODE_AS_STATIC_FUNCTION(onShop) 
	#endif

	#ifndef GEODE_STATICS_onSpecial
		#define GEODE_STATICS_onSpecial
		GEODE_AS_STATIC_FUNCTION(onSpecial) 
	#endif

	#ifndef GEODE_STATICS_onToggleItem
		#define GEODE_STATICS_onToggleItem
		GEODE_AS_STATIC_FUNCTION(onToggleItem) 
	#endif

	#ifndef GEODE_STATICS_playRainbowEffect
		#define GEODE_STATICS_playRainbowEffect
		GEODE_AS_STATIC_FUNCTION(playRainbowEffect) 
	#endif

	#ifndef GEODE_STATICS_playShadowEffect
		#define GEODE_STATICS_playShadowEffect
		GEODE_AS_STATIC_FUNCTION(playShadowEffect) 
	#endif

	#ifndef GEODE_STATICS_selectTab
		#define GEODE_STATICS_selectTab
		GEODE_AS_STATIC_FUNCTION(selectTab) 
	#endif

	#ifndef GEODE_STATICS_setupIconSelect
		#define GEODE_STATICS_setupIconSelect
		GEODE_AS_STATIC_FUNCTION(setupIconSelect) 
	#endif

	#ifndef GEODE_STATICS_setupPage
		#define GEODE_STATICS_setupPage
		GEODE_AS_STATIC_FUNCTION(setupPage) 
	#endif

	#ifndef GEODE_STATICS_setupSpecialPage
		#define GEODE_STATICS_setupSpecialPage
		GEODE_AS_STATIC_FUNCTION(setupSpecialPage) 
	#endif

	#ifndef GEODE_STATICS_titleForUnlock
		#define GEODE_STATICS_titleForUnlock
		GEODE_AS_STATIC_FUNCTION(titleForUnlock) 
	#endif

	#ifndef GEODE_STATICS_toggleGlow
		#define GEODE_STATICS_toggleGlow
		GEODE_AS_STATIC_FUNCTION(toggleGlow) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerColors
		#define GEODE_STATICS_updatePlayerColors
		GEODE_AS_STATIC_FUNCTION(updatePlayerColors) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerName
		#define GEODE_STATICS_updatePlayerName
		GEODE_AS_STATIC_FUNCTION(updatePlayerName) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_node
		#define GEODE_CONCEPT_CHECK_node
		GEODE_CONCEPT_FUNCTION_CHECK(node) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listButtonBarSwitchedPage
		#define GEODE_CONCEPT_CHECK_listButtonBarSwitchedPage
		GEODE_CONCEPT_FUNCTION_CHECK(listButtonBarSwitchedPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showUnlockPopup
		#define GEODE_CONCEPT_CHECK_showUnlockPopup
		GEODE_CONCEPT_FUNCTION_CHECK(showUnlockPopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRate
		#define GEODE_CONCEPT_CHECK_updateRate
		GEODE_CONCEPT_FUNCTION_CHECK(updateRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dialogClosed
		#define GEODE_CONCEPT_CHECK_dialogClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dialogClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerColorChanged
		#define GEODE_CONCEPT_CHECK_playerColorChanged
		GEODE_CONCEPT_FUNCTION_CHECK(playerColorChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardedVideoFinished
		#define GEODE_CONCEPT_CHECK_rewardedVideoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_achievementForUnlock
		#define GEODE_CONCEPT_CHECK_achievementForUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(achievementForUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_descriptionForUnlock
		#define GEODE_CONCEPT_CHECK_descriptionForUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(descriptionForUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getItems
		#define GEODE_CONCEPT_CHECK_getItems
		GEODE_CONCEPT_FUNCTION_CHECK(getItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLockFrame
		#define GEODE_CONCEPT_CHECK_getLockFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getLockFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onArrow
		#define GEODE_CONCEPT_CHECK_onArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNavigate
		#define GEODE_CONCEPT_CHECK_onNavigate
		GEODE_CONCEPT_FUNCTION_CHECK(onNavigate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaint
		#define GEODE_CONCEPT_CHECK_onPaint
		GEODE_CONCEPT_FUNCTION_CHECK(onPaint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRewardedVideo
		#define GEODE_CONCEPT_CHECK_onRewardedVideo
		GEODE_CONCEPT_FUNCTION_CHECK(onRewardedVideo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelect
		#define GEODE_CONCEPT_CHECK_onSelect
		GEODE_CONCEPT_FUNCTION_CHECK(onSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectTab
		#define GEODE_CONCEPT_CHECK_onSelectTab
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShards
		#define GEODE_CONCEPT_CHECK_onShards
		GEODE_CONCEPT_FUNCTION_CHECK(onShards) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShop
		#define GEODE_CONCEPT_CHECK_onShop
		GEODE_CONCEPT_FUNCTION_CHECK(onShop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSpecial
		#define GEODE_CONCEPT_CHECK_onSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(onSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleItem
		#define GEODE_CONCEPT_CHECK_onToggleItem
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playRainbowEffect
		#define GEODE_CONCEPT_CHECK_playRainbowEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playRainbowEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playShadowEffect
		#define GEODE_CONCEPT_CHECK_playShadowEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playShadowEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectTab
		#define GEODE_CONCEPT_CHECK_selectTab
		GEODE_CONCEPT_FUNCTION_CHECK(selectTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupIconSelect
		#define GEODE_CONCEPT_CHECK_setupIconSelect
		GEODE_CONCEPT_FUNCTION_CHECK(setupIconSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPage
		#define GEODE_CONCEPT_CHECK_setupPage
		GEODE_CONCEPT_FUNCTION_CHECK(setupPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSpecialPage
		#define GEODE_CONCEPT_CHECK_setupSpecialPage
		GEODE_CONCEPT_FUNCTION_CHECK(setupSpecialPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showUnlockPopupNew
		#define GEODE_CONCEPT_CHECK_showUnlockPopupNew
		GEODE_CONCEPT_FUNCTION_CHECK(showUnlockPopupNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_titleForUnlock
		#define GEODE_CONCEPT_CHECK_titleForUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(titleForUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGlow
		#define GEODE_CONCEPT_CHECK_toggleGlow
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerColors
		#define GEODE_CONCEPT_CHECK_updatePlayerColors
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerName
		#define GEODE_CONCEPT_CHECK_updatePlayerName
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGarageLayer> : ModifyBase<ModifyDerive<Der, GJGarageLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGarageLayer>>;
		using ModifyBase<ModifyDerive<Der, GJGarageLayer>>::ModifyBase;
		using Base = GJGarageLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGarageLayer, node, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26b5b0, Default, GJGarageLayer, scene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26b770, Thiscall, GJGarageLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2718f0, Thiscall, GJGarageLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26d390, Thiscall, GJGarageLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26d580, Thiscall, GJGarageLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc3060, Thiscall, GJGarageLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc3110, Thiscall, GJGarageLayer, listButtonBarSwitchedPage, ListButtonBar*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270320, Thiscall, GJGarageLayer, showUnlockPopup, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270ff0, Thiscall, GJGarageLayer, updateRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270bc0, Thiscall, GJGarageLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270e20, Thiscall, GJGarageLayer, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270170, Thiscall, GJGarageLayer, playerColorChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26d380, Thiscall, GJGarageLayer, rewardedVideoFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGarageLayer, achievementForUnlock, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270a30, Thiscall, GJGarageLayer, descriptionForUnlock, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26ee50, Thiscall, GJGarageLayer, getItems, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26ef10, Thiscall, GJGarageLayer, getItems, int, int, IconType, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGarageLayer, getLockFrame, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26e590, Thiscall, GJGarageLayer, onArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271750, Thiscall, GJGarageLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26d190, Thiscall, GJGarageLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26e690, Thiscall, GJGarageLayer, onNavigate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271570, Thiscall, GJGarageLayer, onPaint, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGarageLayer, onRewardedVideo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26f890, Thiscall, GJGarageLayer, onSelect, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26e6c0, Thiscall, GJGarageLayer, onSelectTab, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271420, Thiscall, GJGarageLayer, onShards, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2716f0, Thiscall, GJGarageLayer, onShop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270120, Thiscall, GJGarageLayer, onSpecial, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26ff30, Thiscall, GJGarageLayer, onToggleItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271230, Thiscall, GJGarageLayer, playRainbowEffect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGarageLayer, playShadowEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26e6f0, Thiscall, GJGarageLayer, selectTab, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26d930, Thiscall, GJGarageLayer, setupIconSelect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26e7b0, Thiscall, GJGarageLayer, setupPage, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26f1e0, Thiscall, GJGarageLayer, setupSpecialPage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGarageLayer, showUnlockPopupNew, int, UnlockType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGarageLayer, titleForUnlock, int, UnlockType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGarageLayer, toggleGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2701a0, Thiscall, GJGarageLayer, updatePlayerColors, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGarageLayer, updatePlayerName, char const*)
		}
	};
}
