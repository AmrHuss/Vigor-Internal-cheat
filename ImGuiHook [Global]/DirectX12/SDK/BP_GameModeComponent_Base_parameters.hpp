#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameModeComponent_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_GameModeComponent_Base.BP_GameModeComponent_Base_C.ExecuteUbergraph_BP_GameModeComponent_Base
// 0x0040 (0x0040 - 0x0000)
struct BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameMode_Matches_C*                 K2Node_DynamicCast_AsBP_Game_Mode_Matches;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameMode_Matches_C*                 K2Node_DynamicCast_AsBP_Game_Mode_Matches_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base) == 0x000008, "Wrong alignment on BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base");
static_assert(sizeof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base) == 0x000040, "Wrong size on BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base");
static_assert(offsetof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base, EntryPoint) == 0x000000, "Member 'BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base, K2Node_DynamicCast_AsBP_Game_Mode_Matches) == 0x000010, "Member 'BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base::K2Node_DynamicCast_AsBP_Game_Mode_Matches' has a wrong offset!");
static_assert(offsetof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base, CallFunc_Array_AddUnique_ReturnValue) == 0x00001C, "Member 'BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base, K2Node_Event_EndPlayReason) == 0x000020, "Member 'BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base, CallFunc_GetOwner_ReturnValue_1) == 0x000028, "Member 'BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base, K2Node_DynamicCast_AsBP_Game_Mode_Matches_1) == 0x000030, "Member 'BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base::K2Node_DynamicCast_AsBP_Game_Mode_Matches_1' has a wrong offset!");
static_assert(offsetof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base, CallFunc_Array_RemoveItem_ReturnValue) == 0x000039, "Member 'BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function BP_GameModeComponent_Base.BP_GameModeComponent_Base_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_GameModeComponent_Base_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameModeComponent_Base_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_GameModeComponent_Base_C_ReceiveEndPlay");
static_assert(sizeof(BP_GameModeComponent_Base_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_GameModeComponent_Base_C_ReceiveEndPlay");
static_assert(offsetof(BP_GameModeComponent_Base_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_GameModeComponent_Base_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

