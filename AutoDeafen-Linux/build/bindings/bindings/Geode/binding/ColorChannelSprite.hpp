#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorChannelSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ColorChannelSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorChannelSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x2685c0
     * @note[short] MacOS (Intel): 0x2c46d0
     * @note[short] Windows: 0x2515d0
     * @note[short] iOS: 0x106c8
     * @note[short] Android
     */
    static ColorChannelSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x268668
     * @note[short] MacOS (Intel): 0x2c4770
     * @note[short] Windows: 0x251690
     * @note[short] iOS: 0x10764
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x26897c
     * @note[short] MacOS (Intel): 0x2c4aa0
     * @note[short] Windows: 0x2519c0
     * @note[short] iOS: 0x10a6c
     * @note[short] Android
     */
    void updateBlending(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x268674
     * @note[short] MacOS (Intel): 0x2c4790
     * @note[short] Windows: 0x2516b0
     * @note[short] iOS: 0x10770
     * @note[short] Android
     */
    void updateCopyLabel(int channelID, bool copyColorLoop);

    /**
     * @note[short] MacOS (ARM): 0x26881c
     * @note[short] MacOS (Intel): 0x2c4950
     * @note[short] Windows: 0x251870
     * @note[short] iOS: 0x10910
     * @note[short] Android
     */
    void updateOpacity(float alpha);

    /**
     * @note[short] MacOS (ARM): 0x268a84
     * @note[short] MacOS (Intel): 0x2c4bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10b74
     * @note[short] Android
     */
    void updateValues(ColorAction* action);
    cocos2d::CCLabelBMFont* m_copyLabel;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    cocos2d::CCLabelBMFont* m_blendingLabel;
};
