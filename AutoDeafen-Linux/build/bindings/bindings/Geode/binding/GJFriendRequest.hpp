#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJFriendRequest : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJFriendRequest";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJFriendRequest, cocos2d::CCNode)

    /**
     * @note[short] Android
     */
    static GJFriendRequest* create();

    /**
     * @note[short] Windows: 0x16fc70
     * @note[short] Android
     */
    static GJFriendRequest* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a2484
     * @note[short] MacOS (Intel): 0x549d80
     * @note[short] Windows: 0x77db0
     * @note[short] iOS: 0xb34b8
     * @note[short] Android
     */
    virtual bool init();
    int m_requestID;
    int m_accountID;
    int m_34;
    gd::string m_message;
    gd::string m_uploadDate;
    bool m_is36;
};
