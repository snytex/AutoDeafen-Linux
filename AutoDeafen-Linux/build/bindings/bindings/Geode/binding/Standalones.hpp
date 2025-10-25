#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


    /**
     * @note[short] MacOS (ARM): 0x1aba8c
     * @note[short] MacOS (Intel): 0x1f5fa0
     * @note[short] Windows
     * @note[short] iOS: 0x16bc50
     * @note[short] Android
     */
    void kmGLPushMatrix();

    /**
     * @note[short] MacOS (ARM): 0x1abad0
     * @note[short] MacOS (Intel): 0x1f5fe0
     * @note[short] Windows
     * @note[short] iOS: 0x16bc94
     * @note[short] Android
     */
    void kmGLPopMatrix();

    /**
     * @note[short] MacOS (ARM): 0x1aba44
     * @note[short] MacOS (Intel): 0x1f5f60
     * @note[short] Windows
     * @note[short] iOS: 0x16bc08
     * @note[short] Android
     */
    void kmGLMatrixMode(unsigned int p0);

    /**
     * @note[short] MacOS (ARM): 0x1abafc
     * @note[short] MacOS (Intel): 0x1f6010
     * @note[short] Windows
     * @note[short] iOS: 0x16bcc0
     * @note[short] Android
     */
    void kmGLLoadIdentity();

    /**
     * @note[short] MacOS (ARM): 0x34a914
     * @note[short] MacOS (Intel): 0x3c1240
     * @note[short] Windows
     * @note[short] iOS: 0x3ab750
     * @note[short] Android
     */
    kmMat4* const kmMat4OrthographicProjection(kmMat4* p0, float p1, float p2, float p3, float p4, float p5, float p6);

    /**
     * @note[short] MacOS (ARM): 0x1abb60
     * @note[short] MacOS (Intel): 0x1f6070
     * @note[short] Windows
     * @note[short] iOS: 0x16bd24
     * @note[short] Android
     */
    void kmGLMultMatrix(const kmMat4* p0);

    /**
     * @note[short] MacOS (ARM): 0x1abbc4
     * @note[short] MacOS (Intel): 0x1f60d0
     * @note[short] Windows
     * @note[short] iOS: 0x16bd58
     * @note[short] Android
     */
    void kmGLGetMatrix(unsigned int p0, kmMat4* p1);

    /**
     * @note[short] MacOS (ARM): 0x349ef0
     * @note[short] MacOS (Intel): 0x3c0610
     * @note[short] Windows
     * @note[short] iOS: 0x3ab4d0
     * @note[short] Android
     */
    kmMat4* const kmMat4Multiply(kmMat4* p0, const kmMat4* p1, const kmMat4* p2);

    /**
     * @note[short] MacOS (ARM): 0x5217a0
     * @note[short] MacOS (Intel): 0x5f1af0
     * @note[short] Windows
     * @note[short] iOS: 0x32577c
     * @note[short] Android
     */
    kmVec3* kmVec3TransformCoord(kmVec3* p0, const kmVec3* p1, const kmMat4* p2);

    /**
     * @note[short] MacOS (ARM)
     * @note[short] MacOS (Intel)
     * @note[short] Windows
     * @note[short] iOS: 0x47c63c
     * @note[short] Android
     */
    FMOD_RESULT FMOD_Debug_Initialize(unsigned int p0, FMOD_DEBUG_MODE p1, FMOD_DEBUG_CALLBACK p2, char const* p3);

    /**
     * @note[short] MacOS (ARM)
     * @note[short] MacOS (Intel)
     * @note[short] Windows
     * @note[short] iOS: 0x4a0b4c
     * @note[short] Android
     */
    FMOD_RESULT FMOD_File_GetDiskBusy(int* p0);

    /**
     * @note[short] MacOS (ARM)
     * @note[short] MacOS (Intel)
     * @note[short] Windows
     * @note[short] iOS: 0x4a0afc
     * @note[short] Android
     */
    FMOD_RESULT FMOD_File_SetDiskBusy(int p0);

    /**
     * @note[short] MacOS (ARM)
     * @note[short] MacOS (Intel)
     * @note[short] Windows
     * @note[short] iOS: 0x44a314
     * @note[short] Android
     */
    FMOD_RESULT FMOD_Memory_GetStats(int* p0, int* p1, int p2);

    /**
     * @note[short] MacOS (ARM)
     * @note[short] MacOS (Intel)
     * @note[short] Windows
     * @note[short] iOS: 0x44a1c8
     * @note[short] Android
     */
    FMOD_RESULT FMOD_Memory_Initialize(void* p0, int p1, FMOD_MEMORY_ALLOC_CALLBACK p2, FMOD_MEMORY_REALLOC_CALLBACK p3, FMOD_MEMORY_FREE_CALLBACK p4, unsigned int p5);

    /**
     * @note[short] MacOS (ARM)
     * @note[short] MacOS (Intel)
     * @note[short] Windows
     * @note[short] iOS: 0x44a3f8
     * @note[short] Android
     */
    FMOD_RESULT FMOD_System_Create(FMOD_SYSTEM** p0, unsigned int p1);

    /**
     * @note[short] MacOS (ARM)
     * @note[short] MacOS (Intel)
     * @note[short] Windows
     * @note[short] iOS: 0x4cccec
     * @note[short] Android
     */
    FMOD_RESULT FMOD_Thread_SetAttributes(FMOD_THREAD_TYPE p0, long long p1, int p2, unsigned int p3);
