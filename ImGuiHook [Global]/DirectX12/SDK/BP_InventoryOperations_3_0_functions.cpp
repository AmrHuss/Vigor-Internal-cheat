#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InventoryOperations_3_0

#include "Basic.hpp"

#include "BP_InventoryOperations_3_0_classes.hpp"
#include "BP_InventoryOperations_3_0_parameters.hpp"


namespace SDK
{

// Function BP_InventoryOperations_3_0.BP_InventoryOperations_3_0_C.UnaryOperationSwitch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInvetoryItemDescriptor          Descriptor                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// struct FInventoryOperationContext       Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// EOperationResult                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EOperationResult UBP_InventoryOperations_3_0_C::UnaryOperationSwitch(const struct FInvetoryItemDescriptor& Descriptor, const struct FInventoryOperationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InventoryOperations_3_0_C", "UnaryOperationSwitch");

	Params::BP_InventoryOperations_3_0_C_UnaryOperationSwitch Parms{};

	Parms.Descriptor = std::move(Descriptor);
	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

