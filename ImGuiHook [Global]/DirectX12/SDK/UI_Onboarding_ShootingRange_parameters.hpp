#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_ShootingRange

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Onboarding_ShootingRange.UI_Onboarding_ShootingRange_C.ExecuteUbergraph_UI_Onboarding_ShootingRange
// 0x0028 (0x0028 - 0x0000)
struct UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 CallFunc_GetFlameController_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue_1;     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 CallFunc_GetFlameController_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange) == 0x000008, "Wrong alignment on UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange");
static_assert(sizeof(UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange) == 0x000028, "Wrong size on UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange");
static_assert(offsetof(UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange, EntryPoint) == 0x000000, "Member 'UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000006, "Member 'UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange, K2Node_Event_IsDesignTime) == 0x000007, "Member 'UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x000008, "Member 'UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange, CallFunc_GetFlameController_ReturnValue) == 0x000010, "Member 'UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange::CallFunc_GetFlameController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange, CallFunc_IsPlatformGroupDesktop_ReturnValue_1) == 0x000018, "Member 'UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange::CallFunc_IsPlatformGroupDesktop_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange, CallFunc_GetFlameController_ReturnValue_1) == 0x000020, "Member 'UI_Onboarding_ShootingRange_C_ExecuteUbergraph_UI_Onboarding_ShootingRange::CallFunc_GetFlameController_ReturnValue_1' has a wrong offset!");

// Function UI_Onboarding_ShootingRange.UI_Onboarding_ShootingRange_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Onboarding_ShootingRange_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Onboarding_ShootingRange_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Onboarding_ShootingRange_C_PreConstruct");
static_assert(sizeof(UI_Onboarding_ShootingRange_C_PreConstruct) == 0x000001, "Wrong size on UI_Onboarding_ShootingRange_C_PreConstruct");
static_assert(offsetof(UI_Onboarding_ShootingRange_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Onboarding_ShootingRange_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

