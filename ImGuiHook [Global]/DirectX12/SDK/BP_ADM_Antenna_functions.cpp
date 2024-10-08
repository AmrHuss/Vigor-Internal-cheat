#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_Antenna

#include "Basic.hpp"

#include "BP_ADM_Antenna_classes.hpp"
#include "BP_ADM_Antenna_parameters.hpp"


namespace SDK
{

// Function BP_ADM_Antenna.BP_ADM_Antenna_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ADM_Antenna_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_Antenna_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_Antenna.BP_ADM_Antenna_C.Disable Antenna
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ADM_Antenna_C::Disable_Antenna()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_Antenna_C", "Disable Antenna");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_Antenna.BP_ADM_Antenna_C.Enable Antenna
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ADM_Antenna_C::Enable_Antenna()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_Antenna_C", "Enable Antenna");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_Antenna.BP_ADM_Antenna_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ADM_Antenna_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_Antenna_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_Antenna.BP_ADM_Antenna_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ADM_Antenna_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_Antenna_C", "BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_ADM_Antenna_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_Antenna.BP_ADM_Antenna_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_Antenna_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_Antenna_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction Start on Server__DelegateSignature");

	Params::BP_ADM_Antenna_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_Antenna.BP_ADM_Antenna_C.ExecuteUbergraph_BP_ADM_Antenna
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_Antenna_C::ExecuteUbergraph_BP_ADM_Antenna(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_Antenna_C", "ExecuteUbergraph_BP_ADM_Antenna");

	Params::BP_ADM_Antenna_C_ExecuteUbergraph_BP_ADM_Antenna Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_Antenna.BP_ADM_Antenna_C.Antenna Interaction Triggered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ADM_Antenna_C*                Interacted_Antenna                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  Interacting_Character                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_Antenna_C::Antenna_Interaction_Triggered__DelegateSignature(class ABP_ADM_Antenna_C* Interacted_Antenna, class AHumanCharacter* Interacting_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_Antenna_C", "Antenna Interaction Triggered__DelegateSignature");

	Params::BP_ADM_Antenna_C_Antenna_Interaction_Triggered__DelegateSignature Parms{};

	Parms.Interacted_Antenna = Interacted_Antenna;
	Parms.Interacting_Character = Interacting_Character;

	UObject::ProcessEvent(Func, &Parms);
}

}

