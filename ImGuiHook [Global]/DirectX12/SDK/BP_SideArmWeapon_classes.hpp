#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SideArmWeapon

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SideArmWeapon.BP_SideArmWeapon_C
// 0x1670 (0x2370 - 0x0D00)
class ABP_SideArmWeapon_C : public ASideArmWeapon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MeshParticleTrigger_Component_C*    BP_MeshParticleTrigger_Component;                  // 0x0D08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MuzzleMaskMesh;                                    // 0x0D10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAimPointComponent*                     AimPoint;                                          // 0x0D18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FPostProcessSettings                   NoneBlur;                                          // 0x0D20(0x0590)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                   IronsightBlur;                                     // 0x12B0(0x0590)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                   ReflectorBlur;                                     // 0x1840(0x0590)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                   OpticsBlur;                                        // 0x1DD0(0x0590)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          WeaponSkinDiagnostic;                              // 0x2360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2361[0x7];                                     // 0x2361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFirearm_ABP_C*                         WPN_AnimInstance;                                  // 0x2368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SideArmWeapon(int32 EntryPoint);
	void ReceiveMeleeHit(const struct FHitResult& HitResult);
	void CasingSpawn(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void CasingCollide(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat);
	void ReceiveBeginPlay();
	void ReceiveFireShot();
	void InpActEvt_Fire_K2Node_InputActionEvent_0(const struct FKey& Key);
	void UserConstructionScript();
	void PlayMeleeHitSound(const struct FHitResult& HitResult);

	struct FFlameSkinMaterialInfo GetMaterialInfoImplementation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SideArmWeapon_C">();
	}
	static class ABP_SideArmWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SideArmWeapon_C>();
	}
};
static_assert(alignof(ABP_SideArmWeapon_C) == 0x000010, "Wrong alignment on ABP_SideArmWeapon_C");
static_assert(sizeof(ABP_SideArmWeapon_C) == 0x002370, "Wrong size on ABP_SideArmWeapon_C");
static_assert(offsetof(ABP_SideArmWeapon_C, UberGraphFrame) == 0x000D00, "Member 'ABP_SideArmWeapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SideArmWeapon_C, BP_MeshParticleTrigger_Component) == 0x000D08, "Member 'ABP_SideArmWeapon_C::BP_MeshParticleTrigger_Component' has a wrong offset!");
static_assert(offsetof(ABP_SideArmWeapon_C, MuzzleMaskMesh) == 0x000D10, "Member 'ABP_SideArmWeapon_C::MuzzleMaskMesh' has a wrong offset!");
static_assert(offsetof(ABP_SideArmWeapon_C, AimPoint) == 0x000D18, "Member 'ABP_SideArmWeapon_C::AimPoint' has a wrong offset!");
static_assert(offsetof(ABP_SideArmWeapon_C, NoneBlur) == 0x000D20, "Member 'ABP_SideArmWeapon_C::NoneBlur' has a wrong offset!");
static_assert(offsetof(ABP_SideArmWeapon_C, IronsightBlur) == 0x0012B0, "Member 'ABP_SideArmWeapon_C::IronsightBlur' has a wrong offset!");
static_assert(offsetof(ABP_SideArmWeapon_C, ReflectorBlur) == 0x001840, "Member 'ABP_SideArmWeapon_C::ReflectorBlur' has a wrong offset!");
static_assert(offsetof(ABP_SideArmWeapon_C, OpticsBlur) == 0x001DD0, "Member 'ABP_SideArmWeapon_C::OpticsBlur' has a wrong offset!");
static_assert(offsetof(ABP_SideArmWeapon_C, WeaponSkinDiagnostic) == 0x002360, "Member 'ABP_SideArmWeapon_C::WeaponSkinDiagnostic' has a wrong offset!");
static_assert(offsetof(ABP_SideArmWeapon_C, WPN_AnimInstance) == 0x002368, "Member 'ABP_SideArmWeapon_C::WPN_AnimInstance' has a wrong offset!");

}

