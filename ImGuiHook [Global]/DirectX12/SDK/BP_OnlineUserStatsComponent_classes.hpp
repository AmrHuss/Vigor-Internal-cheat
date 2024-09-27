#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OnlineUserStatsComponent

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C
// 0x03E0 (0x04A0 - 0x00C0)
class UBP_OnlineUserStatsComponent_C final : public UOnlineUserStatsComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsLeaderboardsDataLoaded;                          // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RequestIDFetchLeaderboards;                        // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCloudUserProfileStatistics            LeaderboardsData;                                  // 0x00D0(0x03C0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             LeaderboardsCloudRequestProcessed;                 // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void LeaderboardsCloudRequestProcessed__DelegateSignature(bool IsLeaderboardsDataLoaded_0, const struct FCloudUserProfileStatistics& LeaderboardsData_0);
	void ExecuteUbergraph_BP_OnlineUserStatsComponent(int32 EntryPoint);
	void EventGetUserStatsResponse(const struct FCloudRequestResult& RequestResult, const struct FCloudUserProfileStatistics& Data);
	void EventFetchLeaderboardsDataFromCloud();
	void ReceiveBeginPlay();
	void Event_CloudUserIdSet(const class FString& Userid);
	void GetNumberOfEncountersPlayed(int32* TotalMatchesPlayed);
	void GetEncounterStats(struct FCloudUserStatistics* EncounterStats);
	void GetEliminationStats(struct FCloudUserStatistics* EliminationStats);
	void GetShootoutStats(struct FCloudUserStatistics* ShootoutStats);
	void GetAllGamemodesData(struct FCloudUserProfileStatistics* LeaderboardsData_0);
	void GetNumberOfAllMatchesPlayed(int32* TotalMatchesPlayed);

	void GetAllStats(struct FCloudUserProfileStatistics* LeaderboardsData_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OnlineUserStatsComponent_C">();
	}
	static class UBP_OnlineUserStatsComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_OnlineUserStatsComponent_C>();
	}
};
static_assert(alignof(UBP_OnlineUserStatsComponent_C) == 0x000008, "Wrong alignment on UBP_OnlineUserStatsComponent_C");
static_assert(sizeof(UBP_OnlineUserStatsComponent_C) == 0x0004A0, "Wrong size on UBP_OnlineUserStatsComponent_C");
static_assert(offsetof(UBP_OnlineUserStatsComponent_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_OnlineUserStatsComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_OnlineUserStatsComponent_C, IsLeaderboardsDataLoaded) == 0x0000C8, "Member 'UBP_OnlineUserStatsComponent_C::IsLeaderboardsDataLoaded' has a wrong offset!");
static_assert(offsetof(UBP_OnlineUserStatsComponent_C, RequestIDFetchLeaderboards) == 0x0000CC, "Member 'UBP_OnlineUserStatsComponent_C::RequestIDFetchLeaderboards' has a wrong offset!");
static_assert(offsetof(UBP_OnlineUserStatsComponent_C, LeaderboardsData) == 0x0000D0, "Member 'UBP_OnlineUserStatsComponent_C::LeaderboardsData' has a wrong offset!");
static_assert(offsetof(UBP_OnlineUserStatsComponent_C, LeaderboardsCloudRequestProcessed) == 0x000490, "Member 'UBP_OnlineUserStatsComponent_C::LeaderboardsCloudRequestProcessed' has a wrong offset!");

}
