#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class SongInfoLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongInfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x51a5bc
     * @note[short] MacOS (Intel): 0x5e8d00
     * @note[short] Windows: 0x47a130
     * @note[short] iOS: 0x3a033c
     * @note[short] Android: Rebinded
     */
    static SongInfoLayer* create(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, gd::string p5, int p6, gd::string p7, int p8);

    /**
     * @note[short] MacOS (ARM): 0x51a108
     * @note[short] MacOS (Intel): 0x5e8700
     * @note[short] Windows: 0x479f20
     * @note[short] iOS: 0x39ff80
     * @note[short] Android
     */
    static SongInfoLayer* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x51be3c
     * @note[short] MacOS (Intel): 0x5ea640
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0x3a1940
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x51aa04
     * @note[short] MacOS (Intel): 0x5e9240
     * @note[short] Windows: 0x47a450
     * @note[short] Android: Rebinded
     */
    bool init(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, gd::string p5, int p6, gd::string p7, int p8);

    /**
     * @note[short] Android
     */
    void onBPM(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFB(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNG(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPracticeMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onYT(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x51bbd4
     * @note[short] MacOS (Intel): 0x5ea430
     * @note[short] Android
     */
    void showCustomMusicUnlockInfo();
    gd::string m_downloadLink;
    gd::string m_newgroundsLink;
    gd::string m_youtubeLink;
    gd::string m_facebookLink;
    int m_songID;
    int m_musicCustomizerMessageIndex;
};
