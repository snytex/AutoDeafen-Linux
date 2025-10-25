#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SFXInfoObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SFXInfoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SFXInfoObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SFXInfoObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    static SFXInfoObject* create(int id, gd::string name, int folderID, int size, int duration);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    gd::string getLowerCaseName();

    /**
     * @note[short] MacOS (ARM): 0x4d3920
     * @note[short] MacOS (Intel): 0x580f10
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    bool init(int id, gd::string name, int folderID, int size, int duration);
    int m_sfxID;
    int m_folderID;
    int m_size;
    int m_duration;
    bool m_folder;
    bool m_unk049;
    gd::string m_name;
};
