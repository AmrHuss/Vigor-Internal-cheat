#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_IsTargetCloserThan

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTDecorator_IsTargetCloserThan.BTDecorator_IsTargetCloserThan_C.PerformConditionCheck
// 0x0010 (0x0010 - 0x0000)
struct BTDecorator_IsTargetCloserThan_C_PerformConditionCheck final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheck) == 0x000008, "Wrong alignment on BTDecorator_IsTargetCloserThan_C_PerformConditionCheck");
static_assert(sizeof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheck) == 0x000010, "Wrong size on BTDecorator_IsTargetCloserThan_C_PerformConditionCheck");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheck, OwnerActor) == 0x000000, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheck::OwnerActor' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheck, ReturnValue) == 0x000008, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheck::ReturnValue' has a wrong offset!");

// Function BTDecorator_IsTargetCloserThan.BTDecorator_IsTargetCloserThan_C.PerformConditionCheckAI
// 0x0050 (0x0050 - 0x0000)
struct BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue_1;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI");
static_assert(sizeof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI) == 0x000050, "Wrong size on BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000020, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, CallFunc_Vector_Distance_ReturnValue) == 0x00002C, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000030, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000038, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00003C, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, CallFunc_Vector_Distance_ReturnValue_1) == 0x000048, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::CallFunc_Vector_Distance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x00004C, "Member 'BTDecorator_IsTargetCloserThan_C_PerformConditionCheckAI::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");

}

