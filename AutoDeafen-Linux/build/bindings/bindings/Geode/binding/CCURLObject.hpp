#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCURLObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCURLObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCURLObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x1782a0
     * @note[short] Android: Rebinded
     */
    static CCURLObject* create(gd::string name, gd::string url);

    /**
     * @note[short] Android: Rebinded
     */
    bool init(gd::string name, gd::string url);
    gd::string m_name;
    gd::string m_url;
};
