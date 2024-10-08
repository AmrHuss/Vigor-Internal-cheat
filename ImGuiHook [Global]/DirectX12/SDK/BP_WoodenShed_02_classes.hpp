#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WoodenShed_02

#include "Basic.hpp"

#include "BP_StaticProp_MeshVariants_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WoodenShed_02.BP_WoodenShed_02_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_WoodenShed_02_C final : public ABP_StaticProp_MeshVariants_Base_C
{
public:
	class UChildActorComponent*                   ChildActor1;                                       // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBuildingBoxComponent*                  BuildingBox;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBuildingBoxComponent*                  BuildingBox1;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WoodenShed_02_C">();
	}
	static class ABP_WoodenShed_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WoodenShed_02_C>();
	}
};
static_assert(alignof(ABP_WoodenShed_02_C) == 0x000008, "Wrong alignment on ABP_WoodenShed_02_C");
static_assert(sizeof(ABP_WoodenShed_02_C) == 0x0002B0, "Wrong size on ABP_WoodenShed_02_C");
static_assert(offsetof(ABP_WoodenShed_02_C, ChildActor1) == 0x000290, "Member 'ABP_WoodenShed_02_C::ChildActor1' has a wrong offset!");
static_assert(offsetof(ABP_WoodenShed_02_C, ChildActor) == 0x000298, "Member 'ABP_WoodenShed_02_C::ChildActor' has a wrong offset!");
static_assert(offsetof(ABP_WoodenShed_02_C, BuildingBox) == 0x0002A0, "Member 'ABP_WoodenShed_02_C::BuildingBox' has a wrong offset!");
static_assert(offsetof(ABP_WoodenShed_02_C, BuildingBox1) == 0x0002A8, "Member 'ABP_WoodenShed_02_C::BuildingBox1' has a wrong offset!");

}

