#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LootObject_Memento_Vinyl_Base

#include "Basic.hpp"

#include "BP_LootObject_Memento_Vinyl_Base_classes.hpp"
#include "BP_LootObject_Memento_Vinyl_Base_parameters.hpp"


namespace SDK
{

// Function BP_LootObject_Memento_Vinyl_Base.BP_LootObject_Memento_Vinyl_Base_C.ExecuteUbergraph_BP_LootObject_Memento_Vinyl_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LootObject_Memento_Vinyl_Base_C::ExecuteUbergraph_BP_LootObject_Memento_Vinyl_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LootObject_Memento_Vinyl_Base_C", "ExecuteUbergraph_BP_LootObject_Memento_Vinyl_Base");

	Params::BP_LootObject_Memento_Vinyl_Base_C_ExecuteUbergraph_BP_LootObject_Memento_Vinyl_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LootObject_Memento_Vinyl_Base.BP_LootObject_Memento_Vinyl_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LootObject_Memento_Vinyl_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LootObject_Memento_Vinyl_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LootObject_Memento_Vinyl_Base.BP_LootObject_Memento_Vinyl_Base_C.Disc Spin Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_LootObject_Memento_Vinyl_Base_C::Disc_Spin_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LootObject_Memento_Vinyl_Base_C", "Disc Spin Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LootObject_Memento_Vinyl_Base.BP_LootObject_Memento_Vinyl_Base_C.Disc Spin Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_LootObject_Memento_Vinyl_Base_C::Disc_Spin_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LootObject_Memento_Vinyl_Base_C", "Disc Spin Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LootObject_Memento_Vinyl_Base.BP_LootObject_Memento_Vinyl_Base_C.Apply Materials from State Descriptor
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_Lootable_StateDescriptor      State_Descriptor                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ABP_LootObject_Memento_Vinyl_Base_C::Apply_Materials_from_State_Descriptor(const struct FF_Lootable_StateDescriptor& State_Descriptor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LootObject_Memento_Vinyl_Base_C", "Apply Materials from State Descriptor");

	Params::BP_LootObject_Memento_Vinyl_Base_C_Apply_Materials_from_State_Descriptor Parms{};

	Parms.State_Descriptor = std::move(State_Descriptor);

	UObject::ProcessEvent(Func, &Parms);
}

}
