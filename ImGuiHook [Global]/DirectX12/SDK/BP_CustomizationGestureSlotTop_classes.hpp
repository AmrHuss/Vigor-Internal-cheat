#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomizationGestureSlotTop

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CustomizationGestureSlotTop.BP_CustomizationGestureSlotTop_C
// 0x0008 (0x03B0 - 0x03A8)
class ABP_CustomizationGestureSlotTop_C final : public ACustomizationSlotGestureTop
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CustomizationGestureSlotTop_C">();
	}
	static class ABP_CustomizationGestureSlotTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CustomizationGestureSlotTop_C>();
	}
};
static_assert(alignof(ABP_CustomizationGestureSlotTop_C) == 0x000008, "Wrong alignment on ABP_CustomizationGestureSlotTop_C");
static_assert(sizeof(ABP_CustomizationGestureSlotTop_C) == 0x0003B0, "Wrong size on ABP_CustomizationGestureSlotTop_C");
static_assert(offsetof(ABP_CustomizationGestureSlotTop_C, DefaultSceneRoot) == 0x0003A8, "Member 'ABP_CustomizationGestureSlotTop_C::DefaultSceneRoot' has a wrong offset!");

}
