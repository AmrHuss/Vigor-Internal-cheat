#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerLobby_Base

#include "Basic.hpp"

#include "BP_PlayerLobby_Base_classes.hpp"
#include "BP_PlayerLobby_Base_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.OnLobbyEnd__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCloudRequestResult              RequestResult                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCloudMatchCommitInfo            CloudSettings                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerLobby_Base_C::OnLobbyEnd__DelegateSignature(const struct FCloudRequestResult& RequestResult, const struct FCloudMatchCommitInfo& CloudSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "OnLobbyEnd__DelegateSignature");

	Params::BP_PlayerLobby_Base_C_OnLobbyEnd__DelegateSignature Parms{};

	Parms.RequestResult = std::move(RequestResult);
	Parms.CloudSettings = std::move(CloudSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.OnLobbyCommited__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCloudRequestResult              RequestResult                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCloudMatchCommitInfo            CloudSettings                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerLobby_Base_C::OnLobbyCommited__DelegateSignature(const struct FCloudRequestResult& RequestResult, const struct FCloudMatchCommitInfo& CloudSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "OnLobbyCommited__DelegateSignature");

	Params::BP_PlayerLobby_Base_C_OnLobbyCommited__DelegateSignature Parms{};

	Parms.RequestResult = std::move(RequestResult);
	Parms.CloudSettings = std::move(CloudSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.ExecuteUbergraph_BP_PlayerLobby_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::ExecuteUbergraph_BP_PlayerLobby_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "ExecuteUbergraph_BP_PlayerLobby_Base");

	Params::BP_PlayerLobby_Base_C_ExecuteUbergraph_BP_PlayerLobby_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.CommitSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobby_Base_C::CommitSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "CommitSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.OnPlayerStateFirstSync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           HumanController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanPlayerState*                HumanPlayerState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::OnPlayerStateFirstSync(class AHumanPlayerController* HumanController, class AHumanPlayerState* HumanPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "OnPlayerStateFirstSync");

	Params::BP_PlayerLobby_Base_C_OnPlayerStateFirstSync Parms{};

	Parms.HumanController = HumanController;
	Parms.HumanPlayerState = HumanPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerLobby_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.RegisterPlayerToLobby
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::RegisterPlayerToLobby(class AHumanPlayerController* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "RegisterPlayerToLobby");

	Params::BP_PlayerLobby_Base_C_RegisterPlayerToLobby Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.StartLobbyClient
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobby_Base_C::StartLobbyClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "StartLobbyClient");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.OnMatchSettingCommited
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCloudRequestResult              RequestResult                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCloudMatchCommitInfo            CloudSettings                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerLobby_Base_C::OnMatchSettingCommited(const struct FCloudRequestResult& RequestResult, const struct FCloudMatchCommitInfo& CloudSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "OnMatchSettingCommited");

	Params::BP_PlayerLobby_Base_C_OnMatchSettingCommited Parms{};

	Parms.RequestResult = std::move(RequestResult);
	Parms.CloudSettings = std::move(CloudSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.LockLobbyTimeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobby_Base_C::LockLobbyTimeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "LockLobbyTimeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.OneSecondTimerEncounter
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobby_Base_C::OneSecondTimerEncounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "OneSecondTimerEncounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.AckLockLobbyServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LobbyComponent_C*             Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::AckLockLobbyServer(class UBP_LobbyComponent_C* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "AckLockLobbyServer");

	Params::BP_PlayerLobby_Base_C_AckLockLobbyServer Parms{};

	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.UpdateBoosterVisualLevel
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBooster                                Booster                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::UpdateBoosterVisualLevel(EBooster Booster, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "UpdateBoosterVisualLevel");

	Params::BP_PlayerLobby_Base_C_UpdateBoosterVisualLevel Parms{};

	Parms.Booster = Booster;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.StartLobby
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobby_Base_C::StartLobby()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "StartLobby");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.OnMainLobbyTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobby_Base_C::OnMainLobbyTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "OnMainLobbyTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.AddBooster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBooster                                Booster                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LobbyComponent_C*             Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TicketUsedInsteadOfCrowns                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerLobby_Base_C::AddBooster(EBooster Booster, class UBP_LobbyComponent_C* Instigator_0, bool TicketUsedInsteadOfCrowns)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "AddBooster");

	Params::BP_PlayerLobby_Base_C_AddBooster Parms{};

	Parms.Booster = Booster;
	Parms.Instigator_0 = Instigator_0;
	Parms.TicketUsedInsteadOfCrowns = TicketUsedInsteadOfCrowns;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.RemoveBooster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBooster                                Booster                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LobbyComponent_C*             Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::RemoveBooster(EBooster Booster, class UBP_LobbyComponent_C* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "RemoveBooster");

	Params::BP_PlayerLobby_Base_C_RemoveBooster Parms{};

	Parms.Booster = Booster;
	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.UpdateBoosterState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBooster                                Booster                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::UpdateBoosterState(EBooster Booster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "UpdateBoosterState");

	Params::BP_PlayerLobby_Base_C_UpdateBoosterState Parms{};

	Parms.Booster = Booster;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.LeaveLobby
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LobbyComponent_C*             Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::LeaveLobby(class UBP_LobbyComponent_C* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "LeaveLobby");

	Params::BP_PlayerLobby_Base_C_LeaveLobby Parms{};

	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.AckLockLobby
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LobbyComponent_C*             Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::AckLockLobby(class UBP_LobbyComponent_C* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "AckLockLobby");

	Params::BP_PlayerLobby_Base_C_AckLockLobby Parms{};

	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.Lock Lobby in BP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobby_Base_C::Lock_Lobby_in_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "Lock Lobby in BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.FinalizeBoostersToClients
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCloudUserLobbyInfo>      Players                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<EBooster, int32>                   BoostersCount                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerLobby_Base_C::FinalizeBoostersToClients(TArray<struct FCloudUserLobbyInfo>& Players, const TMap<EBooster, int32>& BoostersCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "FinalizeBoostersToClients");

	Params::BP_PlayerLobby_Base_C_FinalizeBoostersToClients Parms{};

	Parms.Players = std::move(Players);
	Parms.BoostersCount = std::move(BoostersCount);

	UObject::ProcessEvent(Func, &Parms);

	Players = std::move(Parms.Players);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.OnRep_LobbyStarted
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobby_Base_C::OnRep_LobbyStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "OnRep_LobbyStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.DebugLobbyMsg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsError                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerLobby_Base_C::DebugLobbyMsg(const class FString& Message, bool IsError)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "DebugLobbyMsg");

	Params::BP_PlayerLobby_Base_C_DebugLobbyMsg Parms{};

	Parms.Message = std::move(Message);
	Parms.IsError = IsError;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.Count (BoosterArray)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<EBooster>                        Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EBooster                                Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::Count__BoosterArray_(TArray<EBooster>& Array, EBooster Item, int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "Count (BoosterArray)");

	Params::BP_PlayerLobby_Base_C_Count__BoosterArray_ Parms{};

	Parms.Array = std::move(Array);
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.RemoveOne (BoosterArray)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EBooster>                        Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EBooster                                Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RemovedIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::RemoveOne__BoosterArray_(TArray<EBooster>& Array, EBooster Item, int32* RemovedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "RemoveOne (BoosterArray)");

	Params::BP_PlayerLobby_Base_C_RemoveOne__BoosterArray_ Parms{};

	Parms.Array = std::move(Array);
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (RemovedIndex != nullptr)
		*RemovedIndex = Parms.RemovedIndex;
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.MaxBoosterCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EBooster                                Booster                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_PlayerLobby_Base_C::MaxBoosterCount(EBooster Booster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "MaxBoosterCount");

	Params::BP_PlayerLobby_Base_C_MaxBoosterCount Parms{};

	Parms.Booster = Booster;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.AreAllPlayersReady
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_PlayerLobby_Base_C::AreAllPlayersReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "AreAllPlayersReady");

	Params::BP_PlayerLobby_Base_C_AreAllPlayersReady Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.RegisterUserToMatch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RequestId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::RegisterUserToMatch(class AHumanPlayerController* Player, int32* RequestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "RegisterUserToMatch");

	Params::BP_PlayerLobby_Base_C_RegisterUserToMatch Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (RequestId != nullptr)
		*RequestId = Parms.RequestId;
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.BPSetReady
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LobbyComponent_C*             Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerLobby_Base_C::BPSetReady(class UBP_LobbyComponent_C* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "BPSetReady");

	Params::BP_PlayerLobby_Base_C_BPSetReady Parms{};

	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.CountAllBoosters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCloudMatchCommitInfo            CloudMatchCommitInfo                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FCloudUserLobbyInfo>      Players                                                (Parm, OutParm)
