#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AdToolbox {
public:
    static constexpr auto CLASS_NAME = "AdToolbox";

    /**
     * @note[short] Android
     */
    TodoReturn cacheInterstitial();

    /**
     * @note[short] Android
     */
    TodoReturn cacheRewardedVideo();

    /**
     * @note[short] Android
     */
    TodoReturn disableBanner();

    /**
     * @note[short] Android
     */
    TodoReturn enableBanner();

    /**
     * @note[short] Android
     */
    TodoReturn enableBannerNoRefresh();

    /**
     * @note[short] Android
     */
    TodoReturn hasCachedInterstitial();

    /**
     * @note[short] Android
     */
    TodoReturn hasCachedRewardedVideo();

    /**
     * @note[short] Android
     */
    bool isShowingAd();

    /**
     * @note[short] Android
     */
    void queueRefreshBanner();

    /**
     * @note[short] Android
     */
    void setupAds();

    /**
     * @note[short] Android
     */
    void showDebug();

    /**
     * @note[short] Android
     */
    void showInterstitial();

    /**
     * @note[short] Android
     */
    void showRewardedVideo();
};
