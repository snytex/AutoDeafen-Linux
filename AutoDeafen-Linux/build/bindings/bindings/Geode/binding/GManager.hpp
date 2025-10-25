#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GManager();

    /**
     * @note[short] MacOS (ARM): 0x404d70
     * @note[short] MacOS (Intel): 0x498f00
     * @note[short] Windows: 0x6a7c0
     * @note[short] iOS: 0x249774
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x404d80
     * @note[short] MacOS (Intel): 0x498f20
     * @note[short] Windows: 0x6a7d0
     * @note[short] iOS: 0x249784
     * @note[short] Android
     */
    virtual void setup();

    /**
     * @note[short] MacOS (ARM): 0x405280
     * @note[short] MacOS (Intel): 0x499400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249bb8
     * @note[short] Android: Out of line
     */
    virtual void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4058bc
     * @note[short] MacOS (Intel): 0x499ab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249ffc
     * @note[short] Android: Out of line
     */
    virtual void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4058c0
     * @note[short] MacOS (Intel): 0x499ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24a000
     * @note[short] Android: Out of line
     */
    virtual void firstLoad();

    /**
     * @note[short] Android
     */
    TodoReturn getCompressedSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn load();

    /**
     * @note[short] MacOS (ARM): 0x405284
     * @note[short] MacOS (Intel): 0x499410
     * @note[short] Windows: 0x6aa90
     * @note[short] Android: Rebinded
     */
    void loadDataFromFile(gd::string const& p0);

    /**
     * @note[short] Android: Rebinded
     */
    void loadFromCompressedString(gd::string& p0);

    /**
     * @note[short] Android: Rebinded
     */
    void loadFromString(gd::string& p0);

    /**
     * @note[short] MacOS (ARM): 0x404fe8
     * @note[short] MacOS (Intel): 0x499190
     * @note[short] Windows: 0x6a9a0
     * @note[short] iOS: 0x2499c4
     * @note[short] Android
     */
    void save();

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn saveData(DS_Dictionary* p0, gd::string p1);

    /**
     * @note[short] Android: Rebinded
     */
    void saveGMTo(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    TodoReturn tryLoadData(DS_Dictionary* p0, gd::string const& p1);
    gd::string m_fileName;
    bool m_setup;
    bool m_saved;
    bool m_quickSave;
};
