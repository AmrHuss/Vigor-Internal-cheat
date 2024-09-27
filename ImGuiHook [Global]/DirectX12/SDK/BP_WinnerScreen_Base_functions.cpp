#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WinnerScreen_Base

#include "Basic.hpp"

#include "BP_WinnerScreen_Base_classes.hpp"
#include "BP_WinnerScreen_Base_parameters.hpp"


namespace SDK
{

// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.ExecuteUbergraph_BP_WinnerScreen_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WinnerScreen_Base_C::ExecuteUbergraph_BP_WinnerScreen_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "ExecuteUbergraph_BP_WinnerScreen_Base");

	Params::BP_WinnerScreen_Base_C_ExecuteUbergraph_BP_WinnerScreen_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.StartWinnerScreenTick
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::StartWinnerScreenTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "StartWinnerScreenTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.CharactersForUI_Ready
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::CharactersForUI_Ready()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "CharactersForUI_Ready");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.WinnerScreenAdded
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::WinnerScreenAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "WinnerScreenAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.WinningScreenReadyGM_Specific_ClientEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::WinningScreenReadyGM_Specific_ClientEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "WinningScreenReadyGM_Specific_ClientEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Disable Players Shooting
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::Disable_Players_Shooting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Disable Players Shooting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Winning Screen Delay
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::Winning_Screen_Delay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Winning Screen Delay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Set Highlighted Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  HumanCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WinnerScreen_Base_C::Set_Highlighted_Player(class AHumanCharacter* HumanCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Set Highlighted Player");

	Params::BP_WinnerScreen_Base_C_Set_Highlighted_Player Parms{};

	Parms.HumanCharacter = HumanCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Start Montage
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::Start_Montage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Start Montage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Count Time Spent Waiting
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::Count_Time_Spent_Waiting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Count Time Spent Waiting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WinnerScreen_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "ReceiveTick");

	Params::BP_WinnerScreen_Base_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Wait For Faded In
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::Wait_For_Faded_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Wait For Faded In");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Winning Screen Ready
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AHumanCharacter*>          Winning_Player_Characters                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WinnerScreen_Base_C::Winning_Screen_Ready(const TArray<class AHumanCharacter*>& Winning_Player_Characters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Winning Screen Ready");

	Params::BP_WinnerScreen_Base_C_Winning_Screen_Ready Parms{};

	Parms.Winning_Player_Characters = std::move(Winning_Player_Characters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Start Winning Screen Clients
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Leave_Match_Time                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WinnerScreen_Base_C::Start_Winning_Screen_Clients(int32 Leave_Match_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Start Winning Screen Clients");

	Params::BP_WinnerScreen_Base_C_Start_Winning_Screen_Clients Parms{};

	Parms.Leave_Match_Time = Leave_Match_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Set Player Camera
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::Set_Player_Camera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Set Player Camera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Start FadeIn
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::Start_FadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Start FadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Start FadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::Start_FadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Start FadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Start Winning Screen Server
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AHumanPlayerController*>   Winning_Players_0                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Leave_Time_Time                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WinnerScreen_Base_C::Start_Winning_Screen_Server(const TArray<class AHumanPlayerController*>& Winning_Players_0, int32 Leave_Time_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Start Winning Screen Server");

	Params::BP_WinnerScreen_Base_C_Start_Winning_Screen_Server Parms{};

	Parms.Winning_Players_0 = std::move(Winning_Players_0);
	Parms.Leave_Time_Time = Leave_Time_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WinnerScreen_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Try Get Missing Players
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::Try_Get_Missing_Players()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Try Get Missing Players");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WinnerScreen_Base.BP_WinnerScreen_Base_C.Cycle Next Hightlighted Player
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WinnerScreen_Base_C::Cycle_Next_Hightlighted_Player()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WinnerScreen_Base_C", "Cycle Next Hightlighted Player");

	UObject::ProcessEvent(Func, nullptr);
}

}
