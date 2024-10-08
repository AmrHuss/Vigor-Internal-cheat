#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_Base

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C
// 0x0160 (0x0380 - 0x0220)
class ABP_ChallengeCondition_Base_C : public AChallengeCondition
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Slot_ID;                                           // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Slot_Category;                                     // 0x0230(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Challenge_Name;                                    // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FChallengeList                         Challenge_Settings;                                // 0x0248(0x0100)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	int32                                         Current_Local_Progress;                            // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Current_Cloud_Progress;                            // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Progress_Updated;                                  // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Cloud_Operation_In_Progress;                       // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Request_Postponed;                                 // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PostponedHandled;                                  // 0x0362(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_363[0x5];                                      // 0x0363(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CloudProgressBuffer;                               // 0x0368(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         CloudProgressRefreshRate;                          // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CloudProgressBufferFlush;                          // 0x0374(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_375[0x3];                                      // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CloudProgressBufferMode;                           // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Progress_Updated__DelegateSignature(int32 New_Progress);
	void ExecuteUbergraph_BP_ChallengeCondition_Base(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SendPostponedChallenges();
	void Get_Maximum_Progress(int32* Maximum_Progress);
	void Get_Current_Progress(int32* Current_Progress);
	void Get_Title_Text(class FText* Title_Text);
	void Get_Condition_Text(class FText* Condition_Text);
	void Get_Description_Text(class FText* Description_Text);
	void Send_Progress_to_Cloud();
	void BufferProgressToCloud();
	void Reply_to_Progress_from_Cloud(bool Success, int32 New_Cloud_Progress);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChallengeCondition_Base_C">();
	}
	static class ABP_ChallengeCondition_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ChallengeCondition_Base_C>();
	}
};
static_assert(alignof(ABP_ChallengeCondition_Base_C) == 0x000008, "Wrong alignment on ABP_ChallengeCondition_Base_C");
static_assert(sizeof(ABP_ChallengeCondition_Base_C) == 0x000380, "Wrong size on ABP_ChallengeCondition_Base_C");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, UberGraphFrame) == 0x000220, "Member 'ABP_ChallengeCondition_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, Slot_ID) == 0x000228, "Member 'ABP_ChallengeCondition_Base_C::Slot_ID' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, Slot_Category) == 0x000230, "Member 'ABP_ChallengeCondition_Base_C::Slot_Category' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, Challenge_Name) == 0x000240, "Member 'ABP_ChallengeCondition_Base_C::Challenge_Name' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, Challenge_Settings) == 0x000248, "Member 'ABP_ChallengeCondition_Base_C::Challenge_Settings' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, Current_Local_Progress) == 0x000348, "Member 'ABP_ChallengeCondition_Base_C::Current_Local_Progress' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, Current_Cloud_Progress) == 0x00034C, "Member 'ABP_ChallengeCondition_Base_C::Current_Cloud_Progress' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, Progress_Updated) == 0x000350, "Member 'ABP_ChallengeCondition_Base_C::Progress_Updated' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, Cloud_Operation_In_Progress) == 0x000360, "Member 'ABP_ChallengeCondition_Base_C::Cloud_Operation_In_Progress' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, Request_Postponed) == 0x000361, "Member 'ABP_ChallengeCondition_Base_C::Request_Postponed' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, PostponedHandled) == 0x000362, "Member 'ABP_ChallengeCondition_Base_C::PostponedHandled' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, CloudProgressBuffer) == 0x000368, "Member 'ABP_ChallengeCondition_Base_C::CloudProgressBuffer' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, CloudProgressRefreshRate) == 0x000370, "Member 'ABP_ChallengeCondition_Base_C::CloudProgressRefreshRate' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, CloudProgressBufferFlush) == 0x000374, "Member 'ABP_ChallengeCondition_Base_C::CloudProgressBufferFlush' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Base_C, CloudProgressBufferMode) == 0x000378, "Member 'ABP_ChallengeCondition_Base_C::CloudProgressBufferMode' has a wrong offset!");

}

