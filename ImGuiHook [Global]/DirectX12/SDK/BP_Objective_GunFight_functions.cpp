#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Objective_GunFight

#include "Basic.hpp"

#include "BP_Objective_GunFight_classes.hpp"
#include "BP_Objective_GunFight_parameters.hpp"


namespace SDK
{

// Function BP_Objective_GunFight.BP_Objective_GunFight_C.ExecuteUbergraph_BP_Objective_GunFight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Objective_GunFight_C::ExecuteUbergraph_BP_Objective_GunFight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objective_GunFight_C", "ExecuteUbergraph_BP_Objective_GunFight");

	Params::BP_Objective_GunFight_C_ExecuteUbergraph_BP_Objective_GunFight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Objective_GunFight.BP_Objective_GunFight_C.Play Sound On Client
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Attacker_Team                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Objective_GunFight_C::Play_Sound_On_Client(bool Attacker_Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objective_GunFight_C", "Play Sound On Client");

	Params::BP_Objective_GunFight_C_Play_Sound_On_Client Parms{};

	Parms.Attacker_Team = Attacker_Team;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Objective_GunFight.BP_Objective_GunFight_C.Enable Interaction Message
// (BlueprintCallable, BlueprintEvent)

void ABP_Objective_GunFight_C::Enable_Interaction_Message()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objective_GunFight_C", "Enable Interaction Message");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Objective_GunFight.BP_Objective_GunFight_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_PreInteraction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Objective_GunFight_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_PreInteraction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objective_GunFight_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_PreInteraction Start on Server__DelegateSignature");

	Params::BP_Objective_GunFight_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_PreInteraction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Objective_GunFight.BP_Objective_GunFight_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction End on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Objective_GunFight_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_End_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objective_GunFight_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction End on Server__DelegateSignature");

	Params::BP_Objective_GunFight_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_End_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Objective_GunFight.BP_Objective_GunFight_C.Disable Interaction
// (BlueprintCallable, BlueprintEvent)

void ABP_Objective_GunFight_C::Disable_Interaction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objective_GunFight_C", "Disable Interaction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Objective_GunFight.BP_Objective_GunFight_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Objective_GunFight_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objective_GunFight_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start on Server__DelegateSignature");

	Params::BP_Objective_GunFight_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Objective_GunFight.BP_Objective_GunFight_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Objective_GunFight_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objective_GunFight_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Objective_GunFight.BP_Objective_GunFight_C.Show Message On Interaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Objective_GunFight_C::Show_Message_On_Interaction(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objective_GunFight_C", "Show Message On Interaction");

	Params::BP_Objective_GunFight_C_Show_Message_On_Interaction Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}

}

