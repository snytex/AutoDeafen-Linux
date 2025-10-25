#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PriceLabel : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "PriceLabel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PriceLabel, cocos2d::CCNode)

    /**
     * @note[short] Android
     */
    static PriceLabel* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x415640
     * @note[short] MacOS (Intel): 0x4ac570
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Android
     */
    void setOpacity(float p0);

    /**
     * @note[short] Android
     */
    void setPrice(int p0);
    cocos2d::CCLabelBMFont* m_priceLabel;
    cocos2d::CCSprite* m_coinSprite;
};
