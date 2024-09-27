#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GrenadeIndicator

#include "Basic.hpp"

#include "UI_GrenadeIndicator_classes.hpp"
#include "UI_GrenadeIndicator_parameters.hpp"


namespace SDK
{

// Function UI_GrenadeIndicator.UI_GrenadeIndicator_C.ExecuteUbergraph_UI_GrenadeIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GrenadeIndicator_C::ExecuteUbergraph_UI_GrenadeIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GrenadeIndicator_C", "ExecuteUbergraph_UI_GrenadeIndicator");

	Params::UI_GrenadeIndicator_C_ExecuteUbergraph_UI_GrenadeIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GrenadeIndicator.UI_GrenadeIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GrenadeIndicator_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GrenadeIndicator_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GrenadeIndicator.UI_GrenadeIndicator_C.SetVisibilityForOwner
// (BlueprintCallable, BlueprintEvent)

void UUI_GrenadeIndicator_C::SetVisibilityForOwner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GrenadeIndicator_C", "SetVisibilityForOwner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GrenadeIndicator.UI_GrenadeIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GrenadeIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GrenadeIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GrenadeIndicator.UI_GrenadeIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GrenadeIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GrenadeIndicator_C", "Tick");

	Params::UI_GrenadeIndicator_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GrenadeIndicator.UI_GrenadeIndicator_C.UpdateGrenadeIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GrenadeIndicator_C::UpdateGrenadeIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GrenadeIndicator_C", "UpdateGrenadeIndicator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GrenadeIndicator.UI_GrenadeIndicator_C.UpdateVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GrenadeIndicator_C::UpdateVisibility(float Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GrenadeIndicator_C", "UpdateVisibility");

	Params::UI_GrenadeIndicator_C_UpdateVisibility Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);
}

}
