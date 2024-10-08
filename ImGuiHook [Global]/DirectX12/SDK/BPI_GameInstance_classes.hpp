#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GameInstance

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_GameInstance.BPI_GameInstance_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_GameInstance_C final : public IInterface
{
public:
	void IsHealingOthersActive(bool* IsActive);
	void EventSystemStarted();
	void BPI_StoreAchievementProgress(class FName AchievementName, float IncreaseProgressBy);
	void BPI_GetAchievementProgressFromSave_Pure(class FName AchievementName, bool* bValid, float* AchievementProgress);
	void BPI_AddToAchievementQueue(class APlayerController* PlayerController, class FName AchievementName, float Progress);
	void BPI_GetAchievementProgress(class APlayerController* PlayerController, class FName AchievementName, bool* ValidOutput, bool* MightBeOutOfDate, float* AchievementProgress);
	void BPI_CheckForValidGameInstance(bool* bValid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_GameInstance_C">();
	}
	static class IBPI_GameInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_GameInstance_C>();
	}
};
static_assert(alignof(IBPI_GameInstance_C) == 0x000008, "Wrong alignment on IBPI_GameInstance_C");
static_assert(sizeof(IBPI_GameInstance_C) == 0x000028, "Wrong size on IBPI_GameInstance_C");

}

