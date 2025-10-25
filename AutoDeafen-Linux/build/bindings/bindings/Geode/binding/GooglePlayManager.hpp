#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GooglePlayManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GooglePlayManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GooglePlayManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x3d5188
     * @note[short] MacOS (Intel): 0x4651e0
     * @note[short] Windows: 0x6ac50
     * @note[short] iOS: 0x458d8
     * @note[short] Android
     */
    static GooglePlayManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x3d51f8
     * @note[short] MacOS (Intel): 0x465240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45938
     * @note[short] Android: Out of line
     */
    virtual bool init();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void googlePlaySignedIn();
    GooglePlayDelegate* m_delegate1;
    GooglePlayDelegate* m_delegate2;
};
