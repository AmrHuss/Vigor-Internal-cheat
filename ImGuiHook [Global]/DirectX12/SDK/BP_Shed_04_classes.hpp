#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shed_04

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Shed_04.BP_Shed_04_C
// 0x0010 (0x0340 - 0x0330)
class ABP_Shed_04_C final : public ABuilding
{
public:
	class UChildActorComponent*                   Roof;                                              // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObstacleComponent*                     Obstacle;                                          // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Shed_04_C">();
	}
	static class ABP_Shed_04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Shed_04_C>();
	}
};
static_assert(alignof(ABP_Shed_04_C) == 0x000008, "Wrong alignment on ABP_Shed_04_C");
static_assert(sizeof(ABP_Shed_04_C) == 0x000340, "Wrong size on ABP_Shed_04_C");
static_assert(offsetof(ABP_Shed_04_C, Roof) == 0x000330, "Member 'ABP_Shed_04_C::Roof' has a wrong offset!");
static_assert(offsetof(ABP_Shed_04_C, Obstacle) == 0x000338, "Member 'ABP_Shed_04_C::Obstacle' has a wrong offset!");

}
