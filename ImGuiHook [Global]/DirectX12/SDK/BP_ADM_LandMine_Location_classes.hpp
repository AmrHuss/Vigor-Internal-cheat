#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_LandMine_Location

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ADM_ActorLocation_Base_classes.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ADM_LandMine_Location.BP_ADM_LandMine_Location_C
// 0x0038 (0x0270 - 0x0238)
class ABP_ADM_LandMine_Location_C final : public ABP_ADM_ActorLocation_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Landmine_Mesh;                                     // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             Preview_mesh_soft;                                 // 0x0248(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ADM_LandMine_Location(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Place_on_the_Ground();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ADM_LandMine_Location_C">();
	}
	static class ABP_ADM_LandMine_Location_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ADM_LandMine_Location_C>();
	}
};
static_assert(alignof(ABP_ADM_LandMine_Location_C) == 0x000008, "Wrong alignment on ABP_ADM_LandMine_Location_C");
static_assert(sizeof(ABP_ADM_LandMine_Location_C) == 0x000270, "Wrong size on ABP_ADM_LandMine_Location_C");
static_assert(offsetof(ABP_ADM_LandMine_Location_C, UberGraphFrame) == 0x000238, "Member 'ABP_ADM_LandMine_Location_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LandMine_Location_C, Landmine_Mesh) == 0x000240, "Member 'ABP_ADM_LandMine_Location_C::Landmine_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LandMine_Location_C, Preview_mesh_soft) == 0x000248, "Member 'ABP_ADM_LandMine_Location_C::Preview_mesh_soft' has a wrong offset!");

}

