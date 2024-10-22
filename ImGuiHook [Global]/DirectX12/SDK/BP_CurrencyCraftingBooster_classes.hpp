#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CurrencyCraftingBooster

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CurrencyCraftingBooster.BP_CurrencyCraftingBooster_C
// 0x0008 (0x03A0 - 0x0398)
class ABP_CurrencyCraftingBooster_C final : public ACurrencyCraftingBooster
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CurrencyCraftingBooster_C">();
	}
	static class ABP_CurrencyCraftingBooster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CurrencyCraftingBooster_C>();
	}
};
static_assert(alignof(ABP_CurrencyCraftingBooster_C) == 0x000008, "Wrong alignment on ABP_CurrencyCraftingBooster_C");
static_assert(sizeof(ABP_CurrencyCraftingBooster_C) == 0x0003A0, "Wrong size on ABP_CurrencyCraftingBooster_C");
static_assert(offsetof(ABP_CurrencyCraftingBooster_C, DefaultSceneRoot) == 0x000398, "Member 'ABP_CurrencyCraftingBooster_C::DefaultSceneRoot' has a wrong offset!");

}

