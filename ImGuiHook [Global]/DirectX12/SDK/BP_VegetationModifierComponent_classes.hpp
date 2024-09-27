#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VegetationModifierComponent

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VegetationModifierComponent.BP_VegetationModifierComponent_C
// 0x0060 (0x0260 - 0x0200)
class UBP_VegetationModifierComponent_C final : public UVegetationComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0200(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_VegetationModify_Flatten_C*         VegetationFlattenActor;                            // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_VegetationModify_Bend_C*            VegetationBendActor;                               // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlattenRadius;                                     // 0x0218(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoAdd;                                           // 0x021C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21D[0x3];                                      // 0x021D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CheckInterval;                                     // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurCheckTime;                                      // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AddAsFlattener;                                    // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          AddAsBender;                                       // 0x0229(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22A[0x2];                                      // 0x022A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BendRadius;                                        // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LastCheckAddAsFlattener;                           // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterMovementComponent*            OwnerCharacterMovementComponent;                   // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LastCheckAddAsBender;                              // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x3];                                      // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FlattenMaxHeightAboveLand;                         // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BendMaxHeightAboveLand;                            // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugLastHeightAboveLand;                          // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BendSpeedModificationCoef;                         // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VegetationModifierComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void FindVegetationModifyActors();
	void Simulate(float DeltaSeconds);
	void InitCurCheckTime();
	void CheckShouldAdd(const struct FVector& WorldPosition);
	void InitCharacterMovementComponent();
	void AddFlattenModifier(const struct FVector& WorldPosition, float Radius);
	void AddBendModifier(const struct FVector& WorldPosition, float Radius);
	void DebugPrint();
	void GetModifierWorldPosition(struct FVector* NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VegetationModifierComponent_C">();
	}
	static class UBP_VegetationModifierComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VegetationModifierComponent_C>();
	}
};
static_assert(alignof(UBP_VegetationModifierComponent_C) == 0x000010, "Wrong alignment on UBP_VegetationModifierComponent_C");
static_assert(sizeof(UBP_VegetationModifierComponent_C) == 0x000260, "Wrong size on UBP_VegetationModifierComponent_C");
static_assert(offsetof(UBP_VegetationModifierComponent_C, UberGraphFrame) == 0x000200, "Member 'UBP_VegetationModifierComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, VegetationFlattenActor) == 0x000208, "Member 'UBP_VegetationModifierComponent_C::VegetationFlattenActor' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, VegetationBendActor) == 0x000210, "Member 'UBP_VegetationModifierComponent_C::VegetationBendActor' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, FlattenRadius) == 0x000218, "Member 'UBP_VegetationModifierComponent_C::FlattenRadius' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, AutoAdd) == 0x00021C, "Member 'UBP_VegetationModifierComponent_C::AutoAdd' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, CheckInterval) == 0x000220, "Member 'UBP_VegetationModifierComponent_C::CheckInterval' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, CurCheckTime) == 0x000224, "Member 'UBP_VegetationModifierComponent_C::CurCheckTime' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, AddAsFlattener) == 0x000228, "Member 'UBP_VegetationModifierComponent_C::AddAsFlattener' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, AddAsBender) == 0x000229, "Member 'UBP_VegetationModifierComponent_C::AddAsBender' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, BendRadius) == 0x00022C, "Member 'UBP_VegetationModifierComponent_C::BendRadius' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, LastCheckAddAsFlattener) == 0x000230, "Member 'UBP_VegetationModifierComponent_C::LastCheckAddAsFlattener' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, OwnerCharacterMovementComponent) == 0x000238, "Member 'UBP_VegetationModifierComponent_C::OwnerCharacterMovementComponent' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, LastCheckAddAsBender) == 0x000240, "Member 'UBP_VegetationModifierComponent_C::LastCheckAddAsBender' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, FlattenMaxHeightAboveLand) == 0x000244, "Member 'UBP_VegetationModifierComponent_C::FlattenMaxHeightAboveLand' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, BendMaxHeightAboveLand) == 0x000248, "Member 'UBP_VegetationModifierComponent_C::BendMaxHeightAboveLand' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, DebugLastHeightAboveLand) == 0x00024C, "Member 'UBP_VegetationModifierComponent_C::DebugLastHeightAboveLand' has a wrong offset!");
static_assert(offsetof(UBP_VegetationModifierComponent_C, BendSpeedModificationCoef) == 0x000250, "Member 'UBP_VegetationModifierComponent_C::BendSpeedModificationCoef' has a wrong offset!");

}
