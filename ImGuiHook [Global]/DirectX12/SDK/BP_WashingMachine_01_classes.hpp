#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WashingMachine_01

#include "Basic.hpp"

#include "BP_StaticProp_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WashingMachine_01.BP_WashingMachine_01_C
// 0x0008 (0x0238 - 0x0230)
class ABP_WashingMachine_01_C final : public ABP_StaticProp_Base_C
{
public:
	class UStaticMeshComponent*                   SM_WashingMachine_Door_01;                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WashingMachine_01_C">();
	}
	static class ABP_WashingMachine_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WashingMachine_01_C>();
	}
};
static_assert(alignof(ABP_WashingMachine_01_C) == 0x000008, "Wrong alignment on ABP_WashingMachine_01_C");
static_assert(sizeof(ABP_WashingMachine_01_C) == 0x000238, "Wrong size on ABP_WashingMachine_01_C");
static_assert(offsetof(ABP_WashingMachine_01_C, SM_WashingMachine_Door_01) == 0x000230, "Member 'ABP_WashingMachine_01_C::SM_WashingMachine_Door_01' has a wrong offset!");

}
