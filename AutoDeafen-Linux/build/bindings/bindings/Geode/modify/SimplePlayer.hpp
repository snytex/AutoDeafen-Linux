#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SimplePlayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_asyncLoadIcon
		#define GEODE_STATICS_asyncLoadIcon
		GEODE_AS_STATIC_FUNCTION(asyncLoadIcon) 
	#endif

	#ifndef GEODE_STATICS_createSpiderSprite
		#define GEODE_STATICS_createSpiderSprite
		GEODE_AS_STATIC_FUNCTION(createSpiderSprite) 
	#endif

	#ifndef GEODE_STATICS_iconFinishedLoading
		#define GEODE_STATICS_iconFinishedLoading
		GEODE_AS_STATIC_FUNCTION(iconFinishedLoading) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setFrames
		#define GEODE_STATICS_setFrames
		GEODE_AS_STATIC_FUNCTION(setFrames) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerFrame
		#define GEODE_STATICS_updatePlayerFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerFrame) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_asyncLoadIcon
		#define GEODE_CONCEPT_CHECK_asyncLoadIcon
		GEODE_CONCEPT_FUNCTION_CHECK(asyncLoadIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createRobotSprite
		#define GEODE_CONCEPT_CHECK_createRobotSprite
		GEODE_CONCEPT_FUNCTION_CHECK(createRobotSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSpiderSprite
		#define GEODE_CONCEPT_CHECK_createSpiderSprite
		GEODE_CONCEPT_FUNCTION_CHECK(createSpiderSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableCustomGlowColor
		#define GEODE_CONCEPT_CHECK_disableCustomGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(disableCustomGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableCustomGlowColor
		#define GEODE_CONCEPT_CHECK_enableCustomGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(enableCustomGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideAll
		#define GEODE_CONCEPT_CHECK_hideAll
		GEODE_CONCEPT_FUNCTION_CHECK(hideAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideSecondary
		#define GEODE_CONCEPT_CHECK_hideSecondary
		GEODE_CONCEPT_FUNCTION_CHECK(hideSecondary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_iconFinishedLoading
		#define GEODE_CONCEPT_CHECK_iconFinishedLoading
		GEODE_CONCEPT_FUNCTION_CHECK(iconFinishedLoading) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColors
		#define GEODE_CONCEPT_CHECK_setColors
		GEODE_CONCEPT_FUNCTION_CHECK(setColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFrames
		#define GEODE_CONCEPT_CHECK_setFrames
		GEODE_CONCEPT_FUNCTION_CHECK(setFrames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSecondColor
		#define GEODE_CONCEPT_CHECK_setSecondColor
		GEODE_CONCEPT_FUNCTION_CHECK(setSecondColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColors
		#define GEODE_CONCEPT_CHECK_updateColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerFrame
		#define GEODE_CONCEPT_CHECK_updatePlayerFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerFrame) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SimplePlayer> : ModifyBase<ModifyDerive<Der, SimplePlayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SimplePlayer>>;
		using ModifyBase<ModifyDerive<Der, SimplePlayer>>::ModifyBase;
		using Base = SimplePlayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271ac0, Default, SimplePlayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272e70, Thiscall, SimplePlayer, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272320, Thiscall, SimplePlayer, setColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, asyncLoadIcon, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SimplePlayer, createRobotSprite, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272290, Thiscall, SimplePlayer, createSpiderSprite, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SimplePlayer, disableCustomGlowColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SimplePlayer, enableCustomGlowColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SimplePlayer, hideAll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SimplePlayer, hideSecondary, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SimplePlayer, iconFinishedLoading, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271bb0, Thiscall, SimplePlayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SimplePlayer, setColors, cocos2d::ccColor3B const&, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272c40, Thiscall, SimplePlayer, setFrames, char const*, char const*, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SimplePlayer, setSecondColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272350, Thiscall, SimplePlayer, updateColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272710, Thiscall, SimplePlayer, updatePlayerFrame, int, IconType)
		}
	};
}
