#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class OptionsObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "OptionsObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(OptionsObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x297040
     * @note[short] Android: Rebinded
     */
    static OptionsObject* create(int id, bool enabled, gd::string name, OptionsObjectDelegate* delegate);

    /**
     * @note[short] Android: Rebinded
     */
    bool init(int id, bool enabled, gd::string name, OptionsObjectDelegate* delegate);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleState();
    int m_optionID;
    bool m_enabled;
    gd::string m_name;
    OptionsObjectDelegate* m_delegate;
    int m_count;
};
