#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_P_ArmorPlate

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_P_ArmorPlate.BP_P_ArmorPlate_C
// 0x0008 (0x03C0 - 0x03B8)
class ABP_P_ArmorPlate_C final : public APersistentItemArmor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_P_ArmorPlate_C">();
	}
	static class ABP_P_ArmorPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_P_ArmorPlate_C>();
	}
};
static_assert(alignof(ABP_P_ArmorPlate_C) == 0x000008, "Wrong alignment on ABP_P_ArmorPlate_C");
static_assert(sizeof(ABP_P_ArmorPlate_C) == 0x0003C0, "Wrong size on ABP_P_ArmorPlate_C");
static_assert(offsetof(ABP_P_ArmorPlate_C, DefaultSceneRoot) == 0x0003B8, "Member 'ABP_P_ArmorPlate_C::DefaultSceneRoot' has a wrong offset!");

}
