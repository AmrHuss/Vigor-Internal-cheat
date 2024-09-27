#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SRResetButton

#include "Basic.hpp"

#include "BP_SRResetButton_classes.hpp"
#include "BP_SRResetButton_parameters.hpp"


namespace SDK
{

// Function BP_SRResetButton.BP_SRResetButton_C.ExecuteUbergraph_BP_SRResetButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRResetButton_C::ExecuteUbergraph_BP_SRResetButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRResetButton_C", "ExecuteUbergraph_BP_SRResetButton");

	Params::BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRResetButton.BP_SRResetButton_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRResetButton_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRResetButton_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction Start on Server__DelegateSignature");

	Params::BP_SRResetButton_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRResetButton.BP_SRResetButton_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SRResetButton_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRResetButton_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
