#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameToolbox {
public:
    static constexpr auto CLASS_NAME = "GameToolbox";

    /**
     * @note[short] MacOS (ARM): 0x43f944
     * @note[short] MacOS (Intel): 0x4dc890
     * @note[short] Windows: 0x65010
     * @note[short] iOS: 0x4829c
     * @note[short] Android
     */
    static void addBackButton(cocos2d::CCLayer* p0, cocos2d::CCMenuItem* p1);

    /**
     * @note[short] MacOS (ARM): 0x43fa2c
     * @note[short] MacOS (Intel): 0x4dc960
     * @note[short] Windows: 0x650f0
     * @note[short] iOS: 0x48380
     * @note[short] Android
     */
    static void addRThumbScrollButton(cocos2d::CCLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x43e460
     * @note[short] MacOS (Intel): 0x4db280
     * @note[short] Windows: 0x64110
     * @note[short] iOS: 0x47414
     * @note[short] Android
     */
    static void alignItemsHorisontally(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, bool p3);

    /**
     * @note[short] Android
     */
    static void alignItemsVertically(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Android
     */
    static TodoReturn bounceTime(float p0);

    /**
     * @note[short] Android
     */
    static TodoReturn colorToSepia(cocos2d::ccColor3B p0, float p1);

    /**
     * @note[short] Android
     */
    static TodoReturn contentScaleClipRect(cocos2d::CCRect& p0);

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn createHashString(gd::string const& p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x43ee18
     * @note[short] MacOS (Intel): 0x4dbd60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x47a98
     * @note[short] Android: Rebinded
     */
    static CCMenuItemToggler* createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, cocos2d::CCArray* container);

    /**
     * @note[short] MacOS (ARM): 0x43ef50
     * @note[short] MacOS (Intel): 0x4dbe90
     * @note[short] Windows: 0x64670
     * @note[short] iOS: 0x47bcc
     * @note[short] Android: Rebinded
     */
    static CCMenuItemToggler* createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, float buttonScale, float maxLabelScale, float maxLabelWidth, cocos2d::CCPoint labelOffset, char const* font, bool labelTop, int labelTag, cocos2d::CCArray* container);

    /**
     * @note[short] MacOS (ARM): 0x43e8a8
     * @note[short] MacOS (Intel): 0x4db770
     * @note[short] Android
     */
    static bool doWeHaveInternet();

    /**
     * @note[short] MacOS (ARM): 0x445748
     * @note[short] MacOS (Intel): 0x4e34f0
     * @note[short] Windows: 0x68570
     * @note[short] iOS: 0x4b720
     * @note[short] Android
     */
    static gd::string easeToText(int easingType);

    /**
     * @note[short] MacOS (ARM): 0x441848
     * @note[short] MacOS (Intel): 0x4dea50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static uint64_t fast_rand();

    /**
     * @note[short] MacOS (ARM): 0x441870
     * @note[short] MacOS (Intel): 0x4dea80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49540
     * @note[short] Android
     */
    static float fast_rand_0_1();

    /**
     * @note[short] MacOS (ARM): 0x4418ac
     * @note[short] MacOS (Intel): 0x4deac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49578
     * @note[short] Android
     */
    static float fast_rand_minus1_1();

    /**
     * @note[short] MacOS (ARM): 0x441830
     * @note[short] MacOS (Intel): 0x4dea30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49534
     * @note[short] Android
     */
    static void fast_srand(uint64_t p0);

    /**
     * @note[short] MacOS (ARM): 0x464058
     * @note[short] MacOS (Intel): 0x504920
     * @note[short] Android
     */
    static gd::string gen_random(int p0);

    /**
     * @note[short] Android
     */
    static TodoReturn getDropActionWDelay(float p0, float p1, float p2, cocos2d::CCNode* p3, cocos2d::SEL_CallFunc p4);

    /**
     * @note[short] Android
     */
    static TodoReturn getDropActionWEnd(float p0, float p1, float p2, cocos2d::CCAction* p3, float p4);

    /**
     * @note[short] MacOS (ARM): 0x4415e8
     * @note[short] MacOS (Intel): 0x4de7b0
     * @note[short] Android
     */
    static cocos2d::CCActionEase* getEasedAction(cocos2d::CCActionInterval* p0, int p1, float p2);

    /**
     * @note[short] Windows: 0x68b40
     * @note[short] Android
     */
    static float getEasedValue(float p0, int p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x44183c
     * @note[short] MacOS (Intel): 0x4dea40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static uint64_t getfast_srand();

    /**
     * @note[short] Android
     */
    static TodoReturn getInvertedEasing(int p0);

    /**
     * @note[short] Android
     */
    static TodoReturn getLargestMergedIntDicts(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);

    /**
     * @note[short] Android
     */
    static TodoReturn getMultipliedHSV(cocos2d::ccHSVValue const& p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x43f1f4
     * @note[short] MacOS (Intel): 0x4dc100
     * @note[short] Windows: 0x64970
     * @note[short] iOS: 0x47e70
     * @note[short] Android
     */
    static cocos2d::CCPoint getRelativeOffset(GameObject* p0, cocos2d::CCPoint p1);

    /**
     * @note[short] MacOS (ARM): 0x43eb40
     * @note[short] MacOS (Intel): 0x4dba00
     * @note[short] Windows: 0x64310
     * @note[short] Android
     */
    static gd::string getResponse(cocos2d::extension::CCHttpResponse* p0);

    /**
     * @note[short] MacOS (ARM): 0x44145c
     * @note[short] MacOS (Intel): 0x4de620
     * @note[short] Windows: 0x65e20
     * @note[short] iOS: 0x49338
     * @note[short] Android
     */
    static gd::string getTimeString(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x44007c
     * @note[short] MacOS (Intel): 0x4dd030
     * @note[short] Windows: 0x654e0
     * @note[short] iOS: 0x487fc
     * @note[short] Android: Rebinded
     */
    static cocos2d::ccHSVValue hsvFromString(gd::string const& str, char const* delim);

    /**
     * @note[short] MacOS (ARM): 0x4465bc
     * @note[short] MacOS (Intel): 0x4e4250
     * @note[short] Windows: 0x69120
     * @note[short] iOS: 0x4bd08
     * @note[short] Android
     */
    static gd::string intToShortString(int p0);

    /**
     * @note[short] MacOS (ARM): 0x446284
     * @note[short] MacOS (Intel): 0x4e3f30
     * @note[short] Windows: 0x69060
     * @note[short] Android
     */
    static gd::string intToString(int p0);

    /**
     * @note[short] Android
     */
    static bool isIOS();

    /**
     * @note[short] Android
     */
    static bool isRateEasing(int p0);

    /**
     * @note[short] Android
     */
    static TodoReturn mergeDictsSaveLargestInt(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);

    /**
     * @note[short] MacOS (ARM): 0x43f6d0
     * @note[short] MacOS (Intel): 0x4dc610
     * @note[short] Android
     */
    static void mergeDictsSkipConflict(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);

    /**
     * @note[short] MacOS (ARM): 0x446c04
     * @note[short] MacOS (Intel): 0x4e48b0
     * @note[short] Windows: 0x69630
     * @note[short] iOS: 0x4c158
     * @note[short] Android
     */
    static gd::string msToTimeString(int milliseconds, int formattingMode);

    /**
     * @note[short] Android
     */
    static TodoReturn multipliedColorValue(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2);

    /**
     * @note[short] Android
     */
    static TodoReturn openAppPage();

    /**
     * @note[short] MacOS (ARM): 0x43ea18
     * @note[short] MacOS (Intel): 0x4db8e0
     * @note[short] Android: Rebinded
     */
    static TodoReturn openRateURL(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4451a0
     * @note[short] MacOS (Intel): 0x4e2ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4b190
     * @note[short] Android: Rebinded
     */
    static cocos2d::CCParticleSystemQuad* particleFromString(gd::string const& str, cocos2d::CCParticleSystemQuad* system, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x44528c
     * @note[short] MacOS (Intel): 0x4e2fe0
     * @note[short] Windows: 0x68000
     * @note[short] iOS: 0x4b264
     * @note[short] Android
     */
    static cocos2d::CCParticleSystemQuad* particleFromStruct(cocos2d::ParticleStruct const& p0, cocos2d::CCParticleSystemQuad* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x444354
     * @note[short] MacOS (Intel): 0x4e1f80
     * @note[short] Windows: 0x67540
     * @note[short] iOS: 0x4a7fc
     * @note[short] Android: Rebinded
     */
    static void particleStringToStruct(gd::string const& p0, cocos2d::ParticleStruct& p1);

    /**
     * @note[short] MacOS (ARM): 0x446d4c
     * @note[short] MacOS (Intel): 0x4e49f0
     * @note[short] Windows: 0x69760
     * @note[short] Android
     */
    static gd::string pointsToString(int p0);

    /**
     * @note[short] iOS: 0x47a90
     * @note[short] Android
     */
    static void postClipVisit();

    /**
     * @note[short] MacOS (ARM): 0x43ed28
     * @note[short] MacOS (Intel): 0x4dbc50
     * @note[short] Windows: 0x645c0
     * @note[short] iOS: 0x479ac
     * @note[short] Android
     */
    static void preVisitWithClippingRect(cocos2d::CCNode* p0, cocos2d::CCRect p1);

    /**
     * @note[short] Android
     */
    static TodoReturn preVisitWithClipRect(cocos2d::CCRect p0);

    /**
     * @note[short] MacOS (ARM): 0x4418f4
     * @note[short] MacOS (Intel): 0x4deb00
     * @note[short] Windows: 0x662d0
     * @note[short] iOS: 0x495bc
     * @note[short] Android
     */
    static gd::string saveParticleToString(cocos2d::CCParticleSystemQuad* p0);

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn saveStringToFile(gd::string const& p0, gd::string const& p1);

    /**
     * @note[short] Windows: 0x656f0
     * @note[short] Android
     */
    static gd::string stringFromHSV(cocos2d::ccHSVValue p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x440d54
     * @note[short] MacOS (Intel): 0x4dded0
     * @note[short] Windows: 0x65c30
     * @note[short] Android: Rebinded
     */
    static cocos2d::CCDictionary* stringSetupToDict(gd::string const& p0, char const* p1);

    /**
     * @note[short] Windows: 0x65890
     * @note[short] Android: Rebinded
     */
    static void stringSetupToMap(gd::string const& p0, char const* p1, gd::map<gd::string, gd::string>& p2);

    /**
     * @note[short] Android
     */
    static TodoReturn strongColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x4469a4
     * @note[short] MacOS (Intel): 0x4e4690
     * @note[short] Android
     */
    static TodoReturn timestampToHumanReadable(long p0);

    /**
     * @note[short] MacOS (ARM): 0x43fbfc
     * @note[short] MacOS (Intel): 0x4dcb20
     * @note[short] Windows: 0x65290
     * @note[short] iOS: 0x4854c
     * @note[short] Android
     */
    static cocos2d::ccColor3B transformColor(cocos2d::ccColor3B const& p0, cocos2d::ccHSVValue p1);

    /**
     * @note[short] MacOS (ARM): 0x43fbe0
     * @note[short] MacOS (Intel): 0x4dcaf0
     * @note[short] Android
     */
    static cocos2d::ccColor3B transformColor(cocos2d::ccColor3B const& p0, float p1, float p2, float p3);
};
