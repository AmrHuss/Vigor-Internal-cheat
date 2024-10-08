#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameState_Teams

#include "Basic.hpp"

#include "E_TeamsMatchPhase_structs.hpp"


namespace SDK::Params
{

// Function BP_GameState_Teams.BP_GameState_Teams_C.ExecuteUbergraph_BP_GameState_Teams
// 0x0048 (0x0048 - 0x0000)
struct BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	E_TeamsMatchPhase                             K2Node_CustomEvent_Match_Phase_1;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_TeamsMatchPhase                             K2Node_CustomEvent_Match_Phase;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameMode_Teams_C*                   K2Node_DynamicCast_AsBP_Game_Mode_Teams;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams) == 0x000008, "Wrong alignment on BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams");
static_assert(sizeof(BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams) == 0x000048, "Wrong size on BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams");
static_assert(offsetof(BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams, EntryPoint) == 0x000000, "Member 'BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000008, "Member 'BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams, K2Node_CustomEvent_Match_Phase_1) == 0x000028, "Member 'BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams::K2Node_CustomEvent_Match_Phase_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams, K2Node_CustomEvent_Match_Phase) == 0x000029, "Member 'BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams::K2Node_CustomEvent_Match_Phase' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams, K2Node_SwitchEnum_CmpSuccess) == 0x00002A, "Member 'BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams, CallFunc_GetGameMode_ReturnValue) == 0x000030, "Member 'BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams, K2Node_DynamicCast_AsBP_Game_Mode_Teams) == 0x000038, "Member 'BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams::K2Node_DynamicCast_AsBP_Game_Mode_Teams' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_GameState_Teams.BP_GameState_Teams_C.Handle Match Phase
// 0x0001 (0x0001 - 0x0000)
struct BP_GameState_Teams_C_Handle_Match_Phase final
{
public:
	E_TeamsMatchPhase                             Match_Phase_0;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_Teams_C_Handle_Match_Phase) == 0x000001, "Wrong alignment on BP_GameState_Teams_C_Handle_Match_Phase");
static_assert(sizeof(BP_GameState_Teams_C_Handle_Match_Phase) == 0x000001, "Wrong size on BP_GameState_Teams_C_Handle_Match_Phase");
static_assert(offsetof(BP_GameState_Teams_C_Handle_Match_Phase, Match_Phase_0) == 0x000000, "Member 'BP_GameState_Teams_C_Handle_Match_Phase::Match_Phase_0' has a wrong offset!");

// Function BP_GameState_Teams.BP_GameState_Teams_C.On Match Phase Changed
// 0x0001 (0x0001 - 0x0000)
struct BP_GameState_Teams_C_On_Match_Phase_Changed final
{
public:
	E_TeamsMatchPhase                             Match_Phase_0;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_Teams_C_On_Match_Phase_Changed) == 0x000001, "Wrong alignment on BP_GameState_Teams_C_On_Match_Phase_Changed");
static_assert(sizeof(BP_GameState_Teams_C_On_Match_Phase_Changed) == 0x000001, "Wrong size on BP_GameState_Teams_C_On_Match_Phase_Changed");
static_assert(offsetof(BP_GameState_Teams_C_On_Match_Phase_Changed, Match_Phase_0) == 0x000000, "Member 'BP_GameState_Teams_C_On_Match_Phase_Changed::Match_Phase_0' has a wrong offset!");

// Function BP_GameState_Teams.BP_GameState_Teams_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct BP_GameState_Teams_C_UserConstructionScript final
{
public:
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameMode_Teams_C*                   K2Node_DynamicCast_AsBP_Game_Mode_Teams;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_GSC_TeamManager_C*                  CallFunc_AddComponentToActor_OutNewComponent;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GameState_Teams_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_GameState_Teams_C_UserConstructionScript");
static_assert(sizeof(BP_GameState_Teams_C_UserConstructionScript) == 0x000030, "Wrong size on BP_GameState_Teams_C_UserConstructionScript");
static_assert(offsetof(BP_GameState_Teams_C_UserConstructionScript, CallFunc_GetGameMode_ReturnValue) == 0x000000, "Member 'BP_GameState_Teams_C_UserConstructionScript::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000008, "Member 'BP_GameState_Teams_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_UserConstructionScript, K2Node_DynamicCast_AsBP_Game_Mode_Teams) == 0x000010, "Member 'BP_GameState_Teams_C_UserConstructionScript::K2Node_DynamicCast_AsBP_Game_Mode_Teams' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_GameState_Teams_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_UserConstructionScript, CallFunc_AddComponentToActor_OutNewComponent) == 0x000020, "Member 'BP_GameState_Teams_C_UserConstructionScript::CallFunc_AddComponentToActor_OutNewComponent' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_GameState_Teams_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_GameState_Teams.BP_GameState_Teams_C.OnRep_Match Phase
// 0x0028 (0x0028 - 0x0000)
struct BP_GameState_Teams_C_OnRep_Match_Phase final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_Teams_C_OnRep_Match_Phase) == 0x000008, "Wrong alignment on BP_GameState_Teams_C_OnRep_Match_Phase");
static_assert(sizeof(BP_GameState_Teams_C_OnRep_Match_Phase) == 0x000028, "Wrong size on BP_GameState_Teams_C_OnRep_Match_Phase");
static_assert(offsetof(BP_GameState_Teams_C_OnRep_Match_Phase, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'BP_GameState_Teams_C_OnRep_Match_Phase::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_OnRep_Match_Phase, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000008, "Member 'BP_GameState_Teams_C_OnRep_Match_Phase::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_Teams_C_OnRep_Match_Phase, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'BP_GameState_Teams_C_OnRep_Match_Phase::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function BP_GameState_Teams.BP_GameState_Teams_C.ReceivedMatchPhaseReplication
// 0x0001 (0x0001 - 0x0000)
struct BP_GameState_Teams_C_ReceivedMatchPhaseReplication final
{
public:
	E_TeamsMatchPhase                             Match_Phase_0;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_Teams_C_ReceivedMatchPhaseReplication) == 0x000001, "Wrong alignment on BP_GameState_Teams_C_ReceivedMatchPhaseReplication");
static_assert(sizeof(BP_GameState_Teams_C_ReceivedMatchPhaseReplication) == 0x000001, "Wrong size on BP_GameState_Teams_C_ReceivedMatchPhaseReplication");
static_assert(offsetof(BP_GameState_Teams_C_ReceivedMatchPhaseReplication, Match_Phase_0) == 0x000000, "Member 'BP_GameState_Teams_C_ReceivedMatchPhaseReplication::Match_Phase_0' has a wrong offset!");

// Function BP_GameState_Teams.BP_GameState_Teams_C.GetTeamsGameStateReference
// 0x0008 (0x0008 - 0x0000)
struct BP_GameState_Teams_C_GetTeamsGameStateReference final
{
public:
	class ABP_GameState_Teams_C*                  TeamsGS;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_Teams_C_GetTeamsGameStateReference) == 0x000008, "Wrong alignment on BP_GameState_Teams_C_GetTeamsGameStateReference");
static_assert(sizeof(BP_GameState_Teams_C_GetTeamsGameStateReference) == 0x000008, "Wrong size on BP_GameState_Teams_C_GetTeamsGameStateReference");
static_assert(offsetof(BP_GameState_Teams_C_GetTeamsGameStateReference, TeamsGS) == 0x000000, "Member 'BP_GameState_Teams_C_GetTeamsGameStateReference::TeamsGS' has a wrong offset!");

}

