#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SniperRifle_03_WeaponPlan

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SniperRifle_03_WeaponPlan.BP_SniperRifle_03_WeaponPlan_C
// 0x0008 (0x03F0 - 0x03E8)
class ABP_SniperRifle_03_WeaponPlan_C final : public AWeaponPlan
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SniperRifle_03_WeaponPlan_C">();
	}
	static class ABP_SniperRifle_03_WeaponPlan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SniperRifle_03_WeaponPlan_C>();
	}
};
static_assert(alignof(ABP_SniperRifle_03_WeaponPlan_C) == 0x000008, "Wrong alignment on ABP_SniperRifle_03_WeaponPlan_C");
static_assert(sizeof(ABP_SniperRifle_03_WeaponPlan_C) == 0x0003F0, "Wrong size on ABP_SniperRifle_03_WeaponPlan_C");
static_assert(offsetof(ABP_SniperRifle_03_WeaponPlan_C, DefaultSceneRoot) == 0x0003E8, "Member 'ABP_SniperRifle_03_WeaponPlan_C::DefaultSceneRoot' has a wrong offset!");

}

