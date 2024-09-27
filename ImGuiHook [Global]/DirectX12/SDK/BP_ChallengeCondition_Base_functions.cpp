#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_Base

#include "Basic.hpp"

#include "BP_ChallengeCondition_Base_classes.hpp"
#include "BP_ChallengeCondition_Base_parameters.hpp"


namespace SDK
{

// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.Progress Updated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   New_Progress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_Base_C::Progress_Updated__DelegateSignature(int32 New_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "Progress Updated__DelegateSignature");

	Params::BP_ChallengeCondition_Base_C_Progress_Updated__DelegateSignature Parms{};

	Parms.New_Progress = New_Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.ExecuteUbergraph_BP_ChallengeCondition_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_Base_C::ExecuteUbergraph_BP_ChallengeCondition_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "ExecuteUbergraph_BP_ChallengeCondition_Base");

	Params::BP_ChallengeCondition_Base_C_ExecuteUbergraph_BP_ChallengeCondition_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChallengeCondition_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.SendPostponedChallenges
// (BlueprintCallable, BlueprintEvent)

void ABP_ChallengeCondition_Base_C::SendPostponedChallenges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "SendPostponedChallenges");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.Get Maximum Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Maximum_Progress                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_Base_C::Get_Maximum_Progress(int32* Maximum_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "Get Maximum Progress");

	Params::BP_ChallengeCondition_Base_C_Get_Maximum_Progress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Maximum_Progress != nullptr)
		*Maximum_Progress = Parms.Maximum_Progress;
}


// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.Get Current Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Current_Progress                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_Base_C::Get_Current_Progress(int32* Current_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "Get Current Progress");

	Params::BP_ChallengeCondition_Base_C_Get_Current_Progress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Progress != nullptr)
		*Current_Progress = Parms.Current_Progress;
}


// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.Get Title Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Title_Text                                             (Parm, OutParm)

void ABP_ChallengeCondition_Base_C::Get_Title_Text(class FText* Title_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "Get Title Text");

	Params::BP_ChallengeCondition_Base_C_Get_Title_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Title_Text != nullptr)
		*Title_Text = std::move(Parms.Title_Text);
}


// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.Get Condition Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Condition_Text                                         (Parm, OutParm)

void ABP_ChallengeCondition_Base_C::Get_Condition_Text(class FText* Condition_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "Get Condition Text");

	Params::BP_ChallengeCondition_Base_C_Get_Condition_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Condition_Text != nullptr)
		*Condition_Text = std::move(Parms.Condition_Text);
}


// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.Get Description Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Description_Text                                       (Parm, OutParm)

void ABP_ChallengeCondition_Base_C::Get_Description_Text(class FText* Description_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "Get Description Text");

	Params::BP_ChallengeCondition_Base_C_Get_Description_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Description_Text != nullptr)
		*Description_Text = std::move(Parms.Description_Text);
}


// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.Send Progress to Cloud
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ChallengeCondition_Base_C::Send_Progress_to_Cloud()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "Send Progress to Cloud");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.BufferProgressToCloud
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_ChallengeCondition_Base_C::BufferProgressToCloud()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "BufferProgressToCloud");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_Base.BP_ChallengeCondition_Base_C.Reply to Progress from Cloud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   New_Cloud_Progress                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_Base_C::Reply_to_Progress_from_Cloud(bool Success, int32 New_Cloud_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_Base_C", "Reply to Progress from Cloud");

	Params::BP_ChallengeCondition_Base_C_Reply_to_Progress_from_Cloud Parms{};

	Parms.Success = Success;
	Parms.New_Cloud_Progress = New_Cloud_Progress;

	UObject::ProcessEvent(Func, &Parms);
}

}
