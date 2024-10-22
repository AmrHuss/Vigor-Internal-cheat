#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SRTarget_PhysicsBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SRTarget_PhysicsBase.BP_SRTarget_PhysicsBase_C.ExecuteUbergraph_BP_SRTarget_PhysicsBase
// 0x0170 (0x0170 - 0x0000)
struct BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeSinceCreation_ReturnValue;     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_NewLocation;                    // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_CustomEvent_NewRotation;                    // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                K2Node_CustomEvent_NewVel;                         // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_NewAngVel;                      // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPhysicsAngularVelocityInRadians_ReturnValue; // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x004C(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetPhysicsLinearVelocity_ReturnValue;     // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Impulse;                        // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x0108(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_CustomEvent_Sound;                          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13D[0x3];                                      // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   K2Node_CustomEvent_Mesh;                           // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14A[0x2];                                      // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x014C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase) == 0x000008, "Wrong alignment on BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase");
static_assert(sizeof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase) == 0x000170, "Wrong size on BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, EntryPoint) == 0x000000, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_GetGameTimeSinceCreation_ReturnValue) == 0x000004, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_GetGameTimeSinceCreation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_Less_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, K2Node_CustomEvent_NewLocation) == 0x00000C, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::K2Node_CustomEvent_NewLocation' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, K2Node_CustomEvent_NewRotation) == 0x000018, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::K2Node_CustomEvent_NewRotation' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, K2Node_CustomEvent_NewVel) == 0x000024, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::K2Node_CustomEvent_NewVel' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, K2Node_CustomEvent_NewAngVel) == 0x000030, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::K2Node_CustomEvent_NewAngVel' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_GetPhysicsAngularVelocityInRadians_ReturnValue) == 0x00003C, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_GetPhysicsAngularVelocityInRadians_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x00004C, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_GetPhysicsLinearVelocity_ReturnValue) == 0x0000D8, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_GetPhysicsLinearVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0000E4, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000F0, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, K2Node_CustomEvent_Impulse) == 0x0000FC, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::K2Node_CustomEvent_Impulse' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, K2Node_CustomEvent_Location) == 0x000108, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, K2Node_CustomEvent_Sound) == 0x000118, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::K2Node_CustomEvent_Sound' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_K2_GetComponentRotation_ReturnValue_1) == 0x000124, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_K2_GetComponentRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000130, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, Temp_bool_Has_Been_Initd_Variable) == 0x00013C, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, K2Node_CustomEvent_Mesh) == 0x000140, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::K2Node_CustomEvent_Mesh' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_IsValid_ReturnValue_2) == 0x000148, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, Temp_bool_IsClosed_Variable) == 0x000149, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, K2Node_CreateDelegate_OutputDelegate) == 0x00014C, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000160, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_HasAuthority_ReturnValue) == 0x000168, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase, CallFunc_IsValid_ReturnValue_3) == 0x000169, "Member 'BP_SRTarget_PhysicsBase_C_ExecuteUbergraph_BP_SRTarget_PhysicsBase::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function BP_SRTarget_PhysicsBase.BP_SRTarget_PhysicsBase_C.StartPhysics
// 0x0008 (0x0008 - 0x0000)
struct BP_SRTarget_PhysicsBase_C_StartPhysics final
{
public:
	class UStaticMeshComponent*                   Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SRTarget_PhysicsBase_C_StartPhysics) == 0x000008, "Wrong alignment on BP_SRTarget_PhysicsBase_C_StartPhysics");
static_assert(sizeof(BP_SRTarget_PhysicsBase_C_StartPhysics) == 0x000008, "Wrong size on BP_SRTarget_PhysicsBase_C_StartPhysics");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_StartPhysics, Mesh) == 0x000000, "Member 'BP_SRTarget_PhysicsBase_C_StartPhysics::Mesh' has a wrong offset!");

// Function BP_SRTarget_PhysicsBase.BP_SRTarget_PhysicsBase_C.MulticastedHit
// 0x0020 (0x0020 - 0x0000)
struct BP_SRTarget_PhysicsBase_C_MulticastedHit final
{
public:
	struct FVector                                Impulse;                                           // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound;                                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SRTarget_PhysicsBase_C_MulticastedHit) == 0x000008, "Wrong alignment on BP_SRTarget_PhysicsBase_C_MulticastedHit");
static_assert(sizeof(BP_SRTarget_PhysicsBase_C_MulticastedHit) == 0x000020, "Wrong size on BP_SRTarget_PhysicsBase_C_MulticastedHit");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_MulticastedHit, Impulse) == 0x000000, "Member 'BP_SRTarget_PhysicsBase_C_MulticastedHit::Impulse' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_MulticastedHit, Location) == 0x00000C, "Member 'BP_SRTarget_PhysicsBase_C_MulticastedHit::Location' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_MulticastedHit, Sound) == 0x000018, "Member 'BP_SRTarget_PhysicsBase_C_MulticastedHit::Sound' has a wrong offset!");

// Function BP_SRTarget_PhysicsBase.BP_SRTarget_PhysicsBase_C.ReplicateTransform
// 0x0030 (0x0030 - 0x0000)
struct BP_SRTarget_PhysicsBase_C_ReplicateTransform final
{
public:
	struct FVector                                NewLocation;                                       // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               NewRotation;                                       // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                NewVel;                                            // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewAngVel;                                         // 0x0024(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SRTarget_PhysicsBase_C_ReplicateTransform) == 0x000004, "Wrong alignment on BP_SRTarget_PhysicsBase_C_ReplicateTransform");
static_assert(sizeof(BP_SRTarget_PhysicsBase_C_ReplicateTransform) == 0x000030, "Wrong size on BP_SRTarget_PhysicsBase_C_ReplicateTransform");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ReplicateTransform, NewLocation) == 0x000000, "Member 'BP_SRTarget_PhysicsBase_C_ReplicateTransform::NewLocation' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ReplicateTransform, NewRotation) == 0x00000C, "Member 'BP_SRTarget_PhysicsBase_C_ReplicateTransform::NewRotation' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ReplicateTransform, NewVel) == 0x000018, "Member 'BP_SRTarget_PhysicsBase_C_ReplicateTransform::NewVel' has a wrong offset!");
static_assert(offsetof(BP_SRTarget_PhysicsBase_C_ReplicateTransform, NewAngVel) == 0x000024, "Member 'BP_SRTarget_PhysicsBase_C_ReplicateTransform::NewAngVel' has a wrong offset!");

}

