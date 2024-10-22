#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_Firework_Object

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_TC_Firework_Object.BP_TC_Firework_Object_C.ExecuteUbergraph_BP_TC_Firework_Object
// 0x0060 (0x0060 - 0x0000)
struct BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FireworkEffect_C*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object) == 0x000010, "Wrong alignment on BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object");
static_assert(sizeof(BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object) == 0x000060, "Wrong size on BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object");
static_assert(offsetof(BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object, EntryPoint) == 0x000000, "Member 'BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000004, "Member 'BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object, CallFunc_FinishSpawningActor_ReturnValue) == 0x000048, "Member 'BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000050, "Member 'BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object, Temp_int_Variable) == 0x000058, "Member 'BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object, CallFunc_RandomFloatInRange_ReturnValue) == 0x00005C, "Member 'BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");

}

