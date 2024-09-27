#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorldSpectator

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WorldSpectator.BP_WorldSpectator_C
// 0x00B0 (0x0490 - 0x03E0)
class ABP_WorldSpectator_C final : public AFlameSpectatorPawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpectatorSpringArmComponent*           SpectatorSpringArm;                                // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AbientAudio;                                       // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  RadiationPostProcess;                              // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         AimRotationMultiplier;                             // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanLeaveMatch;                                     // 0x041C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          Is_Current_Target_Interacting;                     // 0x041D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Current_Target_Looting;                         // 0x041E(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41F[0x1];                                      // 0x041F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_Character_Matches_C*>        AvailableCharactersToSpectate;                     // 0x0420(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         PlayersSpectated;                                  // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_434[0x4];                                      // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        CurrentSpectatingPlayer;                           // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              DateSpectatingStarted;                             // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              DateSpectatingCurrentPlayerStarted;                // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Smoothness;                                        // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_454[0x4];                                      // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUniformComponent*                      UniformComponent;                                  // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_SpectatorFrame_C*                   Spectator_UI;                                      // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                      Current_Target_Player_State;                       // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Last_Spectator_Target_Analytics_ID;                // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_RadiationWave_C*                    RadiationWave;                                     // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputMode                                    LastInputMode;                                     // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_WorldSpectator(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void TargetChanged();
	void OnServerTargetChanged();
	void Cycle_Spectator(bool Next_Player);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SpectateTargetBecameTeamKiller(class AHumanCharacter* Killer);
	void SpectateTargetBecameThreat(class AHumanCharacter* Killer);
	void ReceiveBeginPlay();
	void OnTargetChanged();
	void ReceiveUnpossessed(class AController* OldController);
	void Ended_Spectating_Current_Player();
	void Stopped_Spectating();
	void Started_Spectating();
	void StartSmoothMovement(const struct FVector& OldLocation, const struct FVector& NewLocation);
	void UpdateSmoothMovement(float DT);
	void Debug_Print(float Duration, const struct FLinearColor& TextColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WorldSpectator_C">();
	}
	static class ABP_WorldSpectator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WorldSpectator_C>();
	}
};
static_assert(alignof(ABP_WorldSpectator_C) == 0x000010, "Wrong alignment on ABP_WorldSpectator_C");
static_assert(sizeof(ABP_WorldSpectator_C) == 0x000490, "Wrong size on ABP_WorldSpectator_C");
static_assert(offsetof(ABP_WorldSpectator_C, UberGraphFrame) == 0x0003E0, "Member 'ABP_WorldSpectator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, SpectatorSpringArm) == 0x0003E8, "Member 'ABP_WorldSpectator_C::SpectatorSpringArm' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, SpringArm) == 0x0003F0, "Member 'ABP_WorldSpectator_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, Camera) == 0x0003F8, "Member 'ABP_WorldSpectator_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, AbientAudio) == 0x000400, "Member 'ABP_WorldSpectator_C::AbientAudio' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, RadiationPostProcess) == 0x000408, "Member 'ABP_WorldSpectator_C::RadiationPostProcess' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, Arrow) == 0x000410, "Member 'ABP_WorldSpectator_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, AimRotationMultiplier) == 0x000418, "Member 'ABP_WorldSpectator_C::AimRotationMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, CanLeaveMatch) == 0x00041C, "Member 'ABP_WorldSpectator_C::CanLeaveMatch' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, Is_Current_Target_Interacting) == 0x00041D, "Member 'ABP_WorldSpectator_C::Is_Current_Target_Interacting' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, Is_Current_Target_Looting) == 0x00041E, "Member 'ABP_WorldSpectator_C::Is_Current_Target_Looting' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, AvailableCharactersToSpectate) == 0x000420, "Member 'ABP_WorldSpectator_C::AvailableCharactersToSpectate' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, PlayersSpectated) == 0x000430, "Member 'ABP_WorldSpectator_C::PlayersSpectated' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, CurrentSpectatingPlayer) == 0x000438, "Member 'ABP_WorldSpectator_C::CurrentSpectatingPlayer' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, DateSpectatingStarted) == 0x000440, "Member 'ABP_WorldSpectator_C::DateSpectatingStarted' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, DateSpectatingCurrentPlayerStarted) == 0x000448, "Member 'ABP_WorldSpectator_C::DateSpectatingCurrentPlayerStarted' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, Smoothness) == 0x000450, "Member 'ABP_WorldSpectator_C::Smoothness' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, UniformComponent) == 0x000458, "Member 'ABP_WorldSpectator_C::UniformComponent' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, Spectator_UI) == 0x000460, "Member 'ABP_WorldSpectator_C::Spectator_UI' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, Current_Target_Player_State) == 0x000468, "Member 'ABP_WorldSpectator_C::Current_Target_Player_State' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, Last_Spectator_Target_Analytics_ID) == 0x000470, "Member 'ABP_WorldSpectator_C::Last_Spectator_Target_Analytics_ID' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, RadiationWave) == 0x000480, "Member 'ABP_WorldSpectator_C::RadiationWave' has a wrong offset!");
static_assert(offsetof(ABP_WorldSpectator_C, LastInputMode) == 0x000488, "Member 'ABP_WorldSpectator_C::LastInputMode' has a wrong offset!");

}
