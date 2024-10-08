#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BigHouse_01

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BigHouse_01.BP_BigHouse_01_C
// 0x0020 (0x0350 - 0x0330)
class ABP_BigHouse_01_C final : public ABuilding
{
public:
	class UChildActorComponent*                   Roof4;                                             // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Roof2;                                             // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Roof;                                              // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObstacleComponent*                     Obstacle;                                          // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BigHouse_01_C">();
	}
	static class ABP_BigHouse_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BigHouse_01_C>();
	}
};
static_assert(alignof(ABP_BigHouse_01_C) == 0x000008, "Wrong alignment on ABP_BigHouse_01_C");
static_assert(sizeof(ABP_BigHouse_01_C) == 0x000350, "Wrong size on ABP_BigHouse_01_C");
static_assert(offsetof(ABP_BigHouse_01_C, Roof4) == 0x000330, "Member 'ABP_BigHouse_01_C::Roof4' has a wrong offset!");
static_assert(offsetof(ABP_BigHouse_01_C, Roof2) == 0x000338, "Member 'ABP_BigHouse_01_C::Roof2' has a wrong offset!");
static_assert(offsetof(ABP_BigHouse_01_C, Roof) == 0x000340, "Member 'ABP_BigHouse_01_C::Roof' has a wrong offset!");
static_assert(offsetof(ABP_BigHouse_01_C, Obstacle) == 0x000348, "Member 'ABP_BigHouse_01_C::Obstacle' has a wrong offset!");

}

