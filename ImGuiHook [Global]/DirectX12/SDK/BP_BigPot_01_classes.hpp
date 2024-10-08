#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BigPot_01

#include "Basic.hpp"

#include "BP_Lootable_Furniture_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BigPot_01.BP_BigPot_01_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_BigPot_01_C final : public ABP_Lootable_Furniture_Base_C
{
public:
	class USphereComponent*                       Sphere;                                            // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BigPot_01_C">();
	}
	static class ABP_BigPot_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BigPot_01_C>();
	}
};
static_assert(alignof(ABP_BigPot_01_C) == 0x000008, "Wrong alignment on ABP_BigPot_01_C");
static_assert(sizeof(ABP_BigPot_01_C) == 0x0003B8, "Wrong size on ABP_BigPot_01_C");
static_assert(offsetof(ABP_BigPot_01_C, Sphere) == 0x0003B0, "Member 'ABP_BigPot_01_C::Sphere' has a wrong offset!");

}

