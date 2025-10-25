#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CustomSongCell.hpp"

class CustomMusicCell : public CustomSongCell {
public:
    static constexpr auto CLASS_NAME = "CustomMusicCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomMusicCell, CustomSongCell)

    /**
     * @note[short] Android: Rebinded
     */
     CustomMusicCell(char const* p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x1e2548
     * @note[short] MacOS (Intel): 0x2325a0
     * @note[short] Windows: 0xb46f0
     * @note[short] iOS: 0x10544c
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* p0);

    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
};
