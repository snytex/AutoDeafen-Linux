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

	#ifndef GEODE_STATICS_initWithSprite
		#define GEODE_STATICS_initWithSprite
		GEODE_AS_STATIC_FUNCTION(initWithSprite) 
	#endif

	#ifndef GEODE_STATICS_getBarChangeRate
		#define GEODE_STATICS_getBarChangeRate
		GEODE_AS_STATIC_FUNCTION(getBarChangeRate) 
	#endif

	#ifndef GEODE_STATICS_getPercentage
		#define GEODE_STATICS_getPercentage
		GEODE_AS_STATIC_FUNCTION(getPercentage) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_setAnchorPoint
		#define GEODE_STATICS_setAnchorPoint
		GEODE_AS_STATIC_FUNCTION(setAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_setBarChangeRate
		#define GEODE_STATICS_setBarChangeRate
		GEODE_AS_STATIC_FUNCTION(setBarChangeRate) 
	#endif

	#ifndef GEODE_STATICS_setPercentage
		#define GEODE_STATICS_setPercentage
		GEODE_AS_STATIC_FUNCTION(setPercentage) 
	#endif

	#ifndef GEODE_STATICS_setReverseDirection
		#define GEODE_STATICS_setReverseDirection
		GEODE_AS_STATIC_FUNCTION(setReverseDirection) 
	#endif

	#ifndef GEODE_STATICS_setReverseProgress
		#define GEODE_STATICS_setReverseProgress
		GEODE_AS_STATIC_FUNCTION(setReverseProgress) 
	#endif

	#ifndef GEODE_STATICS_setSprite
		#define GEODE_STATICS_setSprite
		GEODE_AS_STATIC_FUNCTION(setSprite) 
	#endif

	#ifndef GEODE_STATICS_setType
		#define GEODE_STATICS_setType
		GEODE_AS_STATIC_FUNCTION(setType) 
	#endif

	#ifndef GEODE_STATICS_boundaryTexCoord
		#define GEODE_STATICS_boundaryTexCoord
		GEODE_AS_STATIC_FUNCTION(boundaryTexCoord) 
	#endif

	#ifndef GEODE_STATICS_isReverseDirection
		#define GEODE_STATICS_isReverseDirection
		GEODE_AS_STATIC_FUNCTION(isReverseDirection) 
	#endif

	#ifndef GEODE_STATICS_textureCoordFromAlphaPoint
		#define GEODE_STATICS_textureCoordFromAlphaPoint
		GEODE_AS_STATIC_FUNCTION(textureCoordFromAlphaPoint) 
	#endif

	#ifndef GEODE_STATICS_updateBar
		#define GEODE_STATICS_updateBar
		GEODE_AS_STATIC_FUNCTION(updateBar) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_updateProgress
		#define GEODE_STATICS_updateProgress
		GEODE_AS_STATIC_FUNCTION(updateProgress) 
	#endif

	#ifndef GEODE_STATICS_updateRadial
		#define GEODE_STATICS_updateRadial
		GEODE_AS_STATIC_FUNCTION(updateRadial) 
	#endif

	#ifndef GEODE_STATICS_vertexFromAlphaPoint
		#define GEODE_STATICS_vertexFromAlphaPoint
		GEODE_AS_STATIC_FUNCTION(vertexFromAlphaPoint) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_getMidpoint
		#define GEODE_STATICS_getMidpoint
		GEODE_AS_STATIC_FUNCTION(getMidpoint) 
	#endif

	#ifndef GEODE_STATICS_setMidpoint
		#define GEODE_STATICS_setMidpoint
		GEODE_AS_STATIC_FUNCTION(setMidpoint) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSprite
		#define GEODE_CONCEPT_CHECK_initWithSprite
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBarChangeRate
		#define GEODE_CONCEPT_CHECK_getBarChangeRate
		GEODE_CONCEPT_FUNCTION_CHECK(getBarChangeRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPercentage
		#define GEODE_CONCEPT_CHECK_getPercentage
		GEODE_CONCEPT_FUNCTION_CHECK(getPercentage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getType
		#define GEODE_CONCEPT_CHECK_getType
		GEODE_CONCEPT_FUNCTION_CHECK(getType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAnchorPoint
		#define GEODE_CONCEPT_CHECK_setAnchorPoint
		GEODE_CONCEPT_FUNCTION_CHECK(setAnchorPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBarChangeRate
		#define GEODE_CONCEPT_CHECK_setBarChangeRate
		GEODE_CONCEPT_FUNCTION_CHECK(setBarChangeRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPercentage
		#define GEODE_CONCEPT_CHECK_setPercentage
		GEODE_CONCEPT_FUNCTION_CHECK(setPercentage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setReverseDirection
		#define GEODE_CONCEPT_CHECK_setReverseDirection
		GEODE_CONCEPT_FUNCTION_CHECK(setReverseDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setReverseProgress
		#define GEODE_CONCEPT_CHECK_setReverseProgress
		GEODE_CONCEPT_FUNCTION_CHECK(setReverseProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSprite
		#define GEODE_CONCEPT_CHECK_setSprite
		GEODE_CONCEPT_FUNCTION_CHECK(setSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setType
		#define GEODE_CONCEPT_CHECK_setType
		GEODE_CONCEPT_FUNCTION_CHECK(setType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_boundaryTexCoord
		#define GEODE_CONCEPT_CHECK_boundaryTexCoord
		GEODE_CONCEPT_FUNCTION_CHECK(boundaryTexCoord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isReverseDirection
		#define GEODE_CONCEPT_CHECK_isReverseDirection
		GEODE_CONCEPT_FUNCTION_CHECK(isReverseDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textureCoordFromAlphaPoint
		#define GEODE_CONCEPT_CHECK_textureCoordFromAlphaPoint
		GEODE_CONCEPT_FUNCTION_CHECK(textureCoordFromAlphaPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBar
		#define GEODE_CONCEPT_CHECK_updateBar
		GEODE_CONCEPT_FUNCTION_CHECK(updateBar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor
		#define GEODE_CONCEPT_CHECK_updateColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateProgress
		#define GEODE_CONCEPT_CHECK_updateProgress
		GEODE_CONCEPT_FUNCTION_CHECK(updateProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRadial
		#define GEODE_CONCEPT_CHECK_updateRadial
		GEODE_CONCEPT_FUNCTION_CHECK(updateRadial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_vertexFromAlphaPoint
		#define GEODE_CONCEPT_CHECK_vertexFromAlphaPoint
		GEODE_CONCEPT_FUNCTION_CHECK(vertexFromAlphaPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor
		#define GEODE_CONCEPT_CHECK_getColor
		GEODE_CONCEPT_FUNCTION_CHECK(getColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacity
		#define GEODE_CONCEPT_CHECK_getOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMidpoint
		#define GEODE_CONCEPT_CHECK_getMidpoint
		GEODE_CONCEPT_FUNCTION_CHECK(getMidpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMidpoint
		#define GEODE_CONCEPT_CHECK_setMidpoint
		GEODE_CONCEPT_FUNCTION_CHECK(setMidpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCProgressTimer> : ModifyBase<ModifyDerive<Der, cocos2d::CCProgressTimer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCProgressTimer>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCProgressTimer>>::ModifyBase;
		using Base = cocos2d::CCProgressTimer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*>::func(&cocos2d::CCProgressTimer::create)), Default, cocos2d::CCProgressTimer, create, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*>::func(&cocos2d::CCProgressTimer::initWithSprite)), Thiscall, cocos2d::CCProgressTimer, initWithSprite, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::getBarChangeRate)), Thiscall, cocos2d::CCProgressTimer, getBarChangeRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::getPercentage)), Thiscall, cocos2d::CCProgressTimer, getPercentage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::getType)), Thiscall, cocos2d::CCProgressTimer, getType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::CCProgressTimer::setAnchorPoint)), Thiscall, cocos2d::CCProgressTimer, setAnchorPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::CCProgressTimer::setBarChangeRate)), Thiscall, cocos2d::CCProgressTimer, setBarChangeRate, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCProgressTimer::setPercentage)), Thiscall, cocos2d::CCProgressTimer, setPercentage, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCProgressTimer::setReverseDirection)), Thiscall, cocos2d::CCProgressTimer, setReverseDirection, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCProgressTimer::setReverseProgress)), Thiscall, cocos2d::CCProgressTimer, setReverseProgress, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*>::func(&cocos2d::CCProgressTimer::setSprite)), Thiscall, cocos2d::CCProgressTimer, setSprite, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCProgressTimerType>::func(&cocos2d::CCProgressTimer::setType)), Thiscall, cocos2d::CCProgressTimer, setType, cocos2d::CCProgressTimerType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char>::func(&cocos2d::CCProgressTimer::boundaryTexCoord)), Thiscall, cocos2d::CCProgressTimer, boundaryTexCoord, char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::isReverseDirection)), Thiscall, cocos2d::CCProgressTimer, isReverseDirection, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::CCProgressTimer::textureCoordFromAlphaPoint)), Thiscall, cocos2d::CCProgressTimer, textureCoordFromAlphaPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::updateBar)), Thiscall, cocos2d::CCProgressTimer, updateBar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::updateColor)), Thiscall, cocos2d::CCProgressTimer, updateColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::updateProgress)), Thiscall, cocos2d::CCProgressTimer, updateProgress, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::updateRadial)), Thiscall, cocos2d::CCProgressTimer, updateRadial, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::CCProgressTimer::vertexFromAlphaPoint)), Thiscall, cocos2d::CCProgressTimer, vertexFromAlphaPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::getColor)), Thiscall, cocos2d::CCProgressTimer, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::getOpacity)), Thiscall, cocos2d::CCProgressTimer, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::draw)), Thiscall, cocos2d::CCProgressTimer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCProgressTimer::getMidpoint)), Thiscall, cocos2d::CCProgressTimer, getMidpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::CCProgressTimer::setMidpoint)), Thiscall, cocos2d::CCProgressTimer, setMidpoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccColor3B const&>::func(&cocos2d::CCProgressTimer::setColor)), Thiscall, cocos2d::CCProgressTimer, setColor, cocos2d::_ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCProgressTimer::setOpacity)), Thiscall, cocos2d::CCProgressTimer, setOpacity, unsigned char)
		}
	};
}
