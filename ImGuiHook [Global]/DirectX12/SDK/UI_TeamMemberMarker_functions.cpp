#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TeamMemberMarker

#include "Basic.hpp"

#include "UI_TeamMemberMarker_classes.hpp"
#include "UI_TeamMemberMarker_parameters.hpp"


namespace SDK
{

// Function UI_TeamMemberMarker.UI_TeamMemberMarker_C.ExecuteUbergraph_UI_TeamMemberMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TeamMemberMarker_C::ExecuteUbergraph_UI_TeamMemberMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamMemberMarker_C", "ExecuteUbergraph_UI_TeamMemberMarker");

	Params::UI_TeamMemberMarker_C_ExecuteUbergraph_UI_TeamMemberMarker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TeamMemberMarker.UI_TeamMemberMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TeamMemberMarker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamMemberMarker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TeamMemberMarker.UI_TeamMemberMarker_C.UpdateMarker
// (BlueprintCallable, BlueprintEvent)

void UUI_TeamMemberMarker_C::UpdateMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamMemberMarker_C", "UpdateMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TeamMemberMarker.UI_TeamMemberMarker_C.RotateMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*                 Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          MarkerLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CameraLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TeamMemberMarker_C::RotateMarker(class UWidgetComponent* Widget, const struct FVector& MarkerLocation, const struct FVector& CameraLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamMemberMarker_C", "RotateMarker");

	Params::UI_TeamMemberMarker_C_RotateMarker Parms{};

	Parms.Widget = Widget;
	Parms.MarkerLocation = std::move(MarkerLocation);
	Parms.CameraLocation = std::move(CameraLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TeamMemberMarker.UI_TeamMemberMarker_C.Set up health bar
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TeamMemberMarker_C::Set_up_health_bar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamMemberMarker_C", "Set up health bar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TeamMemberMarker.UI_TeamMemberMarker_C.Set up PlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_TeamMemberMarker_C::Set_up_PlayerName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TeamMemberMarker_C", "Set up PlayerName");

	UObject::ProcessEvent(Func, nullptr);
}

}

