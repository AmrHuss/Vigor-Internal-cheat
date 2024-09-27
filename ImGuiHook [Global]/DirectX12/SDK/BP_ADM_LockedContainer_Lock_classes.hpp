#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_LockedContainer_Lock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ADM_LockedContainer_Lock.BP_ADM_LockedContainer_Lock_C
// 0x0088 (0x02A8 - 0x0220)
class ABP_ADM_LockedContainer_Lock_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CombinationLock_Component_C*        BP_CombinationLock_Component;                      // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_Tail;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponentExtended*                Audio;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractionItemComponent_C*         BP_InteractionItemComponent;                       // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ADM_LockedContainer_GMComponent_C*  Owning_GMComponnent;                               // 0x0260(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Lock_is_active;                                    // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_269[0x7];                                      // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UObject>                 Lock_sound_broken;                                 // 0x0270(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         Lock_alarm_duration;                               // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_alarm_duration;                              // 0x02A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ADM_LockedContainer_Lock(int32 EntryPoint);
	void SetLockMesh(TSoftObjectPtr<class UObject> SM_SoftRef);
	void OnLockSolved(bool ByDamage);
	void ProccessExplosion(const struct FVector& Location, float ExplosionRadius, class AController* InstigatorController, class AActor* DamageCauser, bool DamagingExplosion, float EnviromentDamageMultiplier);
	void Generate_digits_in_the_lock(int32 Ammount_of_digits_in_code);
	void Lock_alarm_duration_over();
	void Trap_SetStaticMesh(TSoftObjectPtr<class UStaticMesh> SoftMesh);
	void Load_soft_sound_and_play(TSoftObjectPtr<class UObject> Soft_sound, float Fade_in_duration);
	void Lock_got_shot();
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void OnLoaded_303A9E7341428F48F05BE78A8CF2AD35(class UObject* Loaded);
	void OnLoaded_303A9E7341428F48F05BE78A6556E323(class UObject* Loaded);
	void Lock_play_effects_broken();
	void Lock_play_effects_unlocked();

	void GetIsValidTypeOfDamage(class AActor* DamageCauser, bool* IsValid) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ADM_LockedContainer_Lock_C">();
	}
	static class ABP_ADM_LockedContainer_Lock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ADM_LockedContainer_Lock_C>();
	}
};
static_assert(alignof(ABP_ADM_LockedContainer_Lock_C) == 0x000008, "Wrong alignment on ABP_ADM_LockedContainer_Lock_C");
static_assert(sizeof(ABP_ADM_LockedContainer_Lock_C) == 0x0002A8, "Wrong size on ABP_ADM_LockedContainer_Lock_C");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, UberGraphFrame) == 0x000220, "Member 'ABP_ADM_LockedContainer_Lock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, Box) == 0x000228, "Member 'ABP_ADM_LockedContainer_Lock_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, BP_CombinationLock_Component) == 0x000230, "Member 'ABP_ADM_LockedContainer_Lock_C::BP_CombinationLock_Component' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, Audio_Tail) == 0x000238, "Member 'ABP_ADM_LockedContainer_Lock_C::Audio_Tail' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, Audio) == 0x000240, "Member 'ABP_ADM_LockedContainer_Lock_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, StaticMesh) == 0x000248, "Member 'ABP_ADM_LockedContainer_Lock_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, BP_InteractionItemComponent) == 0x000250, "Member 'ABP_ADM_LockedContainer_Lock_C::BP_InteractionItemComponent' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, DefaultSceneRoot) == 0x000258, "Member 'ABP_ADM_LockedContainer_Lock_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, Owning_GMComponnent) == 0x000260, "Member 'ABP_ADM_LockedContainer_Lock_C::Owning_GMComponnent' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, Lock_is_active) == 0x000268, "Member 'ABP_ADM_LockedContainer_Lock_C::Lock_is_active' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, Lock_sound_broken) == 0x000270, "Member 'ABP_ADM_LockedContainer_Lock_C::Lock_sound_broken' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, Lock_alarm_duration) == 0x000298, "Member 'ABP_ADM_LockedContainer_Lock_C::Lock_alarm_duration' has a wrong offset!");
static_assert(offsetof(ABP_ADM_LockedContainer_Lock_C, Timer_alarm_duration) == 0x0002A0, "Member 'ABP_ADM_LockedContainer_Lock_C::Timer_alarm_duration' has a wrong offset!");

}
