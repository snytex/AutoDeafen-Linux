#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "MusicSearchResult.hpp"

class SFXSearchResult : public MusicSearchResult {
public:
    static constexpr auto CLASS_NAME = "SFXSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXSearchResult, MusicSearchResult)

    /**
     * @note[short] MacOS (ARM): 0x4d4f80
     * @note[short] MacOS (Intel): 0x582900
     * @note[short] Windows: 0x331fa0
     * @note[short] Android
     */
    static SFXSearchResult* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4d507c
     * @note[short] MacOS (Intel): 0x582a20
     * @note[short] Windows: 0x332020
     * @note[short] iOS: 0x1605b4
     * @note[short] Android
     */
    virtual void updateObjects(AudioSortType p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    SFXFolderObject* getActiveFolder();

    /**
     * @note[short] Windows: 0x332580
     * @note[short] Android
     */
    int getSelectedPage(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4d5004
     * @note[short] MacOS (Intel): 0x582990
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int folderID);

    /**
     * @note[short] MacOS (ARM): 0x4d501c
     * @note[short] MacOS (Intel): 0x5829b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setActiveFolder(SFXFolderObject* folder);
    int m_folderID;
    SFXFolderObject* m_folderObject;
};
