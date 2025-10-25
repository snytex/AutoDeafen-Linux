#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MusicArtistObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "MusicArtistObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicArtistObject, cocos2d::CCObject)

    /**
     * @note[short] Android: Rebinded
     */
    static MusicArtistObject* create(int id, gd::string name, gd::string url, gd::string youtube);

    /**
     * @note[short] Android: Rebinded
     */
    bool init(int id, gd::string name, gd::string url, gd::string youtube);
    int m_artistID;
    gd::string m_artistName;
    gd::string m_artistURL;
    gd::string m_artistYouTube;
};
