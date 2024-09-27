#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OpenableExitVisuals

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OpenableExitVisuals.BP_OpenableExitVisuals_C
// 0x0018 (0x0238 - 0x0220)
class ABP_OpenableExitVisuals_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_OpenableExitVolume_C*               Openable_Exit;                                     // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Exit_Closed();
	void Exit_Opened();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_OpenableExitVisuals(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OpenableExitVisuals_C">();
	}
	static class ABP_OpenableExitVisuals_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OpenableExitVisuals_C>();
	}
};
static_assert(alignof(ABP_OpenableExitVisuals_C) == 0x000008, "Wrong alignment on ABP_OpenableExitVisuals_C");
static_assert(sizeof(ABP_OpenableExitVisuals_C) == 0x000238, "Wrong size on ABP_OpenableExitVisuals_C");
static_assert(offsetof(ABP_OpenableExitVisuals_C, UberGraphFrame) == 0x000220, "Member 'ABP_OpenableExitVisuals_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_OpenableExitVisuals_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_OpenableExitVisuals_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_OpenableExitVisuals_C, Openable_Exit) == 0x000230, "Member 'ABP_OpenableExitVisuals_C::Openable_Exit' has a wrong offset!");

}
