#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_IsEnemyCloseEnoughToShoot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BTDecorator_IsEnemyCloseEnoughToShoot.BTDecorator_IsEnemyCloseEnoughToShoot_C.ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot
// 0x0028 (0x0028 - 0x0000)
struct BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot) == 0x000008, "Wrong alignment on BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot");
static_assert(sizeof(BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot) == 0x000028, "Wrong size on BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot, EntryPoint) == 0x000000, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_ExecuteUbergraph_BTDecorator_IsEnemyCloseEnoughToShoot::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BTDecorator_IsEnemyCloseEnoughToShoot.BTDecorator_IsEnemyCloseEnoughToShoot_C.PerformConditionCheckAI
// 0x0060 (0x0060 - 0x0000)
struct BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_TutorialAI_Character_C*             K2Node_DynamicCast_AsBP_Tutorial_AI_Character;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnyAICloseEnoughToEnemy_Any_CharacterCloseEnoughToEnemy; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;     // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Square_ReturnValue;                       // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetBlackboardValueAsObject_ReturnValue;   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        K2Node_DynamicCast_AsHuman_Character;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_DistanceSquared_ReturnValue;       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI");
static_assert(sizeof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI) == 0x000060, "Wrong size on BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, K2Node_DynamicCast_AsBP_Tutorial_AI_Character) == 0x000018, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::K2Node_DynamicCast_AsBP_Tutorial_AI_Character' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000024, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, CallFunc_IsAnyAICloseEnoughToEnemy_Any_CharacterCloseEnoughToEnemy) == 0x000030, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::CallFunc_IsAnyAICloseEnoughToEnemy_Any_CharacterCloseEnoughToEnemy' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x000031, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, CallFunc_K2_IsTimerActiveHandle_ReturnValue_1) == 0x000032, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::CallFunc_K2_IsTimerActiveHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, CallFunc_Square_ReturnValue) == 0x000034, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::CallFunc_Square_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, CallFunc_GetBlackboardValueAsObject_ReturnValue) == 0x000038, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::CallFunc_GetBlackboardValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, K2Node_DynamicCast_AsHuman_Character) == 0x000040, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::K2Node_DynamicCast_AsHuman_Character' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00004C, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, CallFunc_Vector_DistanceSquared_ReturnValue) == 0x000058, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::CallFunc_Vector_DistanceSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, CallFunc_Less_FloatFloat_ReturnValue) == 0x00005C, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x00005D, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_PerformConditionCheckAI::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function BTDecorator_IsEnemyCloseEnoughToShoot.BTDecorator_IsEnemyCloseEnoughToShoot_C.IsAnyAICloseEnoughToEnemy
// 0x0030 (0x0030 - 0x0000)
struct BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy final
{
public:
	bool                                          Any_CharacterCloseEnoughToEnemy;                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_TutorialAI_Character_C*>     CallFunc_GetAllActorsOfClass_OutActors;            // 0x0010(0x0010)(ReferenceParm)
	class ABP_TutorialAI_Character_C*             CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy) == 0x000008, "Wrong alignment on BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy");
static_assert(sizeof(BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy) == 0x000030, "Wrong size on BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy, Any_CharacterCloseEnoughToEnemy) == 0x000000, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy::Any_CharacterCloseEnoughToEnemy' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy, CallFunc_Array_Get_Item) == 0x000020, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BTDecorator_IsEnemyCloseEnoughToShoot_C_IsAnyAICloseEnoughToEnemy::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

