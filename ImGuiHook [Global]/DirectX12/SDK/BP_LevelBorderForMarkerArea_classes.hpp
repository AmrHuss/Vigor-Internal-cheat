#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LevelBorderForMarkerArea

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LevelBorderForMarkerArea.BP_LevelBorderForMarkerArea_C
// 0x0010 (0x0230 - 0x0220)
class ABP_LevelBorderForMarkerArea_C final : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelBorderForMarkerArea_C">();
	}
	static class ABP_LevelBorderForMarkerArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelBorderForMarkerArea_C>();
	}
};
static_assert(alignof(ABP_LevelBorderForMarkerArea_C) == 0x000008, "Wrong alignment on ABP_LevelBorderForMarkerArea_C");
static_assert(sizeof(ABP_LevelBorderForMarkerArea_C) == 0x000230, "Wrong size on ABP_LevelBorderForMarkerArea_C");
static_assert(offsetof(ABP_LevelBorderForMarkerArea_C, Spline) == 0x000220, "Member 'ABP_LevelBorderForMarkerArea_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_LevelBorderForMarkerArea_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_LevelBorderForMarkerArea_C::DefaultSceneRoot' has a wrong offset!");

}

