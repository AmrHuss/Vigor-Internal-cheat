#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SmokeGrenade_ConsumablePlan

#include "Basic.hpp"

#include "BP_ConsumablePlan_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SmokeGrenade_ConsumablePlan.BP_SmokeGrenade_ConsumablePlan_C
// 0x0000 (0x03E0 - 0x03E0)
class ABP_SmokeGrenade_ConsumablePlan_C final : public ABP_ConsumablePlan_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SmokeGrenade_ConsumablePlan_C">();
	}
	static class ABP_SmokeGrenade_ConsumablePlan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SmokeGrenade_ConsumablePlan_C>();
	}
};
static_assert(alignof(ABP_SmokeGrenade_ConsumablePlan_C) == 0x000008, "Wrong alignment on ABP_SmokeGrenade_ConsumablePlan_C");
static_assert(sizeof(ABP_SmokeGrenade_ConsumablePlan_C) == 0x0003E0, "Wrong size on ABP_SmokeGrenade_ConsumablePlan_C");

}
