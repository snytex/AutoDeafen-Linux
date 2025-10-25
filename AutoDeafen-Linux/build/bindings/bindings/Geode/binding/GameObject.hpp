#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class GameObject : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "GameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameObject, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): 0x199f78
     * @note[short] MacOS (Intel): 0x1e2350
     * @note[short] Windows: 0x135ba0
     * @note[short] iOS: 0x22ee90
     * @note[short] Android: Rebinded
     */
     GameObject();

    /**
     * @note[short] MacOS (ARM): 0x4d7884
     * @note[short] MacOS (Intel): 0x58a280
     * @note[short] Windows: 0x18aca0
     * @note[short] iOS: 0x253d3c
     * @note[short] Android
     */
    static GameObject* createWithFrame(char const* name);

    /**
     * @note[short] MacOS (ARM): 0x4d73bc
     * @note[short] MacOS (Intel): 0x585720
     * @note[short] Windows: 0x188850
     * @note[short] iOS: 0x253594
     * @note[short] Android
     */
    static GameObject* createWithKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x4e2090
     * @note[short] MacOS (Intel): 0x5a7da0
     * @note[short] Windows: 0x19a260
     * @note[short] iOS: 0x25d1e4
     * @note[short] Android: Rebinded
     */
    static GameObject* objectFromVector(gd::vector<gd::string>& propValues, gd::vector<void*>& propIsPresent, GJBaseGameLayer* gameLayer, bool lowDetail);

    /**
     * @note[short] MacOS (ARM): 0x4d99a0
     * @note[short] MacOS (Intel): 0x5926c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x255980
     * @note[short] Android: Out of line
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de6e4
     * @note[short] MacOS (Intel): 0x5a42e0
     * @note[short] Windows: 0x1952d0
     * @note[short] iOS: 0x25a750
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de784
     * @note[short] MacOS (Intel): 0x5a4380
     * @note[short] Windows: 0x1953b0
     * @note[short] iOS: 0x25a7e8
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de824
     * @note[short] MacOS (Intel): 0x5a4420
     * @note[short] Windows: 0x1954a0
     * @note[short] iOS: 0x25a880
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de10c
     * @note[short] MacOS (Intel): 0x5a3d60
     * @note[short] Windows: 0x194be0
     * @note[short] iOS: 0x25a238
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4dee6c
     * @note[short] MacOS (Intel): 0x5a4b20
     * @note[short] Windows: 0x195cd0
     * @note[short] iOS: 0x25ade8
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4de3ac
     * @note[short] MacOS (Intel): 0x5a3fd0
     * @note[short] Windows: 0x194e80
     * @note[short] iOS: 0x25a444
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de494
     * @note[short] MacOS (Intel): 0x5a40a0
     * @note[short] Windows: 0x194fd0
     * @note[short] iOS: 0x25a51c
     * @note[short] Android
     */
    virtual void setRotationX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de570
     * @note[short] MacOS (Intel): 0x5a4160
     * @note[short] Windows: 0x195120
     * @note[short] iOS: 0x25a5e8
     * @note[short] Android
     */
    virtual void setRotationY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4deb48
     * @note[short] MacOS (Intel): 0x5a4780
     * @note[short] Windows: 0x195880
     * @note[short] iOS: 0x25aafc
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x4d7ac8
     * @note[short] MacOS (Intel): 0x58a4b0
     * @note[short] Windows: 0x18ad30
     * @note[short] iOS: 0x253f40
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] MacOS (ARM): 0x4e9884
     * @note[short] MacOS (Intel): 0x5b0a70
     * @note[short] Windows: 0x19de40
     * @note[short] iOS: 0x260390
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4de63c
     * @note[short] MacOS (Intel): 0x5a4240
     * @note[short] Windows: 0x195240
     * @note[short] iOS: 0x25a6a8
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4de690
     * @note[short] MacOS (Intel): 0x5a4290
     * @note[short] Windows: 0x195280
     * @note[short] iOS: 0x25a6fc
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x4d99a4
     * @note[short] MacOS (Intel): 0x5926d0
     * @note[short] Windows: 0x18dea0
     * @note[short] iOS: 0x255984
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x3ab2c8
     * @note[short] MacOS (Intel): 0x430540
     * @note[short] Windows: 0x1abf80
     * @note[short] iOS: 0x2ad6f8
     * @note[short] Android: Rebinded
     */
    virtual void setupCustomSprites(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x4e0268
     * @note[short] MacOS (Intel): 0x5a5e40
     * @note[short] Windows: 0x198dd0
     * @note[short] iOS: 0x25be94
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4d8f98
     * @note[short] MacOS (Intel): 0x591b80
     * @note[short] Windows: 0x18d750
     * @note[short] iOS: 0x255010
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x4d945c
     * @note[short] MacOS (Intel): 0x5921a0
     * @note[short] Windows: 0x18db60
     * @note[short] iOS: 0x25544c
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS (ARM): 0x4d97e0
     * @note[short] MacOS (Intel): 0x592510
     * @note[short] Windows: 0x18dc10
     * @note[short] iOS: 0x2557d0
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4ddae0
     * @note[short] MacOS (Intel): 0x5a3660
     * @note[short] Windows: 0x1946d0
     * @note[short] iOS: 0x259cf0
     * @note[short] Android
     */
    virtual void transferObjectRect(cocos2d::CCRect& p0);

    /**
     * @note[short] MacOS (ARM): 0x4ddb58
     * @note[short] MacOS (Intel): 0x5a36d0
     * @note[short] Windows: 0x194720
     * @note[short] iOS: 0x259d68
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x4ddb6c
     * @note[short] MacOS (Intel): 0x5a3700
     * @note[short] Windows: 0x194740
     * @note[short] iOS: 0x259d7c
     * @note[short] Android
     */
    virtual cocos2d::CCRect getObjectRect(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4ddd50
     * @note[short] MacOS (Intel): 0x5a3930
     * @note[short] Windows: 0x1948d0
     * @note[short] iOS: 0x259f50
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect2(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4dde14
     * @note[short] MacOS (Intel): 0x5a3a00
     * @note[short] Windows: 0x194970
     * @note[short] iOS: 0x259fd4
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectTextureRect();

    /**
     * @note[short] MacOS (ARM): 0x4de06c
     * @note[short] MacOS (Intel): 0x5a3ca0
     * @note[short] Windows: 0x194ba0
     * @note[short] iOS: 0x25a1b8
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x4d8e7c
     * @note[short] MacOS (Intel): 0x591a70
     * @note[short] Windows: 0x18d5d0
     * @note[short] iOS: 0x254ef4
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x4d92ec
     * @note[short] MacOS (Intel): 0x591fd0
     * @note[short] Windows: 0x18d9a0
     * @note[short] iOS: 0x25535c
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void customObjectSetup(gd::vector<gd::string>& propValues, gd::vector<void*>& propIsPresent);

    /**
     * @note[short] MacOS (ARM): 0x4e3ca8
     * @note[short] MacOS (Intel): 0x5a9880
     * @note[short] Windows: 0x19bd50
     * @note[short] iOS: 0x25e828
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x4defb4
     * @note[short] MacOS (Intel): 0x5a4c80
     * @note[short] Windows: 0x195df0
     * @note[short] iOS: 0x25af30
     * @note[short] Android
     */
    virtual void claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x4df574
     * @note[short] MacOS (Intel): 0x5a52c0
     * @note[short] Windows: 0x196320
     * @note[short] iOS: 0x25b3d0
     * @note[short] Android
     */
    virtual void unclaimParticle();

    /**
     * @note[short] MacOS (ARM): 0x4df5dc
     * @note[short] MacOS (Intel): 0x5a5330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25b424
     * @note[short] Android: Out of line
     */
    virtual void particleWasActivated();

    /**
     * @note[short] MacOS (ARM): 0x4de62c
     * @note[short] MacOS (Intel): 0x5a4220
     * @note[short] Windows: 0x195220
     * @note[short] iOS: 0x25a698
     * @note[short] Android
     */
    virtual bool isFlipX();

    /**
     * @note[short] MacOS (ARM): 0x4de634
     * @note[short] MacOS (Intel): 0x5a4230
     * @note[short] Windows: 0x195230
     * @note[short] iOS: 0x25a6a0
     * @note[short] Android
     */
    virtual bool isFlipY();

    /**
     * @note[short] MacOS (ARM): 0x4de8c4
     * @note[short] MacOS (Intel): 0x5a44c0
     * @note[short] Windows: 0x195590
     * @note[short] iOS: 0x25a918
     * @note[short] Android
     */
    virtual void setRScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de8f8
     * @note[short] MacOS (Intel): 0x5a4500
     * @note[short] Windows: 0x1955d0
     * @note[short] iOS: 0x25a94c
     * @note[short] Android
     */
    virtual void setRScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de92c
     * @note[short] MacOS (Intel): 0x5a4540
     * @note[short] Windows: 0x195610
     * @note[short] iOS: 0x25a980
     * @note[short] Android
     */
    virtual void setRScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4de9b0
     * @note[short] MacOS (Intel): 0x5a45c0
     * @note[short] Windows: 0x195650
     * @note[short] iOS: 0x25a9c4
     * @note[short] Android
     */
    virtual float getRScaleX();

    /**
     * @note[short] MacOS (ARM): 0x4de9e8
     * @note[short] MacOS (Intel): 0x5a45f0
     * @note[short] Windows: 0x195690
     * @note[short] iOS: 0x25a9fc
     * @note[short] Android
     */
    virtual float getRScaleY();

    /**
     * @note[short] MacOS (ARM): 0x4de314
     * @note[short] MacOS (Intel): 0x5a3f50
     * @note[short] Windows: 0x194df0
     * @note[short] iOS: 0x25a3c0
     * @note[short] Android
     */
    virtual void setRRotation(float p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4e956c
     * @note[short] MacOS (Intel): 0x5b0790
     * @note[short] Windows: 0x19db00
     * @note[short] iOS: 0x260094
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4e982c
     * @note[short] MacOS (Intel): 0x5b0a20
     * @note[short] Windows: 0x19ddf0
     * @note[short] iOS: 0x260338
     * @note[short] Android
     */
    virtual void setGlowColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4df5fc
     * @note[short] MacOS (Intel): 0x5a5370
     * @note[short] Windows: 0x196410
     * @note[short] iOS: 0x25b444
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void animationTriggered();

    /**
     * @note[short] MacOS (ARM): 0x4e9910
     * @note[short] MacOS (Intel): 0x5b0ae0
     * @note[short] Windows: 0x19dec0
     * @note[short] iOS: 0x26041c
     * @note[short] Android
     */
    virtual void selectObject(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool hasBeenActivatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool hasBeenActivated();

    /**
     * @note[short] MacOS (ARM): 0x4ea374
     * @note[short] MacOS (Intel): 0x5b1510
     * @note[short] Windows: 0x19e590
     * @note[short] iOS: 0x2609e4
     * @note[short] Android
     */
    virtual OBB2D* getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x4ea408
     * @note[short] MacOS (Intel): 0x5b1590
     * @note[short] Windows: 0x19e5f0
     * @note[short] iOS: 0x260a78
     * @note[short] Android
     */
    virtual void updateOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x4efe24
     * @note[short] MacOS (Intel): 0x5b9cb0
     * @note[short] Windows: 0x19e570
     * @note[short] iOS: 0x264644
     * @note[short] Android
     */
    virtual float getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x4eae24
     * @note[short] MacOS (Intel): 0x5b2150
     * @note[short] Windows: 0x19eff0
     * @note[short] iOS: 0x2612d0
     * @note[short] Android
     */
    virtual void updateMainColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4eb32c
     * @note[short] MacOS (Intel): 0x5b2660
     * @note[short] Windows: 0x19f000
     * @note[short] iOS: 0x2614a4
     * @note[short] Android
     */
    virtual void updateSecondaryColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4e09b8
     * @note[short] MacOS (Intel): 0x5a6570
     * @note[short] Windows: 0x199810
     * @note[short] iOS: 0x25c4f0
     * @note[short] Android
     */
    virtual int addToGroup(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4e0a90
     * @note[short] MacOS (Intel): 0x5a6620
     * @note[short] Windows: 0x199930
     * @note[short] iOS: 0x25c5a0
     * @note[short] Android
     */
    virtual void removeFromGroup(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4e93b4
     * @note[short] MacOS (Intel): 0x5b05d0
     * @note[short] Windows: 0x19d950
     * @note[short] iOS: 0x25ff38
     * @note[short] Android
     */
    virtual void saveActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x19999c
     * @note[short] MacOS (Intel): 0x1e1b50
     * @note[short] Windows: 0x135fe0
     * @note[short] iOS: 0x22ea4c
     * @note[short] Android
     */
    virtual float spawnXPosition();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canAllowMultiActivate();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void blendModeChanged();

    /**
     * @note[short] MacOS (ARM): 0x4e9764
     * @note[short] MacOS (Intel): 0x5b0960
     * @note[short] Windows: 0x19dce0
     * @note[short] iOS: 0x260270
     * @note[short] Android
     */
    virtual void updateParticleColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4dede4
     * @note[short] MacOS (Intel): 0x5a4aa0
     * @note[short] Windows: 0x195b20
     * @note[short] iOS: 0x25ad60
     * @note[short] Android
     */
    virtual void updateParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateMainParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateSecondaryParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canReverse();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canBeOrdered();

    /**
     * @note[short] MacOS (ARM): 0x8d390
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x171fa4
     * @note[short] Android: Out of line
     */
    virtual cocos2d::CCLabelBMFont* getObjectLabel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* p0);

    /**
     * @note[short] MacOS (ARM): 0x4ec0bc
     * @note[short] MacOS (Intel): 0x5b37c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x261f40
     * @note[short] Android: Out of line
     */
    virtual bool shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool getHasSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool getHasRotateAction();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canMultiActivate(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateTextKerning(int p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual int getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x1999bc
     * @note[short] MacOS (Intel): 0x1e1b70
     * @note[short] Windows: 0x136000
     * @note[short] iOS: 0x22ea6c
     * @note[short] Android
     */
    virtual bool getObjectRectDirty() const ;

    /**
     * @note[short] MacOS (ARM): 0x1999c4
     * @note[short] MacOS (Intel): 0x1e1b80
     * @note[short] Windows: 0x136010
     * @note[short] iOS: 0x22ea74
     * @note[short] Android
     */
    virtual void setObjectRectDirty(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1999cc
     * @note[short] MacOS (Intel): 0x1e1b90
     * @note[short] Windows: 0x136020
     * @note[short] iOS: 0x22ea7c
     * @note[short] Android
     */
    virtual bool getOrientedRectDirty() const ;

    /**
     * @note[short] MacOS (ARM): 0x1999d4
     * @note[short] MacOS (Intel): 0x1e1ba0
     * @note[short] Windows: 0x136030
     * @note[short] iOS: 0x22ea84
     * @note[short] Android
     */
    virtual void setOrientedRectDirty(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1999dc
     * @note[short] MacOS (Intel): 0x1e1bb0
     * @note[short] Windows: 0x136040
     * @note[short] iOS: 0x22ea8c
     * @note[short] Android
     */
    virtual GameObjectType getType() const ;

    /**
     * @note[short] MacOS (ARM): 0x1999e4
     * @note[short] MacOS (Intel): 0x1e1bc0
     * @note[short] Windows: 0x136050
     * @note[short] iOS: 0x22ea94
     * @note[short] Android
     */
    virtual void setType(GameObjectType p0);

    /**
     * @note[short] MacOS (ARM): 0x1999ec
     * @note[short] MacOS (Intel): 0x1e1bd0
     * @note[short] Windows: 0x136060
     * @note[short] iOS: 0x22ea9c
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getStartPos() const ;

    /**
     * @note[short] MacOS (ARM): 0x4d83b4
     * @note[short] MacOS (Intel): 0x58cc00
     * @note[short] Windows: 0x18b830
     * @note[short] iOS: 0x254690
     * @note[short] Android: Rebinded
     */
    void addColorSprite(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x4d95b8
     * @note[short] MacOS (Intel): 0x592300
     * @note[short] Windows: 0x199040
     * @note[short] Android
     */
    void addColorSpriteToParent(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4e045c
     * @note[short] MacOS (Intel): 0x5a6020
     * @note[short] Windows: 0x199240
     * @note[short] Android
     */
    void addColorSpriteToSelf();

    /**
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addCustomBlackChild(gd::string p0, float p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x4dd6a8
     * @note[short] MacOS (Intel): 0x5a3240
     * @note[short] Windows: 0x194330
     * @note[short] iOS: 0x259a28
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addCustomChild(gd::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addCustomColorChild(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x4d825c
     * @note[short] MacOS (Intel): 0x58ca90
     * @note[short] Android
     */
    void addEmptyGlow();

    /**
     * @note[short] MacOS (ARM): 0x4d7bd0
     * @note[short] MacOS (Intel): 0x58a5c0
     * @note[short] Windows: 0x18af60
     * @note[short] iOS: 0x254034
     * @note[short] Android: Rebinded
     */
    void addGlow(gd::string p0);

    /**
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addInternalChild(cocos2d::CCSprite* p0, gd::string p1, cocos2d::CCPoint p2, int p3);

    /**
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addInternalCustomColorChild(gd::string p0, cocos2d::CCPoint p1, int p2);

    /**
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* addInternalGlowChild(gd::string p0, cocos2d::CCPoint p1);

    /**
     * @note[short] Android
     */
    void addNewSlope01(bool p0);

    /**
     * @note[short] Android
     */
    void addNewSlope01Glow(bool p0);

    /**
     * @note[short] Android
     */
    void addNewSlope02(bool p0);

    /**
     * @note[short] Android
     */
    void addNewSlope02Glow(bool p0);

    /**
     * @note[short] Android
     */
    void addRotation(float p0, float p1);

    /**
     * @note[short] Android
     */
    void addRotation(float p0);

    /**
     * @note[short] Android
     */
    void addToColorGroup(int p0);

    /**
     * @note[short] Android
     */
    void addToCustomScaleX(float p0);

    /**
     * @note[short] Android
     */
    void addToCustomScaleY(float p0);

    /**
     * @note[short] Android
     */
    void addToOpacityGroup(int p0);

    /**
     * @note[short] Android
     */
    void addToTempOffset(double p0, double p1);

    /**
     * @note[short] MacOS (ARM): 0x4d7bb4
     * @note[short] MacOS (Intel): 0x58a5a0
     * @note[short] Android
     */
    void assignUniqueID();

    /**
     * @note[short] Android
     */
    bool belongsToGroup(int p0);

    /**
     * @note[short] Android
     */
    void calculateOrientedBox();

    /**
     * @note[short] Android
     */
    bool canChangeCustomColor();

    /**
     * @note[short] Android
     */
    bool canChangeMainColor();

    /**
     * @note[short] Android
     */
    bool canChangeSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x4e0904
     * @note[short] MacOS (Intel): 0x5a64b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool canRotateFree();

    /**
     * @note[short] MacOS (ARM): 0x4eaf28
     * @note[short] MacOS (Intel): 0x5b2260
     * @note[short] Windows: 0x19f010
     * @note[short] iOS: 0x261330
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForMode(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void commonInteractiveSetup();

    /**
     * @note[short] MacOS (ARM): 0x4d7950
     * @note[short] MacOS (Intel): 0x58a320
     * @note[short] Windows: 0x18ad70
     * @note[short] Android
     */
    void commonSetup();

    /**
     * @note[short] MacOS (ARM): 0x4e0b44
     * @note[short] MacOS (Intel): 0x5a66d0
     * @note[short] Windows: 0x1999c0
     * @note[short] Android
     */
    void copyGroups(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4dc810
     * @note[short] MacOS (Intel): 0x59d770
     * @note[short] Windows: 0x195ba0
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* createAndAddParticle(int p0, char const* plistName, int p2, cocos2d::tCCPositionType positionType);

    /**
     * @note[short] Android
     */
    void createColorGroupContainer(int p0);

    /**
     * @note[short] Android: Rebinded
     */
    void createGlow(gd::string p0);

    /**
     * @note[short] Windows: 0x199740
     * @note[short] Android
     */
    void createGroupContainer(int size);

    /**
     * @note[short] Android
     */
    void createOpacityGroupContainer(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4d7afc
     * @note[short] MacOS (Intel): 0x58a4e0
     * @note[short] Android
     */
    void createSpriteColor(int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deselectObject();
	inline void destroyObject() { // what ? not inline, imac 0x5a5340
        m_isDisabled = true;
        m_isDisabled2 = true;
        setOpacity(0);
    }

    /**
     * @note[short] MacOS (ARM): 0x4e0550
     * @note[short] MacOS (Intel): 0x5a6120
     * @note[short] Windows: 0x199340
     * @note[short] iOS: 0x25c100
     * @note[short] Android
     */
    void determineSlopeDirection();

    /**
     * @note[short] Android
     */
    bool didScaleXChange();

    /**
     * @note[short] Android
     */
    bool didScaleYChange();

    /**
     * @note[short] Android
     */
    void dirtifyObjectPos();

    /**
     * @note[short] Android
     */
    void dirtifyObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x4df648
     * @note[short] MacOS (Intel): 0x5a5400
     * @note[short] Android
     */
    void disableObject();

    /**
     * @note[short] Android
     */
    bool dontCountTowardsLimit();

    /**
     * @note[short] Windows: 0x19ed00
     * @note[short] Android
     */
    void duplicateAttributes(GameObject* p0);

    /**
     * @note[short] Android
     */
    void duplicateColorMode(GameObject* p0);

    /**
     * @note[short] Windows: 0x19ee40
     * @note[short] iOS: 0x2610c4
     * @note[short] Android
     */
    void duplicateValues(GameObject* p0);

    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForCustomMode(int p0);

    /**
     * @note[short] Windows: 0x19e0a0
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForMode(int p0);

    /**
     * @note[short] Android
     */
    void fastRotateObject(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4eb568
     * @note[short] MacOS (Intel): 0x5b28b0
     * @note[short] Windows: 0x19f140
     * @note[short] iOS: 0x26151c
     * @note[short] Android
     */
    cocos2d::ccColor3B getActiveColorForMode(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x4e937c
     * @note[short] MacOS (Intel): 0x5b05a0
     * @note[short] Android
     */
    char* getBallFrame(int p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCRect getBoundingRect();

    /**
     * @note[short] Android
     */
    cocos2d::CCPoint getBoxOffset();

    /**
     * @note[short] Android: Rebinded
     */
    gd::string getColorFrame(gd::string p0);

    /**
     * @note[short] Android
     */
    int getColorIndex();

    /**
     * @note[short] MacOS (ARM): 0x4e1704
     * @note[short] MacOS (Intel): 0x5a7190
     * @note[short] Windows: 0x199db0
     * @note[short] iOS: 0x25ccd4
     * @note[short] Android
     */
    gd::string getColorKey(bool isMainColor, bool p1);

    /**
     * @note[short] Android
     */
    ZLayer getCustomZLayer();

    /**
     * @note[short] Android: Rebinded
     */
    gd::string getGlowFrame(gd::string p0);

    /**
     * @note[short] Android
     */
    bool getGroupDisabled();

    /**
     * @note[short] MacOS (ARM): 0x4e0b24
     * @note[short] MacOS (Intel): 0x5a66b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c624
     * @note[short] Android
     */
    int getGroupID(int index);

    /**
     * @note[short] Android
     */
    gd::string getGroupString();

    /**
     * @note[short] MacOS (ARM): 0x4eb730
     * @note[short] MacOS (Intel): 0x5b2a90
     * @note[short] iOS: 0x261674
     * @note[short] Android
     */
    cocos2d::CCPoint const& getLastPosition();

    /**
     * @note[short] Android
     */
    GJSpriteColor* getMainColor();

    /**
     * @note[short] Android
     */
    int getMainColorMode();

    /**
     * @note[short] Windows: 0x1995a0
     * @note[short] Android
     */
    int getObjectDirection();

    /**
     * @note[short] Android
     */
    float getObjectRadius();

    /**
     * @note[short] Android
     */
    cocos2d::CCRect* getObjectRectPointer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    ZLayer getObjectZLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getObjectZOrder();

    /**
     * @note[short] Android
     */
    cocos2d::CCRect getOuterObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x4df4f0
     * @note[short] MacOS (Intel): 0x5a5250
     * @note[short] Android
     */
    int getParentMode();

    /**
     * @note[short] MacOS (ARM): 0x4ea8f0
     * @note[short] MacOS (Intel): 0x5b1ab0
     * @note[short] Windows: 0x19eb30
     * @note[short] iOS: 0x260ed8
     * @note[short] Android
     */
    GJSpriteColor* getRelativeSpriteColor(int p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCPoint getScalePosDelta();

    /**
     * @note[short] Android
     */
    GJSpriteColor* getSecondaryColor();

    /**
     * @note[short] Android
     */
    int getSecondaryColorMode();

    /**
     * @note[short] Android
     */
    float getSlopeAngle();

    /**
     * @note[short] Android
     */
    cocos2d::CCPoint getUnmodifiedPosition();

    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B groupColor(cocos2d::ccColor3B const& p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x4e157c
     * @note[short] MacOS (Intel): 0x5a7040
     * @note[short] Windows: 0x199d30
     * @note[short] Android
     */
    float groupOpacityMod();

    /**
     * @note[short] MacOS (ARM): 0x4e0e84
     * @note[short] MacOS (Intel): 0x5a6a20
     * @note[short] Android
     */
    void groupWasDisabled();

    /**
     * @note[short] Android
     */
    void groupWasEnabled();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasSecondaryColor();

    /**
     * @note[short] Windows: 0x1a0180
     * @note[short] Android
     */
    bool ignoreEditorDuration();

    /**
     * @note[short] Android
     */
    bool ignoreEnter();

    /**
     * @note[short] Android
     */
    bool ignoreFade();

    /**
     * @note[short] MacOS (ARM): 0x4d7914
     * @note[short] MacOS (Intel): 0x58a2f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x253dc0
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] Android
     */
    bool isBasicEnterEffect(int p0);

    /**
     * @note[short] Android
     */
    bool isBasicTrigger();

    /**
     * @note[short] Android
     */
    bool isColorObject();

    /**
     * @note[short] MacOS (ARM): 0x4eb8d4
     * @note[short] MacOS (Intel): 0x5b3020
     * @note[short] Android
     */
    bool isColorTrigger();

    /**
     * @note[short] Android
     */
    bool isConfigurablePortal();

    /**
     * @note[short] Android
     */
    bool isEditorSpawnableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4ea740
     * @note[short] MacOS (Intel): 0x5b1910
     * @note[short] Windows: 0x19e990
     * @note[short] Android
     */
    bool isFacingDown();

    /**
     * @note[short] MacOS (ARM): 0x4ea7d0
     * @note[short] MacOS (Intel): 0x5b1990
     * @note[short] Windows: 0x19ea50
     * @note[short] Android
     */
    bool isFacingLeft();

    /**
     * @note[short] MacOS (ARM): 0x4ebf78
     * @note[short] MacOS (Intel): 0x5b3690
     * @note[short] iOS: 0x261dfc
     * @note[short] Android
     */
    bool isSettingsObject();

    /**
     * @note[short] MacOS (ARM): 0x4eb740
     * @note[short] MacOS (Intel): 0x5b2ac0
     * @note[short] Windows: 0x19f730
     * @note[short] iOS: 0x261684
     * @note[short] Android
     */
    bool isSpawnableTrigger();

    /**
     * @note[short] Android
     */
    bool isSpecialObject();

    /**
     * @note[short] MacOS (ARM): 0x4eb9b4
     * @note[short] MacOS (Intel): 0x5b30f0
     * @note[short] Android
     */
    bool isSpeedObject();

    /**
     * @note[short] Android
     */
    bool isStoppableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4dca68
     * @note[short] MacOS (Intel): 0x59de80
     * @note[short] Windows: 0x19f2c0
     * @note[short] iOS: 0x258c90
     * @note[short] Android
     */
    bool isTrigger();

    /**
     * @note[short] MacOS (ARM): 0x4e1100
     * @note[short] MacOS (Intel): 0x5a6d00
     * @note[short] Windows: 0x199b50
     * @note[short] iOS: 0x25c9f8
     * @note[short] Android: Rebinded
     */
    void loadGroupsFromString(gd::string groupList);

    /**
     * @note[short] MacOS (ARM): 0x4df614
     * @note[short] MacOS (Intel): 0x5a53a0
     * @note[short] iOS: 0x25b45c
     * @note[short] Android
     */
    void makeInvisible();

    /**
     * @note[short] Android
     */
    TodoReturn makeVisible();

    /**
     * @note[short] Android
     */
    float opacityModForMode(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x4d953c
     * @note[short] MacOS (Intel): 0x592280
     * @note[short] Windows: 0x198f60
     * @note[short] iOS: 0x25552c
     * @note[short] Android
     */
    cocos2d::CCNode* parentForZLayer(int zLayer, bool blending, int parentMode);

    /**
     * @note[short] Android
     */
    gd::string perspectiveColorFrame(char const* p0, int p1);

    /**
     * @note[short] Android
     */
    gd::string perspectiveFrame(char const* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1f9910
     * @note[short] MacOS (Intel): 0x24c560
     * @note[short] Windows: 0x1a7520
     * @note[short] iOS: 0x349078
     * @note[short] Android
     */
    void playDestroyObjectAnim(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: 0x1a7040
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, float p10, float p11);

    /**
     * @note[short] Windows: 0x1a6f50
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4);

    /**
     * @note[short] MacOS (ARM): 0x4df690
     * @note[short] MacOS (Intel): 0x5a5440
     * @note[short] Windows: 0x196430
     * @note[short] iOS: 0x25b4d8
     * @note[short] Android
     */
    void playShineEffect();

    /**
     * @note[short] MacOS (ARM): 0x4de084
     * @note[short] MacOS (Intel): 0x5a3cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25a1d0
     * @note[short] Android
     */
    void quickUpdatePosition();

    /**
     * @note[short] Android
     */
    void quickUpdatePosition2();

    /**
     * @note[short] Android
     */
    void removeColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x4d834c
     * @note[short] MacOS (Intel): 0x58cb90
     * @note[short] Android
     */
    void removeGlow();

    /**
     * @note[short] Android
     */
    void reorderColorSprite();

    /**
     * @note[short] Android
     */
    void resetColorGroups();

    /**
     * @note[short] MacOS (ARM): 0x4d9220
     * @note[short] MacOS (Intel): 0x591eb0
     * @note[short] Android
     */
    void resetGroupDisabled();

    /**
     * @note[short] MacOS (ARM): 0x4e0b1c
     * @note[short] MacOS (Intel): 0x5a66a0
     * @note[short] Android
     */
    void resetGroups();

    /**
     * @note[short] Android
     */
    void resetMainColorMode();

    /**
     * @note[short] Android
     */
    void resetMID();

    /**
     * @note[short] Android
     */
    void resetMoveOffset();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetRScaleForced();

    /**
     * @note[short] Android
     */
    void resetSecondaryColorMode();

    /**
     * @note[short] Android
     */
    void setAreaOpacity(float p0, float p1, int p2);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setCustomZLayer(int zLayer);

    /**
     * @note[short] Android
     */
    void setDefaultMainColorMode(int p0);

    /**
     * @note[short] Android
     */
    void setDefaultSecondaryColorMode(int p0);

    /**
     * @note[short] Android
     */
    void setGlowOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x4eb738
     * @note[short] MacOS (Intel): 0x5b2aa0
     * @note[short] iOS: 0x26167c
     * @note[short] Android
     */
    void setLastPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Android
     */
    void setMainColorMode(int p0);

    /**
     * @note[short] Android
     */
    void setSecondaryColorMode(int p0);

    /**
     * @note[short] Android
     */
    void setupColorSprite(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void setupPixelScale();

    /**
     * @note[short] Android
     */
    void setupSpriteSize();

    /**
     * @note[short] Windows: 0x18dd00
     * @note[short] Android
     */
    bool shouldBlendColor(GJSpriteColor* p0, bool p1);

    /**
     * @note[short] Android
     */
    bool shouldLockX();

    /**
     * @note[short] Android
     */
    bool shouldNotHideAnimFreeze();

    /**
     * @note[short] MacOS (ARM): 0x1f96ac
     * @note[short] MacOS (Intel): 0x24c330
     * @note[short] Android
     */
    bool shouldShowPickupEffects();

    /**
     * @note[short] Android
     */
    bool slopeFloorTop();

    /**
     * @note[short] Android
     */
    bool slopeWallLeft();

    /**
     * @note[short] Android
     */
    double slopeYPos(cocos2d::CCRect p0);

    /**
     * @note[short] Windows: 0x19e430
     * @note[short] Android
     */
    double slopeYPos(float p0);

    /**
     * @note[short] Android
     */
    double slopeYPos(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1f9738
     * @note[short] MacOS (Intel): 0x24c390
     * @note[short] Android
     */
    void spawnDefaultPickupParticle(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25be2c
     * @note[short] Android
     */
    void updateBlendMode();

    /**
     * @note[short] Android
     */
    void updateCustomColorType(short p0);

    /**
     * @note[short] MacOS (ARM): 0x4d922c
     * @note[short] MacOS (Intel): 0x591ed0
     * @note[short] Windows: 0x1956d0
     * @note[short] iOS: 0x25529c
     * @note[short] Android
     */
    void updateCustomScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4d928c
     * @note[short] MacOS (Intel): 0x591f50
     * @note[short] Windows: 0x195760
     * @note[short] iOS: 0x2552fc
     * @note[short] Android
     */
    void updateCustomScaleY(float p0);

    /**
     * @note[short] Android
     */
    void updateHSVState();

    /**
     * @note[short] MacOS (ARM): 0x4ea58c
     * @note[short] MacOS (Intel): 0x5b1730
     * @note[short] Windows: 0x19e7b0
     * @note[short] iOS: 0x260be4
     * @note[short] Android
     */
    void updateIsOriented();

    /**
     * @note[short] Android
     */
    void updateMainColor();

    /**
     * @note[short] Android
     */
    void updateMainColorOnly();

    /**
     * @note[short] Android
     */
    void updateMainOpacity();

    /**
     * @note[short] Windows: 0x19e370
     * @note[short] Android
     */
    void updateObjectEditorColor();

    /**
     * @note[short] Android
     */
    void updateSecondaryColor();

    /**
     * @note[short] Android
     */
    void updateSecondaryColorOnly();

    /**
     * @note[short] Android
     */
    void updateSecondaryOpacity();

    /**
     * @note[short] MacOS (ARM): 0x4d8ef8
     * @note[short] MacOS (Intel): 0x591af0
     * @note[short] Windows: 0x18d670
     * @note[short] Android
     */
    void updateStartPos();

    /**
     * @note[short] Android
     */
    void updateUnmodifiedPositions();

    /**
     * @note[short] Android
     */
    void usesFreezeAnimation();

    /**
     * @note[short] Android
     */
    void usesSpecialAnimation();
    int m_someOtherIndex;
    int m_innerSectionIndex;
    int m_outerSectionIndex;
    int m_middleSectionIndex;
    bool m_hasExtendedCollision;
    cocos2d::ccColor3B m_maybeGroupColor;
    bool m_unk280;
    bool m_unk281;
    float m_blackChildRelated;
    bool m_unk288;
    bool m_editorEnabled;
    bool m_isGroupDisabled;
    bool m_unk28B;
    bool m_unk28c;
    int m_activeMainColorID;
    int m_activeDetailColorID;
    bool m_baseUsesHSV;
    bool m_detailUsesHSV;
    float m_positionXOffset;
    float m_positionYOffset;
    float m_rotationXOffset;
    float m_unk2A8;
    float m_rotationYOffset;
    float m_unk2B0;
    float m_scaleXOffset;
    float m_scaleYOffset;
    float m_unk2BC;
    float m_unk2C0;
    bool m_tempOffsetXRelated;
    bool m_isFlipX;
    bool m_isFlipY;
    cocos2d::CCPoint m_customBoxOffset;
    bool m_boxOffsetCalculated;
    cocos2d::CCPoint m_boxOffset;
    OBB2D* m_orientedBox;
    bool m_shouldUseOuterOb;
    cocos2d::CCSprite* m_glowSprite;
    bool m_unk2F8;
    float m_width;
    float m_height;
    bool m_hasSpecialChild;
    bool m_isActivated;
    bool m_isDisabled2;
    cocos2d::CCParticleSystemQuad* m_particle;
    gd::string m_particleString;
    bool m_hasParticles;
    bool m_particleUseObjectColor;
    bool m_hasColorSprite;
    cocos2d::CCPoint m_unk31c;
    bool m_isSomeSpriteScalable;
    cocos2d::CCRect m_textureRect;
    bool m_isDirty;
    bool m_isObjectPosDirty;
    bool m_isUnmodifiedPosDirty;
    float m_unk33C;
    cocos2d::CCRect m_objectRect;
    bool m_isObjectRectDirty;
    bool m_isOrientedBoxDirty;
    bool m_colorSpriteLocked;
    bool m_unk353;
    bool m_canRotateFree;
    bool m_isMirroredByScale;
    int m_linkedGroup;
    int m_unk35C;
    short m_colorType;
    short m_childColorType;
    bool m_shouldBlendBase;
    bool m_shouldBlendDetail;
    bool m_hasCustomChild;
    bool m_unk367;
    cocos2d::CCSprite* m_colorSprite;
    bool m_unk370;
    float m_objectRadius;
    bool m_isRotationAligned;
    float m_spriteWidthScale;
    float m_spriteHeightScale;
    int m_uniqueID;
    GameObjectType m_objectType;
    GameObjectType m_savedObjectType;
    int m_unk390;
    float m_unmodifiedPositionX;
    float m_unmodifiedPositionY;
    double m_positionX;
    double m_positionY;
    cocos2d::CCPoint m_startPosition;
    bool m_unk3b8;
    bool m_hasNoAudioScale;
    bool m_isDisabled;
    float m_startRotationX;
    float m_startRotationY;
    float m_startScaleX;
    float m_startScaleY;
    float m_customScaleX;
    float m_customScaleY;
    bool m_startFlipX;
    bool m_startFlipY;
    bool m_unk3ee;
    bool m_isInvisible;
    int m_unk3D8;
    short m_unk3DC;
    bool m_unk3DE;
    short m_unk3E0;
    short m_unk3E2;
    short m_enterChannel;
    short m_objectMaterial;
    bool m_unk3E8;
    short m_parentMode;
    bool m_hasNoGlow;
    int m_targetColor;
    int m_objectID;
    bool m_unk3F8;
    bool m_isSolid;
    bool m_ignoreEnter;
    bool m_ignoreFade;
    bool m_unk3FC;
    bool m_unk3FD;
    bool m_customSpriteColor;
    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;
    int m_defaultZOrder;
    bool m_unk40C;
    bool m_colorZLayerRelated;
    bool m_unk40E;
    float m_unk410;
    float m_unk414;
    bool m_particleLocked;
    int m_property53;
    bool m_gmUnkBool4Related;
    bool m_unk421;
    bool m_unk422;
    bool m_cantColorGlow;
    float m_opacityMod;
    bool m_slopeUphill;
    int m_slopeDirection;
    bool m_maybeShouldFixSlopes;
    float m_opacityMod2;
    GJSpriteColor* m_baseColor;
    GJSpriteColor* m_detailColor;
    bool m_unk448;
    ZLayer m_defaultZLayer;
    bool m_zFixedZLayer;
    ZLayer m_zLayer;
    int m_zOrder;
    bool m_unk45c;
    bool m_isSelected;
    float m_unk460;
    cocos2d::CCPoint m_unk464;
    bool m_shouldUpdateColorSprite;
    bool m_unk46d;
    bool m_hasGroupParent;
    bool m_hasAreaParent;
    float m_scaleX;
    float m_scaleY;
    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;
    std::array<short, 10>* m_colorGroups;
    short m_colorGroupCount;
    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupCount;
    short m_editorLayer;
    short m_editorLayer2;
    int m_enabledGroupsCounter;
    bool m_updateCustomContentSize;
    bool m_hasContentSize;
    bool m_isNoTouch;
    cocos2d::CCSize m_lastSize;
    cocos2d::CCPoint m_lastPosition;
    int m_unk4C0;
    int m_unk4C4;
    int m_unk4C8;
    int m_unk4CC;
    GameObjectClassType m_classType;
    bool m_isTrigger;
    bool m_isSpawnOrderTrigger;
    bool m_isColorTrigger;
    bool m_dontIgnoreDuration;
    bool m_canBeControlled;
    bool m_isSpawnOrderTrigger2;
    bool m_isStartPos;
    bool m_isHighDetail;
    ColorActionSprite* m_unk4E0;
    ColorActionSprite* m_unk4E8;
    GJEffectManager* m_goEffectManager;
    bool m_unk4F8;
    bool m_isDecoration;
    bool m_isDecoration2;
    bool m_unk4fb;
    bool m_maybeNotColorable;
    bool m_isPassable;
    bool m_isHide;
    bool m_isNonStickX;
    bool m_isNonStickY;
    bool m_isIceBlock;
    bool m_isGripSlope;
    bool m_isScaleStick;
    bool m_isExtraSticky;
    bool m_isDontBoostY;
    bool m_isDontBoostX;
    bool m_unk507;
    bool m_unk508;
    float m_unk50C;
    float m_pixelScaleX;
    float m_pixelScaleY;
    int m_mainColorKeyIndex;
    int m_detailColorKeyIndex;
    uint8_t m_areaOpacityRelated;
    float m_areaOpacityRelated2;
    int m_areaOpacityRelated3;
    int m_unk52C;
    bool m_unk530;
    bool m_isUIObject;
    bool m_unk532;
};
