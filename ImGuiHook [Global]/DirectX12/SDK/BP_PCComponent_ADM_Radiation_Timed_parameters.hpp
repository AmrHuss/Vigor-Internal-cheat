#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PCComponent_ADM_Radiation_Timed

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PCComponent_ADM_Radiation_Timed.BP_PCComponent_ADM_Radiation_Timed_C.ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed
// 0x01A8 (0x01A8 - 0x0000)
struct BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_GMComponent_ADM_Radiation_Timed_C*  K2Node_DynamicCast_AsBP_GMComponent_ADM_Radiation_Timed; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	bool                                          K2Node_CustomEvent_Is_Running;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Handle_Valid_and_Timer_Exists_Return_Value; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Visible;                        // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Handle_Valid_and_Timer_Exists_Return_Value_1; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x2];                                       // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Remaning_Time;                  // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Paused;                         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Handle_Valid_and_Timer_Exists_Return_Value_2; // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B[0x5];                                       // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_AirDropModular_C*  CallFunc_Get_Player_Controller_Player_Controller;  // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FlameHUD_C*                         K2Node_DynamicCast_AsBP_Flame_HUD;                 // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_HUD_C*                              K2Node_DynamicCast_AsUI_HUD;                       // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_FlameTextWidget_C*                  CallFunc_Create_ReturnValue;                       // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x00E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Handle_Valid_and_Timer_Exists_Return_Value_3; // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue; // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_FromSeconds_ReturnValue;                  // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_FormatTimespanDHMS_TimespanDHMSOut;       // 0x0100(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0120(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0170(0x0018)()
	bool                                          CallFunc_IsShipping_ReturnValue;                   // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A[0x6];                                      // 0x018A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventSystem*                           CallFunc_GetEventSystem_ReturnValue;               // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EventSystem_C*                      K2Node_DynamicCast_AsBP_Event_System;              // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed) == 0x000008, "Wrong alignment on BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed");
static_assert(sizeof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed) == 0x0001A8, "Wrong size on BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, EntryPoint) == 0x000000, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_DynamicCast_AsBP_GMComponent_ADM_Radiation_Timed) == 0x000008, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_DynamicCast_AsBP_GMComponent_ADM_Radiation_Timed' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_CustomEvent_Is_Running) == 0x000040, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_CustomEvent_Is_Running' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_CreateDelegate_OutputDelegate) == 0x000044, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000058, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_Handle_Valid_and_Timer_Exists_Return_Value) == 0x000060, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_Handle_Valid_and_Timer_Exists_Return_Value' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_CustomEvent_Visible) == 0x000061, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_CustomEvent_Visible' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_CreateDelegate_OutputDelegate_1) == 0x000064, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000078, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_Handle_Valid_and_Timer_Exists_Return_Value_1) == 0x000080, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_Handle_Valid_and_Timer_Exists_Return_Value_1' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, Temp_byte_Variable) == 0x000081, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_CustomEvent_Remaning_Time) == 0x000084, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_CustomEvent_Remaning_Time' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_CustomEvent_Paused) == 0x000088, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_CustomEvent_Paused' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_IsValid_ReturnValue_1) == 0x000089, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_Handle_Valid_and_Timer_Exists_Return_Value_2) == 0x00008A, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_Handle_Valid_and_Timer_Exists_Return_Value_2' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_Get_Player_Controller_Player_Controller) == 0x000090, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_Get_Player_Controller_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_GetHUD_ReturnValue) == 0x000098, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_DynamicCast_AsBP_Flame_HUD) == 0x0000A0, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_DynamicCast_AsBP_Flame_HUD' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_DynamicCast_AsUI_HUD) == 0x0000B0, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_DynamicCast_AsUI_HUD' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_DynamicCast_bSuccess_2) == 0x0000B8, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_Create_ReturnValue) == 0x0000C0, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_AddChildToCanvas_ReturnValue) == 0x0000C8, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000D0, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, Temp_bool_Variable) == 0x0000E0, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x0000E8, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_Handle_Valid_and_Timer_Exists_Return_Value_3) == 0x0000F0, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_Handle_Valid_and_Timer_Exists_Return_Value_3' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue) == 0x0000F4, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_FromSeconds_ReturnValue) == 0x0000F8, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_FromSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_FormatTimespanDHMS_TimespanDHMSOut) == 0x000100, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_FormatTimespanDHMS_TimespanDHMSOut' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_IsValid_ReturnValue_2) == 0x000118, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_MakeStruct_FormatArgumentData) == 0x000120, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_MakeArray_Array) == 0x000160, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_Format_ReturnValue) == 0x000170, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_IsShipping_ReturnValue) == 0x000188, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_IsShipping_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, Temp_byte_Variable_1) == 0x000189, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, CallFunc_GetEventSystem_ReturnValue) == 0x000190, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::CallFunc_GetEventSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_DynamicCast_AsBP_Event_System) == 0x000198, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_DynamicCast_AsBP_Event_System' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_DynamicCast_bSuccess_3) == 0x0001A0, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed, K2Node_Select_Default) == 0x0001A1, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_ExecuteUbergraph_BP_PCComponent_ADM_Radiation_Timed::K2Node_Select_Default' has a wrong offset!");

