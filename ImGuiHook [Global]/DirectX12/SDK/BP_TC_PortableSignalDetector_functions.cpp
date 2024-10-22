#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_PortableSignalDetector

#include "Basic.hpp"

#include "BP_TC_PortableSignalDetector_classes.hpp"
#include "BP_TC_PortableSignalDetector_parameters.hpp"


namespace SDK
{

// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.ExecuteUbergraph_BP_TC_PortableSignalDetector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_PortableSignalDetector_C::ExecuteUbergraph_BP_TC_PortableSignalDetector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "ExecuteUbergraph_BP_TC_PortableSignalDetector");

	Params::BP_TC_PortableSignalDetector_C_ExecuteUbergraph_BP_TC_PortableSignalDetector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Show you are jammed message
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_TC_PortableSignalDetector_C::Show_you_are_jammed_message()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Show you are jammed message");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Send signal detection blocked by jammer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  Character_that_blocked_signal_detection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_PortableSignalDetector_C::Send_signal_detection_blocked_by_jammer(class ABP_Character_C* Character_that_blocked_signal_detection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Send signal detection blocked by jammer");

	Params::BP_TC_PortableSignalDetector_C_Send_signal_detection_blocked_by_jammer Parms{};

	Parms.Character_that_blocked_signal_detection = Character_that_blocked_signal_detection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Send transmitter detected
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Script_C*    Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_PortableSignalDetector_C::Send_transmitter_detected(class ABP_PlayerController_Script_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Send transmitter detected");

	Params::BP_TC_PortableSignalDetector_C_Send_transmitter_detected Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature
// (BlueprintAuthorityOnly, BlueprintEvent)
// Parameters:
// class AItem*                            Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  ItemOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_PortableSignalDetector_C::BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature(class AItem* Item, class AHumanCharacter* ItemOwner, class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature");

	Params::BP_TC_PortableSignalDetector_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.ItemOwner = ItemOwner;
	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Portable signal detector used
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_TC_PortableSignalDetector_C::Portable_signal_detector_used()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Portable signal detector used");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Mark character and notify its player
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor_to_mark                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_PortableSignalDetector_C::Mark_character_and_notify_its_player(class AActor* Actor_to_mark)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Mark character and notify its player");

	Params::BP_TC_PortableSignalDetector_C_Mark_character_and_notify_its_player Parms{};

	Parms.Actor_to_mark = Actor_to_mark;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Try to locate target
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_TC_PortableSignalDetector_C::Try_to_locate_target()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Try to locate target");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Remove transmitter marker
// (BlueprintCallable, BlueprintEvent)

void ABP_TC_PortableSignalDetector_C::Remove_transmitter_marker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Remove transmitter marker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Mark transmitter
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor_to_mark                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_own_transmitter                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TC_PortableSignalDetector_C::Mark_transmitter(class AActor* Actor_to_mark, bool Is_own_transmitter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Mark transmitter");

	Params::BP_TC_PortableSignalDetector_C_Mark_transmitter Parms{};

	Parms.Actor_to_mark = Actor_to_mark;
	Parms.Is_own_transmitter = Is_own_transmitter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Show no signals found message
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_TC_PortableSignalDetector_C::Show_no_signals_found_message()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Show no signals found message");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Play activate sound
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_TC_PortableSignalDetector_C::Play_activate_sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Play activate sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Remove marker from character
// (BlueprintCallable, BlueprintEvent)

void ABP_TC_PortableSignalDetector_C::Remove_marker_from_character()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Remove marker from character");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Gather actor locations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ActorClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_PortableSignalDetector_C::Gather_actor_locations(class UClass* ActorClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Gather actor locations");

	Params::BP_TC_PortableSignalDetector_C_Gather_actor_locations Parms{};

	Parms.ActorClass = ActorClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Gather all valid transmitters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Valid_transmitters                                     (Parm, OutParm)

void ABP_TC_PortableSignalDetector_C::Gather_all_valid_transmitters(TArray<class AActor*>* Valid_transmitters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Gather all valid transmitters");

	Params::BP_TC_PortableSignalDetector_C_Gather_all_valid_transmitters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Valid_transmitters != nullptr)
		*Valid_transmitters = std::move(Parms.Valid_transmitters);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Gather all valid characters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Valid_characters                                       (Parm, OutParm)

void ABP_TC_PortableSignalDetector_C::Gather_all_valid_characters(TArray<class AActor*>* Valid_characters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Gather all valid characters");

	Params::BP_TC_PortableSignalDetector_C_Gather_all_valid_characters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Valid_characters != nullptr)
		*Valid_characters = std::move(Parms.Valid_characters);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Notify marked player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_PortableSignalDetector_C::Notify_marked_player(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Notify marked player");

	Params::BP_TC_PortableSignalDetector_C_Notify_marked_player Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Is character in same team
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  Character_to_check                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_in_same_team                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TC_PortableSignalDetector_C::Is_character_in_same_team(class ABP_Character_C* Character_to_check, bool* Is_in_same_team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Is character in same team");

	Params::BP_TC_PortableSignalDetector_C_Is_character_in_same_team Parms{};

	Parms.Character_to_check = Character_to_check;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_in_same_team != nullptr)
		*Is_in_same_team = Parms.Is_in_same_team;
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Is Location Jammed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Jammed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TC_PortableSignalDetector_C::Is_Location_Jammed(const struct FVector& Location, bool* Is_Jammed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Is Location Jammed");

	Params::BP_TC_PortableSignalDetector_C_Is_Location_Jammed Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Jammed != nullptr)
		*Is_Jammed = Parms.Is_Jammed;
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Find Jammers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TC_PortableSignalDetector_C::Find_Jammers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Find Jammers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C.Find closest target
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Valid_trgs                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                           Closest_target                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_PortableSignalDetector_C::Find_closest_target(TArray<class AActor*>& Valid_trgs, class AActor** Closest_target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_PortableSignalDetector_C", "Find closest target");

	Params::BP_TC_PortableSignalDetector_C_Find_closest_target Parms{};

	Parms.Valid_trgs = std::move(Valid_trgs);

	UObject::ProcessEvent(Func, &Parms);

	Valid_trgs = std::move(Parms.Valid_trgs);

	if (Closest_target != nullptr)
		*Closest_target = Parms.Closest_target;
}

}

