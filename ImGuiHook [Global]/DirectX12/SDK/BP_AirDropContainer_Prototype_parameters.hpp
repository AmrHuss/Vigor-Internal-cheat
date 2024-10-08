#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AirDropContainer_Prototype

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AirDropContainer_Prototype.BP_AirDropContainer_Prototype_C.ExecuteUbergraph_BP_AirDropContainer_Prototype
// 0x0108 (0x0108 - 0x0000)
struct BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponentExtended*                CallFunc_SpawnSoundAtLocationExtended_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0050(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventSystem*                           CallFunc_GetEventSystem_ReturnValue;               // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        K2Node_DynamicCast_AsHuman_Character;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_EventSystem_C*                      K2Node_DynamicCast_AsBP_Event_System;              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENetRole                                      CallFunc_GetNetworkRole_ReturnValue;               // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype) == 0x000008, "Wrong alignment on BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype");
static_assert(sizeof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype) == 0x000108, "Wrong size on BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, EntryPoint) == 0x000000, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000014, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000020, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, CallFunc_SpawnSoundAtLocationExtended_ReturnValue) == 0x000028, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::CallFunc_SpawnSoundAtLocationExtended_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000030, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, K2Node_ComponentBoundEvent_OtherActor) == 0x000038, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, K2Node_ComponentBoundEvent_OtherComp) == 0x000040, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000048, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, K2Node_ComponentBoundEvent_bFromSweep) == 0x00004C, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, K2Node_ComponentBoundEvent_SweepResult) == 0x000050, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, CallFunc_GetEventSystem_ReturnValue) == 0x0000E0, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::CallFunc_GetEventSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, K2Node_DynamicCast_AsHuman_Character) == 0x0000E8, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::K2Node_DynamicCast_AsHuman_Character' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, K2Node_DynamicCast_AsBP_Event_System) == 0x0000F8, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::K2Node_DynamicCast_AsBP_Event_System' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, K2Node_DynamicCast_bSuccess_1) == 0x000100, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, CallFunc_GetNetworkRole_ReturnValue) == 0x000101, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::CallFunc_GetNetworkRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000102, "Member 'BP_AirDropContainer_Prototype_C_ExecuteUbergraph_BP_AirDropContainer_Prototype::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_AirDropContainer_Prototype.BP_AirDropContainer_Prototype_C.BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_AirDropContainer_Prototype_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_AirDropContainer_Prototype.BP_AirDropContainer_Prototype_C.UserConstructionScript
// 0x0002 (0x0002 - 0x0000)
struct BP_AirDropContainer_Prototype_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AirDropContainer_Prototype_C_UserConstructionScript) == 0x000001, "Wrong alignment on BP_AirDropContainer_Prototype_C_UserConstructionScript");
static_assert(sizeof(BP_AirDropContainer_Prototype_C_UserConstructionScript) == 0x000002, "Wrong size on BP_AirDropContainer_Prototype_C_UserConstructionScript");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'BP_AirDropContainer_Prototype_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AirDropContainer_Prototype_C_UserConstructionScript, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_AirDropContainer_Prototype_C_UserConstructionScript::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

