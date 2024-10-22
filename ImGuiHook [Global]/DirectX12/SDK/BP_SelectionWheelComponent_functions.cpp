#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SelectionWheelComponent

#include "Basic.hpp"

#include "BP_SelectionWheelComponent_classes.hpp"
#include "BP_SelectionWheelComponent_parameters.hpp"


namespace SDK
{

// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.ExecuteUbergraph_BP_SelectionWheelComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SelectionWheelComponent_C::ExecuteUbergraph_BP_SelectionWheelComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "ExecuteUbergraph_BP_SelectionWheelComponent");

	Params::BP_SelectionWheelComponent_C_ExecuteUbergraph_BP_SelectionWheelComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SelectionWheelComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.SelectLastItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESelectionWheelType                     WheelType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SelectionWheelComponent_C::SelectLastItem(const ESelectionWheelType& WheelType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "SelectLastItem");

	Params::BP_SelectionWheelComponent_C_SelectLastItem Parms{};

	Parms.WheelType = WheelType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.OpenWheel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESelectionWheelType                     WheelType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SelectionWheelComponent_C::OpenWheel(const ESelectionWheelType& WheelType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "OpenWheel");

	Params::BP_SelectionWheelComponent_C_OpenWheel Parms{};

	Parms.WheelType = WheelType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.InitLastWeapons
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SelectionWheelComponent_C::InitLastWeapons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "InitLastWeapons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.SelectLastWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SelectionWheelComponent_C::SelectLastWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "SelectLastWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.SelectLastGesture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SelectionWheelComponent_C::SelectLastGesture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "SelectLastGesture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.SelectLastTool
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SelectionWheelComponent_C::SelectLastTool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "SelectLastTool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.SetCanSwitchWeapons
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SelectionWheelComponent_C::SetCanSwitchWeapons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "SetCanSwitchWeapons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.Debug
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SelectionWheelComponent_C::Debug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "Debug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.SelectLastConsumable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SelectionWheelComponent_C::SelectLastConsumable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "SelectLastConsumable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.GetSegmentIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SegmentIndexIn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SegmentIndexOut                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SelectionWheelComponent_C::GetSegmentIndex(int32 SegmentIndexIn, int32* SegmentIndexOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "GetSegmentIndex");

	Params::BP_SelectionWheelComponent_C_GetSegmentIndex Parms{};

	Parms.SegmentIndexIn = SegmentIndexIn;

	UObject::ProcessEvent(Func, &Parms);

	if (SegmentIndexOut != nullptr)
		*SegmentIndexOut = Parms.SegmentIndexOut;
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.LoadConsumableClasses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SelectionWheelComponent_C::LoadConsumableClasses()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "LoadConsumableClasses");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelectionWheelComponent.BP_SelectionWheelComponent_C.FindSegmentByConsumableClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           InConsumableClass                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SegmentIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SelectionWheelComponent_C::FindSegmentByConsumableClass(class UClass* InConsumableClass, int32* SegmentIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_C", "FindSegmentByConsumableClass");

	Params::BP_SelectionWheelComponent_C_FindSegmentByConsumableClass Parms{};

	Parms.InConsumableClass = InConsumableClass;

	UObject::ProcessEvent(Func, &Parms);

	if (SegmentIndex != nullptr)
		*SegmentIndex = Parms.SegmentIndex;
}

}

