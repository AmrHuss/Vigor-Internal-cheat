#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MortarStrikeShell

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MortarStrikeShell.BP_MortarStrikeShell_C
// 0x0040 (0x03D8 - 0x0398)
class ABP_MortarStrikeShell_C final : public AItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULethalItemComponent*                   LethalItem;                                        // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ExplosionComponent_C*               BP_ExplosionComponent;                             // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Explosion_Damage;                                  // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Explosion_Radius;                                  // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_PlayerState_C*                      Owning_Player_State;                               // 0x03C8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Owning_Player_State_ID;                            // 0x03D0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EDamageType                                   DamageType;                                        // 0x03D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MortarStrikeShell(int32 EntryPoint);
	void OnExplosionCompleted(const TArray<struct FExplosionEffect>& ExplosionEffects);
	void Mortar_Collided_With_Ground();
	void Play_Mortar_Shell_Drop_Sound();
	void Play_Explosion_Sound();
	void Remove_audio_mix_modifier();
	void Create_Explosion_Effect();
	void Explode_at_Last_Location();
	void ReceiveBeginPlay();
	void Get_Instigating_Character(class AHumanCharacter** Human_Character);
	void WasActorHit(class AActor* Actor, bool* WasHit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MortarStrikeShell_C">();
	}
	static class ABP_MortarStrikeShell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MortarStrikeShell_C>();
	}
};
static_assert(alignof(ABP_MortarStrikeShell_C) == 0x000008, "Wrong alignment on ABP_MortarStrikeShell_C");
static_assert(sizeof(ABP_MortarStrikeShell_C) == 0x0003D8, "Wrong size on ABP_MortarStrikeShell_C");
static_assert(offsetof(ABP_MortarStrikeShell_C, UberGraphFrame) == 0x000398, "Member 'ABP_MortarStrikeShell_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MortarStrikeShell_C, LethalItem) == 0x0003A0, "Member 'ABP_MortarStrikeShell_C::LethalItem' has a wrong offset!");
static_assert(offsetof(ABP_MortarStrikeShell_C, BP_ExplosionComponent) == 0x0003A8, "Member 'ABP_MortarStrikeShell_C::BP_ExplosionComponent' has a wrong offset!");
static_assert(offsetof(ABP_MortarStrikeShell_C, Audio) == 0x0003B0, "Member 'ABP_MortarStrikeShell_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_MortarStrikeShell_C, DefaultSceneRoot) == 0x0003B8, "Member 'ABP_MortarStrikeShell_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MortarStrikeShell_C, Explosion_Damage) == 0x0003C0, "Member 'ABP_MortarStrikeShell_C::Explosion_Damage' has a wrong offset!");
static_assert(offsetof(ABP_MortarStrikeShell_C, Explosion_Radius) == 0x0003C4, "Member 'ABP_MortarStrikeShell_C::Explosion_Radius' has a wrong offset!");
static_assert(offsetof(ABP_MortarStrikeShell_C, Owning_Player_State) == 0x0003C8, "Member 'ABP_MortarStrikeShell_C::Owning_Player_State' has a wrong offset!");
static_assert(offsetof(ABP_MortarStrikeShell_C, Owning_Player_State_ID) == 0x0003D0, "Member 'ABP_MortarStrikeShell_C::Owning_Player_State_ID' has a wrong offset!");
static_assert(offsetof(ABP_MortarStrikeShell_C, DamageType) == 0x0003D4, "Member 'ABP_MortarStrikeShell_C::DamageType' has a wrong offset!");

}

