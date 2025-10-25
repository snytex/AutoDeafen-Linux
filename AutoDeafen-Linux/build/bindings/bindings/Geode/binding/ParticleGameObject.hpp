#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class ParticleGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "ParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParticleGameObject, EnhancedGameObject)

    /**
     * @note[short] Windows: 0x487420
     * @note[short] Android
     */
    static ParticleGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1633a0
     * @note[short] MacOS (Intel): 0x1a08c0
     * @note[short] Windows: 0x487540
     * @note[short] iOS: 0x379a74
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x164424
     * @note[short] MacOS (Intel): 0x1a1960
     * @note[short] Windows: 0x488900
     * @note[short] iOS: 0x37a8d4
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x164494
     * @note[short] MacOS (Intel): 0x1a19d0
     * @note[short] Windows: 0x488980
     * @note[short] iOS: 0x37a920
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x164504
     * @note[short] MacOS (Intel): 0x1a1a40
     * @note[short] Windows: 0x488a00
     * @note[short] iOS: 0x37a96c
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x164340
     * @note[short] MacOS (Intel): 0x1a18a0
     * @note[short] Windows: 0x4884f0
     * @note[short] iOS: 0x37a7f0
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x16438c
     * @note[short] MacOS (Intel): 0x1a18e0
     * @note[short] Windows: 0x488530
     * @note[short] iOS: 0x37a83c
     * @note[short] Android
     */
    virtual void setRotationX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x1643d8
     * @note[short] MacOS (Intel): 0x1a1920
     * @note[short] Windows: 0x4886a0
     * @note[short] iOS: 0x37a888
     * @note[short] Android
     */
    virtual void setRotationY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x164668
     * @note[short] MacOS (Intel): 0x1a1ba0
     * @note[short] Windows: 0x488bb0
     * @note[short] iOS: 0x37aaac
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x1635f0
     * @note[short] MacOS (Intel): 0x1a0b90
     * @note[short] Windows: 0x487790
     * @note[short] iOS: 0x379c5c
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x16369c
     * @note[short] MacOS (Intel): 0x1a0c60
     * @note[short] Windows: 0x487860
     * @note[short] iOS: 0x379d08
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x164834
     * @note[short] MacOS (Intel): 0x1a1d90
     * @note[short] Windows: 0x488e00
     * @note[short] iOS: 0x37ac6c
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x1647f0
     * @note[short] MacOS (Intel): 0x1a1d50
     * @note[short] Windows: 0x488dc0
     * @note[short] iOS: 0x37ac34
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1633d8
     * @note[short] MacOS (Intel): 0x1a08f0
     * @note[short] Windows: 0x4875a0
     * @note[short] iOS: 0x379aac
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x164a28
     * @note[short] MacOS (Intel): 0x1a1f90
     * @note[short] Windows: 0x489050
     * @note[short] iOS: 0x37ae4c
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x16377c
     * @note[short] MacOS (Intel): 0x1a0d40
     * @note[short] Windows: 0x487950
     * @note[short] iOS: 0x379de8
     * @note[short] Android
     */
    virtual void claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x163d44
     * @note[short] MacOS (Intel): 0x1a12e0
     * @note[short] Windows: 0x487f10
     * @note[short] iOS: 0x37a390
     * @note[short] Android
     */
    virtual void unclaimParticle();

    /**
     * @note[short] MacOS (ARM): 0x163dd0
     * @note[short] MacOS (Intel): 0x1a1360
     * @note[short] Windows: 0x487ff0
     * @note[short] iOS: 0x37a410
     * @note[short] Android
     */
    virtual void particleWasActivated();

    /**
     * @note[short] MacOS (ARM): 0x164574
     * @note[short] MacOS (Intel): 0x1a1ab0
     * @note[short] Windows: 0x488a80
     * @note[short] iOS: 0x37a9b8
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x16366c
     * @note[short] MacOS (Intel): 0x1a0c20
     * @note[short] Windows: 0x487820
     * @note[short] iOS: 0x379cd8
     * @note[short] Android
     */
    virtual void blendModeChanged();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateParticleColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x16475c
     * @note[short] MacOS (Intel): 0x1a1c90
     * @note[short] Windows: 0x488ce0
     * @note[short] iOS: 0x37aba0
     * @note[short] Android
     */
    virtual void updateMainParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x1647a8
     * @note[short] MacOS (Intel): 0x1a1cf0
     * @note[short] Windows: 0x488d60
     * @note[short] iOS: 0x37abec
     * @note[short] Android
     */
    virtual void updateSecondaryParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x16489c
     * @note[short] MacOS (Intel): 0x1a1df0
     * @note[short] Windows: 0x488e60
     * @note[short] iOS: 0x37acd4
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1649d8
     * @note[short] MacOS (Intel): 0x1a1f40
     * @note[short] Windows: 0x488fd0
     * @note[short] iOS: 0x37adfc
     * @note[short] Android
     */
    virtual void updateAnimateOnTrigger(bool p0);

    /**
     * @note[short] Windows: 0x487b50
     * @note[short] Android
     */
    void applyParticleSettings(cocos2d::CCParticleSystemQuad* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createAndAddCustomParticle();

    /**
     * @note[short] MacOS (ARM): 0x164140
     * @note[short] MacOS (Intel): 0x1a16c0
     * @note[short] Windows: 0x4882e0
     * @note[short] Android
     */
    void createParticlePreviewArt();

    /**
     * @note[short] MacOS (ARM): 0x163f24
     * @note[short] MacOS (Intel): 0x1a14a0
     * @note[short] Windows: 0x4880b0
     * @note[short] iOS: 0x37a4ac
     * @note[short] Android: Rebinded
     */
    void setParticleString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x163fb8
     * @note[short] MacOS (Intel): 0x1a1530
     * @note[short] Windows: 0x488140
     * @note[short] iOS: 0x37a4f8
     * @note[short] Android
     */
    void updateParticle();

    /**
     * @note[short] MacOS (ARM): 0x163c2c
     * @note[short] MacOS (Intel): 0x1a11d0
     * @note[short] Windows: 0x4887d0
     * @note[short] Android
     */
    void updateParticleAngle(float p0, cocos2d::CCParticleSystemQuad* p1);

    /**
     * @note[short] Windows: 0x488470
     * @note[short] Android
     */
    void updateParticlePreviewArtOpacity(float p0);

    /**
     * @note[short] Android
     */
    void updateParticleScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x16375c
     * @note[short] MacOS (Intel): 0x1a0d10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateParticleStruct();
    gd::string m_particleData;
    bool m_updatedParticleData;
    cocos2d::ParticleStruct m_particleStruct;
    bool m_hasUniformObjectColor;
    int m_popupPage;
    bool m_shouldQuickStart;
    float m_respawnResult;
    bool m_startingRespawn;
    bool m_notPreviewing;
};
