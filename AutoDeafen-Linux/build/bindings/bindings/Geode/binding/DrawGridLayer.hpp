#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DrawGridLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "DrawGridLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DrawGridLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0xc4b04
     * @note[short] MacOS (Intel): 0xdd0d0
     * @note[short] Windows: 0x2db1f0
     * @note[short] iOS: 0x3575ac
     * @note[short] Android
     */
    static DrawGridLayer* create(cocos2d::CCNode* p0, LevelEditorLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0xd9cd8
     * @note[short] MacOS (Intel): 0xf5c30
     * @note[short] Windows: 0x2db6f0
     * @note[short] iOS: 0x3657b8
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0xd9de8
     * @note[short] MacOS (Intel): 0xf5dc0
     * @note[short] Windows: 0x2db8f0
     * @note[short] iOS: 0x3658c8
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    void addAudioLineObject(AudioLineGuideGameObject* p0);

    /**
     * @note[short] Android
     */
    void addToEffects(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    void addToGuides(GameObject* p0);

    /**
     * @note[short] Android
     */
    void addToSpeedObjects(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCPoint getPortalMinMax(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xd9aa0
     * @note[short] MacOS (Intel): 0xf59b0
     * @note[short] iOS: 0x3655bc
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, LevelEditorLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0xc6aa4
     * @note[short] MacOS (Intel): 0xdf600
     * @note[short] Windows: 0x2db3d0
     * @note[short] iOS: 0x358dbc
     * @note[short] Android: Rebinded
     */
    void loadTimeMarkers(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0xd449c
     * @note[short] MacOS (Intel): 0xef340
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] Android
     */
    void postUpdate();

    /**
     * @note[short] Android
     */
    void removeAudioLineObject(AudioLineGuideGameObject* p0);

    /**
     * @note[short] Android
     */
    void removeFromEffects(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    void removeFromGuides(GameObject* p0);

    /**
     * @note[short] Android
     */
    void removeFromSpeedObjects(EffectGameObject* p0);

    /**
     * @note[short] Android
     */
    void sortSpeedObjects();

    /**
     * @note[short] MacOS (ARM): 0xd2ce4
     * @note[short] MacOS (Intel): 0xed530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x360104
     * @note[short] Android
     */
    float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, bool ignoreWarp, bool ignoreRotate, int id);

    /**
     * @note[short] Android
     */
    void updateMusicGuideTime(float p0);

    /**
     * @note[short] Android
     */
    void updateTimeMarkers();
    std::array<cocos2d::CCPoint, 400>* m_pointArray1;
    std::array<cocos2d::CCPoint, 400>* m_pointArray2;
    std::array<cocos2d::CCPoint, 400>* m_pointArray3;
    gd::unordered_map<int, AudioLineGuideGameObject*> m_audioLineObjects;
    float m_musicTime;
    float m_playbackTime;
    float m_oldPlaybackTime;
    float m_playbackX;
    float m_playbackY;
    bool m_sortEffects;
    LevelEditorLayer* m_editorLayer;
    gd::string m_timeMarkerString;
    cocos2d::CCNode* m_objectLayer;
    cocos2d::CCArray* m_timeMarkers;
    cocos2d::CCArray* m_effectGameObjects;
    cocos2d::CCArray* m_guideObjects;
    cocos2d::CCArray* m_speedObjects;
    double m_unk258;
    float m_currentSpeed;
    float m_slowSpeed;
    float m_normalSpeed;
    float m_fastSpeed;
    float m_fasterSpeed;
    float m_fastestSpeed;
    bool m_updateTimeMarkers;
    bool m_updateSpeedObjects;
    float m_gridSize;
};
