#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameMode_Tutorial_withCharacterChoice_2

#include "Basic.hpp"

#include "BP_GameMode_Tutorial_withCharacterChoice_2_classes.hpp"
#include "BP_GameMode_Tutorial_withCharacterChoice_2_parameters.hpp"


namespace SDK
{

// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.OnResetAI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::OnResetAI__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "OnResetAI__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.OnCabineEventStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::OnCabineEventStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "OnCabineEventStart__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.ExecuteUbergraph_BP_GameMode_Tutorial_withCharacterChoice_2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::ExecuteUbergraph_BP_GameMode_Tutorial_withCharacterChoice_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "ExecuteUbergraph_BP_GameMode_Tutorial_withCharacterChoice_2");

	Params::BP_GameMode_Tutorial_withCharacterChoice_2_C_ExecuteUbergraph_BP_GameMode_Tutorial_withCharacterChoice_2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.CheckTutorialProgressStuff
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::CheckTutorialProgressStuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "CheckTutorialProgressStuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.EnteredIntoCabine
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::EnteredIntoCabine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "EnteredIntoCabine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.ContinueReset
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::ContinueReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "ContinueReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.ResetSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EUI_Tutorial_ResetReason                Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::ResetSequence(class AHumanCharacter* Player, EUI_Tutorial_ResetReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "ResetSequence");

	Params::BP_GameMode_Tutorial_withCharacterChoice_2_C_ResetSequence Parms{};

	Parms.Player = Player;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.OnSpectatorHasNobodyToSpectate
// (Event, Public, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::OnSpectatorHasNobodyToSpectate(class AHumanPlayerController* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "OnSpectatorHasNobodyToSpectate");

	Params::BP_GameMode_Tutorial_withCharacterChoice_2_C_OnSpectatorHasNobodyToSpectate Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.OnPlayerDied
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GameMode_Tutorial_withCharacterChoice_2_C::OnPlayerDied(class AHumanCharacter* Player, class AHumanCharacter* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "OnPlayerDied");

	Params::BP_GameMode_Tutorial_withCharacterChoice_2_C_OnPlayerDied Parms{};

	Parms.Player = Player;
	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.ResetTutorialLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::ResetTutorialLevel(class AHumanCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "ResetTutorialLevel");

	Params::BP_GameMode_Tutorial_withCharacterChoice_2_C_ResetTutorialLevel Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.SaveLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::SaveLevel(class AHumanCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "SaveLevel");

	Params::BP_GameMode_Tutorial_withCharacterChoice_2_C_SaveLevel Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.LoadLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::LoadLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "LoadLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Tutorial_withCharacterChoice_2.BP_GameMode_Tutorial_withCharacterChoice_2_C.ResetAirdropMark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Tutorial_withCharacterChoice_2_C::ResetAirdropMark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Tutorial_withCharacterChoice_2_C", "ResetAirdropMark");

	UObject::ProcessEvent(Func, nullptr);
}

}

