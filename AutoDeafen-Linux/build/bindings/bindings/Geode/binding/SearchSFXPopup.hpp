#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetTextPopup.hpp"

class SearchSFXPopup : public SetTextPopup {
public:
    static constexpr auto CLASS_NAME = "SearchSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SearchSFXPopup, SetTextPopup)

    /**
     * @note[short] Android: Rebinded
     */
    static SearchSFXPopup* create(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x3a7c94
     * @note[short] MacOS (Intel): 0x42cf70
     * @note[short] Android: Rebinded
     */
    bool init(gd::string p0);

    /**
     * @note[short] Android
     */
    void onSearchFolders(cocos2d::CCObject* sender);
};
