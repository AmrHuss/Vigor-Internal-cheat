#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhoneDuelComponent

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PhoneDuelComponent.BP_PhoneDuelComponent_C
// 0x0070 (0x0120 - 0x00B0)
class UBP_PhoneDuelComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Character_C*                        Character_To_Track;                                // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Update_Marker_Timer;                               // 0x00C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Update_Character_Cooldown;                         // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TrackedPlayerMarkerTag;                            // 0x00CC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Duel_Ended;                                        // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         Blink_Duration;                                    // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Hide_Marker_Timer;                                 // 0x00F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Initiator;                                      // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OwningCharacterAnalyticsID;                        // 0x0100(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 TrackedCharacterAnalyticsID;                       // 0x0110(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Enable_Phones(bool Enabled);
	void Tracked_Character_Died(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, const struct FHitResult& HitResult);
	void Assign_Character(class ABP_Character_C* Character);
	void Blink_Character_Position();
	void End_Duel();
	void Owning_Player_Died(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, const struct FHitResult& HitResult);
	void Play_Sound_On_Client();
	void ReceiveBeginPlay();
	void Hide_Marker();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Dueled_Character_Left_Match();
	void ExecuteUbergraph_BP_PhoneDuelComponent(int32 EntryPoint);
	void Duel_Ended__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PhoneDuelComponent_C">();
	}
	static class UBP_PhoneDuelComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PhoneDuelComponent_C>();
	}
};
static_assert(alignof(UBP_PhoneDuelComponent_C) == 0x000008, "Wrong alignment on UBP_PhoneDuelComponent_C");
static_assert(sizeof(UBP_PhoneDuelComponent_C) == 0x000120, "Wrong size on UBP_PhoneDuelComponent_C");
static_assert(offsetof(UBP_PhoneDuelComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_PhoneDuelComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PhoneDuelComponent_C, Character_To_Track) == 0x0000B8, "Member 'UBP_PhoneDuelComponent_C::Character_To_Track' has a wrong offset!");
static_assert(offsetof(UBP_PhoneDuelComponent_C, Update_Marker_Timer) == 0x0000C0, "Member 'UBP_PhoneDuelComponent_C::Update_Marker_Timer' has a wrong offset!");
static_assert(offsetof(UBP_PhoneDuelComponent_C, Update_Character_Cooldown) == 0x0000C8, "Member 'UBP_PhoneDuelComponent_C::Update_Character_Cooldown' has a wrong offset!");
static_assert(offsetof(UBP_PhoneDuelComponent_C, TrackedPlayerMarkerTag) == 0x0000CC, "Member 'UBP_PhoneDuelComponent_C::TrackedPlayerMarkerTag' has a wrong offset!");
static_assert(offsetof(UBP_PhoneDuelComponent_C, Duel_Ended) == 0x0000D8, "Member 'UBP_PhoneDuelComponent_C::Duel_Ended' has a wrong offset!");
static_assert(offsetof(UBP_PhoneDuelComponent_C, Blink_Duration) == 0x0000E8, "Member 'UBP_PhoneDuelComponent_C::Blink_Duration' has a wrong offset!");
static_assert(offsetof(UBP_PhoneDuelComponent_C, Hide_Marker_Timer) == 0x0000F0, "Member 'UBP_PhoneDuelComponent_C::Hide_Marker_Timer' has a wrong offset!");
static_assert(offsetof(UBP_PhoneDuelComponent_C, Is_Initiator) == 0x0000F8, "Member 'UBP_PhoneDuelComponent_C::Is_Initiator' has a wrong offset!");
static_assert(offsetof(UBP_PhoneDuelComponent_C, OwningCharacterAnalyticsID) == 0x000100, "Member 'UBP_PhoneDuelComponent_C::OwningCharacterAnalyticsID' has a wrong offset!");
static_assert(offsetof(UBP_PhoneDuelComponent_C, TrackedCharacterAnalyticsID) == 0x000110, "Member 'UBP_PhoneDuelComponent_C::TrackedCharacterAnalyticsID' has a wrong offset!");

}
