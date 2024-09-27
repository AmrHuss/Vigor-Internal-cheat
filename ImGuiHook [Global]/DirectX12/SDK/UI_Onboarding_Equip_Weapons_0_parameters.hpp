#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_Equip_Weapons_0

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Onboarding_Equip_Weapons_0.UI_Onboarding_Equip_Weapons_0_C.ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0
// 0x0050 (0x0050 - 0x0000)
struct UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_ShelterStash_C*>             CallFunc_GetAllOpenedWidgets_OutWidgets;           // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_ShelterStash_C*                     CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0) == 0x000008, "Wrong alignment on UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0");
static_assert(sizeof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0) == 0x000050, "Wrong size on UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0");
static_assert(offsetof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0, EntryPoint) == 0x000000, "Member 'UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0, Temp_int_Array_Index_Variable) == 0x000004, "Member 'UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0, K2Node_DynamicCast_AsHuman_Player_Controller) == 0x000018, "Member 'UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0::K2Node_DynamicCast_AsHuman_Player_Controller' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0, CallFunc_GetAllOpenedWidgets_OutWidgets) == 0x000028, "Member 'UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0::CallFunc_GetAllOpenedWidgets_OutWidgets' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0, CallFunc_Array_Get_Item) == 0x000040, "Member 'UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'UI_Onboarding_Equip_Weapons_0_C_ExecuteUbergraph_UI_Onboarding_Equip_Weapons_0::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}
