#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WeaponSegment

#include "Basic.hpp"

#include "UI_WeaponSegment_classes.hpp"
#include "UI_WeaponSegment_parameters.hpp"


namespace SDK
{

// Function UI_WeaponSegment.UI_WeaponSegment_C.ExecuteUbergraph_UI_WeaponSegment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponSegment_C::ExecuteUbergraph_UI_WeaponSegment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponSegment_C", "ExecuteUbergraph_UI_WeaponSegment");

	Params::UI_WeaponSegment_C_ExecuteUbergraph_UI_WeaponSegment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponSegment.UI_WeaponSegment_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponSegment_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponSegment_C", "Tick");

	Params::UI_WeaponSegment_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponSegment.UI_WeaponSegment_C.OnSelect
// (Event, Public, BlueprintEvent)

void UUI_WeaponSegment_C::OnSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponSegment_C", "OnSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponSegment.UI_WeaponSegment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_WeaponSegment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponSegment_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponSegment.UI_WeaponSegment_C.Activate
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_WeaponSegment_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponSegment_C", "Activate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponSegment.UI_WeaponSegment_C.UpdateNoItemIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_WeaponSegment_C::UpdateNoItemIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponSegment_C", "UpdateNoItemIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponSegment.UI_WeaponSegment_C.UpdateOpacity
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_WeaponSegment_C::UpdateOpacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponSegment_C", "UpdateOpacity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponSegment.UI_WeaponSegment_C.GetWeaponName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             WeaponName                                             (Parm, OutParm)

void UUI_WeaponSegment_C::GetWeaponName(class FText* WeaponName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponSegment_C", "GetWeaponName");

	Params::UI_WeaponSegment_C_GetWeaponName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponName != nullptr)
		*WeaponName = std::move(Parms.WeaponName);
}


// Function UI_WeaponSegment.UI_WeaponSegment_C.GetAmmoName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FText                             AmmoName                                               (Parm, OutParm)

void UUI_WeaponSegment_C::GetAmmoName(class FText* AmmoName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponSegment_C", "GetAmmoName");

	Params::UI_WeaponSegment_C_GetAmmoName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoName != nullptr)
		*AmmoName = std::move(Parms.AmmoName);
}

}

