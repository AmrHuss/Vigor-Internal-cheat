#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_LandMine_Location

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK::Params
{

// Function BP_ADM_LandMine_Location.BP_ADM_LandMine_Location_C.ExecuteUbergraph_BP_ADM_LandMine_Location
// 0x0004 (0x0004 - 0x0000)
struct BP_ADM_LandMine_Location_C_ExecuteUbergraph_BP_ADM_LandMine_Location final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ADM_LandMine_Location_C_ExecuteUbergraph_BP_ADM_LandMine_Location) == 0x000004, "Wrong alignment on BP_ADM_LandMine_Location_C_ExecuteUbergraph_BP_ADM_LandMine_Location");
static_assert(sizeof(BP_ADM_LandMine_Location_C_ExecuteUbergraph_BP_ADM_LandMine_Location) == 0x000004, "Wrong size on BP_ADM_LandMine_Location_C_ExecuteUbergraph_BP_ADM_LandMine_Location");
static_assert(offsetof(BP_ADM_LandMine_Location_C_ExecuteUbergraph_BP_ADM_LandMine_Location, EntryPoint) == 0x000000, "Member 'BP_ADM_LandMine_Location_C_ExecuteUbergraph_BP_ADM_LandMine_Location::EntryPoint' has a wrong offset!");

// Function BP_ADM_LandMine_Location.BP_ADM_LandMine_Location_C.UserConstructionScript
// 0x0208 (0x0208 - 0x0000)
struct BP_ADM_LandMine_Location_C_UserConstructionScript final
{
public:
	bool                                          TooCloseToAnotherMine;                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B[0x1];                                        // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0020(0x0010)(ConstParm, ReferenceParm)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FHitResult>                     CallFunc_SphereTraceMultiForObjects_OutHits;       // 0x0060(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceMultiForObjects_ReturnValue;   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_Array_Get_Item;                           // 0x0074(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_106[0x2];                                      // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_BreakHitResult_ShapeSurfaceType;          // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x3];                                      // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x015C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x017C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19A[0x2];                                      // 0x019A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x019C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue;    // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CA[0x6];                                      // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x01D0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E5[0x3];                                      // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadSoftReference_ReturnValue;            // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F2[0x6];                                      // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh;                  // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ADM_LandMine_Location_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_ADM_LandMine_Location_C_UserConstructionScript");
static_assert(sizeof(BP_ADM_LandMine_Location_C_UserConstructionScript) == 0x000208, "Wrong size on BP_ADM_LandMine_Location_C_UserConstructionScript");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, TooCloseToAnotherMine) == 0x000000, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::TooCloseToAnotherMine' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, Temp_bool_True_if_break_was_hit_Variable) == 0x000008, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, Temp_bool_Variable) == 0x00000A, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, Temp_object_Variable) == 0x000020, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, Temp_struct_Variable) == 0x000030, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000050, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_SphereTraceMultiForObjects_OutHits) == 0x000060, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_SphereTraceMultiForObjects_OutHits' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_SphereTraceMultiForObjects_ReturnValue) == 0x000070, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_SphereTraceMultiForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000074, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000100, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_bBlockingHit) == 0x000104, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_bInitialOverlap) == 0x000105, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_Time) == 0x000108, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_Distance) == 0x00010C, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_Location) == 0x000110, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_ImpactPoint) == 0x00011C, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_Normal) == 0x000128, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_ImpactNormal) == 0x000134, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_PhysMat) == 0x000140, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_HitActor) == 0x000148, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_HitComponent) == 0x000150, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_ShapeSurfaceType) == 0x000158, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_ShapeSurfaceType' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_HitBoneName) == 0x00015C, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_HitItem) == 0x000164, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_ElementIndex) == 0x000168, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_FaceIndex) == 0x00016C, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_TraceStart) == 0x000170, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BreakHitResult_TraceEnd) == 0x00017C, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000188, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_GetObjectClass_ReturnValue) == 0x000190, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue) == 0x000198, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000199, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, Temp_struct_Variable_1) == 0x00019C, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0001B0, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, K2Node_Select_Default) == 0x0001B8, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_IsPackagedForDistribution_ReturnValue) == 0x0001C8, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_IsPackagedForDistribution_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001C9, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_GetMaterials_ReturnValue) == 0x0001D0, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue_1) == 0x0001E0, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001E4, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_LoadSoftReference_ReturnValue) == 0x0001E8, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_LoadSoftReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0001F0, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x0001F1, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, K2Node_DynamicCast_AsStatic_Mesh) == 0x0001F8, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::K2Node_DynamicCast_AsStatic_Mesh' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000200, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000201, "Member 'BP_ADM_LandMine_Location_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function BP_ADM_LandMine_Location.BP_ADM_LandMine_Location_C.Place on the Ground
// 0x01E8 (0x01E8 - 0x0000)
struct BP_ADM_LandMine_Location_C_Place_on_the_Ground final
{
public:
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0000(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0038(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C7[0x1];                                       // 0x00C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_BreakHitResult_ShapeSurfaceType;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x011C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromZ_ReturnValue;                 // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0154(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ADM_LandMine_Location_C_Place_on_the_Ground) == 0x000008, "Wrong alignment on BP_ADM_LandMine_Location_C_Place_on_the_Ground");
static_assert(sizeof(BP_ADM_LandMine_Location_C_Place_on_the_Ground) == 0x0001E8, "Wrong size on BP_ADM_LandMine_Location_C_Place_on_the_Ground");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, Temp_object_Variable) == 0x000000, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakVector_X) == 0x00001C, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakVector_Y) == 0x000020, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakVector_Z) == 0x000024, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_MakeVector_ReturnValue) == 0x00002C, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_LineTraceSingle_OutHit) == 0x000038, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_LineTraceSingle_ReturnValue) == 0x0000C4, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_bBlockingHit) == 0x0000C5, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000C6, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_Time) == 0x0000C8, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_Distance) == 0x0000CC, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_Location) == 0x0000D0, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_ImpactPoint) == 0x0000DC, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_Normal) == 0x0000E8, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_ImpactNormal) == 0x0000F4, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_PhysMat) == 0x000100, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_HitActor) == 0x000108, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_HitComponent) == 0x000110, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_ShapeSurfaceType) == 0x000118, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_ShapeSurfaceType' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_HitBoneName) == 0x00011C, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_HitItem) == 0x000124, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_ElementIndex) == 0x000128, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_FaceIndex) == 0x00012C, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_TraceStart) == 0x000130, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_BreakHitResult_TraceEnd) == 0x00013C, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_MakeRotFromZ_ReturnValue) == 0x000148, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_MakeRotFromZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000154, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0001E0, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LandMine_Location_C_Place_on_the_Ground, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0001E1, "Member 'BP_ADM_LandMine_Location_C_Place_on_the_Ground::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

}

