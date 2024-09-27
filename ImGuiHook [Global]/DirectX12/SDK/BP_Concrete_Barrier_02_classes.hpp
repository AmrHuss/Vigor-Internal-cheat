#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Concrete_Barrier_02

#include "Basic.hpp"

#include "BP_StaticProp_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Concrete_Barrier_02.BP_Concrete_Barrier_02_C
// 0x0008 (0x0238 - 0x0230)
class ABP_Concrete_Barrier_02_C final : public ABP_StaticProp_Base_C
{
public:
	class UObstacleComponent*                     Obstacle;                                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Concrete_Barrier_02_C">();
	}
	static class ABP_Concrete_Barrier_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Concrete_Barrier_02_C>();
	}
};
static_assert(alignof(ABP_Concrete_Barrier_02_C) == 0x000008, "Wrong alignment on ABP_Concrete_Barrier_02_C");
static_assert(sizeof(ABP_Concrete_Barrier_02_C) == 0x000238, "Wrong size on ABP_Concrete_Barrier_02_C");
static_assert(offsetof(ABP_Concrete_Barrier_02_C, Obstacle) == 0x000230, "Member 'ABP_Concrete_Barrier_02_C::Obstacle' has a wrong offset!");

}
