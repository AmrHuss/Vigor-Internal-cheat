#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_BarredWindow

#include "Basic.hpp"

#include "BP_ADM_BarredWindow_classes.hpp"
#include "BP_ADM_BarredWindow_parameters.hpp"


namespace SDK
{

// Function BP_ADM_BarredWindow.BP_ADM_BarredWindow_C.ExecuteUbergraph_BP_ADM_BarredWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_C::ExecuteUbergraph_BP_ADM_BarredWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_C", "ExecuteUbergraph_BP_ADM_BarredWindow");

	Params::BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredWindow.BP_ADM_BarredWindow_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction Start on Server__DelegateSignature");

	Params::BP_ADM_BarredWindow_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredWindow.BP_ADM_BarredWindow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ADM_BarredWindow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

