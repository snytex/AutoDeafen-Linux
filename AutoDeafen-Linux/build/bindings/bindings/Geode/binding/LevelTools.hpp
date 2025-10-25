#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelTools {
public:
    static constexpr auto CLASS_NAME = "LevelTools";

    /**
     * @note[short] MacOS (ARM): 0x44d108
     * @note[short] MacOS (Intel): 0x4eb660
     * @note[short] Windows: 0x314320
     * @note[short] iOS: 0x1ab81c
     * @note[short] Android
     */
    static int artistForAudio(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    static gd::string base64DecodeString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x44fd1c
     * @note[short] MacOS (Intel): 0x4ee880
     * @note[short] iOS: 0x1ac7f4
     * @note[short] Android: Rebinded
     */
    static gd::string base64EncodeString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x44fd8c
     * @note[short] MacOS (Intel): 0x4ee920
     * @note[short] Android
     */
    static cocos2d::CCDictionary* createStarPackDict();

    /**
     * @note[short] MacOS (ARM): 0x44df44
     * @note[short] MacOS (Intel): 0x4ec970
     * @note[short] Windows: 0x316430
     * @note[short] iOS: 0x1ab8f4
     * @note[short] Android
     */
    static gd::string fbURLForArtist(int p0);

    /**
     * @note[short] Android
     */
    static int getAudioBPM(int p0);

    /**
     * @note[short] MacOS (ARM): 0x44ca9c
     * @note[short] MacOS (Intel): 0x4eb120
     * @note[short] Windows: 0x313750
     * @note[short] iOS: 0x1ab7f0
     * @note[short] Android
     */
    static gd::string getAudioFileName(int p0);

    /**
     * @note[short] MacOS (ARM): 0x44e26c
     * @note[short] MacOS (Intel): 0x4ecd10
     * @note[short] Windows: 0x316950
     * @note[short] iOS: 0x1ab920
     * @note[short] Android
     */
    static gd::string getAudioString(int p0);

    /**
     * @note[short] MacOS (ARM): 0x44c364
     * @note[short] MacOS (Intel): 0x4eab80
     * @note[short] Windows: 0x312bd0
     * @note[short] iOS: 0x1ab7c0
     * @note[short] Android
     */
    static gd::string getAudioTitle(int p0);

    /**
     * @note[short] MacOS (ARM): 0x44f67c
     * @note[short] MacOS (Intel): 0x4ee310
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool getLastGameplayReversed();

    /**
     * @note[short] MacOS (ARM): 0x44f688
     * @note[short] MacOS (Intel): 0x4ee320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ac47c
     * @note[short] Android
     */
    static bool getLastGameplayRotated();

    /**
     * @note[short] MacOS (ARM): 0x44f670
     * @note[short] MacOS (Intel): 0x4ee300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ac470
     * @note[short] Android
     */
    static float getLastTimewarp();

    /**
     * @note[short] MacOS (ARM): 0x44a514
     * @note[short] MacOS (Intel): 0x4e8620
     * @note[short] Windows: 0x310320
     * @note[short] iOS: 0x1aa160
     * @note[short] Android
     */
    static GJGameLevel* getLevel(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x44a138
     * @note[short] MacOS (Intel): 0x4e82b0
     * @note[short] Android
     */
    static gd::unordered_set<int> getLevelList();

    /**
     * @note[short] MacOS (ARM): 0x44f694
     * @note[short] MacOS (Intel): 0x4ee330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ac488
     * @note[short] Android
     */
    static SongInfoObject* getSongObject(int id);

    /**
     * @note[short] Android
     */
    static TodoReturn moveTriggerObjectsToArray(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x44d12c
     * @note[short] MacOS (Intel): 0x4eb680
     * @note[short] Windows: 0x3143f0
     * @note[short] iOS: 0x1ab840
     * @note[short] Android
     */
    static gd::string nameForArtist(int p0);

    /**
     * @note[short] MacOS (ARM): 0x44d960
     * @note[short] MacOS (Intel): 0x4ec2c0
     * @note[short] Windows: 0x315a10
     * @note[short] iOS: 0x1ab89c
     * @note[short] Android
     */
    static gd::string ngURLForArtist(int p0);

    /**
     * @note[short] Android
     */
    static TodoReturn offsetBPMForTrack(int p0);

    /**
     * @note[short] MacOS (ARM): 0x44f1bc
     * @note[short] MacOS (Intel): 0x4edd00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1abfb4
     * @note[short] Android
     */
    static cocos2d::CCPoint posForTime(float time, cocos2d::CCArray* objects, int speed, bool platformer, int& rotateChannel);

    /**
     * @note[short] MacOS (ARM): 0x44f1cc
     * @note[short] MacOS (Intel): 0x4edd30
     * @note[short] Windows: 0x317ea0
     * @note[short] iOS: 0x1abfc4
     * @note[short] Android
     */
    static cocos2d::CCPoint posForTimeInternal(float time, cocos2d::CCArray* objects, int speed, bool platformer, bool ignoreMinorAxis, bool ignoreWarp, int& rotateChannel, int p7);

    /**
     * @note[short] Windows: 0x3187f0
     * @note[short] Android
     */
    static void sortChannelOrderObjects(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x450524
     * @note[short] MacOS (Intel): 0x4ef100
     * @note[short] Windows: 0x318a70
     * @note[short] Android
     */
    static void sortSpeedObjects(cocos2d::CCArray* p0, GJBaseGameLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x44e860
     * @note[short] MacOS (Intel): 0x4ed380
     * @note[short] Windows: 0x3174c0
     * @note[short] iOS: 0x1ab94c
     * @note[short] Android
     */
    static float timeForPos(cocos2d::CCPoint position, cocos2d::CCArray* objects, int speed, int order, int channel, bool songTriggers, bool platformer, bool ignoreWarp, bool ignoreRotate, int id);

    /**
     * @note[short] Android
     */
    static TodoReturn toggleDebugLogging(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x44d310
     * @note[short] MacOS (Intel): 0x4eb7f0
     * @note[short] Windows: 0x3146f0
     * @note[short] iOS: 0x1ab86c
     * @note[short] Android
     */
    static gd::string urlForAudio(int p0);

    /**
     * @note[short] Android
     */
    static TodoReturn valueForSpeedMod(int p0);

    /**
     * @note[short] MacOS (ARM): 0x44fb5c
     * @note[short] MacOS (Intel): 0x4ee730
     * @note[short] Windows: 0x318500
     * @note[short] iOS: 0x1ac6e8
     * @note[short] Android: Rebinded
     */
    static bool verifyLevelIntegrity(gd::string p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x44dc2c
     * @note[short] MacOS (Intel): 0x4ec5c0
     * @note[short] Windows: 0x315eb0
     * @note[short] iOS: 0x1ab8c8
     * @note[short] Android
     */
    static gd::string ytURLForArtist(int p0);
};
