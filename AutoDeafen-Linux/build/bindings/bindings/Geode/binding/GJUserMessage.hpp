#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUserMessage : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUserMessage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUserMessage, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4a264c
     * @note[short] MacOS (Intel): 0x549f70
     * @note[short] Windows: 0x170ec0
     * @note[short] iOS: 0xb3540
     * @note[short] Android
     */
    static GJUserMessage* create();

    /**
     * @note[short] MacOS (ARM): 0x490df0
     * @note[short] MacOS (Intel): 0x537410
     * @note[short] Windows: 0x170380
     * @note[short] iOS: 0xa8330
     * @note[short] Android
     */
    static GJUserMessage* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a26e8
     * @note[short] MacOS (Intel): 0x54a010
     * @note[short] Windows: 0x77db0
     * @note[short] iOS: 0xb35d0
     * @note[short] Android
     */
    virtual bool init();
    int m_messageID;
    int m_accountID;
    int m_userID;
    gd::string m_title;
    gd::string m_content;
    gd::string m_username;
    gd::string m_uploadDate;
    bool m_read;
    bool m_outgoing;
    bool m_toggled;
};
