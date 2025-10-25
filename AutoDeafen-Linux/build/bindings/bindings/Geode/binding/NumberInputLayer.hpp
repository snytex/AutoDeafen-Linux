#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class NumberInputLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "NumberInputLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NumberInputLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NumberInputLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static NumberInputLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x3ed324
     * @note[short] MacOS (Intel): 0x47f660
     * @note[short] Windows: 0x3326e0
     * @note[short] iOS: 0xfbfd4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3ee1f0
     * @note[short] MacOS (Intel): 0x480110
     * @note[short] Windows: 0x52d60
     * @note[short] iOS: 0xfc794
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3ee174
     * @note[short] MacOS (Intel): 0x4800a0
     * @note[short] Windows: 0x84650
     * @note[short] iOS: 0xfc718
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3ede24
     * @note[short] MacOS (Intel): 0x47fd60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteLast();

    /**
     * @note[short] MacOS (ARM): 0x3ee054
     * @note[short] MacOS (Intel): 0x47ff90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void inputNumber(int num);

    /**
     * @note[short] Windows: 0x84620
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onDone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3edcd0
     * @note[short] MacOS (Intel): 0x47fc30
     * @note[short] Windows: 0x332c90
     * @note[short] Android
     */
    void onNumber(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3edd68
     * @note[short] MacOS (Intel): 0x47fcb0
     * @note[short] Windows: 0x332e20
     * @note[short] iOS: 0xfc50c
     * @note[short] Android
     */
    void updateNumberState();
    cocos2d::CCLabelBMFont* m_inputLabel;
    CCMenuItemSpriteExtra* m_okButton;
    int m_minimum;
    int m_maximum;
    gd::string m_inputString;
    NumberInputDelegate* m_delegate;
};
