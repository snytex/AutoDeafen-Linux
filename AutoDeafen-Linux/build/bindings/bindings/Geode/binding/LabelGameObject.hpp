#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class LabelGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "LabelGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LabelGameObject, EffectGameObject)

    /**
     * @note[short] Android
     */
    static LabelGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x17033c
     * @note[short] MacOS (Intel): 0x1afb90
     * @note[short] Windows: 0x49a900
     * @note[short] iOS: 0x38166c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x170758
     * @note[short] MacOS (Intel): 0x1affb0
     * @note[short] Windows: 0x49ac60
     * @note[short] iOS: 0x38198c
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x17036c
     * @note[short] MacOS (Intel): 0x1afbc0
     * @note[short] Windows: 0x49a940
     * @note[short] iOS: 0x38169c
     * @note[short] Android: Rebinded
     */
    virtual void setupCustomSprites(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x170fd0
     * @note[short] MacOS (Intel): 0x1b0900
     * @note[short] Windows: 0x49b150
     * @note[short] iOS: 0x381fec
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x171c8c
     * @note[short] MacOS (Intel): 0x1b1870
     * @note[short] Windows: 0x49b570
     * @note[short] iOS: 0x3823a0
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x170d8c
     * @note[short] MacOS (Intel): 0x1b0690
     * @note[short] Windows: 0x49af90
     * @note[short] iOS: 0x381e24
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x171028
     * @note[short] MacOS (Intel): 0x1b0960
     * @note[short] Windows: 0x49b1c0
     * @note[short] iOS: 0x382044
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x170f88
     * @note[short] MacOS (Intel): 0x1b08b0
     * @note[short] Windows: 0x49b100
     * @note[short] iOS: 0x381fa4
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x1707dc
     * @note[short] MacOS (Intel): 0x1b0030
     * @note[short] Windows: 0x49ad20
     * @note[short] iOS: 0x381a10
     * @note[short] Android
     */
    virtual void updateTextKerning(int p0);

    /**
     * @note[short] MacOS (ARM): 0x199b20
     * @note[short] MacOS (Intel): 0x1e1d40
     * @note[short] Windows: 0x47d930
     * @note[short] iOS: 0x3922d0
     * @note[short] Android
     */
    virtual int getTextKerning();

    /**
     * @note[short] Windows: 0x49a9e0
     * @note[short] Android: Rebinded
     */
    void createLabel(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    void queueUpdateLabel(gd::string p0);

    /**
     * @note[short] Windows: 0x49ab80
     * @note[short] Android
     */
    void removeLabel();

    /**
     * @note[short] Android
     */
    void unlockLabelColor();

    /**
     * @note[short] Android
     */
    void updateLabel(float p0);

    /**
     * @note[short] MacOS (ARM): 0x170ba0
     * @note[short] MacOS (Intel): 0x1b04c0
     * @note[short] Windows: 0x49af00
     * @note[short] Android: Rebinded
     */
    void updateLabel(gd::string p0);

    /**
     * @note[short] Windows: 0x49aca0
     * @note[short] Android
     */
    void updateLabelAlign(int p0);

    /**
     * @note[short] Android
     */
    void updateLabelIfDirty();

    /**
     * @note[short] Windows: 0x49ad40
     * @note[short] Android
     */
    void updatePreviewLabel();
    cocos2d::CCLabelBMFont* m_label;
    bool m_labelDirty;
    gd::string m_labelString;
    bool m_labelColorLocked;
    int m_alignment;
    bool m_showSecondsOnly;
    int m_shownSpecial;
    bool m_isTimeCounter;
    int m_kerning;
    bool m_updateLabel;
};
