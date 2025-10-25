#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SFXTriggerGameObject.hpp"

class SongTriggerGameObject : public SFXTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SongTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongTriggerGameObject, SFXTriggerGameObject)

    /**
     * @note[short] Android
     */
    static SongTriggerGameObject* create(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x17d9bc
     * @note[short] MacOS (Intel): 0x1bfaf0
     * @note[short] Windows: 0x49fc00
     * @note[short] iOS: 0x386bf0
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x17d250
     * @note[short] MacOS (Intel): 0x1bf1f0
     * @note[short] Windows: 0x49f9a0
     * @note[short] iOS: 0x3869a8
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] Android
     */
    bool init(char const* p0);
    bool m_unk7a9;
    bool m_prep;
    bool m_loadPrep;
    int m_songChannel;
};
