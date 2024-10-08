#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SmallHouse_03

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SmallHouse_03.BP_SmallHouse_03_C
// 0x0040 (0x0370 - 0x0330)
class ABP_SmallHouse_03_C final : public ABuilding
{
public:
	class UChildActorComponent*                   Gutter5;                                           // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Gutter4;                                           // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Gutter3;                                           // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Gutter2;                                           // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Gutter;                                            // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Roof2;                                             // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Roof;                                              // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObstacleComponent*                     Obstacle;                                          // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SmallHouse_03_C">();
	}
	static class ABP_SmallHouse_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SmallHouse_03_C>();
	}
};
static_assert(alignof(ABP_SmallHouse_03_C) == 0x000008, "Wrong alignment on ABP_SmallHouse_03_C");
static_assert(sizeof(ABP_SmallHouse_03_C) == 0x000370, "Wrong size on ABP_SmallHouse_03_C");
static_assert(offsetof(ABP_SmallHouse_03_C, Gutter5) == 0x000330, "Member 'ABP_SmallHouse_03_C::Gutter5' has a wrong offset!");
static_assert(offsetof(ABP_SmallHouse_03_C, Gutter4) == 0x000338, "Member 'ABP_SmallHouse_03_C::Gutter4' has a wrong offset!");
static_assert(offsetof(ABP_SmallHouse_03_C, Gutter3) == 0x000340, "Member 'ABP_SmallHouse_03_C::Gutter3' has a wrong offset!");
static_assert(offsetof(ABP_SmallHouse_03_C, Gutter2) == 0x000348, "Member 'ABP_SmallHouse_03_C::Gutter2' has a wrong offset!");
static_assert(offsetof(ABP_SmallHouse_03_C, Gutter) == 0x000350, "Member 'ABP_SmallHouse_03_C::Gutter' has a wrong offset!");
static_assert(offsetof(ABP_SmallHouse_03_C, Roof2) == 0x000358, "Member 'ABP_SmallHouse_03_C::Roof2' has a wrong offset!");
static_assert(offsetof(ABP_SmallHouse_03_C, Roof) == 0x000360, "Member 'ABP_SmallHouse_03_C::Roof' has a wrong offset!");
static_assert(offsetof(ABP_SmallHouse_03_C, Obstacle) == 0x000368, "Member 'ABP_SmallHouse_03_C::Obstacle' has a wrong offset!");

}

