#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CheatWidget_ExitTells

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_CheatWidget_ExitTells.UI_CheatWidget_ExitTells_C.ExecuteUbergraph_UI_CheatWidget_ExitTells
// 0x0170 (0x0170 - 0x0000)
struct UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_PlayableAreaExitVolume_C*>   CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayableAreaExitVolume_C*           CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_PlayableAreaExitVolume_C*>   CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0040(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayableAreaExitVolume_C*           CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00A0(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00E0(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue; // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x00F0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0138(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells) == 0x000008, "Wrong alignment on UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells");
static_assert(sizeof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells) == 0x000170, "Wrong size on UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, EntryPoint) == 0x000000, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, Temp_int_Array_Index_Variable) == 0x000018, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Array_Get_Item) == 0x000030, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000040, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, Temp_int_Loop_Counter_Variable_1) == 0x000050, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_GetDisplayName_ReturnValue) == 0x000060, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Array_Length_ReturnValue_1) == 0x000074, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Conv_IntToString_ReturnValue) == 0x000078, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Array_Length_ReturnValue_2) == 0x000088, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Less_IntInt_ReturnValue_1) == 0x00008C, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, K2Node_CreateDelegate_OutputDelegate) == 0x000090, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, K2Node_Event_MyGeometry) == 0x0000A0, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, K2Node_Event_InDeltaTime) == 0x0000D8, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000E0, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue) == 0x0000E8, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Conv_FloatToText_ReturnValue) == 0x0000F0, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Concat_StrStr_ReturnValue) == 0x000108, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000118, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000128, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Conv_StringToText_ReturnValue) == 0x000138, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000150, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000160, "Member 'UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");

// Function UI_CheatWidget_ExitTells.UI_CheatWidget_ExitTells_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_CheatWidget_ExitTells_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_CheatWidget_ExitTells_C_Tick) == 0x000004, "Wrong alignment on UI_CheatWidget_ExitTells_C_Tick");
static_assert(sizeof(UI_CheatWidget_ExitTells_C_Tick) == 0x00003C, "Wrong size on UI_CheatWidget_ExitTells_C_Tick");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_Tick, MyGeometry) == 0x000000, "Member 'UI_CheatWidget_ExitTells_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_CheatWidget_ExitTells_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_CheatWidget_ExitTells_C_Tick::InDeltaTime' has a wrong offset!");

}

