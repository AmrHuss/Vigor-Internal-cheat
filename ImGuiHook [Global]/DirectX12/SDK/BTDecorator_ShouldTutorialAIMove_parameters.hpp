#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_ShouldTutorialAIMove

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function BTDecorator_ShouldTutorialAIMove.BTDecorator_ShouldTutorialAIMove_C.PerformConditionCheckAI
// 0x0058 (0x0058 - 0x0000)
struct BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_TutorialAI_Character_C*             K2Node_DynamicCast_AsBP_Tutorial_AI_Character;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Square_ReturnValue;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Square_ReturnValue_1;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_DistanceSquared_ReturnValue;       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI");
static_assert(sizeof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI) == 0x000058, "Wrong size on BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, K2Node_DynamicCast_AsBP_Tutorial_AI_Character) == 0x000018, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::K2Node_DynamicCast_AsBP_Tutorial_AI_Character' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, CallFunc_Square_ReturnValue) == 0x000024, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::CallFunc_Square_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000038, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, CallFunc_Square_ReturnValue_1) == 0x000040, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::CallFunc_Square_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000044, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, CallFunc_Vector_DistanceSquared_ReturnValue) == 0x000050, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::CallFunc_Vector_DistanceSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, CallFunc_Less_FloatFloat_ReturnValue) == 0x000054, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000055, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI, CallFunc_BooleanOR_ReturnValue) == 0x000056, "Member 'BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BTDecorator_ShouldTutorialAIMove.BTDecorator_ShouldTutorialAIMove_C.ShortDistance
// 0x0008 (0x0008 - 0x0000)
struct BTDecorator_ShouldTutorialAIMove_C_ShortDistance final
{
public:
	float                                         DistanceSquared;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldMove;                                        // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTDecorator_ShouldTutorialAIMove_C_ShortDistance) == 0x000004, "Wrong alignment on BTDecorator_ShouldTutorialAIMove_C_ShortDistance");
static_assert(sizeof(BTDecorator_ShouldTutorialAIMove_C_ShortDistance) == 0x000008, "Wrong size on BTDecorator_ShouldTutorialAIMove_C_ShortDistance");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_ShortDistance, DistanceSquared) == 0x000000, "Member 'BTDecorator_ShouldTutorialAIMove_C_ShortDistance::DistanceSquared' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_ShortDistance, ShouldMove) == 0x000004, "Member 'BTDecorator_ShouldTutorialAIMove_C_ShortDistance::ShouldMove' has a wrong offset!");

// Function BTDecorator_ShouldTutorialAIMove.BTDecorator_ShouldTutorialAIMove_C.MediumDistance
// 0x0001 (0x0001 - 0x0000)
struct BTDecorator_ShouldTutorialAIMove_C_MediumDistance final
{
public:
	bool                                          ShouldMove;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTDecorator_ShouldTutorialAIMove_C_MediumDistance) == 0x000001, "Wrong alignment on BTDecorator_ShouldTutorialAIMove_C_MediumDistance");
static_assert(sizeof(BTDecorator_ShouldTutorialAIMove_C_MediumDistance) == 0x000001, "Wrong size on BTDecorator_ShouldTutorialAIMove_C_MediumDistance");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_MediumDistance, ShouldMove) == 0x000000, "Member 'BTDecorator_ShouldTutorialAIMove_C_MediumDistance::ShouldMove' has a wrong offset!");

// Function BTDecorator_ShouldTutorialAIMove.BTDecorator_ShouldTutorialAIMove_C.FarDistance
// 0x0018 (0x0018 - 0x0000)
struct BTDecorator_ShouldTutorialAIMove_C_FarDistance final
{
public:
	class ABP_TutorialAI_Character_C*             AI;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EnemyLocation;                                     // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldMove;                                        // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EStance                                       CallFunc_GetStance_ReturnValue;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTDecorator_ShouldTutorialAIMove_C_FarDistance) == 0x000008, "Wrong alignment on BTDecorator_ShouldTutorialAIMove_C_FarDistance");
static_assert(sizeof(BTDecorator_ShouldTutorialAIMove_C_FarDistance) == 0x000018, "Wrong size on BTDecorator_ShouldTutorialAIMove_C_FarDistance");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_FarDistance, AI) == 0x000000, "Member 'BTDecorator_ShouldTutorialAIMove_C_FarDistance::AI' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_FarDistance, EnemyLocation) == 0x000008, "Member 'BTDecorator_ShouldTutorialAIMove_C_FarDistance::EnemyLocation' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_FarDistance, ShouldMove) == 0x000014, "Member 'BTDecorator_ShouldTutorialAIMove_C_FarDistance::ShouldMove' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_FarDistance, CallFunc_GetStance_ReturnValue) == 0x000015, "Member 'BTDecorator_ShouldTutorialAIMove_C_FarDistance::CallFunc_GetStance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_ShouldTutorialAIMove_C_FarDistance, K2Node_SwitchEnum_CmpSuccess) == 0x000016, "Member 'BTDecorator_ShouldTutorialAIMove_C_FarDistance::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