// Function BP_PCComponent_ADM_Radiation_Timed.BP_PCComponent_ADM_Radiation_Timed_C.Set Local Timer on Client
// 0x0008 (0x0008 - 0x0000)
struct BP_PCComponent_ADM_Radiation_Timed_C_Set_Local_Timer_on_Client final
{
public:
	float                                         Remaning_Time;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Paused;                                            // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PCComponent_ADM_Radiation_Timed_C_Set_Local_Timer_on_Client) == 0x000004, "Wrong alignment on BP_PCComponent_ADM_Radiation_Timed_C_Set_Local_Timer_on_Client");
static_assert(sizeof(BP_PCComponent_ADM_Radiation_Timed_C_Set_Local_Timer_on_Client) == 0x000008, "Wrong size on BP_PCComponent_ADM_Radiation_Timed_C_Set_Local_Timer_on_Client");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_Set_Local_Timer_on_Client, Remaning_Time) == 0x000000, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_Set_Local_Timer_on_Client::Remaning_Time' has a wrong offset!");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_Set_Local_Timer_on_Client, Paused) == 0x000004, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_Set_Local_Timer_on_Client::Paused' has a wrong offset!");

// Function BP_PCComponent_ADM_Radiation_Timed.BP_PCComponent_ADM_Radiation_Timed_C.Toggle Passive UI Visibility
// 0x0001 (0x0001 - 0x0000)
struct BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Passive_UI_Visibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Passive_UI_Visibility) == 0x000001, "Wrong alignment on BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Passive_UI_Visibility");
static_assert(sizeof(BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Passive_UI_Visibility) == 0x000001, "Wrong size on BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Passive_UI_Visibility");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Passive_UI_Visibility, Visible) == 0x000000, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Passive_UI_Visibility::Visible' has a wrong offset!");

// Function BP_PCComponent_ADM_Radiation_Timed.BP_PCComponent_ADM_Radiation_Timed_C.Toggle Local Timer on Client
// 0x0001 (0x0001 - 0x0000)
struct BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Local_Timer_on_Client final
{
public:
	bool                                          Is_Running;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Local_Timer_on_Client) == 0x000001, "Wrong alignment on BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Local_Timer_on_Client");
static_assert(sizeof(BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Local_Timer_on_Client) == 0x000001, "Wrong size on BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Local_Timer_on_Client");
static_assert(offsetof(BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Local_Timer_on_Client, Is_Running) == 0x000000, "Member 'BP_PCComponent_ADM_Radiation_Timed_C_Toggle_Local_Timer_on_Client::Is_Running' has a wrong offset!");

}
