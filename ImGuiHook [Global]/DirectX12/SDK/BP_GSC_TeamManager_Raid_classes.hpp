#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GSC_TeamManager_Raid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_GSC_TeamManager_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GSC_TeamManager_Raid.BP_GSC_TeamManager_Raid_C
// 0x0010 (0x0150 - 0x0140)
class UBP_GSC_TeamManager_Raid_C final : public UBP_GSC_TeamManager_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GSC_TeamManager_Raid_C;          // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         PlayersJoinedTeam;                                 // 0x0148(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GSC_TeamManager_Raid(int32 EntryPoint);
	void New_Player_Joining(class ABP_PlayerController_Teams_C* New_Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GSC_TeamManager_Raid_C">();
	}
	static class UBP_GSC_TeamManager_Raid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GSC_TeamManager_Raid_C>();
	}
};
static_assert(alignof(UBP_GSC_TeamManager_Raid_C) == 0x000008, "Wrong alignment on UBP_GSC_TeamManager_Raid_C");
static_assert(sizeof(UBP_GSC_TeamManager_Raid_C) == 0x000150, "Wrong size on UBP_GSC_TeamManager_Raid_C");
static_assert(offsetof(UBP_GSC_TeamManager_Raid_C, UberGraphFrame_BP_GSC_TeamManager_Raid_C) == 0x000140, "Member 'UBP_GSC_TeamManager_Raid_C::UberGraphFrame_BP_GSC_TeamManager_Raid_C' has a wrong offset!");
static_assert(offsetof(UBP_GSC_TeamManager_Raid_C, PlayersJoinedTeam) == 0x000148, "Member 'UBP_GSC_TeamManager_Raid_C::PlayersJoinedTeam' has a wrong offset!");

}
