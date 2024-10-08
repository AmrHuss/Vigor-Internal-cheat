#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HC_Disinfection

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_HC_Disinfection.BP_HC_Disinfection_C.ExpectedHealing
// 0x0018 (0x0018 - 0x0000)
struct BP_HC_Disinfection_C_ExpectedHealing final
{
public:
	float                                         TimerDelay;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHealthComponent*                       HealthComponent;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpHeal;                                           // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HC_Disinfection_C_ExpectedHealing) == 0x000008, "Wrong alignment on BP_HC_Disinfection_C_ExpectedHealing");
static_assert(sizeof(BP_HC_Disinfection_C_ExpectedHealing) == 0x000018, "Wrong size on BP_HC_Disinfection_C_ExpectedHealing");
static_assert(offsetof(BP_HC_Disinfection_C_ExpectedHealing, TimerDelay) == 0x000000, "Member 'BP_HC_Disinfection_C_ExpectedHealing::TimerDelay' has a wrong offset!");
static_assert(offsetof(BP_HC_Disinfection_C_ExpectedHealing, HealthComponent) == 0x000008, "Member 'BP_HC_Disinfection_C_ExpectedHealing::HealthComponent' has a wrong offset!");
static_assert(offsetof(BP_HC_Disinfection_C_ExpectedHealing, DeltaTime) == 0x000010, "Member 'BP_HC_Disinfection_C_ExpectedHealing::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_HC_Disinfection_C_ExpectedHealing, ExpHeal) == 0x000014, "Member 'BP_HC_Disinfection_C_ExpectedHealing::ExpHeal' has a wrong offset!");

// Function BP_HC_Disinfection.BP_HC_Disinfection_C.ApplyHealToComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_HC_Disinfection_C_ApplyHealToComponent final
{
public:
	class UBP_HealingComponent_C*                 HealingComponent;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HC_Disinfection_C_ApplyHealToComponent) == 0x000008, "Wrong alignment on BP_HC_Disinfection_C_ApplyHealToComponent");
static_assert(sizeof(BP_HC_Disinfection_C_ApplyHealToComponent) == 0x000008, "Wrong size on BP_HC_Disinfection_C_ApplyHealToComponent");
static_assert(offsetof(BP_HC_Disinfection_C_ApplyHealToComponent, HealingComponent) == 0x000000, "Member 'BP_HC_Disinfection_C_ApplyHealToComponent::HealingComponent' has a wrong offset!");

}

