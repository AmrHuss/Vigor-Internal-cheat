#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GestureSegment

#include "Basic.hpp"

#include "UI_GestureSegment_classes.hpp"
#include "UI_GestureSegment_parameters.hpp"


namespace SDK
{

// Function UI_GestureSegment.UI_GestureSegment_C.ExecuteUbergraph_UI_GestureSegment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GestureSegment_C::ExecuteUbergraph_UI_GestureSegment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GestureSegment_C", "ExecuteUbergraph_UI_GestureSegment");

	Params::UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GestureSegment.UI_GestureSegment_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GestureSegment_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GestureSegment_C", "Tick");

	Params::UI_GestureSegment_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GestureSegment.UI_GestureSegment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GestureSegment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GestureSegment_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GestureSegment.UI_GestureSegment_C.OnSelect
// (Event, Public, BlueprintEvent)

void UUI_GestureSegment_C::OnSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GestureSegment_C", "OnSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GestureSegment.UI_GestureSegment_C.Activate
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_GestureSegment_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GestureSegment_C", "Activate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GestureSegment.UI_GestureSegment_C.UpdateOpacity
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GestureSegment_C::UpdateOpacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GestureSegment_C", "UpdateOpacity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GestureSegment.UI_GestureSegment_C.CanBeSelected
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUI_GestureSegment_C::CanBeSelected() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GestureSegment_C", "CanBeSelected");

	Params::UI_GestureSegment_C_CanBeSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

