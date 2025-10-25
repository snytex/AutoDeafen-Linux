#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithTexture
		#define GEODE_STATICS_createWithTexture
		GEODE_AS_STATIC_FUNCTION(createWithTexture) 
	#endif

	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_addChild
		#define GEODE_STATICS_addChild
		GEODE_AS_STATIC_FUNCTION(addChild) 
	#endif

	#ifndef GEODE_STATICS_removeChild
		#define GEODE_STATICS_removeChild
		GEODE_AS_STATIC_FUNCTION(removeChild) 
	#endif

	#ifndef GEODE_STATICS_removeAllChildrenWithCleanup
		#define GEODE_STATICS_removeAllChildrenWithCleanup
		GEODE_AS_STATIC_FUNCTION(removeAllChildrenWithCleanup) 
	#endif

	#ifndef GEODE_STATICS_reorderChild
		#define GEODE_STATICS_reorderChild
		GEODE_AS_STATIC_FUNCTION(reorderChild) 
	#endif

	#ifndef GEODE_STATICS_sortAllChildren
		#define GEODE_STATICS_sortAllChildren
		GEODE_AS_STATIC_FUNCTION(sortAllChildren) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createWithTexture
		#define GEODE_CONCEPT_CHECK_createWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addChild
		#define GEODE_CONCEPT_CHECK_addChild
		GEODE_CONCEPT_FUNCTION_CHECK(addChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeChild
		#define GEODE_CONCEPT_CHECK_removeChild
		GEODE_CONCEPT_FUNCTION_CHECK(removeChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllChildrenWithCleanup
		#define GEODE_CONCEPT_CHECK_removeAllChildrenWithCleanup
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllChildrenWithCleanup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderChild
		#define GEODE_CONCEPT_CHECK_reorderChild
		GEODE_CONCEPT_FUNCTION_CHECK(reorderChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortAllChildren
		#define GEODE_CONCEPT_CHECK_sortAllChildren
		GEODE_CONCEPT_FUNCTION_CHECK(sortAllChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendFunc
		#define GEODE_CONCEPT_CHECK_setBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBlendFunc
		#define GEODE_CONCEPT_CHECK_getBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(getBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTexture
		#define GEODE_CONCEPT_CHECK_getTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTexture
		#define GEODE_CONCEPT_CHECK_setTexture
		GEODE_CONCEPT_FUNCTION_CHECK(setTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSpriteBatchNode> : ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>>::ModifyBase;
		using Base = cocos2d::CCSpriteBatchNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, unsigned int>::func(&cocos2d::CCSpriteBatchNode::createWithTexture)), Default, cocos2d::CCSpriteBatchNode, createWithTexture, cocos2d::CCTexture2D*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, unsigned int>::func(&cocos2d::CCSpriteBatchNode::create)), Default, cocos2d::CCSpriteBatchNode, create, char const*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, unsigned int>::func(&cocos2d::CCSpriteBatchNode::initWithTexture)), Thiscall, cocos2d::CCSpriteBatchNode, initWithTexture, cocos2d::CCTexture2D*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCSpriteBatchNode@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCSpriteBatchNode, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCSpriteBatchNode@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCSpriteBatchNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::init)), Thiscall, cocos2d::CCSpriteBatchNode, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCSpriteBatchNode::addChild)), Thiscall, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCSpriteBatchNode::addChild)), Thiscall, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int, int>::func(&cocos2d::CCSpriteBatchNode::addChild)), Thiscall, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, bool>::func(&cocos2d::CCSpriteBatchNode::removeChild)), Thiscall, cocos2d::CCSpriteBatchNode, removeChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSpriteBatchNode::removeAllChildrenWithCleanup)), Thiscall, cocos2d::CCSpriteBatchNode, removeAllChildrenWithCleanup, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCSpriteBatchNode::reorderChild)), Thiscall, cocos2d::CCSpriteBatchNode, reorderChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::sortAllChildren)), Thiscall, cocos2d::CCSpriteBatchNode, sortAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::draw)), Thiscall, cocos2d::CCSpriteBatchNode, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::visit)), Thiscall, cocos2d::CCSpriteBatchNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::_ccBlendFunc>::func(&cocos2d::CCSpriteBatchNode::setBlendFunc)), Thiscall, cocos2d::CCSpriteBatchNode, setBlendFunc, cocos2d::_ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::getBlendFunc)), Thiscall, cocos2d::CCSpriteBatchNode, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::getTexture)), Thiscall, cocos2d::CCSpriteBatchNode, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCSpriteBatchNode::setTexture)), Thiscall, cocos2d::CCSpriteBatchNode, setTexture, cocos2d::CCTexture2D*)
		}
	};
}
