#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhoneDuel

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PhoneDuel.BP_PhoneDuel_C
// 0x0088 (0x02A8 - 0x0220)
class ABP_PhoneDuel_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InteractionItemComponent_C*         BP_InteractionItemComponent;                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Duel_Active;                                       // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_PhoneDuel_C*>                Other_Phones_On_Map;                               // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_PhoneDuel_C*                        Calling_Phone;                                     // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Sound_Timer;                                       // 0x0268(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Dial_Timer;                                        // 0x0270(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Max_Ringing_Time;                                  // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_C*                        Last_Interacting_Character;                        // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Last_Interacting_User_Id;                          // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_InteractionItemComponent_C*         InteractionItemComponent;                          // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PhoneDuelEventPresent;                             // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void GetCorrectDialSound(class USoundBase** Dial_Sound);
	void Can_Be_Player_Dueled(class ABP_Character_C* Character, bool* Can_Be_Dueled);
	void Start_Duel(class ABP_Character_C* Other_Character, bool Is_Initiator);
	void Stop_Ring_Other_Phones();
	void Ring_Other_Phones();
	void Find_Other_Phones();
	void ReceiveBeginPlay();
	void Start_Ring_Sound();
	void Start_Rnging(class ABP_PhoneDuel_C* Instigating_Phone);
	void Stop_Ringing();
	void Phone_Answered(class ABP_PhoneDuel_C* Phone_That_Answered);
	void Ring_Sound_Loop();
	void Stop_Ring_Sound();
	void Failed_To_be_Answered();
	void Successfully_Answered();
	void Reset_Phone();
	void Start_Duel_On_Phone(class ABP_Character_C* Other_Character, bool Is_Initiator);
	void Start_Dial_Sound();
	void Stop_Dial_Sound();
	void Dial_Sound_Loop();
	void Play_Start_Dial_Sound_On_Client(class ABP_Character_C* Character);
	void Cannot_Answer_Phone();
	void Remove_Bindings();
	void Create_Bindings();
	void Character_Left_Match(class AActor* Actor, EEndPlayReason EndPlayReason);
	void Character_Died(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, const struct FHitResult& HitResult);
	void Enable_Interactions(bool Enabled);
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void ExecuteUbergraph_BP_PhoneDuel(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PhoneDuel_C">();
	}
	static class ABP_PhoneDuel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PhoneDuel_C>();
	}
};
static_assert(alignof(ABP_PhoneDuel_C) == 0x000008, "Wrong alignment on ABP_PhoneDuel_C");
static_assert(sizeof(ABP_PhoneDuel_C) == 0x0002A8, "Wrong size on ABP_PhoneDuel_C");
static_assert(offsetof(ABP_PhoneDuel_C, UberGraphFrame) == 0x000220, "Member 'ABP_PhoneDuel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, BP_InteractionItemComponent) == 0x000228, "Member 'ABP_PhoneDuel_C::BP_InteractionItemComponent' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, Audio) == 0x000230, "Member 'ABP_PhoneDuel_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, StaticMesh) == 0x000238, "Member 'ABP_PhoneDuel_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_PhoneDuel_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, Duel_Active) == 0x000248, "Member 'ABP_PhoneDuel_C::Duel_Active' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, Other_Phones_On_Map) == 0x000250, "Member 'ABP_PhoneDuel_C::Other_Phones_On_Map' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, Calling_Phone) == 0x000260, "Member 'ABP_PhoneDuel_C::Calling_Phone' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, Sound_Timer) == 0x000268, "Member 'ABP_PhoneDuel_C::Sound_Timer' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, Dial_Timer) == 0x000270, "Member 'ABP_PhoneDuel_C::Dial_Timer' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, Max_Ringing_Time) == 0x000278, "Member 'ABP_PhoneDuel_C::Max_Ringing_Time' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, Last_Interacting_Character) == 0x000280, "Member 'ABP_PhoneDuel_C::Last_Interacting_Character' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, Last_Interacting_User_Id) == 0x000288, "Member 'ABP_PhoneDuel_C::Last_Interacting_User_Id' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, InteractionItemComponent) == 0x000298, "Member 'ABP_PhoneDuel_C::InteractionItemComponent' has a wrong offset!");
static_assert(offsetof(ABP_PhoneDuel_C, PhoneDuelEventPresent) == 0x0002A0, "Member 'ABP_PhoneDuel_C::PhoneDuelEventPresent' has a wrong offset!");

}
