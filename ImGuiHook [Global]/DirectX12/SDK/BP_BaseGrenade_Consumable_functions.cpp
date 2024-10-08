#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseGrenade_Consumable

#include "Basic.hpp"

#include "BP_BaseGrenade_Consumable_classes.hpp"
#include "BP_BaseGrenade_Consumable_parameters.hpp"


namespace SDK
{

// Function BP_BaseGrenade_Consumable.BP_BaseGrenade_Consumable_C.ExecuteUbergraph_BP_BaseGrenade_Consumable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseGrenade_Consumable_C::ExecuteUbergraph_BP_BaseGrenade_Consumable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseGrenade_Consumable_C", "ExecuteUbergraph_BP_BaseGrenade_Consumable");

	Params::BP_BaseGrenade_Consumable_C_ExecuteUbergraph_BP_BaseGrenade_Consumable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseGrenade_Consumable.BP_BaseGrenade_Consumable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BaseGrenade_Consumable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseGrenade_Consumable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseGrenade_Consumable.BP_BaseGrenade_Consumable_C.CreateArcBP
// (Event, Public, BlueprintEvent)

void ABP_BaseGrenade_Consumable_C::CreateArcBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseGrenade_Consumable_C", "CreateArcBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseGrenade_Consumable.BP_BaseGrenade_Consumable_C.CalculateAimingArc
// (Event, Public, BlueprintEvent)

void ABP_BaseGrenade_Consumable_C::CalculateAimingArc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseGrenade_Consumable_C", "CalculateAimingArc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseGrenade_Consumable.BP_BaseGrenade_Consumable_C.OnAimingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    ShowArc                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseGrenade_Consumable_C::OnAimingChanged(const bool ShowArc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseGrenade_Consumable_C", "OnAimingChanged");

	Params::BP_BaseGrenade_Consumable_C_OnAimingChanged Parms{};

	Parms.ShowArc = ShowArc;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseGrenade_Consumable.BP_BaseGrenade_Consumable_C.PlayMeshThrowAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseGrenade_Consumable_C::PlayMeshThrowAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseGrenade_Consumable_C", "PlayMeshThrowAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseGrenade_Consumable.BP_BaseGrenade_Consumable_C.PlayUsageAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseGrenade_Consumable_C::PlayUsageAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseGrenade_Consumable_C", "PlayUsageAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseGrenade_Consumable.BP_BaseGrenade_Consumable_C.Calculate Direction BP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Impuls                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseGrenade_Consumable_C::Calculate_Direction_BP(class AHumanCharacter* Owner_0, struct FVector* Impuls)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseGrenade_Consumable_C", "Calculate Direction BP");

	Params::BP_BaseGrenade_Consumable_C_Calculate_Direction_BP Parms{};

	Parms.Owner_0 = Owner_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Impuls != nullptr)
		*Impuls = std::move(Parms.Impuls);
}


// Function BP_BaseGrenade_Consumable.BP_BaseGrenade_Consumable_C.Calculate Location BP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseGrenade_Consumable_C::Calculate_Location_BP(class AHumanCharacter* Owner_0, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseGrenade_Consumable_C", "Calculate Location BP");

	Params::BP_BaseGrenade_Consumable_C_Calculate_Location_BP Parms{};

	Parms.Owner_0 = Owner_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_BaseGrenade_Consumable.BP_BaseGrenade_Consumable_C.GetCustomGripAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*                    HandAnim                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseGrenade_Consumable_C::GetCustomGripAnimation(class UAnimSequence** HandAnim, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseGrenade_Consumable_C", "GetCustomGripAnimation");

	Params::BP_BaseGrenade_Consumable_C_GetCustomGripAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HandAnim != nullptr)
		*HandAnim = Parms.HandAnim;

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}

}

