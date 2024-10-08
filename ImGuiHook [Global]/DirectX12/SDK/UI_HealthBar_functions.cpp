#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HealthBar

#include "Basic.hpp"

#include "UI_HealthBar_classes.hpp"
#include "UI_HealthBar_parameters.hpp"


namespace SDK
{

// Function UI_HealthBar.UI_HealthBar_C.ExecuteUbergraph_UI_HealthBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HealthBar_C::ExecuteUbergraph_UI_HealthBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HealthBar_C", "ExecuteUbergraph_UI_HealthBar");

	Params::UI_HealthBar_C_ExecuteUbergraph_UI_HealthBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HealthBar.UI_HealthBar_C.OnGameSettingsChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameSaveSettings                GameSettings                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_HealthBar_C::OnGameSettingsChanged(const struct FGameSaveSettings& GameSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HealthBar_C", "OnGameSettingsChanged");

	Params::UI_HealthBar_C_OnGameSettingsChanged Parms{};

	Parms.GameSettings = std::move(GameSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HealthBar.UI_HealthBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HealthBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HealthBar_C", "Tick");

	Params::UI_HealthBar_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HealthBar.UI_HealthBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HealthBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HealthBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_HealthBar.UI_HealthBar_C.UpdateHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HealthBar_C::UpdateHealthBar(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HealthBar_C", "UpdateHealthBar");

	Params::UI_HealthBar_C_UpdateHealthBar Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HealthBar.UI_HealthBar_C.ComputeExpectedHealthBarParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ExpectedHealing                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CurrentHealth                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExpectedHealBar                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HealthBar_C::ComputeExpectedHealthBarParameter(float ExpectedHealing, float CurrentHealth, float MaxHealth, float* ExpectedHealBar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HealthBar_C", "ComputeExpectedHealthBarParameter");

	Params::UI_HealthBar_C_ComputeExpectedHealthBarParameter Parms{};

	Parms.ExpectedHealing = ExpectedHealing;
	Parms.CurrentHealth = CurrentHealth;
	Parms.MaxHealth = MaxHealth;

	UObject::ProcessEvent(Func, &Parms);

	if (ExpectedHealBar != nullptr)
		*ExpectedHealBar = Parms.ExpectedHealBar;
}


// Function UI_HealthBar.UI_HealthBar_C.ComputeHealthBarParameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HealthIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DownedHealthIn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExpectedHealingIn                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TempHealthIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HealthOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExpectedHealingOut                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TempHealthOut                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HealthBar_C::ComputeHealthBarParameters(float HealthIn, float DownedHealthIn, float ExpectedHealingIn, float MaxHealth, float TempHealthIn, float* HealthOut, float* ExpectedHealingOut, float* TempHealthOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HealthBar_C", "ComputeHealthBarParameters");

	Params::UI_HealthBar_C_ComputeHealthBarParameters Parms{};

	Parms.HealthIn = HealthIn;
	Parms.DownedHealthIn = DownedHealthIn;
	Parms.ExpectedHealingIn = ExpectedHealingIn;
	Parms.MaxHealth = MaxHealth;
	Parms.TempHealthIn = TempHealthIn;

	UObject::ProcessEvent(Func, &Parms);

	if (HealthOut != nullptr)
		*HealthOut = Parms.HealthOut;

	if (ExpectedHealingOut != nullptr)
		*ExpectedHealingOut = Parms.ExpectedHealingOut;

	if (TempHealthOut != nullptr)
		*TempHealthOut = Parms.TempHealthOut;
}


// Function UI_HealthBar.UI_HealthBar_C.UpdateShowPermanentlyBasedOnSavegame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameSaveSettings                Game_Settings                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_HealthBar_C::UpdateShowPermanentlyBasedOnSavegame(const struct FGameSaveSettings& Game_Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HealthBar_C", "UpdateShowPermanentlyBasedOnSavegame");

	Params::UI_HealthBar_C_UpdateShowPermanentlyBasedOnSavegame Parms{};

	Parms.Game_Settings = std::move(Game_Settings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HealthBar.UI_HealthBar_C.UpdateStaminaBar
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HealthBar_C::UpdateStaminaBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HealthBar_C", "UpdateStaminaBar");

	UObject::ProcessEvent(Func, nullptr);
}

}

