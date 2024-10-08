#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShelterCassetteCamera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ShelterCassetteCamera.BP_ShelterCassetteCamera_C.ExecuteUbergraph_BP_ShelterCassetteCamera
// 0x00B0 (0x00B0 - 0x0000)
struct BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0014(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_RotatorRotator_ReturnValue;    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A3[0x1];                                       // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VInterpTo_ReturnValue;                    // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera) == 0x000004, "Wrong alignment on BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera");
static_assert(sizeof(BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera) == 0x0000B0, "Wrong size on BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera");
static_assert(offsetof(BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera, EntryPoint) == 0x000000, "Member 'BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera, CallFunc_RInterpTo_ReturnValue) == 0x000008, "Member 'BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000014, "Member 'BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x0000A0, "Member 'BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera, CallFunc_EqualEqual_RotatorRotator_ReturnValue) == 0x0000A1, "Member 'BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera::CallFunc_EqualEqual_RotatorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera, CallFunc_BooleanAND_ReturnValue) == 0x0000A2, "Member 'BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera, CallFunc_VInterpTo_ReturnValue) == 0x0000A4, "Member 'BP_ShelterCassetteCamera_C_ExecuteUbergraph_BP_ShelterCassetteCamera::CallFunc_VInterpTo_ReturnValue' has a wrong offset!");

// Function BP_ShelterCassetteCamera.BP_ShelterCassetteCamera_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ShelterCassetteCamera_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShelterCassetteCamera_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ShelterCassetteCamera_C_ReceiveTick");
static_assert(sizeof(BP_ShelterCassetteCamera_C_ReceiveTick) == 0x000004, "Wrong size on BP_ShelterCassetteCamera_C_ReceiveTick");
static_assert(offsetof(BP_ShelterCassetteCamera_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ShelterCassetteCamera_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ShelterCassetteCamera.BP_ShelterCassetteCamera_C.UseCassettesPreviewCamera
// 0x01A8 (0x01A8 - 0x0000)
struct BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera final
{
public:
	class ABP_PlayerController_Shelter_C*         PlayerControllerShelter;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PreviousViewTarget_0;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInstantTransition;                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                        K2Node_DynamicCast_AsBP_Character;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0074(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHumanAnimInstace*                      CallFunc_GetAnimInstance_ReturnValue;              // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetDirectionUnitVector_ReturnValue;       // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorInt_ReturnValue;           // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorInt_ReturnValue_1;         // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x019C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera) == 0x000008, "Wrong alignment on BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera");
static_assert(sizeof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera) == 0x0001A8, "Wrong size on BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, PlayerControllerShelter) == 0x000000, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::PlayerControllerShelter' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, PreviousViewTarget_0) == 0x000008, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::PreviousViewTarget_0' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, bInstantTransition) == 0x000010, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::bInstantTransition' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000014, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_BreakVector_X) == 0x000020, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_BreakVector_Y) == 0x000024, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_BreakVector_Z) == 0x000028, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_MakeVector_ReturnValue) == 0x00002C, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_GetCameraRotation_ReturnValue) == 0x000038, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_GetCameraLocation_ReturnValue) == 0x000044, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_MakeVector_ReturnValue_1) == 0x000050, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_IsValid_ReturnValue) == 0x00005C, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_K2_GetPawn_ReturnValue) == 0x000060, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, K2Node_DynamicCast_AsBP_Character) == 0x000068, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::K2Node_DynamicCast_AsBP_Character' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000074, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000100, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_GetAnimInstance_ReturnValue) == 0x000110, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_Add_VectorVector_ReturnValue) == 0x000118, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_BreakVector_X_1) == 0x000124, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_BreakVector_Y_1) == 0x000128, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_BreakVector_Z_1) == 0x00012C, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_MakeVector_ReturnValue_2) == 0x000130, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_GetDirectionUnitVector_ReturnValue) == 0x00013C, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_GetDirectionUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000148, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000154, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_BreakRotator_Roll) == 0x000160, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_BreakRotator_Pitch) == 0x000164, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_BreakRotator_Yaw) == 0x000168, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_Multiply_VectorInt_ReturnValue) == 0x00016C, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_Multiply_VectorInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_MakeRotator_ReturnValue) == 0x000178, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_Multiply_VectorInt_ReturnValue_1) == 0x000184, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_Multiply_VectorInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000190, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera, CallFunc_Add_VectorVector_ReturnValue_2) == 0x00019C, "Member 'BP_ShelterCassetteCamera_C_UseCassettesPreviewCamera::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");

// Function BP_ShelterCassetteCamera.BP_ShelterCassetteCamera_C.DeactivateAllCameras
// 0x0001 (0x0001 - 0x0000)
struct BP_ShelterCassetteCamera_C_DeactivateAllCameras final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ShelterCassetteCamera_C_DeactivateAllCameras) == 0x000001, "Wrong alignment on BP_ShelterCassetteCamera_C_DeactivateAllCameras");
static_assert(sizeof(BP_ShelterCassetteCamera_C_DeactivateAllCameras) == 0x000001, "Wrong size on BP_ShelterCassetteCamera_C_DeactivateAllCameras");
static_assert(offsetof(BP_ShelterCassetteCamera_C_DeactivateAllCameras, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_ShelterCassetteCamera_C_DeactivateAllCameras::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ShelterCassetteCamera.BP_ShelterCassetteCamera_C.StopUsingCassettesPreviewCamera
// 0x0170 (0x0170 - 0x0000)
struct BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera final
{
public:
	bool                                          bInstantTransition;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 PreviousViewTarget_0;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_Shelter_C*         PlayerController_0;                                // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_Script_C*                 K2Node_DynamicCast_AsBP_Character_Script;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x003C(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1; // 0x00E0(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera) == 0x000008, "Wrong alignment on BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera");
static_assert(sizeof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera) == 0x000170, "Wrong size on BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera");
static_assert(offsetof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera, bInstantTransition) == 0x000000, "Member 'BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera::bInstantTransition' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera, PreviousViewTarget_0) == 0x000008, "Member 'BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera::PreviousViewTarget_0' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera, PlayerController_0) == 0x000010, "Member 'BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera::PlayerController_0' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera, K2Node_DynamicCast_AsBP_Character_Script) == 0x000018, "Member 'BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera::K2Node_DynamicCast_AsBP_Character_Script' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000024, "Member 'BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000030, "Member 'BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x00003C, "Member 'BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera, CallFunc_K2_GetComponentRotation_ReturnValue_1) == 0x0000C8, "Member 'BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera::CallFunc_K2_GetComponentRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x0000D4, "Member 'BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1) == 0x0000E0, "Member 'BP_ShelterCassetteCamera_C_StopUsingCassettesPreviewCamera::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1' has a wrong offset!");

}

