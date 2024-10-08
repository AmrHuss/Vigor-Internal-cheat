#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Rule_ReloadBreakFullAuto

#include "Basic.hpp"

#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function BP_Rule_ReloadBreakFullAuto.BP_Rule_ReloadBreakFullAuto_C.CustomReactOnInput
// 0x0048 (0x0048 - 0x0000)
struct BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput final
{
public:
	const class AHumanPlayerController*           TargetController;                                  // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputRule                                    ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerCharacter*                  CallFunc_GetHumanCharacter_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStateMachineComponent*                 CallFunc_GetStateMachine_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemState*                             CallFunc_GetCurrentStateInMachine_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponStateFiringFullAuto*             K2Node_DynamicCast_AsWeapon_State_Firing_Full_Auto; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AWeapon*                                K2Node_DynamicCast_AsWeapon;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput) == 0x000008, "Wrong alignment on BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput");
static_assert(sizeof(BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput) == 0x000048, "Wrong size on BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput");
static_assert(offsetof(BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput, TargetController) == 0x000000, "Member 'BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput::TargetController' has a wrong offset!");
static_assert(offsetof(BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput, ReturnValue) == 0x000008, "Member 'BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput, CallFunc_GetHumanCharacter_ReturnValue) == 0x000010, "Member 'BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput::CallFunc_GetHumanCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput, CallFunc_GetStateMachine_ReturnValue) == 0x000018, "Member 'BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput::CallFunc_GetStateMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput, CallFunc_GetCurrentStateInMachine_ReturnValue) == 0x000020, "Member 'BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput::CallFunc_GetCurrentStateInMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput, K2Node_DynamicCast_AsWeapon_State_Firing_Full_Auto) == 0x000028, "Member 'BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput::K2Node_DynamicCast_AsWeapon_State_Firing_Full_Auto' has a wrong offset!");
static_assert(offsetof(BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput, K2Node_DynamicCast_AsWeapon) == 0x000038, "Member 'BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput::K2Node_DynamicCast_AsWeapon' has a wrong offset!");
static_assert(offsetof(BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BP_Rule_ReloadBreakFullAuto_C_CustomReactOnInput::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

