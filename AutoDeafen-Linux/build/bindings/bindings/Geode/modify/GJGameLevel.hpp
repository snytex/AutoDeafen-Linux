#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGameLevel.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_lengthKeyToString
		#define GEODE_STATICS_lengthKeyToString
		GEODE_AS_STATIC_FUNCTION(lengthKeyToString) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_areCoinsVerified
		#define GEODE_STATICS_areCoinsVerified
		GEODE_AS_STATIC_FUNCTION(areCoinsVerified) 
	#endif

	#ifndef GEODE_STATICS_copyLevelInfo
		#define GEODE_STATICS_copyLevelInfo
		GEODE_AS_STATIC_FUNCTION(copyLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_demonIconForDifficulty
		#define GEODE_STATICS_demonIconForDifficulty
		GEODE_AS_STATIC_FUNCTION(demonIconForDifficulty) 
	#endif

	#ifndef GEODE_STATICS_generateSettingsString
		#define GEODE_STATICS_generateSettingsString
		GEODE_AS_STATIC_FUNCTION(generateSettingsString) 
	#endif

	#ifndef GEODE_STATICS_getAudioFileName
		#define GEODE_STATICS_getAudioFileName
		GEODE_AS_STATIC_FUNCTION(getAudioFileName) 
	#endif

	#ifndef GEODE_STATICS_getAverageDifficulty
		#define GEODE_STATICS_getAverageDifficulty
		GEODE_AS_STATIC_FUNCTION(getAverageDifficulty) 
	#endif

	#ifndef GEODE_STATICS_getCoinKey
		#define GEODE_STATICS_getCoinKey
		GEODE_AS_STATIC_FUNCTION(getCoinKey) 
	#endif

	#ifndef GEODE_STATICS_getLastBuildPageForTab
		#define GEODE_STATICS_getLastBuildPageForTab
		GEODE_AS_STATIC_FUNCTION(getLastBuildPageForTab) 
	#endif

	#ifndef GEODE_STATICS_getLengthKey
		#define GEODE_STATICS_getLengthKey
		GEODE_AS_STATIC_FUNCTION(getLengthKey) 
	#endif

	#ifndef GEODE_STATICS_getListSnapshot
		#define GEODE_STATICS_getListSnapshot
		GEODE_AS_STATIC_FUNCTION(getListSnapshot) 
	#endif

	#ifndef GEODE_STATICS_getNormalPercent
		#define GEODE_STATICS_getNormalPercent
		GEODE_AS_STATIC_FUNCTION(getNormalPercent) 
	#endif

	#ifndef GEODE_STATICS_getSongName
		#define GEODE_STATICS_getSongName
		GEODE_AS_STATIC_FUNCTION(getSongName) 
	#endif

	#ifndef GEODE_STATICS_getUnpackedLevelDescription
		#define GEODE_STATICS_getUnpackedLevelDescription
		GEODE_AS_STATIC_FUNCTION(getUnpackedLevelDescription) 
	#endif

	#ifndef GEODE_STATICS_handleStatsConflict
		#define GEODE_STATICS_handleStatsConflict
		GEODE_AS_STATIC_FUNCTION(handleStatsConflict) 
	#endif

	#ifndef GEODE_STATICS_levelWasAltered
		#define GEODE_STATICS_levelWasAltered
		GEODE_AS_STATIC_FUNCTION(levelWasAltered) 
	#endif

	#ifndef GEODE_STATICS_levelWasSubmitted
		#define GEODE_STATICS_levelWasSubmitted
		GEODE_AS_STATIC_FUNCTION(levelWasSubmitted) 
	#endif

	#ifndef GEODE_STATICS_parseSettingsString
		#define GEODE_STATICS_parseSettingsString
		GEODE_AS_STATIC_FUNCTION(parseSettingsString) 
	#endif

	#ifndef GEODE_STATICS_saveNewScore
		#define GEODE_STATICS_saveNewScore
		GEODE_AS_STATIC_FUNCTION(saveNewScore) 
	#endif

	#ifndef GEODE_STATICS_savePercentage
		#define GEODE_STATICS_savePercentage
		GEODE_AS_STATIC_FUNCTION(savePercentage) 
	#endif

	#ifndef GEODE_STATICS_scoreStringToVector
		#define GEODE_STATICS_scoreStringToVector
		GEODE_AS_STATIC_FUNCTION(scoreStringToVector) 
	#endif

	#ifndef GEODE_STATICS_scoreVectorToString
		#define GEODE_STATICS_scoreVectorToString
		GEODE_AS_STATIC_FUNCTION(scoreVectorToString) 
	#endif

	#ifndef GEODE_STATICS_setAccountID
		#define GEODE_STATICS_setAccountID
		GEODE_AS_STATIC_FUNCTION(setAccountID) 
	#endif

	#ifndef GEODE_STATICS_setAttempts
		#define GEODE_STATICS_setAttempts
		GEODE_AS_STATIC_FUNCTION(setAttempts) 
	#endif

	#ifndef GEODE_STATICS_setAttemptTime
		#define GEODE_STATICS_setAttemptTime
		GEODE_AS_STATIC_FUNCTION(setAttemptTime) 
	#endif

	#ifndef GEODE_STATICS_setClicks
		#define GEODE_STATICS_setClicks
		GEODE_AS_STATIC_FUNCTION(setClicks) 
	#endif

	#ifndef GEODE_STATICS_setCoinsVerified
		#define GEODE_STATICS_setCoinsVerified
		GEODE_AS_STATIC_FUNCTION(setCoinsVerified) 
	#endif

	#ifndef GEODE_STATICS_setDailyID
		#define GEODE_STATICS_setDailyID
		GEODE_AS_STATIC_FUNCTION(setDailyID) 
	#endif

	#ifndef GEODE_STATICS_setDemon
		#define GEODE_STATICS_setDemon
		GEODE_AS_STATIC_FUNCTION(setDemon) 
	#endif

	#ifndef GEODE_STATICS_setJumps
		#define GEODE_STATICS_setJumps
		GEODE_AS_STATIC_FUNCTION(setJumps) 
	#endif

	#ifndef GEODE_STATICS_setLastBuildPageForTab
		#define GEODE_STATICS_setLastBuildPageForTab
		GEODE_AS_STATIC_FUNCTION(setLastBuildPageForTab) 
	#endif

	#ifndef GEODE_STATICS_setLevelID
		#define GEODE_STATICS_setLevelID
		GEODE_AS_STATIC_FUNCTION(setLevelID) 
	#endif

	#ifndef GEODE_STATICS_setNewNormalPercent
		#define GEODE_STATICS_setNewNormalPercent
		GEODE_AS_STATIC_FUNCTION(setNewNormalPercent) 
	#endif

	#ifndef GEODE_STATICS_setNewNormalPercent2
		#define GEODE_STATICS_setNewNormalPercent2
		GEODE_AS_STATIC_FUNCTION(setNewNormalPercent2) 
	#endif

	#ifndef GEODE_STATICS_setNormalPercent
		#define GEODE_STATICS_setNormalPercent
		GEODE_AS_STATIC_FUNCTION(setNormalPercent) 
	#endif

	#ifndef GEODE_STATICS_setObjectCount
		#define GEODE_STATICS_setObjectCount
		GEODE_AS_STATIC_FUNCTION(setObjectCount) 
	#endif

	#ifndef GEODE_STATICS_setOriginalLevel
		#define GEODE_STATICS_setOriginalLevel
		GEODE_AS_STATIC_FUNCTION(setOriginalLevel) 
	#endif

	#ifndef GEODE_STATICS_setPassword
		#define GEODE_STATICS_setPassword
		GEODE_AS_STATIC_FUNCTION(setPassword) 
	#endif

	#ifndef GEODE_STATICS_setStars
		#define GEODE_STATICS_setStars
		GEODE_AS_STATIC_FUNCTION(setStars) 
	#endif

	#ifndef GEODE_STATICS_shouldCheatReset
		#define GEODE_STATICS_shouldCheatReset
		GEODE_AS_STATIC_FUNCTION(shouldCheatReset) 
	#endif

	#ifndef GEODE_STATICS_storeNewLocalScore
		#define GEODE_STATICS_storeNewLocalScore
		GEODE_AS_STATIC_FUNCTION(storeNewLocalScore) 
	#endif

	#ifndef GEODE_STATICS_unverifyCoins
		#define GEODE_STATICS_unverifyCoins
		GEODE_AS_STATIC_FUNCTION(unverifyCoins) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lengthKeyToString
		#define GEODE_CONCEPT_CHECK_lengthKeyToString
		GEODE_CONCEPT_FUNCTION_CHECK(lengthKeyToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_areCoinsVerified
		#define GEODE_CONCEPT_CHECK_areCoinsVerified
		GEODE_CONCEPT_FUNCTION_CHECK(areCoinsVerified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyLevelInfo
		#define GEODE_CONCEPT_CHECK_copyLevelInfo
		GEODE_CONCEPT_FUNCTION_CHECK(copyLevelInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_demonIconForDifficulty
		#define GEODE_CONCEPT_CHECK_demonIconForDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(demonIconForDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateSettingsString
		#define GEODE_CONCEPT_CHECK_generateSettingsString
		GEODE_CONCEPT_FUNCTION_CHECK(generateSettingsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudioFileName
		#define GEODE_CONCEPT_CHECK_getAudioFileName
		GEODE_CONCEPT_FUNCTION_CHECK(getAudioFileName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAverageDifficulty
		#define GEODE_CONCEPT_CHECK_getAverageDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getAverageDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoinKey
		#define GEODE_CONCEPT_CHECK_getCoinKey
		GEODE_CONCEPT_FUNCTION_CHECK(getCoinKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastBuildPageForTab
		#define GEODE_CONCEPT_CHECK_getLastBuildPageForTab
		GEODE_CONCEPT_FUNCTION_CHECK(getLastBuildPageForTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLengthKey
		#define GEODE_CONCEPT_CHECK_getLengthKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLengthKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getListSnapshot
		#define GEODE_CONCEPT_CHECK_getListSnapshot
		GEODE_CONCEPT_FUNCTION_CHECK(getListSnapshot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNormalPercent
		#define GEODE_CONCEPT_CHECK_getNormalPercent
		GEODE_CONCEPT_FUNCTION_CHECK(getNormalPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongName
		#define GEODE_CONCEPT_CHECK_getSongName
		GEODE_CONCEPT_FUNCTION_CHECK(getSongName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUnpackedLevelDescription
		#define GEODE_CONCEPT_CHECK_getUnpackedLevelDescription
		GEODE_CONCEPT_FUNCTION_CHECK(getUnpackedLevelDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleStatsConflict
		#define GEODE_CONCEPT_CHECK_handleStatsConflict
		GEODE_CONCEPT_FUNCTION_CHECK(handleStatsConflict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelWasAltered
		#define GEODE_CONCEPT_CHECK_levelWasAltered
		GEODE_CONCEPT_FUNCTION_CHECK(levelWasAltered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelWasSubmitted
		#define GEODE_CONCEPT_CHECK_levelWasSubmitted
		GEODE_CONCEPT_FUNCTION_CHECK(levelWasSubmitted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseSettingsString
		#define GEODE_CONCEPT_CHECK_parseSettingsString
		GEODE_CONCEPT_FUNCTION_CHECK(parseSettingsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveNewScore
		#define GEODE_CONCEPT_CHECK_saveNewScore
		GEODE_CONCEPT_FUNCTION_CHECK(saveNewScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_savePercentage
		#define GEODE_CONCEPT_CHECK_savePercentage
		GEODE_CONCEPT_FUNCTION_CHECK(savePercentage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scoreStringToVector
		#define GEODE_CONCEPT_CHECK_scoreStringToVector
		GEODE_CONCEPT_FUNCTION_CHECK(scoreStringToVector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scoreVectorToString
		#define GEODE_CONCEPT_CHECK_scoreVectorToString
		GEODE_CONCEPT_FUNCTION_CHECK(scoreVectorToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAccountID
		#define GEODE_CONCEPT_CHECK_setAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(setAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAttempts
		#define GEODE_CONCEPT_CHECK_setAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(setAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAttemptTime
		#define GEODE_CONCEPT_CHECK_setAttemptTime
		GEODE_CONCEPT_FUNCTION_CHECK(setAttemptTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClicks
		#define GEODE_CONCEPT_CHECK_setClicks
		GEODE_CONCEPT_FUNCTION_CHECK(setClicks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCoinsVerified
		#define GEODE_CONCEPT_CHECK_setCoinsVerified
		GEODE_CONCEPT_FUNCTION_CHECK(setCoinsVerified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDailyID
		#define GEODE_CONCEPT_CHECK_setDailyID
		GEODE_CONCEPT_FUNCTION_CHECK(setDailyID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDemon
		#define GEODE_CONCEPT_CHECK_setDemon
		GEODE_CONCEPT_FUNCTION_CHECK(setDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setJumps
		#define GEODE_CONCEPT_CHECK_setJumps
		GEODE_CONCEPT_FUNCTION_CHECK(setJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastBuildPageForTab
		#define GEODE_CONCEPT_CHECK_setLastBuildPageForTab
		GEODE_CONCEPT_FUNCTION_CHECK(setLastBuildPageForTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelID
		#define GEODE_CONCEPT_CHECK_setLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNewNormalPercent
		#define GEODE_CONCEPT_CHECK_setNewNormalPercent
		GEODE_CONCEPT_FUNCTION_CHECK(setNewNormalPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNewNormalPercent2
		#define GEODE_CONCEPT_CHECK_setNewNormalPercent2
		GEODE_CONCEPT_FUNCTION_CHECK(setNewNormalPercent2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNormalPercent
		#define GEODE_CONCEPT_CHECK_setNormalPercent
		GEODE_CONCEPT_FUNCTION_CHECK(setNormalPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectCount
		#define GEODE_CONCEPT_CHECK_setObjectCount
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOriginalLevel
		#define GEODE_CONCEPT_CHECK_setOriginalLevel
		GEODE_CONCEPT_FUNCTION_CHECK(setOriginalLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPassword
		#define GEODE_CONCEPT_CHECK_setPassword
		GEODE_CONCEPT_FUNCTION_CHECK(setPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStars
		#define GEODE_CONCEPT_CHECK_setStars
		GEODE_CONCEPT_FUNCTION_CHECK(setStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldCheatReset
		#define GEODE_CONCEPT_CHECK_shouldCheatReset
		GEODE_CONCEPT_FUNCTION_CHECK(shouldCheatReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeNewLocalScore
		#define GEODE_CONCEPT_CHECK_storeNewLocalScore
		GEODE_CONCEPT_FUNCTION_CHECK(storeNewLocalScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unverifyCoins
		#define GEODE_CONCEPT_CHECK_unverifyCoins
		GEODE_CONCEPT_FUNCTION_CHECK(unverifyCoins) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGameLevel> : ModifyBase<ModifyDerive<Der, GJGameLevel>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGameLevel>>;
		using ModifyBase<ModifyDerive<Der, GJGameLevel>>::ModifyBase;
		using Base = GJGameLevel;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x169b40, Default, GJGameLevel, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1683e0, Default, GJGameLevel, create, cocos2d::CCDictionary*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a0d0, Default, GJGameLevel, lengthKeyToString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16c090, Thiscall, GJGameLevel, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, canEncode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x169ba0, Thiscall, GJGameLevel, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, areCoinsVerified, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16aaa0, Thiscall, GJGameLevel, copyLevelInfo, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16b150, Thiscall, GJGameLevel, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, demonIconForDifficulty, DemonDifficultyType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, generateSettingsString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a3f0, Thiscall, GJGameLevel, getAudioFileName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a230, Thiscall, GJGameLevel, getAverageDifficulty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16a2a0, Thiscall, GJGameLevel, getCoinKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLastBuildPageForTab, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getLengthKey, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getListSnapshot, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getNormalPercent, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getSongName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16d150, Thiscall, GJGameLevel, getUnpackedLevelDescription, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16cc80, Thiscall, GJGameLevel, handleStatsConflict, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, levelWasAltered, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, levelWasSubmitted, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, parseSettingsString, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, saveNewScore, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x169db0, Thiscall, GJGameLevel, savePercentage, int, bool, int, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, scoreStringToVector, gd::string&, gd::vector<int>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, scoreVectorToString, gd::vector<int>&, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setAccountID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setAttempts, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setAttemptTime, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setClicks, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setCoinsVerified, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setDailyID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setDemon, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setJumps, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLastBuildPageForTab, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setLevelID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setNewNormalPercent, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setNewNormalPercent2, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setNormalPercent, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setObjectCount, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setOriginalLevel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setPassword, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setStars, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, shouldCheatReset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, storeNewLocalScore, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, unverifyCoins, )
		}
	};
}
