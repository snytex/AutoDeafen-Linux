#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlatformToolbox {
public:
    static constexpr auto CLASS_NAME = "PlatformToolbox";

    /**
     * @note[short] Android
     */
    static void activateGameCenter();

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn copyToClipboard(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn doesFileExist(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn downloadAndSavePromoImage(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x41a0c4
     * @note[short] MacOS (Intel): 0x4b17a0
     * @note[short] iOS: 0x16f388
     * @note[short] Android
     */
    static void gameDidSave();

    /**
     * @note[short] Android
     */
    static TodoReturn getDeviceRefreshRate();

    /**
     * @note[short] MacOS (ARM): 0x41a190
     * @note[short] MacOS (Intel): 0x4b18f0
     * @note[short] Windows: 0x786d0
     * @note[short] Android
     */
    static cocos2d::CCSize getDisplaySize();

    /**
     * @note[short] Android
     */
    static TodoReturn getRawPath(char const* p0);

    /**
     * @note[short] Android
     */
    static TodoReturn getUniqueUserID();

    /**
     * @note[short] Android
     */
    static TodoReturn getUserID();

    /**
     * @note[short] MacOS (ARM): 0x419630
     * @note[short] MacOS (Intel): 0x4b0b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16f40c
     * @note[short] Android
     */
    static void hideCursor();

    /**
     * @note[short] MacOS (ARM): 0x41a254
     * @note[short] MacOS (Intel): 0x4b1a30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16f3d8
     * @note[short] Android
     */
    static bool isControllerConnected();

    /**
     * @note[short] Android
     */
    static bool isHD();

    /**
     * @note[short] Android
     */
    static bool isLocalPlayerAuthenticated();

    /**
     * @note[short] Android
     */
    static bool isLowMemoryDevice();

    /**
     * @note[short] Android
     */
    static bool isNetworkAvailable();

    /**
     * @note[short] Android
     */
    static bool isSignedInGooglePlay();

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn loadAndDecryptFileToString(char const* p0, char const* p1, gd::string& p2);

    /**
     * @note[short] Android
     */
    static TodoReturn logEvent(char const* p0);

    /**
     * @note[short] Android
     */
    static TodoReturn onGameLaunch();

    /**
     * @note[short] Android
     */
    static void onNativePause();

    /**
     * @note[short] Android
     */
    static TodoReturn onNativeResume();

    /**
     * @note[short] Android
     */
    static TodoReturn onToggleKeyboard();

    /**
     * @note[short] Android
     */
    static TodoReturn openAppPage();

    /**
     * @note[short] MacOS (ARM): 0x41a1d4
     * @note[short] MacOS (Intel): 0x4b1950
     * @note[short] Android
     */
    static void platformShutdown();

    /**
     * @note[short] Android
     */
    static TodoReturn refreshWindow();

    /**
     * @note[short] Android
     */
    static TodoReturn reportAchievementWithID(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    static TodoReturn reportLoadingFinished();

    /**
     * @note[short] Android
     */
    static void resizeWindow(float width, float height);

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn saveAndEncryptStringToFile(gd::string& p0, char const* p1, char const* p2);

    /**
     * @note[short] Android
     */
    static TodoReturn sendMail(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Android
     */
    static void setBlockBackButton(bool p0);

    /**
     * @note[short] Android
     */
    static void setKeyboardState(bool p0);

    /**
     * @note[short] Android
     */
    static TodoReturn shouldResumeSound();

    /**
     * @note[short] Android
     */
    static void showAchievements();

    /**
     * @note[short] MacOS (ARM): 0x419648
     * @note[short] MacOS (Intel): 0x4b0b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16f410
     * @note[short] Android
     */
    static void showCursor();

    /**
     * @note[short] Android
     */
    static TodoReturn signInGooglePlay();

    /**
     * @note[short] Android
     */
    static TodoReturn signOutGooglePlay();

    /**
     * @note[short] Android: Rebinded
     */
    static TodoReturn spriteFromSavedFile(gd::string p0);

    /**
     * @note[short] Android
     */
    static void toggleCallGLFinish(bool p0);

    /**
     * @note[short] Android
     */
    static void toggleCPUSleepMode(bool p0);

    /**
     * @note[short] Android
     */
    static void toggleForceTimer(bool p0);

    /**
     * @note[short] Android
     */
    static void toggleFullScreen(bool p0, bool p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x41a144
     * @note[short] MacOS (Intel): 0x4b1850
     * @note[short] iOS: 0x16f41c
     * @note[short] Android
     */
    static void toggleLockCursor(bool isLocked);

    /**
     * @note[short] Android
     */
    static void toggleMouseControl(bool p0);

    /**
     * @note[short] Android
     */
    static void toggleSmoothFix(bool p0);

    /**
     * @note[short] Android
     */
    static void toggleVerticalSync(bool p0);

    /**
     * @note[short] iOS: 0x16efe4
     * @note[short] Android: Rebinded
     */
    static void tryShowRateDialog(gd::string p0);

    /**
     * @note[short] Android
     */
    static TodoReturn updateMouseControl();

    /**
     * @note[short] Android
     */
    static TodoReturn updateWindowedSize(float p0, float p1);
};
