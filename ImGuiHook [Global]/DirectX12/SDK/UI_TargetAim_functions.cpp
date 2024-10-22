#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TargetAim

#include "Basic.hpp"

#include "UI_TargetAim_classes.hpp"
#include "UI_TargetAim_parameters.hpp"


namespace SDK
{

// Function UI_TargetAim.UI_TargetAim_C.EventDispatcher_Removing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TargetAim_C::EventDispatcher_Removing__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TargetAim_C", "EventDispatcher_Removing__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TargetAim.UI_TargetAim_C.ExecuteUbergraph_UI_TargetAim
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TargetAim_C::ExecuteUbergraph_UI_TargetAim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TargetAim_C", "ExecuteUbergraph_UI_TargetAim");

	Params::UI_TargetAim_C_ExecuteUbergraph_UI_TargetAim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TargetAim.UI_TargetAim_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TargetAim_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TargetAim_C", "Tick");

	Params::UI_TargetAim_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TargetAim.UI_TargetAim_C.Event UpdateInChallengeAnimation
// (BlueprintCallable, BlueprintEvent)

void UUI_TargetAim_C::Event_UpdateInChallengeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TargetAim_C", "Event UpdateInChallengeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TargetAim.UI_TargetAim_C.Event StartChallenge
// (BlueprintCallable, BlueprintEvent)

void UUI_TargetAim_C::Event_StartChallenge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TargetAim_C", "Event StartChallenge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TargetAim.UI_TargetAim_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TargetAim_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TargetAim_C", "PreConstruct");

	Params::UI_TargetAim_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TargetAim.UI_TargetAim_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TargetAim_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TargetAim_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

