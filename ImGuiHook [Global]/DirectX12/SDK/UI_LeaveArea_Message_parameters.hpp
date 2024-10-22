#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LeaveArea_Message

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_LeaveArea_Message.UI_LeaveArea_Message_C.ExecuteUbergraph_UI_LeaveArea_Message
// 0x00B0 (0x00B0 - 0x0000)
struct UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameState_AirDropModular_C*         K2Node_DynamicCast_AsBP_Game_State_Air_Drop_Modular; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message) == 0x000008, "Wrong alignment on UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message");
static_assert(sizeof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message) == 0x0000B0, "Wrong size on UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, EntryPoint) == 0x000000, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, Temp_int_Variable) == 0x000004, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, K2Node_MakeArray_Array) == 0x000068, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, CallFunc_Format_ReturnValue) == 0x000078, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, CallFunc_GetGameState_ReturnValue) == 0x000090, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000098, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, K2Node_DynamicCast_AsBP_Game_State_Air_Drop_Modular) == 0x0000A0, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::K2Node_DynamicCast_AsBP_Game_State_Air_Drop_Modular' has a wrong offset!");
static_assert(offsetof(UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'UI_LeaveArea_Message_C_ExecuteUbergraph_UI_LeaveArea_Message::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

