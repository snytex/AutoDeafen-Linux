#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SimpleObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SimpleObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SimpleObject, cocos2d::CCObject)

    /**
     * @note[short] Android
     */
    static SimpleObject* create();

    /**
     * @note[short] Android
     */
    bool init();
    void* m_unk038;
};
