#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_RoundStartCountdown

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Raid_RoundStartCountdown.UI_Raid_RoundStartCountdown_C.ExecuteUbergraph_UI_Raid_RoundStartCountdown
// 0x0078 (0x0078 - 0x0000)
struct UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Time_To_Round_Start;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0060(0x0018)()
};
static_assert(alignof(UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown) == 0x000008, "Wrong alignment on UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown");
static_assert(sizeof(UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown) == 0x000078, "Wrong size on UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown");
static_assert(offsetof(UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown, EntryPoint) == 0x000000, "Member 'UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown, K2Node_CustomEvent_Time_To_Round_Start) == 0x000004, "Member 'UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown::K2Node_CustomEvent_Time_To_Round_Start' has a wrong offset!");
static_assert(offsetof(UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown, K2Node_MakeArray_Array) == 0x000050, "Member 'UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown, CallFunc_Format_ReturnValue) == 0x000060, "Member 'UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_Raid_RoundStartCountdown.UI_Raid_RoundStartCountdown_C.Set PreRound Time
// 0x0004 (0x0004 - 0x0000)
struct UI_Raid_RoundStartCountdown_C_Set_PreRound_Time final
{
public:
	int32                                         Time_To_Round_Start;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Raid_RoundStartCountdown_C_Set_PreRound_Time) == 0x000004, "Wrong alignment on UI_Raid_RoundStartCountdown_C_Set_PreRound_Time");
static_assert(sizeof(UI_Raid_RoundStartCountdown_C_Set_PreRound_Time) == 0x000004, "Wrong size on UI_Raid_RoundStartCountdown_C_Set_PreRound_Time");
static_assert(offsetof(UI_Raid_RoundStartCountdown_C_Set_PreRound_Time, Time_To_Round_Start) == 0x000000, "Member 'UI_Raid_RoundStartCountdown_C_Set_PreRound_Time::Time_To_Round_Start' has a wrong offset!");

}

