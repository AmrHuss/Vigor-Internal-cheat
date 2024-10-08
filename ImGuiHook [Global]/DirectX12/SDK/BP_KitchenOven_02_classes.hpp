#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KitchenOven_02

#include "Basic.hpp"

#include "BP_StaticProp_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_KitchenOven_02.BP_KitchenOven_02_C
// 0x0018 (0x0248 - 0x0230)
class ABP_KitchenOven_02_C final : public ABP_StaticProp_Base_C
{
public:
	class UStaticMeshComponent*                   SM_kitchenOven_Door_02;                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_kitchenOven_TopDoor_02;                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_kitchenOven_BotDoor_02;                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KitchenOven_02_C">();
	}
	static class ABP_KitchenOven_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_KitchenOven_02_C>();
	}
};
static_assert(alignof(ABP_KitchenOven_02_C) == 0x000008, "Wrong alignment on ABP_KitchenOven_02_C");
static_assert(sizeof(ABP_KitchenOven_02_C) == 0x000248, "Wrong size on ABP_KitchenOven_02_C");
static_assert(offsetof(ABP_KitchenOven_02_C, SM_kitchenOven_Door_02) == 0x000230, "Member 'ABP_KitchenOven_02_C::SM_kitchenOven_Door_02' has a wrong offset!");
static_assert(offsetof(ABP_KitchenOven_02_C, SM_kitchenOven_TopDoor_02) == 0x000238, "Member 'ABP_KitchenOven_02_C::SM_kitchenOven_TopDoor_02' has a wrong offset!");
static_assert(offsetof(ABP_KitchenOven_02_C, SM_kitchenOven_BotDoor_02) == 0x000240, "Member 'ABP_KitchenOven_02_C::SM_kitchenOven_BotDoor_02' has a wrong offset!");

}

