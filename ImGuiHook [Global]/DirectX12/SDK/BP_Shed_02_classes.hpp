#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shed_02

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Shed_02.BP_Shed_02_C
// 0x0008 (0x0338 - 0x0330)
class ABP_Shed_02_C final : public ABuilding
{
public:
	class UChildActorComponent*                   ChildActor;                                        // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Shed_02_C">();
	}
	static class ABP_Shed_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Shed_02_C>();
	}
};
static_assert(alignof(ABP_Shed_02_C) == 0x000008, "Wrong alignment on ABP_Shed_02_C");
static_assert(sizeof(ABP_Shed_02_C) == 0x000338, "Wrong size on ABP_Shed_02_C");
static_assert(offsetof(ABP_Shed_02_C, ChildActor) == 0x000330, "Member 'ABP_Shed_02_C::ChildActor' has a wrong offset!");

}

