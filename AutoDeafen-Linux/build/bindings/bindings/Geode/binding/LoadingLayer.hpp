#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "LoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x31e254
     * @note[short] MacOS (Intel): 0x38f480
     * @note[short] Android
     */
    static LoadingLayer* create(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x31e17c
     * @note[short] MacOS (Intel): 0x38f380
     * @note[short] Windows: 0x3194f0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x31ea9c
     * @note[short] MacOS (Intel): 0x38fcf0
     * @note[short] Windows: 0x31a930
     * @note[short] iOS: 0x1d7514
     * @note[short] Android
     */
    const char* getLoadingString();

    /**
     * @note[short] MacOS (ARM): 0x31e314
     * @note[short] MacOS (Intel): 0x38f560
     * @note[short] Windows: 0x319600
     * @note[short] iOS: 0x1d6e44
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x31eb80
     * @note[short] MacOS (Intel): 0x38fdb0
     * @note[short] Windows: 0x319ea0
     * @note[short] iOS: 0x1d75f0
     * @note[short] Android
     */
    void loadAssets();

    /**
     * @note[short] MacOS (ARM): 0x31f290
     * @note[short] MacOS (Intel): 0x390550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d7c84
     * @note[short] Android
     */
    void loadingFinished();

    /**
     * @note[short] MacOS (ARM): 0x31eb14
     * @note[short] MacOS (Intel): 0x38fd50
     * @note[short] Windows: 0x319e20
     * @note[short] Android
     */
    void updateProgress(int p0);
    bool m_unknown;
    bool m_unknown2;
    int m_loadStep;
    cocos2d::CCLabelBMFont* m_caption;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_sliderBar;
    float m_sliderGrooveXPos;
    float m_sliderGrooveHeight;
    bool m_fromRefresh;
};
