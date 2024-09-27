#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LevelMapWhileWaitingToStartMatch

#include "Basic.hpp"

#include "UI_LevelMapWhileWaitingToStartMatch_classes.hpp"
#include "UI_LevelMapWhileWaitingToStartMatch_parameters.hpp"


namespace SDK
{

// Function UI_LevelMapWhileWaitingToStartMatch.UI_LevelMapWhileWaitingToStartMatch_C.ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LevelMapWhileWaitingToStartMatch_C::ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LevelMapWhileWaitingToStartMatch_C", "ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch");

	Params::UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LevelMapWhileWaitingToStartMatch.UI_LevelMapWhileWaitingToStartMatch_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_LevelMapWhileWaitingToStartMatch_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LevelMapWhileWaitingToStartMatch_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LevelMapWhileWaitingToStartMatch.UI_LevelMapWhileWaitingToStartMatch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_LevelMapWhileWaitingToStartMatch_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LevelMapWhileWaitingToStartMatch_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LevelMapWhileWaitingToStartMatch.UI_LevelMapWhileWaitingToStartMatch_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LevelMapWhileWaitingToStartMatch_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LevelMapWhileWaitingToStartMatch_C", "Tick");

	Params::UI_LevelMapWhileWaitingToStartMatch_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LevelMapWhileWaitingToStartMatch.UI_LevelMapWhileWaitingToStartMatch_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LevelMapWhileWaitingToStartMatch_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LevelMapWhileWaitingToStartMatch_C", "PreConstruct");

	Params::UI_LevelMapWhileWaitingToStartMatch_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LevelMapWhileWaitingToStartMatch.UI_LevelMapWhileWaitingToStartMatch_C.Get Message Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUI_LevelMapWhileWaitingToStartMatch_C::Get_Message_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LevelMapWhileWaitingToStartMatch_C", "Get Message Text");

	Params::UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
