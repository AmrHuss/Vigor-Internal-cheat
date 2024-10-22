#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ADM_Debug_Event_Antenna

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_ADM_Debug_Event_Antenna.UI_ADM_Debug_Event_Antenna_C.BndEvt__SpawnAllAntennasButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ADM_Debug_Event_Antenna_C_BndEvt__SpawnAllAntennasButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ADM_Debug_Event_Antenna_C_BndEvt__SpawnAllAntennasButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ADM_Debug_Event_Antenna_C_BndEvt__SpawnAllAntennasButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_ADM_Debug_Event_Antenna_C_BndEvt__SpawnAllAntennasButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_ADM_Debug_Event_Antenna_C_BndEvt__SpawnAllAntennasButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_ADM_Debug_Event_Antenna_C_BndEvt__SpawnAllAntennasButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_ADM_Debug_Event_Antenna_C_BndEvt__SpawnAllAntennasButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_ADM_Debug_Event_Antenna.UI_ADM_Debug_Event_Antenna_C.ExecuteUbergraph_UI_ADM_Debug_Event_Antenna
// 0x0028 (0x0028 - 0x0000)
struct UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PCComponent_ADM_Event_Antenna_C*    K2Node_DynamicCast_AsBP_PCComponent_ADM_Event_Antenna; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna) == 0x000008, "Wrong alignment on UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna");
static_assert(sizeof(UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna) == 0x000028, "Wrong size on UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna");
static_assert(offsetof(UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna, EntryPoint) == 0x000000, "Member 'UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna, K2Node_ComponentBoundEvent_Sender) == 0x000008, "Member 'UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna, K2Node_DynamicCast_AsBP_PCComponent_ADM_Event_Antenna) == 0x000018, "Member 'UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna::K2Node_DynamicCast_AsBP_PCComponent_ADM_Event_Antenna' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UI_ADM_Debug_Event_Antenna_C_ExecuteUbergraph_UI_ADM_Debug_Event_Antenna::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_ADM_Debug_Event_Antenna.UI_ADM_Debug_Event_Antenna_C.GetWidgetToFocus
// 0x0008 (0x0008 - 0x0000)
struct UI_ADM_Debug_Event_Antenna_C_GetWidgetToFocus final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ADM_Debug_Event_Antenna_C_GetWidgetToFocus) == 0x000008, "Wrong alignment on UI_ADM_Debug_Event_Antenna_C_GetWidgetToFocus");
static_assert(sizeof(UI_ADM_Debug_Event_Antenna_C_GetWidgetToFocus) == 0x000008, "Wrong size on UI_ADM_Debug_Event_Antenna_C_GetWidgetToFocus");
static_assert(offsetof(UI_ADM_Debug_Event_Antenna_C_GetWidgetToFocus, ReturnValue) == 0x000000, "Member 'UI_ADM_Debug_Event_Antenna_C_GetWidgetToFocus::ReturnValue' has a wrong offset!");

}

