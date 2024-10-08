#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerState_TVTDeathmatch

#include "Basic.hpp"

#include "Struct_TVTDeathmatchStatistics_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerState_TVTDeathmatch.BP_PlayerState_TVTDeathmatch_C.ExecuteUbergraph_BP_PlayerState_TVTDeathmatch
// 0x00C8 (0x00C8 - 0x0000)
struct BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_TVTDeathmatchStatistics        K2Node_CustomEvent_Statistic;                      // 0x0008(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_TVTDeathmatchStatistics        K2Node_MakeStruct_Struct_TVTDeathmatchStatistics;  // 0x0070(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_StringIsEmpty_ReturnValue;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch) == 0x000008, "Wrong alignment on BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch");
static_assert(sizeof(BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch) == 0x0000C8, "Wrong size on BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch, EntryPoint) == 0x000000, "Member 'BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch, K2Node_CustomEvent_Statistic) == 0x000008, "Member 'BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch::K2Node_CustomEvent_Statistic' has a wrong offset!");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch, CallFunc_GetPlayerName_ReturnValue) == 0x000058, "Member 'BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch, K2Node_MakeStruct_Struct_TVTDeathmatchStatistics) == 0x000070, "Member 'BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch::K2Node_MakeStruct_Struct_TVTDeathmatchStatistics' has a wrong offset!");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch, CallFunc_StringIsEmpty_ReturnValue) == 0x0000C0, "Member 'BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch::CallFunc_StringIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch, CallFunc_BooleanOR_ReturnValue) == 0x0000C1, "Member 'BP_PlayerState_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerState_TVTDeathmatch::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_PlayerState_TVTDeathmatch.BP_PlayerState_TVTDeathmatch_C.Set Statistic
// 0x0050 (0x0050 - 0x0000)
struct BP_PlayerState_TVTDeathmatch_C_Set_Statistic final
{
public:
	struct FStruct_TVTDeathmatchStatistics        Statistic_0;                                       // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerState_TVTDeathmatch_C_Set_Statistic) == 0x000008, "Wrong alignment on BP_PlayerState_TVTDeathmatch_C_Set_Statistic");
static_assert(sizeof(BP_PlayerState_TVTDeathmatch_C_Set_Statistic) == 0x000050, "Wrong size on BP_PlayerState_TVTDeathmatch_C_Set_Statistic");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_Set_Statistic, Statistic_0) == 0x000000, "Member 'BP_PlayerState_TVTDeathmatch_C_Set_Statistic::Statistic_0' has a wrong offset!");

// Function BP_PlayerState_TVTDeathmatch.BP_PlayerState_TVTDeathmatch_C.Get Statistic
// 0x0050 (0x0050 - 0x0000)
struct BP_PlayerState_TVTDeathmatch_C_Get_Statistic final
{
public:
	struct FStruct_TVTDeathmatchStatistics        Statistic_0;                                       // 0x0000(0x0050)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerState_TVTDeathmatch_C_Get_Statistic) == 0x000008, "Wrong alignment on BP_PlayerState_TVTDeathmatch_C_Get_Statistic");
static_assert(sizeof(BP_PlayerState_TVTDeathmatch_C_Get_Statistic) == 0x000050, "Wrong size on BP_PlayerState_TVTDeathmatch_C_Get_Statistic");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_Get_Statistic, Statistic_0) == 0x000000, "Member 'BP_PlayerState_TVTDeathmatch_C_Get_Statistic::Statistic_0' has a wrong offset!");

// Function BP_PlayerState_TVTDeathmatch.BP_PlayerState_TVTDeathmatch_C.PlayerResult_Analytics_AttachRelevantData
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerState_TVTDeathmatch_C_PlayerResult_Analytics_AttachRelevantData final
{
public:
	class UJsonObject*                            JsonObject;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJsonObject*                            JsonObjectOut;                                     // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJsonObject*                            CallFunc_Set_Death_Match_Statistic_Json;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerState_TVTDeathmatch_C_PlayerResult_Analytics_AttachRelevantData) == 0x000008, "Wrong alignment on BP_PlayerState_TVTDeathmatch_C_PlayerResult_Analytics_AttachRelevantData");
static_assert(sizeof(BP_PlayerState_TVTDeathmatch_C_PlayerResult_Analytics_AttachRelevantData) == 0x000018, "Wrong size on BP_PlayerState_TVTDeathmatch_C_PlayerResult_Analytics_AttachRelevantData");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_PlayerResult_Analytics_AttachRelevantData, JsonObject) == 0x000000, "Member 'BP_PlayerState_TVTDeathmatch_C_PlayerResult_Analytics_AttachRelevantData::JsonObject' has a wrong offset!");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_PlayerResult_Analytics_AttachRelevantData, JsonObjectOut) == 0x000008, "Member 'BP_PlayerState_TVTDeathmatch_C_PlayerResult_Analytics_AttachRelevantData::JsonObjectOut' has a wrong offset!");
static_assert(offsetof(BP_PlayerState_TVTDeathmatch_C_PlayerResult_Analytics_AttachRelevantData, CallFunc_Set_Death_Match_Statistic_Json) == 0x000010, "Member 'BP_PlayerState_TVTDeathmatch_C_PlayerResult_Analytics_AttachRelevantData::CallFunc_Set_Death_Match_Statistic_Json' has a wrong offset!");

}

