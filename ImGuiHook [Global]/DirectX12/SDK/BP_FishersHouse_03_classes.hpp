#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FishersHouse_03

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FishersHouse_03.BP_FishersHouse_03_C
// 0x0008 (0x0338 - 0x0330)
class ABP_FishersHouse_03_C final : public ABuilding
{
public:
	class UChildActorComponent*                   Roof_sound;                                        // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FishersHouse_03_C">();
	}
	static class ABP_FishersHouse_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FishersHouse_03_C>();
	}
};
static_assert(alignof(ABP_FishersHouse_03_C) == 0x000008, "Wrong alignment on ABP_FishersHouse_03_C");
static_assert(sizeof(ABP_FishersHouse_03_C) == 0x000338, "Wrong size on ABP_FishersHouse_03_C");
static_assert(offsetof(ABP_FishersHouse_03_C, Roof_sound) == 0x000330, "Member 'ABP_FishersHouse_03_C::Roof_sound' has a wrong offset!");

}
