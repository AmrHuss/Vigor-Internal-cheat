#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MatchMusicComponent

#include "Basic.hpp"

#include "BP_MatchMusicComponent_classes.hpp"
#include "BP_MatchMusicComponent_parameters.hpp"


namespace SDK
{

// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.ExecuteUbergraph_BP_MatchMusicComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MatchMusicComponent_C::ExecuteUbergraph_BP_MatchMusicComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "ExecuteUbergraph_BP_MatchMusicComponent");

	Params::BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Stop Radiation Damage Music
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_MatchMusicComponent_C::Stop_Radiation_Damage_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "Stop Radiation Damage Music");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Delayed Fade Out
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchMusicComponent_C::Delayed_Fade_Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "Delayed Fade Out");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Character Died
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  DyingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           InstigatingItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_MatchMusicComponent_C::Character_Died(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "Character Died");

	Params::BP_MatchMusicComponent_C_Character_Died Parms{};

	Parms.DyingCharacter = DyingCharacter;
	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingCharacter = InstigatingCharacter;
	Parms.InstigatingItem = InstigatingItem;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.React to New Pawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  Possessed_Character                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MatchMusicComponent_C::React_to_New_Pawn(class ABP_Character_C* Possessed_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "React to New Pawn");

	Params::BP_MatchMusicComponent_C_React_to_New_Pawn Parms{};

	Parms.Possessed_Character = Possessed_Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_MatchMusicComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Stop Match End Music
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_MatchMusicComponent_C::Stop_Match_End_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "Stop Match End Music");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Start Match End Music
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_MatchMusicComponent_C::Start_Match_End_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "Start Match End Music");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Start Radiation Damage Music
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_MatchMusicComponent_C::Start_Radiation_Damage_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "Start Radiation Damage Music");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Start Radiation Warning Music
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_MatchMusicComponent_C::Start_Radiation_Warning_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "Start Radiation Warning Music");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Stop Airdrop Carry Music
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_MatchMusicComponent_C::Stop_Airdrop_Carry_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "Stop Airdrop Carry Music");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Start Airdrop Carry Music
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    MusicEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MatchMusicComponent_C::Start_Airdrop_Carry_Music(bool MusicEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "Start Airdrop Carry Music");

	Params::BP_MatchMusicComponent_C_Start_Airdrop_Carry_Music Parms{};

	Parms.MusicEnabled = MusicEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Stop Airdrop Looting Music
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_MatchMusicComponent_C::Stop_Airdrop_Looting_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "Stop Airdrop Looting Music");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Start Airdrop Looting Music
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_MatchMusicComponent_C::Start_Airdrop_Looting_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchMusicComponent_C", "Start Airdrop Looting Music");

	UObject::ProcessEvent(Func, nullptr);
}

}
