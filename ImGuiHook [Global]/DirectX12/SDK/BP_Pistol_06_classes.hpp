#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pistol_06

#include "Basic.hpp"

#include "BP_SideArmWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Pistol_06.BP_Pistol_06_C
// 0x0000 (0x2370 - 0x2370)
class ABP_Pistol_06_C final : public ABP_SideArmWeapon_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Pistol_06_C">();
	}
	static class ABP_Pistol_06_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Pistol_06_C>();
	}
};
static_assert(alignof(ABP_Pistol_06_C) == 0x000010, "Wrong alignment on ABP_Pistol_06_C");
static_assert(sizeof(ABP_Pistol_06_C) == 0x002370, "Wrong size on ABP_Pistol_06_C");

}
