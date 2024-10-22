#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_Leaderboards_A

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Onboarding_Leaderboards_A.UI_Onboarding_Leaderboards_A_C.ExecuteUbergraph_UI_Onboarding_Leaderboards_A
// 0x0040 (0x0040 - 0x0000)
struct UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_Onboarding_Leaderboards_B_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Onboarding_Leaderboards_B_C*        CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetZOrder_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A) == 0x000008, "Wrong alignment on UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A");
static_assert(sizeof(UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A) == 0x000040, "Wrong size on UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A");
static_assert(offsetof(UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A, EntryPoint) == 0x000000, "Member 'UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000008, "Member 'UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A, CallFunc_Create_ReturnValue) == 0x000028, "Member 'UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A, CallFunc_GetZOrder_ReturnValue) == 0x000030, "Member 'UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A::CallFunc_GetZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000038, "Member 'UI_Onboarding_Leaderboards_A_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_A::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");

}

