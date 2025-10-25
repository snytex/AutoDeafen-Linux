#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MusicDelegateHandler : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "MusicDelegateHandler";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicDelegateHandler, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MusicDelegateHandler();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MusicDelegateHandler* create(MusicDownloadDelegate* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(MusicDownloadDelegate* p0);
    MusicDownloadDelegate* m_delegate;
};
