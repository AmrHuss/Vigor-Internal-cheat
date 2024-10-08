#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StaticProp_Base

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StaticProp_Base.BP_StaticProp_Base_C
// 0x0008 (0x0230 - 0x0228)
class ABP_StaticProp_Base_C : public AFlameStaticActor
{
public:
	float                                         DrawDistanceMultiplier;                            // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ToggleDrawDistanceDebug;                           // 0x022C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StaticProp_Base_C">();
	}
	static class ABP_StaticProp_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StaticProp_Base_C>();
	}
};
static_assert(alignof(ABP_StaticProp_Base_C) == 0x000008, "Wrong alignment on ABP_StaticProp_Base_C");
static_assert(sizeof(ABP_StaticProp_Base_C) == 0x000230, "Wrong size on ABP_StaticProp_Base_C");
static_assert(offsetof(ABP_StaticProp_Base_C, DrawDistanceMultiplier) == 0x000228, "Member 'ABP_StaticProp_Base_C::DrawDistanceMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_Base_C, ToggleDrawDistanceDebug) == 0x00022C, "Member 'ABP_StaticProp_Base_C::ToggleDrawDistanceDebug' has a wrong offset!");

}

