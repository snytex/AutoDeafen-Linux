#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithContentsOfFile
		#define GEODE_STATICS_createWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_createWithContentsOfFileThreadSafe
		#define GEODE_STATICS_createWithContentsOfFileThreadSafe
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFileThreadSafe) 
	#endif

	#ifndef GEODE_STATICS_initWithArray
		#define GEODE_STATICS_initWithArray
		GEODE_AS_STATIC_FUNCTION(initWithArray) 
	#endif

	#ifndef GEODE_STATICS_initWithObject
		#define GEODE_STATICS_initWithObject
		GEODE_AS_STATIC_FUNCTION(initWithObject) 
	#endif

	#ifndef GEODE_STATICS_addObjectNew
		#define GEODE_STATICS_addObjectNew
		GEODE_AS_STATIC_FUNCTION(addObjectNew) 
	#endif

	#ifndef GEODE_STATICS_capacity
		#define GEODE_STATICS_capacity
		GEODE_AS_STATIC_FUNCTION(capacity) 
	#endif

	#ifndef GEODE_STATICS_exchangeObject
		#define GEODE_STATICS_exchangeObject
		GEODE_AS_STATIC_FUNCTION(exchangeObject) 
	#endif

	#ifndef GEODE_STATICS_exchangeObjectAtIndex
		#define GEODE_STATICS_exchangeObjectAtIndex
		GEODE_AS_STATIC_FUNCTION(exchangeObjectAtIndex) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObjectAtIndexChild
		#define GEODE_STATICS_fastRemoveObjectAtIndexChild
		GEODE_AS_STATIC_FUNCTION(fastRemoveObjectAtIndexChild) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObjectAtIndexNew
		#define GEODE_STATICS_fastRemoveObjectAtIndexNew
		GEODE_AS_STATIC_FUNCTION(fastRemoveObjectAtIndexNew) 
	#endif

	#ifndef GEODE_STATICS_indexOfObject
		#define GEODE_STATICS_indexOfObject
		GEODE_AS_STATIC_FUNCTION(indexOfObject) 
	#endif

	#ifndef GEODE_STATICS_isEqualToArray
		#define GEODE_STATICS_isEqualToArray
		GEODE_AS_STATIC_FUNCTION(isEqualToArray) 
	#endif

	#ifndef GEODE_STATICS_randomObject
		#define GEODE_STATICS_randomObject
		GEODE_AS_STATIC_FUNCTION(randomObject) 
	#endif

	#ifndef GEODE_STATICS_recreateNewIndexes
		#define GEODE_STATICS_recreateNewIndexes
		GEODE_AS_STATIC_FUNCTION(recreateNewIndexes) 
	#endif

	#ifndef GEODE_STATICS_reduceMemoryFootprint
		#define GEODE_STATICS_reduceMemoryFootprint
		GEODE_AS_STATIC_FUNCTION(reduceMemoryFootprint) 
	#endif

	#ifndef GEODE_STATICS_removeObject
		#define GEODE_STATICS_removeObject
		GEODE_AS_STATIC_FUNCTION(removeObject) 
	#endif

	#ifndef GEODE_STATICS_removeObjectAtIndexChild
		#define GEODE_STATICS_removeObjectAtIndexChild
		GEODE_AS_STATIC_FUNCTION(removeObjectAtIndexChild) 
	#endif

	#ifndef GEODE_STATICS_removeObjectsInArray
		#define GEODE_STATICS_removeObjectsInArray
		GEODE_AS_STATIC_FUNCTION(removeObjectsInArray) 
	#endif

	#ifndef GEODE_STATICS_replaceObjectAtIndex
		#define GEODE_STATICS_replaceObjectAtIndex
		GEODE_AS_STATIC_FUNCTION(replaceObjectAtIndex) 
	#endif

	#ifndef GEODE_STATICS_reverseObjects
		#define GEODE_STATICS_reverseObjects
		GEODE_AS_STATIC_FUNCTION(reverseObjects) 
	#endif

	#ifndef GEODE_STATICS_stringAtIndex
		#define GEODE_STATICS_stringAtIndex
		GEODE_AS_STATIC_FUNCTION(stringAtIndex) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createWithContentsOfFile
		#define GEODE_CONCEPT_CHECK_createWithContentsOfFile
		GEODE_CONCEPT_FUNCTION_CHECK(createWithContentsOfFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithContentsOfFileThreadSafe
		#define GEODE_CONCEPT_CHECK_createWithContentsOfFileThreadSafe
		GEODE_CONCEPT_FUNCTION_CHECK(createWithContentsOfFileThreadSafe) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithArray
		#define GEODE_CONCEPT_CHECK_initWithArray
		GEODE_CONCEPT_FUNCTION_CHECK(initWithArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithObject
		#define GEODE_CONCEPT_CHECK_initWithObject
		GEODE_CONCEPT_FUNCTION_CHECK(initWithObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectNew
		#define GEODE_CONCEPT_CHECK_addObjectNew
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_capacity
		#define GEODE_CONCEPT_CHECK_capacity
		GEODE_CONCEPT_FUNCTION_CHECK(capacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exchangeObject
		#define GEODE_CONCEPT_CHECK_exchangeObject
		GEODE_CONCEPT_FUNCTION_CHECK(exchangeObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exchangeObjectAtIndex
		#define GEODE_CONCEPT_CHECK_exchangeObjectAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(exchangeObjectAtIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fastRemoveObjectAtIndexChild
		#define GEODE_CONCEPT_CHECK_fastRemoveObjectAtIndexChild
		GEODE_CONCEPT_FUNCTION_CHECK(fastRemoveObjectAtIndexChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fastRemoveObjectAtIndexNew
		#define GEODE_CONCEPT_CHECK_fastRemoveObjectAtIndexNew
		GEODE_CONCEPT_FUNCTION_CHECK(fastRemoveObjectAtIndexNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_indexOfObject
		#define GEODE_CONCEPT_CHECK_indexOfObject
		GEODE_CONCEPT_FUNCTION_CHECK(indexOfObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isEqualToArray
		#define GEODE_CONCEPT_CHECK_isEqualToArray
		GEODE_CONCEPT_FUNCTION_CHECK(isEqualToArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_randomObject
		#define GEODE_CONCEPT_CHECK_randomObject
		GEODE_CONCEPT_FUNCTION_CHECK(randomObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recreateNewIndexes
		#define GEODE_CONCEPT_CHECK_recreateNewIndexes
		GEODE_CONCEPT_FUNCTION_CHECK(recreateNewIndexes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reduceMemoryFootprint
		#define GEODE_CONCEPT_CHECK_reduceMemoryFootprint
		GEODE_CONCEPT_FUNCTION_CHECK(reduceMemoryFootprint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObject
		#define GEODE_CONCEPT_CHECK_removeObject
		GEODE_CONCEPT_FUNCTION_CHECK(removeObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectAtIndexChild
		#define GEODE_CONCEPT_CHECK_removeObjectAtIndexChild
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectAtIndexChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectsInArray
		#define GEODE_CONCEPT_CHECK_removeObjectsInArray
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectsInArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_replaceObjectAtIndex
		#define GEODE_CONCEPT_CHECK_replaceObjectAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(replaceObjectAtIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverseObjects
		#define GEODE_CONCEPT_CHECK_reverseObjects
		GEODE_CONCEPT_FUNCTION_CHECK(reverseObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringAtIndex
		#define GEODE_CONCEPT_CHECK_stringAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(stringAtIndex) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCArray> : ModifyBase<ModifyDerive<Der, cocos2d::CCArray>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCArray>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCArray>>::ModifyBase;
		using Base = cocos2d::CCArray;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCArray::createWithContentsOfFile)), Default, cocos2d::CCArray, createWithContentsOfFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCArray::createWithContentsOfFileThreadSafe)), Default, cocos2d::CCArray, createWithContentsOfFileThreadSafe, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCArray::initWithArray)), Thiscall, cocos2d::CCArray, initWithArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCArray::initWithObject)), Thiscall, cocos2d::CCArray, initWithObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCArray::addObjectNew)), Thiscall, cocos2d::CCArray, addObjectNew, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::capacity)), Thiscall, cocos2d::CCArray, capacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, cocos2d::CCObject*>::func(&cocos2d::CCArray::exchangeObject)), Thiscall, cocos2d::CCArray, exchangeObject, cocos2d::CCObject*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, unsigned int>::func(&cocos2d::CCArray::exchangeObjectAtIndex)), Thiscall, cocos2d::CCArray, exchangeObjectAtIndex, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::fastRemoveObjectAtIndexChild)), Thiscall, cocos2d::CCArray, fastRemoveObjectAtIndexChild, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::fastRemoveObjectAtIndexNew)), Thiscall, cocos2d::CCArray, fastRemoveObjectAtIndexNew, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCArray::indexOfObject)), Thiscall, cocos2d::CCArray, indexOfObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCArray::isEqualToArray)), Thiscall, cocos2d::CCArray, isEqualToArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::randomObject)), Thiscall, cocos2d::CCArray, randomObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::recreateNewIndexes)), Thiscall, cocos2d::CCArray, recreateNewIndexes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::reduceMemoryFootprint)), Thiscall, cocos2d::CCArray, reduceMemoryFootprint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, bool>::func(&cocos2d::CCArray::removeObject)), Thiscall, cocos2d::CCArray, removeObject, cocos2d::CCObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, bool>::func(&cocos2d::CCArray::removeObjectAtIndexChild)), Thiscall, cocos2d::CCArray, removeObjectAtIndexChild, unsigned int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCArray::removeObjectsInArray)), Thiscall, cocos2d::CCArray, removeObjectsInArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, cocos2d::CCObject*, bool>::func(&cocos2d::CCArray::replaceObjectAtIndex)), Thiscall, cocos2d::CCArray, replaceObjectAtIndex, unsigned int, cocos2d::CCObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::reverseObjects)), Thiscall, cocos2d::CCArray, reverseObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::stringAtIndex)), Thiscall, cocos2d::CCArray, stringAtIndex, unsigned int)
		}
	};
}
