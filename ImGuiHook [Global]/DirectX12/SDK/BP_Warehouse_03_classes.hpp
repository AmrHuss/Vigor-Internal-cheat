#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Warehouse_03

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Warehouse_03.BP_Warehouse_03_C
// 0x0060 (0x0390 - 0x0330)
class ABP_Warehouse_03_C final : public ABuilding
{
public:
	class UBP_CommoditySpawnNode_C*               BP_CommoditySpawnNode;                             // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObstacleComponent*                     Obstacle;                                          // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_big_01;                       // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_small_07;                     // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_small_06;                     // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_small_05;                     // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_small_04;                     // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_small_03;                     // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_small_02;                     // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_small_01;                     // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_small;                        // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_big;                          // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Warehouse_03_C">();
	}
	static class ABP_Warehouse_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Warehouse_03_C>();
	}
};
static_assert(alignof(ABP_Warehouse_03_C) == 0x000008, "Wrong alignment on ABP_Warehouse_03_C");
static_assert(sizeof(ABP_Warehouse_03_C) == 0x000390, "Wrong size on ABP_Warehouse_03_C");
static_assert(offsetof(ABP_Warehouse_03_C, BP_CommoditySpawnNode) == 0x000330, "Member 'ABP_Warehouse_03_C::BP_CommoditySpawnNode' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_03_C, Obstacle) == 0x000338, "Member 'ABP_Warehouse_03_C::Obstacle' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_03_C, SM_Warehouse_03_door_big_01) == 0x000340, "Member 'ABP_Warehouse_03_C::SM_Warehouse_03_door_big_01' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_03_C, SM_Warehouse_03_door_small_07) == 0x000348, "Member 'ABP_Warehouse_03_C::SM_Warehouse_03_door_small_07' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_03_C, SM_Warehouse_03_door_small_06) == 0x000350, "Member 'ABP_Warehouse_03_C::SM_Warehouse_03_door_small_06' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_03_C, SM_Warehouse_03_door_small_05) == 0x000358, "Member 'ABP_Warehouse_03_C::SM_Warehouse_03_door_small_05' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_03_C, SM_Warehouse_03_door_small_04) == 0x000360, "Member 'ABP_Warehouse_03_C::SM_Warehouse_03_door_small_04' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_03_C, SM_Warehouse_03_door_small_03) == 0x000368, "Member 'ABP_Warehouse_03_C::SM_Warehouse_03_door_small_03' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_03_C, SM_Warehouse_03_door_small_02) == 0x000370, "Member 'ABP_Warehouse_03_C::SM_Warehouse_03_door_small_02' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_03_C, SM_Warehouse_03_door_small_01) == 0x000378, "Member 'ABP_Warehouse_03_C::SM_Warehouse_03_door_small_01' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_03_C, SM_Warehouse_03_door_small) == 0x000380, "Member 'ABP_Warehouse_03_C::SM_Warehouse_03_door_small' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_03_C, SM_Warehouse_03_door_big) == 0x000388, "Member 'ABP_Warehouse_03_C::SM_Warehouse_03_door_big' has a wrong offset!");

}
