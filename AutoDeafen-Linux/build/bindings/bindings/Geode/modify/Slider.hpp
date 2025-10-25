#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/Slider.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_disableSlider
		#define GEODE_STATICS_disableSlider
		GEODE_AS_STATIC_FUNCTION(disableSlider) 
	#endif

	#ifndef GEODE_STATICS_disableTouch
		#define GEODE_STATICS_disableTouch
		GEODE_AS_STATIC_FUNCTION(disableTouch) 
	#endif

	#ifndef GEODE_STATICS_enableSlider
		#define GEODE_STATICS_enableSlider
		GEODE_AS_STATIC_FUNCTION(enableSlider) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setValue
		#define GEODE_STATICS_setValue
		GEODE_AS_STATIC_FUNCTION(setValue) 
	#endif

	#ifndef GEODE_STATICS_sliderBegan
		#define GEODE_STATICS_sliderBegan
		GEODE_AS_STATIC_FUNCTION(sliderBegan) 
	#endif

	#ifndef GEODE_STATICS_sliderEnded
		#define GEODE_STATICS_sliderEnded
		GEODE_AS_STATIC_FUNCTION(sliderEnded) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableSlider
		#define GEODE_CONCEPT_CHECK_disableSlider
		GEODE_CONCEPT_FUNCTION_CHECK(disableSlider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableTouch
		#define GEODE_CONCEPT_CHECK_disableTouch
		GEODE_CONCEPT_FUNCTION_CHECK(disableTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableSlider
		#define GEODE_CONCEPT_CHECK_enableSlider
		GEODE_CONCEPT_FUNCTION_CHECK(enableSlider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLiveDragging
		#define GEODE_CONCEPT_CHECK_getLiveDragging
		GEODE_CONCEPT_FUNCTION_CHECK(getLiveDragging) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getThumb
		#define GEODE_CONCEPT_CHECK_getThumb
		GEODE_CONCEPT_FUNCTION_CHECK(getThumb) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideGroove
		#define GEODE_CONCEPT_CHECK_hideGroove
		GEODE_CONCEPT_FUNCTION_CHECK(hideGroove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBarVisibility
		#define GEODE_CONCEPT_CHECK_setBarVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(setBarVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLiveDragging
		#define GEODE_CONCEPT_CHECK_setLiveDragging
		GEODE_CONCEPT_FUNCTION_CHECK(setLiveDragging) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxOffset
		#define GEODE_CONCEPT_CHECK_setMaxOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotated
		#define GEODE_CONCEPT_CHECK_setRotated
		GEODE_CONCEPT_FUNCTION_CHECK(setRotated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setValue
		#define GEODE_CONCEPT_CHECK_setValue
		GEODE_CONCEPT_FUNCTION_CHECK(setValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderBegan
		#define GEODE_CONCEPT_CHECK_sliderBegan
		GEODE_CONCEPT_FUNCTION_CHECK(sliderBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderEnded
		#define GEODE_CONCEPT_CHECK_sliderEnded
		GEODE_CONCEPT_FUNCTION_CHECK(sliderEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBar
		#define GEODE_CONCEPT_CHECK_updateBar
		GEODE_CONCEPT_FUNCTION_CHECK(updateBar) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, Slider> : ModifyBase<ModifyDerive<Der, Slider>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, Slider>>;
		using ModifyBase<ModifyDerive<Der, Slider>>::ModifyBase;
		using Base = Slider;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71720, Default, Slider, create, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(Slider, create, cocos2d::CCNode*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(Slider, create, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71d10, Thiscall, Slider, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71d50, Thiscall, Slider, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71d30, Thiscall, Slider, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Slider, disableSlider, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Slider, disableTouch, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Slider, enableSlider, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(Slider, getLiveDragging, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(Slider, getThumb, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(Slider, getValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(Slider, hideGroove, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71850, Thiscall, Slider, init, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(Slider, setBarVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(Slider, setLiveDragging, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(Slider, setMaxOffset, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(Slider, setRotated, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71c00, Thiscall, Slider, setValue, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Slider, sliderBegan, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Slider, sliderEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(Slider, updateBar, )
		}
	};
}
