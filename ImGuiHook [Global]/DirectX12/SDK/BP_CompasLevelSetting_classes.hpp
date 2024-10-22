#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CompasLevelSetting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CompasLevelSetting.BP_CompasLevelSetting_C
// 0x0028 (0x0248 - 0x0220)
class ABP_CompasLevelSetting_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   VisualizationCube;                                 // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CompassRotator;                                    // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ALandscape*                             MainLandscape;                                     // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CompasLevelSetting(int32 EntryPoint);
	void ReceiveBeginPlay();
	void GetCompassRotator(struct FRotator* Compass_Rotator, struct FRotator* Landscape_Rotator, bool* Valid_Landscape);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CompasLevelSetting_C">();
	}
	static class ABP_CompasLevelSetting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CompasLevelSetting_C>();
	}
};
static_assert(alignof(ABP_CompasLevelSetting_C) == 0x000008, "Wrong alignment on ABP_CompasLevelSetting_C");
static_assert(sizeof(ABP_CompasLevelSetting_C) == 0x000248, "Wrong size on ABP_CompasLevelSetting_C");
static_assert(offsetof(ABP_CompasLevelSetting_C, UberGraphFrame) == 0x000220, "Member 'ABP_CompasLevelSetting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CompasLevelSetting_C, VisualizationCube) == 0x000228, "Member 'ABP_CompasLevelSetting_C::VisualizationCube' has a wrong offset!");
static_assert(offsetof(ABP_CompasLevelSetting_C, CompassRotator) == 0x000230, "Member 'ABP_CompasLevelSetting_C::CompassRotator' has a wrong offset!");
static_assert(offsetof(ABP_CompasLevelSetting_C, Root) == 0x000238, "Member 'ABP_CompasLevelSetting_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_CompasLevelSetting_C, MainLandscape) == 0x000240, "Member 'ABP_CompasLevelSetting_C::MainLandscape' has a wrong offset!");

}