// TMap<EBooster, int32>                   BoostersCount                                          (Parm, OutParm)

void ABP_PlayerLobby_Base_C::CountAllBoosters(const struct FCloudMatchCommitInfo& CloudMatchCommitInfo, TArray<struct FCloudUserLobbyInfo>* Players, TMap<EBooster, int32>* BoostersCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "CountAllBoosters");

	Params::BP_PlayerLobby_Base_C_CountAllBoosters Parms{};

	Parms.CloudMatchCommitInfo = std::move(CloudMatchCommitInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (Players != nullptr)
		*Players = std::move(Parms.Players);

	if (BoostersCount != nullptr)
		*BoostersCount = std::move(Parms.BoostersCount);
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.Check Count With Match Making
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReadyPlayers_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_PlayerLobby_Base_C::Check_Count_With_Match_Making(int32 ReadyPlayers_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "Check Count With Match Making");

	Params::BP_PlayerLobby_Base_C_Check_Count_With_Match_Making Parms{};

	Parms.ReadyPlayers_0 = ReadyPlayers_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerLobby_Base.BP_PlayerLobby_Base_C.GetPlayersReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class FString>                   PlayersReady_0                                         (Parm, OutParm)

void ABP_PlayerLobby_Base_C::GetPlayersReady(TArray<class FString>* PlayersReady_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLobby_Base_C", "GetPlayersReady");

	Params::BP_PlayerLobby_Base_C_GetPlayersReady Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayersReady_0 != nullptr)
		*PlayersReady_0 = std::move(Parms.PlayersReady_0);
}

}
