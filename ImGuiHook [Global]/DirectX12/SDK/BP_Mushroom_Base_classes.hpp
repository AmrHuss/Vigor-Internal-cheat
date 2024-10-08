#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Mushroom_Base

#include "Basic.hpp"

#include "BP_Lootable_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Mushroom_Base.BP_Mushroom_Base_C
// 0x0008 (0x03B0 - 0x03A8)
class ABP_Mushroom_Base_C : public ABP_Lootable_Base_C
{
public:
	class USphereComponent*                       Sphere;                                            // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Mushroom_Base_C">();
	}
	static class ABP_Mushroom_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Mushroom_Base_C>();
	}
};
static_assert(alignof(ABP_Mushroom_Base_C) == 0x000008, "Wrong alignment on ABP_Mushroom_Base_C");
static_assert(sizeof(ABP_Mushroom_Base_C) == 0x0003B0, "Wrong size on ABP_Mushroom_Base_C");
static_assert(offsetof(ABP_Mushroom_Base_C, Sphere) == 0x0003A8, "Member 'ABP_Mushroom_Base_C::Sphere' has a wrong offset!");

}

