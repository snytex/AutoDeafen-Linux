#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_convertKeyCode
		#define GEODE_STATICS_convertKeyCode
		GEODE_AS_STATIC_FUNCTION(convertKeyCode) 
	#endif

	#ifndef GEODE_STATICS_getAltKeyPressed
		#define GEODE_STATICS_getAltKeyPressed
		GEODE_AS_STATIC_FUNCTION(getAltKeyPressed) 
	#endif

	#ifndef GEODE_STATICS_getBlockRepeat
		#define GEODE_STATICS_getBlockRepeat
		GEODE_AS_STATIC_FUNCTION(getBlockRepeat) 
	#endif

	#ifndef GEODE_STATICS_getCommandKeyPressed
		#define GEODE_STATICS_getCommandKeyPressed
		GEODE_AS_STATIC_FUNCTION(getCommandKeyPressed) 
	#endif

	#ifndef GEODE_STATICS_getControlKeyPressed
		#define GEODE_STATICS_getControlKeyPressed
		GEODE_AS_STATIC_FUNCTION(getControlKeyPressed) 
	#endif

	#ifndef GEODE_STATICS_getShiftKeyPressed
		#define GEODE_STATICS_getShiftKeyPressed
		GEODE_AS_STATIC_FUNCTION(getShiftKeyPressed) 
	#endif

	#ifndef GEODE_STATICS_setBlockRepeat
		#define GEODE_STATICS_setBlockRepeat
		GEODE_AS_STATIC_FUNCTION(setBlockRepeat) 
	#endif

	#ifndef GEODE_STATICS_addDelegate
		#define GEODE_STATICS_addDelegate
		GEODE_AS_STATIC_FUNCTION(addDelegate) 
	#endif

	#ifndef GEODE_STATICS_dispatchKeyboardMSG
		#define GEODE_STATICS_dispatchKeyboardMSG
		GEODE_AS_STATIC_FUNCTION(dispatchKeyboardMSG) 
	#endif

	#ifndef GEODE_STATICS_forceAddDelegate
		#define GEODE_STATICS_forceAddDelegate
		GEODE_AS_STATIC_FUNCTION(forceAddDelegate) 
	#endif

	#ifndef GEODE_STATICS_forceRemoveDelegate
		#define GEODE_STATICS_forceRemoveDelegate
		GEODE_AS_STATIC_FUNCTION(forceRemoveDelegate) 
	#endif

	#ifndef GEODE_STATICS_keyToString
		#define GEODE_STATICS_keyToString
		GEODE_AS_STATIC_FUNCTION(keyToString) 
	#endif

	#ifndef GEODE_STATICS_removeDelegate
		#define GEODE_STATICS_removeDelegate
		GEODE_AS_STATIC_FUNCTION(removeDelegate) 
	#endif

	#ifndef GEODE_STATICS_updateModifierKeys
		#define GEODE_STATICS_updateModifierKeys
		GEODE_AS_STATIC_FUNCTION(updateModifierKeys) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_convertKeyCode
		#define GEODE_CONCEPT_CHECK_convertKeyCode
		GEODE_CONCEPT_FUNCTION_CHECK(convertKeyCode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAltKeyPressed
		#define GEODE_CONCEPT_CHECK_getAltKeyPressed
		GEODE_CONCEPT_FUNCTION_CHECK(getAltKeyPressed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBlockRepeat
		#define GEODE_CONCEPT_CHECK_getBlockRepeat
		GEODE_CONCEPT_FUNCTION_CHECK(getBlockRepeat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCommandKeyPressed
		#define GEODE_CONCEPT_CHECK_getCommandKeyPressed
		GEODE_CONCEPT_FUNCTION_CHECK(getCommandKeyPressed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getControlKeyPressed
		#define GEODE_CONCEPT_CHECK_getControlKeyPressed
		GEODE_CONCEPT_FUNCTION_CHECK(getControlKeyPressed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShiftKeyPressed
		#define GEODE_CONCEPT_CHECK_getShiftKeyPressed
		GEODE_CONCEPT_FUNCTION_CHECK(getShiftKeyPressed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlockRepeat
		#define GEODE_CONCEPT_CHECK_setBlockRepeat
		GEODE_CONCEPT_FUNCTION_CHECK(setBlockRepeat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDelegate
		#define GEODE_CONCEPT_CHECK_addDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(addDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dispatchKeyboardMSG
		#define GEODE_CONCEPT_CHECK_dispatchKeyboardMSG
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchKeyboardMSG) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceAddDelegate
		#define GEODE_CONCEPT_CHECK_forceAddDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(forceAddDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceRemoveDelegate
		#define GEODE_CONCEPT_CHECK_forceRemoveDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(forceRemoveDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyToString
		#define GEODE_CONCEPT_CHECK_keyToString
		GEODE_CONCEPT_FUNCTION_CHECK(keyToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDelegate
		#define GEODE_CONCEPT_CHECK_removeDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(removeDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateModifierKeys
		#define GEODE_CONCEPT_CHECK_updateModifierKeys
		GEODE_CONCEPT_FUNCTION_CHECK(updateModifierKeys) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCKeyboardDispatcher> : ModifyBase<ModifyDerive<Der, cocos2d::CCKeyboardDispatcher>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCKeyboardDispatcher>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCKeyboardDispatcher>>::ModifyBase;
		using Base = cocos2d::CCKeyboardDispatcher;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::enumKeyCodes>::func(&cocos2d::CCKeyboardDispatcher::convertKeyCode)), Default, cocos2d::CCKeyboardDispatcher, convertKeyCode, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCKeyboardDispatcher::getAltKeyPressed)), Thiscall, cocos2d::CCKeyboardDispatcher, getAltKeyPressed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCKeyboardDispatcher::getBlockRepeat)), Thiscall, cocos2d::CCKeyboardDispatcher, getBlockRepeat, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCKeyboardDispatcher::getCommandKeyPressed)), Thiscall, cocos2d::CCKeyboardDispatcher, getCommandKeyPressed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCKeyboardDispatcher::getControlKeyPressed)), Thiscall, cocos2d::CCKeyboardDispatcher, getControlKeyPressed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCKeyboardDispatcher::getShiftKeyPressed)), Thiscall, cocos2d::CCKeyboardDispatcher, getShiftKeyPressed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCKeyboardDispatcher::setBlockRepeat)), Thiscall, cocos2d::CCKeyboardDispatcher, setBlockRepeat, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCKeyboardDelegate*>::func(&cocos2d::CCKeyboardDispatcher::addDelegate)), Thiscall, cocos2d::CCKeyboardDispatcher, addDelegate, cocos2d::CCKeyboardDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::enumKeyCodes, bool, bool>::func(&cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG)), Thiscall, cocos2d::CCKeyboardDispatcher, dispatchKeyboardMSG, cocos2d::enumKeyCodes, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCKeyboardDelegate*>::func(&cocos2d::CCKeyboardDispatcher::forceAddDelegate)), Thiscall, cocos2d::CCKeyboardDispatcher, forceAddDelegate, cocos2d::CCKeyboardDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCKeyboardDelegate*>::func(&cocos2d::CCKeyboardDispatcher::forceRemoveDelegate)), Thiscall, cocos2d::CCKeyboardDispatcher, forceRemoveDelegate, cocos2d::CCKeyboardDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::enumKeyCodes>::func(&cocos2d::CCKeyboardDispatcher::keyToString)), Thiscall, cocos2d::CCKeyboardDispatcher, keyToString, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCKeyboardDelegate*>::func(&cocos2d::CCKeyboardDispatcher::removeDelegate)), Thiscall, cocos2d::CCKeyboardDispatcher, removeDelegate, cocos2d::CCKeyboardDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool, bool, bool>::func(&cocos2d::CCKeyboardDispatcher::updateModifierKeys)), Thiscall, cocos2d::CCKeyboardDispatcher, updateModifierKeys, bool, bool, bool, bool)
		}
	};
}
