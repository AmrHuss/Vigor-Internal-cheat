#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ReviewPromptComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ReviewPromptComponent.BP_ReviewPromptComponent_C
// 0x0088 (0x0138 - 0x00B0)
class UBP_ReviewPromptComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Counter_DaysCounter;                               // 0x00B8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Counter_ReviewPromptTimestamp;                     // 0x00C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              OriginOfTime;                                      // 0x00C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         DaysCounter;                                       // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EverythingLoaded;                                  // 0x00D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              TimespanAvailableAt;                               // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountOfReviewsOpened;                             // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              TimespanAfterStartingGame;                         // 0x00E8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         KillsThreshold;                                    // 0x00F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountOfReviewsFulfilled;                          // 0x00F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SourceEvent;                                       // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimespan                              TimespanAfterCancellingReview;                     // 0x0108(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 TimestampBitLengths;                               // 0x0110(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<int32>                                 CounterBitLengths;                                 // 0x0120(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	int32                                         DaysThreshold;                                     // 0x0130(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ReviewPromptComponent(int32 EntryPoint);
	void LoadLastMatchData();
	void LoadCounters(const class FString& NewParam);
	void OnUserCounterReceived(const struct FCloudRequestResult& RequestResult, class AHumanPlayerController* Player, const struct FCloudUserCounterValue& CounterValue);
	void OnLeaderboardLoaded(bool IsLeaderboardsDataLoaded, const struct FCloudUserProfileStatistics& LeaderboardsData);
	void ReceiveBeginPlay();
	void ProcessLastMatchData(const struct FCloudUserProfileStatistics& CloudUserProfileStatistics);
	void ConvertDaysCounterToInt(int32 Counter, const struct FDateTime& LastCountedDay, int32* Int);
	void ConvertIntToDaysCounter(int32 Int, int32* Counter, struct FDateTime* LastCountedDay);
	void ConvertReviewPromptTimestampToInt(const struct FDateTime& TimespanAvailableAt_0, int32 AmountOfReviewsOpened_0, int32 AmountOfReviewsFulfilled_0, int32* Int);
	void ConvertIntToReviewPromptTimestamp(int32 Int, struct FDateTime* TimespanAvailableAt_0, int32* AmountOfReviewsOpened_0, int32* AmountOfReviewsFulfilled_0);
	void ShowPrompt(const class FString& SourceEvent_0);
	void On_Review_Completed_Event(bool Success, int32 ErrorCode, const struct FUserReviewResult& Result);
	void TEST_PACK();
	void OnCrateOpened(class UClass* Loot_Box_Class, TArray<struct FLootBoxPoolItem>& Items);
	void OnItemBought(class UClass* Item);
	void OnBaPaClaimed(TArray<struct FS_BattlePassLevelRewardFull>& Free, TArray<struct FS_BattlePassLevelRewardFull>& Premium, bool PremiumLocked);
	bool ConditionsFulfilled();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ReviewPromptComponent_C">();
	}
	static class UBP_ReviewPromptComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ReviewPromptComponent_C>();
	}
};
static_assert(alignof(UBP_ReviewPromptComponent_C) == 0x000008, "Wrong alignment on UBP_ReviewPromptComponent_C");
static_assert(sizeof(UBP_ReviewPromptComponent_C) == 0x000138, "Wrong size on UBP_ReviewPromptComponent_C");
static_assert(offsetof(UBP_ReviewPromptComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_ReviewPromptComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, Counter_DaysCounter) == 0x0000B8, "Member 'UBP_ReviewPromptComponent_C::Counter_DaysCounter' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, Counter_ReviewPromptTimestamp) == 0x0000C0, "Member 'UBP_ReviewPromptComponent_C::Counter_ReviewPromptTimestamp' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, OriginOfTime) == 0x0000C8, "Member 'UBP_ReviewPromptComponent_C::OriginOfTime' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, DaysCounter) == 0x0000D0, "Member 'UBP_ReviewPromptComponent_C::DaysCounter' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, EverythingLoaded) == 0x0000D4, "Member 'UBP_ReviewPromptComponent_C::EverythingLoaded' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, TimespanAvailableAt) == 0x0000D8, "Member 'UBP_ReviewPromptComponent_C::TimespanAvailableAt' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, AmountOfReviewsOpened) == 0x0000E0, "Member 'UBP_ReviewPromptComponent_C::AmountOfReviewsOpened' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, TimespanAfterStartingGame) == 0x0000E8, "Member 'UBP_ReviewPromptComponent_C::TimespanAfterStartingGame' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, KillsThreshold) == 0x0000F0, "Member 'UBP_ReviewPromptComponent_C::KillsThreshold' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, AmountOfReviewsFulfilled) == 0x0000F4, "Member 'UBP_ReviewPromptComponent_C::AmountOfReviewsFulfilled' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, SourceEvent) == 0x0000F8, "Member 'UBP_ReviewPromptComponent_C::SourceEvent' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, TimespanAfterCancellingReview) == 0x000108, "Member 'UBP_ReviewPromptComponent_C::TimespanAfterCancellingReview' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, TimestampBitLengths) == 0x000110, "Member 'UBP_ReviewPromptComponent_C::TimestampBitLengths' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, CounterBitLengths) == 0x000120, "Member 'UBP_ReviewPromptComponent_C::CounterBitLengths' has a wrong offset!");
static_assert(offsetof(UBP_ReviewPromptComponent_C, DaysThreshold) == 0x000130, "Member 'UBP_ReviewPromptComponent_C::DaysThreshold' has a wrong offset!");

}

