#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AssaultRifle_02

#include "Basic.hpp"

#include "BP_PrimaryWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AssaultRifle_02.BP_AssaultRifle_02_C
// 0x0010 (0x23C0 - 0x23B0)
class ABP_AssaultRifle_02_C final : public ABP_PrimaryWeapon_C
{
public:
	class UBP_WeaponGlint_Optics40_C*             BP_WeaponGlint_Optics40;                           // 0x23B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AssaultRifle_02_C">();
	}
	static class ABP_AssaultRifle_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AssaultRifle_02_C>();
	}
};
static_assert(alignof(ABP_AssaultRifle_02_C) == 0x000010, "Wrong alignment on ABP_AssaultRifle_02_C");
static_assert(sizeof(ABP_AssaultRifle_02_C) == 0x0023C0, "Wrong size on ABP_AssaultRifle_02_C");
static_assert(offsetof(ABP_AssaultRifle_02_C, BP_WeaponGlint_Optics40) == 0x0023B0, "Member 'ABP_AssaultRifle_02_C::BP_WeaponGlint_Optics40' has a wrong offset!");

}

