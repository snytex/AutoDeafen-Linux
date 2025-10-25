#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCounterLabel : public cocos2d::CCLabelBMFont {
public:
    static constexpr auto CLASS_NAME = "CCCounterLabel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCounterLabel, cocos2d::CCLabelBMFont)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCCounterLabel();

    /**
     * @note[short] MacOS (ARM): 0x45b328
     * @note[short] MacOS (Intel): 0x4fb550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ec2c
     * @note[short] Android
     */
    static CCCounterLabel* create(int count, char const* font, FormatterType type);

    /**
     * @note[short] Android
     */
    void calculateStepSize(int p0);

    /**
     * @note[short] Android
     */
    void disableCounter();

    /**
     * @note[short] Android
     */
    void enableCounter();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void fastUpdateCounter();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getTargetCount();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int count, char const* font, FormatterType type);

    /**
     * @note[short] Windows: 0x43130
     * @note[short] Android
     */
    void setTargetCount(int p0);

    /**
     * @note[short] Windows: 0x431c0
     * @note[short] Android
     */
    void updateCounter(float p0);

    /**
     * @note[short] Windows: 0x43240
     * @note[short] Android
     */
    void updateString();
    int m_stepSize;
    int m_targetCount;
    int m_currentCount;
    bool m_counterEnabled;
    int m_stepCount;
    bool m_dontSchedule;
    FormatterType m_formatterType;
};
