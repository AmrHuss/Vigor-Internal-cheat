#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PingingSystemComponent

#include "Basic.hpp"

#include "BP_PingingSystemComponent_classes.hpp"
#include "BP_PingingSystemComponent_parameters.hpp"


namespace SDK
{

// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.ExecuteUbergraph_BP_PingingSystemComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::ExecuteUbergraph_BP_PingingSystemComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "ExecuteUbergraph_BP_PingingSystemComponent");

	Params::BP_PingingSystemComponent_C_ExecuteUbergraph_BP_PingingSystemComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Make Ping
// (BlueprintCallable, BlueprintEvent)

void UBP_PingingSystemComponent_C::Make_Ping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Make Ping");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Ping Action Pressed
// (BlueprintCallable, BlueprintEvent)

void UBP_PingingSystemComponent_C::Ping_Action_Pressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Ping Action Pressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Create Widget Hint UI
// (BlueprintCallable, BlueprintEvent)

void UBP_PingingSystemComponent_C::Create_Widget_Hint_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Create Widget Hint UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PingingSystemComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "ReceiveTick");

	Params::BP_PingingSystemComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Local Action Confirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_PingInfo                 Ping_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Local_Action_Confirmation(const struct FStruct_PingInfo& Ping_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Local Action Confirmation");

	Params::BP_PingingSystemComponent_C_Local_Action_Confirmation Parms{};

	Parms.Ping_Info = std::move(Ping_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Destroy Ping SERVER
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*                Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_PingInfo                 Ping_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Destroy_Ping_SERVER(class ABP_PlayerState_C* Player_State, const struct FStruct_PingInfo& Ping_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Destroy Ping SERVER");

	Params::BP_PingingSystemComponent_C_Destroy_Ping_SERVER Parms{};

	Parms.Player_State = Player_State;
	Parms.Ping_Info = std::move(Ping_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Ping Confirmation SERVER
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*                Confirming_Player                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_PingInfo                 Ping_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Ping_Confirmation_SERVER(class ABP_PlayerState_C* Confirming_Player, const struct FStruct_PingInfo& Ping_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Ping Confirmation SERVER");

	Params::BP_PingingSystemComponent_C_Ping_Confirmation_SERVER Parms{};

	Parms.Confirming_Player = Confirming_Player;
	Parms.Ping_Info = std::move(Ping_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Replicate Ping SERVER
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*                Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_PingInfo                 PingInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Replicate_Ping_SERVER(class ABP_PlayerState_C* Player_State, const struct FStruct_PingInfo& PingInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Replicate Ping SERVER");

	Params::BP_PingingSystemComponent_C_Replicate_Ping_SERVER Parms{};

	Parms.Player_State = Player_State;
	Parms.PingInfo = std::move(PingInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Local Action Destroy Ping
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_PingInfo                 Ping_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Local_Action_Destroy_Ping(const struct FStruct_PingInfo& Ping_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Local Action Destroy Ping");

	Params::BP_PingingSystemComponent_C_Local_Action_Destroy_Ping Parms{};

	Parms.Ping_Info = std::move(Ping_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Ping Confirmation
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_PingInfo                 Ping_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class APlayerState*                     Confirming_Player                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Ping_Confirmation(const struct FStruct_PingInfo& Ping_Info, class APlayerState* Confirming_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Ping Confirmation");

	Params::BP_PingingSystemComponent_C_Ping_Confirmation Parms{};

	Parms.Ping_Info = std::move(Ping_Info);
	Parms.Confirming_Player = Confirming_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Destroy Ping
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_PingInfo                 Ping_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Destroy_Ping(const struct FStruct_PingInfo& Ping_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Destroy Ping");

	Params::BP_PingingSystemComponent_C_Destroy_Ping Parms{};

	Parms.Ping_Info = std::move(Ping_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Local Action Spawn Ping
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPingType                               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Local_Action_Spawn_Ping(EPingType Type, const struct FVector& Location, class UClass* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Local Action Spawn Ping");

	Params::BP_PingingSystemComponent_C_Local_Action_Spawn_Ping Parms{};

	Parms.Type = Type;
	Parms.Location = std::move(Location);
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Cooldown Expired
// (BlueprintCallable, BlueprintEvent)

void UBP_PingingSystemComponent_C::Cooldown_Expired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Cooldown Expired");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Replicate Ping
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_PingInfo                 Ping_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Replicate_Ping(const struct FStruct_PingInfo& Ping_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Replicate Ping");

	Params::BP_PingingSystemComponent_C_Replicate_Ping Parms{};

	Parms.Ping_Info = std::move(Ping_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Make Ping Action
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_Danger                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PingingSystemComponent_C::Make_Ping_Action(bool Is_Danger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Make Ping Action");

	Params::BP_PingingSystemComponent_C_Make_Ping_Action Parms{};

	Parms.Is_Danger = Is_Danger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.GetPingLocation
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PingActor_C*                  Hit_Ping                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Pinged_Actor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Hit_Location                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::GetPingLocation(bool* Success, class ABP_PingActor_C** Hit_Ping, class AActor** Pinged_Actor, struct FVector* Hit_Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "GetPingLocation");

	Params::BP_PingingSystemComponent_C_GetPingLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Hit_Ping != nullptr)
		*Hit_Ping = Parms.Hit_Ping;

	if (Pinged_Actor != nullptr)
		*Pinged_Actor = Parms.Pinged_Actor;

	if (Hit_Location != nullptr)
		*Hit_Location = std::move(Parms.Hit_Location);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.SpawnPing
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_PingInfo                 Ping_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::SpawnPing(const struct FStruct_PingInfo& Ping_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "SpawnPing");

	Params::BP_PingingSystemComponent_C_SpawnPing Parms{};

	Parms.Ping_Info = std::move(Ping_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Destroy Ping From Ping Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_PingInfo                 PingInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Destroy_Ping_From_Ping_Info(const struct FStruct_PingInfo& PingInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Destroy Ping From Ping Info");

	Params::BP_PingingSystemComponent_C_Destroy_Ping_From_Ping_Info Parms{};

	Parms.PingInfo = std::move(PingInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Clean Destroyed Pings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PingingSystemComponent_C::Clean_Destroyed_Pings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Clean Destroyed Pings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Confirm Ping From Ping Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_PingInfo                 PingInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class APlayerState*                     Confirming_Player                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Confirm_Ping_From_Ping_Info(const struct FStruct_PingInfo& PingInfo, class APlayerState* Confirming_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Confirm Ping From Ping Info");

	Params::BP_PingingSystemComponent_C_Confirm_Ping_From_Ping_Info Parms{};

	Parms.PingInfo = std::move(PingInfo);
	Parms.Confirming_Player = Confirming_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Delete Excesive Pings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPingType                               PingType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Delete_Excesive_Pings(EPingType PingType, int32 PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Delete Excesive Pings");

	Params::BP_PingingSystemComponent_C_Delete_Excesive_Pings Parms{};

	Parms.PingType = PingType;
	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Remove All Pings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PingingSystemComponent_C::Remove_All_Pings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Remove All Pings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Is Item Already Pinged
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_PingInfo                 Ping_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Already_Pinged                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PingingSystemComponent_C::Is_Item_Already_Pinged(const struct FStruct_PingInfo& Ping_Info, bool* Already_Pinged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Is Item Already Pinged");

	Params::BP_PingingSystemComponent_C_Is_Item_Already_Pinged Parms{};

	Parms.Ping_Info = std::move(Ping_Info);

	UObject::ProcessEvent(Func, &Parms);

	if (Already_Pinged != nullptr)
		*Already_Pinged = Parms.Already_Pinged;
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Check Aiming At Ping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PingingSystemComponent_C::Check_Aiming_At_Ping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Check Aiming At Ping");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Find Legit Actor Classes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PingingSystemComponent_C::Find_Legit_Actor_Classes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Find Legit Actor Classes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Is Ping Local
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_PingInfo                 Ping_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Is_Local                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PingingSystemComponent_C::Is_Ping_Local(const struct FStruct_PingInfo& Ping_Info, bool* Is_Local)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Is Ping Local");

	Params::BP_PingingSystemComponent_C_Is_Ping_Local Parms{};

	Parms.Ping_Info = std::move(Ping_Info);

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Local != nullptr)
		*Is_Local = Parms.Is_Local;
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Is Ping Not Hitting Openable Actor Opened Doors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PingingSystemComponent_C::Is_Ping_Not_Hitting_Openable_Actor_Opened_Doors(const struct FHitResult& Hit, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Is Ping Not Hitting Openable Actor Opened Doors");

	Params::BP_PingingSystemComponent_C_Is_Ping_Not_Hitting_Openable_Actor_Opened_Doors Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Are Pings Same
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_PingInfo                 Ping_A                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FStruct_PingInfo                 Ping_B                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Pings_Are_Same                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PingingSystemComponent_C::Are_Pings_Same(const struct FStruct_PingInfo& Ping_A, const struct FStruct_PingInfo& Ping_B, bool* Pings_Are_Same)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Are Pings Same");

	Params::BP_PingingSystemComponent_C_Are_Pings_Same Parms{};

	Parms.Ping_A = std::move(Ping_A);
	Parms.Ping_B = std::move(Ping_B);

	UObject::ProcessEvent(Func, &Parms);

	if (Pings_Are_Same != nullptr)
		*Pings_Are_Same = Parms.Pings_Are_Same;
}


// Function BP_PingingSystemComponent.BP_PingingSystemComponent_C.Get Actor Socket Location
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Socket_Location                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PingingSystemComponent_C::Get_Actor_Socket_Location(class AActor* Actor, struct FVector* Socket_Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingingSystemComponent_C", "Get Actor Socket Location");

	Params::BP_PingingSystemComponent_C_Get_Actor_Socket_Location Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Socket_Location != nullptr)
		*Socket_Location = std::move(Parms.Socket_Location);
}

}

