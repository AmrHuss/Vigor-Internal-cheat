#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fuel

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Fuel.BP_Fuel_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_Fuel_C final : public AFuel
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Fuel_C">();
	}
	static class ABP_Fuel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Fuel_C>();
	}
};
static_assert(alignof(ABP_Fuel_C) == 0x000008, "Wrong alignment on ABP_Fuel_C");
static_assert(sizeof(ABP_Fuel_C) == 0x0003B8, "Wrong size on ABP_Fuel_C");
static_assert(offsetof(ABP_Fuel_C, DefaultSceneRoot) == 0x0003B0, "Member 'ABP_Fuel_C::DefaultSceneRoot' has a wrong offset!");

}

