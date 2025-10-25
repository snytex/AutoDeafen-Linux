#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GManager.hpp"

class FileSaveManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "FileSaveManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FileSaveManager, GManager)

    /**
     * @note[short] Android
     */
    static FileSaveManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x91d4
     * @note[short] MacOS (Intel): 0x73b0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x9204
     * @note[short] MacOS (Intel): 0x73e0
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* getStoreData();

    /**
     * @note[short] Android
     */
    void loadDataFromFile(char const* p0);
    cocos2d::CCDictionary* m_storeData;
};
