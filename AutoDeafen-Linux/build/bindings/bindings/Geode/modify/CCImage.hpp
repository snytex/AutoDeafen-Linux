#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_initWithImageData
		#define GEODE_STATICS_initWithImageData
		GEODE_AS_STATIC_FUNCTION(initWithImageData) 
	#endif

	#ifndef GEODE_STATICS_initWithImageFile
		#define GEODE_STATICS_initWithImageFile
		GEODE_AS_STATIC_FUNCTION(initWithImageFile) 
	#endif

	#ifndef GEODE_STATICS_initWithImageFileThreadSafe
		#define GEODE_STATICS_initWithImageFileThreadSafe
		GEODE_AS_STATIC_FUNCTION(initWithImageFileThreadSafe) 
	#endif

	#ifndef GEODE_STATICS_initWithString
		#define GEODE_STATICS_initWithString
		GEODE_AS_STATIC_FUNCTION(initWithString) 
	#endif

	#ifndef GEODE_STATICS_getBitsPerComponent
		#define GEODE_STATICS_getBitsPerComponent
		GEODE_AS_STATIC_FUNCTION(getBitsPerComponent) 
	#endif

	#ifndef GEODE_STATICS_getData
		#define GEODE_STATICS_getData
		GEODE_AS_STATIC_FUNCTION(getData) 
	#endif

	#ifndef GEODE_STATICS_getDataLen
		#define GEODE_STATICS_getDataLen
		GEODE_AS_STATIC_FUNCTION(getDataLen) 
	#endif

	#ifndef GEODE_STATICS_getHeight
		#define GEODE_STATICS_getHeight
		GEODE_AS_STATIC_FUNCTION(getHeight) 
	#endif

	#ifndef GEODE_STATICS_getWidth
		#define GEODE_STATICS_getWidth
		GEODE_AS_STATIC_FUNCTION(getWidth) 
	#endif

	#ifndef GEODE_STATICS__initWithJpgData
		#define GEODE_STATICS__initWithJpgData
		GEODE_AS_STATIC_FUNCTION(_initWithJpgData) 
	#endif

	#ifndef GEODE_STATICS__initWithPngData
		#define GEODE_STATICS__initWithPngData
		GEODE_AS_STATIC_FUNCTION(_initWithPngData) 
	#endif

	#ifndef GEODE_STATICS__initWithRawData
		#define GEODE_STATICS__initWithRawData
		GEODE_AS_STATIC_FUNCTION(_initWithRawData) 
	#endif

	#ifndef GEODE_STATICS__initWithTiffData
		#define GEODE_STATICS__initWithTiffData
		GEODE_AS_STATIC_FUNCTION(_initWithTiffData) 
	#endif

	#ifndef GEODE_STATICS__initWithWebpData
		#define GEODE_STATICS__initWithWebpData
		GEODE_AS_STATIC_FUNCTION(_initWithWebpData) 
	#endif

	#ifndef GEODE_STATICS__saveImageToJPG
		#define GEODE_STATICS__saveImageToJPG
		GEODE_AS_STATIC_FUNCTION(_saveImageToJPG) 
	#endif

	#ifndef GEODE_STATICS__saveImageToPNG
		#define GEODE_STATICS__saveImageToPNG
		GEODE_AS_STATIC_FUNCTION(_saveImageToPNG) 
	#endif

	#ifndef GEODE_STATICS_hasAlpha
		#define GEODE_STATICS_hasAlpha
		GEODE_AS_STATIC_FUNCTION(hasAlpha) 
	#endif

	#ifndef GEODE_STATICS_isPremultipliedAlpha
		#define GEODE_STATICS_isPremultipliedAlpha
		GEODE_AS_STATIC_FUNCTION(isPremultipliedAlpha) 
	#endif

	#ifndef GEODE_STATICS_saveToFile
		#define GEODE_STATICS_saveToFile
		GEODE_AS_STATIC_FUNCTION(saveToFile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_initWithImageData
		#define GEODE_CONCEPT_CHECK_initWithImageData
		GEODE_CONCEPT_FUNCTION_CHECK(initWithImageData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithImageFile
		#define GEODE_CONCEPT_CHECK_initWithImageFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithImageFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithImageFileThreadSafe
		#define GEODE_CONCEPT_CHECK_initWithImageFileThreadSafe
		GEODE_CONCEPT_FUNCTION_CHECK(initWithImageFileThreadSafe) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithString
		#define GEODE_CONCEPT_CHECK_initWithString
		GEODE_CONCEPT_FUNCTION_CHECK(initWithString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBitsPerComponent
		#define GEODE_CONCEPT_CHECK_getBitsPerComponent
		GEODE_CONCEPT_FUNCTION_CHECK(getBitsPerComponent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getData
		#define GEODE_CONCEPT_CHECK_getData
		GEODE_CONCEPT_FUNCTION_CHECK(getData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDataLen
		#define GEODE_CONCEPT_CHECK_getDataLen
		GEODE_CONCEPT_FUNCTION_CHECK(getDataLen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHeight
		#define GEODE_CONCEPT_CHECK_getHeight
		GEODE_CONCEPT_FUNCTION_CHECK(getHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWidth
		#define GEODE_CONCEPT_CHECK_getWidth
		GEODE_CONCEPT_FUNCTION_CHECK(getWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__initWithJpgData
		#define GEODE_CONCEPT_CHECK__initWithJpgData
		GEODE_CONCEPT_FUNCTION_CHECK(_initWithJpgData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__initWithPngData
		#define GEODE_CONCEPT_CHECK__initWithPngData
		GEODE_CONCEPT_FUNCTION_CHECK(_initWithPngData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__initWithRawData
		#define GEODE_CONCEPT_CHECK__initWithRawData
		GEODE_CONCEPT_FUNCTION_CHECK(_initWithRawData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__initWithTiffData
		#define GEODE_CONCEPT_CHECK__initWithTiffData
		GEODE_CONCEPT_FUNCTION_CHECK(_initWithTiffData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__initWithWebpData
		#define GEODE_CONCEPT_CHECK__initWithWebpData
		GEODE_CONCEPT_FUNCTION_CHECK(_initWithWebpData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__saveImageToJPG
		#define GEODE_CONCEPT_CHECK__saveImageToJPG
		GEODE_CONCEPT_FUNCTION_CHECK(_saveImageToJPG) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__saveImageToPNG
		#define GEODE_CONCEPT_CHECK__saveImageToPNG
		GEODE_CONCEPT_FUNCTION_CHECK(_saveImageToPNG) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasAlpha
		#define GEODE_CONCEPT_CHECK_hasAlpha
		GEODE_CONCEPT_FUNCTION_CHECK(hasAlpha) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPremultipliedAlpha
		#define GEODE_CONCEPT_CHECK_isPremultipliedAlpha
		GEODE_CONCEPT_FUNCTION_CHECK(isPremultipliedAlpha) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveToFile
		#define GEODE_CONCEPT_CHECK_saveToFile
		GEODE_CONCEPT_FUNCTION_CHECK(saveToFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCImage> : ModifyBase<ModifyDerive<Der, cocos2d::CCImage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCImage>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCImage>>::ModifyBase;
		using Base = cocos2d::CCImage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*, int, cocos2d::CCImage::EImageFormat, int, int, int, int>::func(&cocos2d::CCImage::initWithImageData)), Thiscall, cocos2d::CCImage, initWithImageData, void*, int, cocos2d::CCImage::EImageFormat, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCImage::EImageFormat>::func(&cocos2d::CCImage::initWithImageFile)), Thiscall, cocos2d::CCImage, initWithImageFile, char const*, cocos2d::CCImage::EImageFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCImage::EImageFormat>::func(&cocos2d::CCImage::initWithImageFileThreadSafe)), Thiscall, cocos2d::CCImage, initWithImageFileThreadSafe, char const*, cocos2d::CCImage::EImageFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int, int, cocos2d::CCImage::ETextAlign, char const*, int>::func(&cocos2d::CCImage::initWithString)), Thiscall, cocos2d::CCImage, initWithString, char const*, int, int, cocos2d::CCImage::ETextAlign, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCImage::getBitsPerComponent)), Thiscall, cocos2d::CCImage, getBitsPerComponent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCImage::getData)), Thiscall, cocos2d::CCImage, getData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCImage::getDataLen)), Thiscall, cocos2d::CCImage, getDataLen, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCImage::getHeight)), Thiscall, cocos2d::CCImage, getHeight, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCImage::getWidth)), Thiscall, cocos2d::CCImage, getWidth, )
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCImage@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCImage, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCImage@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCImage)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*, int>::func(&cocos2d::CCImage::_initWithJpgData)), Thiscall, cocos2d::CCImage, _initWithJpgData, void*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*, int>::func(&cocos2d::CCImage::_initWithPngData)), Thiscall, cocos2d::CCImage, _initWithPngData, void*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*, int, int, int, int, bool>::func(&cocos2d::CCImage::_initWithRawData)), Thiscall, cocos2d::CCImage, _initWithRawData, void*, int, int, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*, int>::func(&cocos2d::CCImage::_initWithTiffData)), Thiscall, cocos2d::CCImage, _initWithTiffData, void*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*, int>::func(&cocos2d::CCImage::_initWithWebpData)), Thiscall, cocos2d::CCImage, _initWithWebpData, void*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCImage::_saveImageToJPG)), Thiscall, cocos2d::CCImage, _saveImageToJPG, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&cocos2d::CCImage::_saveImageToPNG)), Thiscall, cocos2d::CCImage, _saveImageToPNG, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCImage::hasAlpha)), Thiscall, cocos2d::CCImage, hasAlpha, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCImage::isPremultipliedAlpha)), Thiscall, cocos2d::CCImage, isPremultipliedAlpha, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&cocos2d::CCImage::saveToFile)), Thiscall, cocos2d::CCImage, saveToFile, char const*, bool)
		}
	};
}
