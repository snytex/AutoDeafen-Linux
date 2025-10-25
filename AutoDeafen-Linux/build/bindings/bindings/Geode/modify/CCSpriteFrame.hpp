#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithTexture
		#define GEODE_STATICS_createWithTexture
		GEODE_AS_STATIC_FUNCTION(createWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithTextureFilename
		#define GEODE_STATICS_initWithTextureFilename
		GEODE_AS_STATIC_FUNCTION(initWithTextureFilename) 
	#endif

	#ifndef GEODE_STATICS_getFrameName
		#define GEODE_STATICS_getFrameName
		GEODE_AS_STATIC_FUNCTION(getFrameName) 
	#endif

	#ifndef GEODE_STATICS_getOffset
		#define GEODE_STATICS_getOffset
		GEODE_AS_STATIC_FUNCTION(getOffset) 
	#endif

	#ifndef GEODE_STATICS_getOffsetInPixels
		#define GEODE_STATICS_getOffsetInPixels
		GEODE_AS_STATIC_FUNCTION(getOffsetInPixels) 
	#endif

	#ifndef GEODE_STATICS_getOriginalSize
		#define GEODE_STATICS_getOriginalSize
		GEODE_AS_STATIC_FUNCTION(getOriginalSize) 
	#endif

	#ifndef GEODE_STATICS_getOriginalSizeInPixels
		#define GEODE_STATICS_getOriginalSizeInPixels
		GEODE_AS_STATIC_FUNCTION(getOriginalSizeInPixels) 
	#endif

	#ifndef GEODE_STATICS_getRect
		#define GEODE_STATICS_getRect
		GEODE_AS_STATIC_FUNCTION(getRect) 
	#endif

	#ifndef GEODE_STATICS_getRectInPixels
		#define GEODE_STATICS_getRectInPixels
		GEODE_AS_STATIC_FUNCTION(getRectInPixels) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setFrameName
		#define GEODE_STATICS_setFrameName
		GEODE_AS_STATIC_FUNCTION(setFrameName) 
	#endif

	#ifndef GEODE_STATICS_setOffset
		#define GEODE_STATICS_setOffset
		GEODE_AS_STATIC_FUNCTION(setOffset) 
	#endif

	#ifndef GEODE_STATICS_setOffsetInPixels
		#define GEODE_STATICS_setOffsetInPixels
		GEODE_AS_STATIC_FUNCTION(setOffsetInPixels) 
	#endif

	#ifndef GEODE_STATICS_setOriginalSize
		#define GEODE_STATICS_setOriginalSize
		GEODE_AS_STATIC_FUNCTION(setOriginalSize) 
	#endif

	#ifndef GEODE_STATICS_setOriginalSizeInPixels
		#define GEODE_STATICS_setOriginalSizeInPixels
		GEODE_AS_STATIC_FUNCTION(setOriginalSizeInPixels) 
	#endif

	#ifndef GEODE_STATICS_setRect
		#define GEODE_STATICS_setRect
		GEODE_AS_STATIC_FUNCTION(setRect) 
	#endif

	#ifndef GEODE_STATICS_setRectInPixels
		#define GEODE_STATICS_setRectInPixels
		GEODE_AS_STATIC_FUNCTION(setRectInPixels) 
	#endif

	#ifndef GEODE_STATICS_setRotated
		#define GEODE_STATICS_setRotated
		GEODE_AS_STATIC_FUNCTION(setRotated) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

	#ifndef GEODE_STATICS_isRotated
		#define GEODE_STATICS_isRotated
		GEODE_AS_STATIC_FUNCTION(isRotated) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithTexture
		#define GEODE_CONCEPT_CHECK_createWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTextureFilename
		#define GEODE_CONCEPT_CHECK_initWithTextureFilename
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTextureFilename) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFrameName
		#define GEODE_CONCEPT_CHECK_getFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(getFrameName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOffset
		#define GEODE_CONCEPT_CHECK_getOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOffsetInPixels
		#define GEODE_CONCEPT_CHECK_getOffsetInPixels
		GEODE_CONCEPT_FUNCTION_CHECK(getOffsetInPixels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOriginalSize
		#define GEODE_CONCEPT_CHECK_getOriginalSize
		GEODE_CONCEPT_FUNCTION_CHECK(getOriginalSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOriginalSizeInPixels
		#define GEODE_CONCEPT_CHECK_getOriginalSizeInPixels
		GEODE_CONCEPT_FUNCTION_CHECK(getOriginalSizeInPixels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRect
		#define GEODE_CONCEPT_CHECK_getRect
		GEODE_CONCEPT_FUNCTION_CHECK(getRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRectInPixels
		#define GEODE_CONCEPT_CHECK_getRectInPixels
		GEODE_CONCEPT_FUNCTION_CHECK(getRectInPixels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTexture
		#define GEODE_CONCEPT_CHECK_getTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFrameName
		#define GEODE_CONCEPT_CHECK_setFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(setFrameName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOffset
		#define GEODE_CONCEPT_CHECK_setOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOffsetInPixels
		#define GEODE_CONCEPT_CHECK_setOffsetInPixels
		GEODE_CONCEPT_FUNCTION_CHECK(setOffsetInPixels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOriginalSize
		#define GEODE_CONCEPT_CHECK_setOriginalSize
		GEODE_CONCEPT_FUNCTION_CHECK(setOriginalSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOriginalSizeInPixels
		#define GEODE_CONCEPT_CHECK_setOriginalSizeInPixels
		GEODE_CONCEPT_FUNCTION_CHECK(setOriginalSizeInPixels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRect
		#define GEODE_CONCEPT_CHECK_setRect
		GEODE_CONCEPT_FUNCTION_CHECK(setRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRectInPixels
		#define GEODE_CONCEPT_CHECK_setRectInPixels
		GEODE_CONCEPT_FUNCTION_CHECK(setRectInPixels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotated
		#define GEODE_CONCEPT_CHECK_setRotated
		GEODE_CONCEPT_FUNCTION_CHECK(setRotated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTexture
		#define GEODE_CONCEPT_CHECK_setTexture
		GEODE_CONCEPT_FUNCTION_CHECK(setTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRotated
		#define GEODE_CONCEPT_CHECK_isRotated
		GEODE_CONCEPT_FUNCTION_CHECK(isRotated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSpriteFrame> : ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrame>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrame>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrame>>::ModifyBase;
		using Base = cocos2d::CCSpriteFrame;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::create)), Default, cocos2d::CCSpriteFrame, create, char const*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&>::func(&cocos2d::CCSpriteFrame::create)), Default, cocos2d::CCSpriteFrame, create, char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::createWithTexture)), Default, cocos2d::CCSpriteFrame, createWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&>::func(&cocos2d::CCSpriteFrame::createWithTexture)), Default, cocos2d::CCSpriteFrame, createWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::initWithTexture)), Thiscall, cocos2d::CCSpriteFrame, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&>::func(&cocos2d::CCSpriteFrame::initWithTexture)), Thiscall, cocos2d::CCSpriteFrame, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::initWithTextureFilename)), Thiscall, cocos2d::CCSpriteFrame, initWithTextureFilename, char const*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&>::func(&cocos2d::CCSpriteFrame::initWithTextureFilename)), Thiscall, cocos2d::CCSpriteFrame, initWithTextureFilename, char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::getFrameName)), Thiscall, cocos2d::CCSpriteFrame, getFrameName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::getOffset)), Thiscall, cocos2d::CCSpriteFrame, getOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::getOffsetInPixels)), Thiscall, cocos2d::CCSpriteFrame, getOffsetInPixels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::getOriginalSize)), Thiscall, cocos2d::CCSpriteFrame, getOriginalSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::getOriginalSizeInPixels)), Thiscall, cocos2d::CCSpriteFrame, getOriginalSizeInPixels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::getRect)), Thiscall, cocos2d::CCSpriteFrame, getRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::getRectInPixels)), Thiscall, cocos2d::CCSpriteFrame, getRectInPixels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::getTexture)), Thiscall, cocos2d::CCSpriteFrame, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string>::func(&cocos2d::CCSpriteFrame::setFrameName)), Thiscall, cocos2d::CCSpriteFrame, setFrameName, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCSpriteFrame::setOffset)), Thiscall, cocos2d::CCSpriteFrame, setOffset, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCSpriteFrame::setOffsetInPixels)), Thiscall, cocos2d::CCSpriteFrame, setOffsetInPixels, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCSpriteFrame::setOriginalSize)), Thiscall, cocos2d::CCSpriteFrame, setOriginalSize, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCSpriteFrame::setOriginalSizeInPixels)), Thiscall, cocos2d::CCSpriteFrame, setOriginalSizeInPixels, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::setRect)), Thiscall, cocos2d::CCSpriteFrame, setRect, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCSpriteFrame::setRectInPixels)), Thiscall, cocos2d::CCSpriteFrame, setRectInPixels, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCSpriteFrame::setRotated)), Thiscall, cocos2d::CCSpriteFrame, setRotated, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCSpriteFrame::setTexture)), Thiscall, cocos2d::CCSpriteFrame, setTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCSpriteFrame@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCSpriteFrame)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrame::isRotated)), Thiscall, cocos2d::CCSpriteFrame, isRotated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCSpriteFrame::copyWithZone)), Thiscall, cocos2d::CCSpriteFrame, copyWithZone, cocos2d::CCZone*)
		}
	};
}
