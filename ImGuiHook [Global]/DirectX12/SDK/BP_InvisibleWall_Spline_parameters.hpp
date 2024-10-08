#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InvisibleWall_Spline

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_InvisibleWall_Spline.BP_InvisibleWall_Spline_C.ExecuteUbergraph_BP_InvisibleWall_Spline
// 0x00B8 (0x00B8 - 0x0000)
struct BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline) == 0x000008, "Wrong alignment on BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline");
static_assert(sizeof(BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline) == 0x0000B8, "Wrong size on BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline");
static_assert(offsetof(BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline, EntryPoint) == 0x000000, "Member 'BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_InvisibleWall_Spline_C_ExecuteUbergraph_BP_InvisibleWall_Spline::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");

// Function BP_InvisibleWall_Spline.BP_InvisibleWall_Spline_C.BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_InvisibleWall_Spline_C_BndEvt__Spline1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_InvisibleWall_Spline.BP_InvisibleWall_Spline_C.UserConstructionScript
// 0x00D0 (0x00D0 - 0x0000)
struct BP_InvisibleWall_Spline_C_UserConstructionScript final
{
public:
	struct FTransform                             Temp_struct_Variable;                              // 0x0000(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Spline_Mesh_C*                      K2Node_DynamicCast_AsBP_Spline_Mesh;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransformAtSplinePoint_ReturnValue;    // 0x0060(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetTransformAtSplinePoint_ReturnValue_1;  // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InvisibleWall_Spline_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_InvisibleWall_Spline_C_UserConstructionScript");
static_assert(sizeof(BP_InvisibleWall_Spline_C_UserConstructionScript) == 0x0000D0, "Wrong size on BP_InvisibleWall_Spline_C_UserConstructionScript");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, Temp_struct_Variable) == 0x000000, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, Temp_int_Variable) == 0x000030, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000038, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, K2Node_DynamicCast_AsBP_Spline_Mesh) == 0x000048, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::K2Node_DynamicCast_AsBP_Spline_Mesh' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, CallFunc_MakeVector2D_ReturnValue) == 0x000054, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, CallFunc_GetTransformAtSplinePoint_ReturnValue) == 0x000060, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::CallFunc_GetTransformAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, CallFunc_GetTransformAtSplinePoint_ReturnValue_1) == 0x000090, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::CallFunc_GetTransformAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x0000C0, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000C4, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C8, "Member 'BP_InvisibleWall_Spline_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_InvisibleWall_Spline.BP_InvisibleWall_Spline_C.SetSplineMesh
// 0x0110 (0x0110 - 0x0000)
struct BP_InvisibleWall_Spline_C_SetSplineMesh final
{
public:
	class ABP_Spline_Mesh_C*                      NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             NewParam1;                                         // 0x0010(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FTransform                             NewParam2;                                         // 0x0040(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InvisibleWall_Spline_C_SetSplineMesh) == 0x000010, "Wrong alignment on BP_InvisibleWall_Spline_C_SetSplineMesh");
static_assert(sizeof(BP_InvisibleWall_Spline_C_SetSplineMesh) == 0x000110, "Wrong size on BP_InvisibleWall_Spline_C_SetSplineMesh");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, NewParam) == 0x000000, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::NewParam' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, NewParam1) == 0x000010, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::NewParam1' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, NewParam2) == 0x000040, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::NewParam2' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_BreakTransform_Location) == 0x000070, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_BreakTransform_Rotation) == 0x00007C, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_BreakTransform_Scale) == 0x000088, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_BreakTransform_Location_1) == 0x000094, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_BreakTransform_Rotation_1) == 0x0000A0, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_BreakTransform_Scale_1) == 0x0000AC, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_GetForwardVector_ReturnValue) == 0x0000B8, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_GetForwardVector_ReturnValue_1) == 0x0000C4, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000D0, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0000DC, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000E8, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_VSize_ReturnValue) == 0x0000F4, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000F8, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InvisibleWall_Spline_C_SetSplineMesh, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000104, "Member 'BP_InvisibleWall_Spline_C_SetSplineMesh::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");

}

