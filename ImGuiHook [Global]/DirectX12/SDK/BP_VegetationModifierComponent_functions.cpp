#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VegetationModifierComponent

#include "Basic.hpp"

#include "BP_VegetationModifierComponent_classes.hpp"
#include "BP_VegetationModifierComponent_parameters.hpp"


namespace SDK
{

// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.ExecuteUbergraph_BP_VegetationModifierComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VegetationModifierComponent_C::ExecuteUbergraph_BP_VegetationModifierComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "ExecuteUbergraph_BP_VegetationModifierComponent");

	Params::BP_VegetationModifierComponent_C_ExecuteUbergraph_BP_VegetationModifierComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VegetationModifierComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "ReceiveTick");

	Params::BP_VegetationModifierComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_VegetationModifierComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.FindVegetationModifyActors
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_VegetationModifierComponent_C::FindVegetationModifyActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "FindVegetationModifyActors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.Simulate
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VegetationModifierComponent_C::Simulate(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "Simulate");

	Params::BP_VegetationModifierComponent_C_Simulate Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.InitCurCheckTime
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_VegetationModifierComponent_C::InitCurCheckTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "InitCurCheckTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.CheckShouldAdd
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WorldPosition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VegetationModifierComponent_C::CheckShouldAdd(const struct FVector& WorldPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "CheckShouldAdd");

	Params::BP_VegetationModifierComponent_C_CheckShouldAdd Parms{};

	Parms.WorldPosition = std::move(WorldPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.InitCharacterMovementComponent
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_VegetationModifierComponent_C::InitCharacterMovementComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "InitCharacterMovementComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.AddFlattenModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WorldPosition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VegetationModifierComponent_C::AddFlattenModifier(const struct FVector& WorldPosition, float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "AddFlattenModifier");

	Params::BP_VegetationModifierComponent_C_AddFlattenModifier Parms{};

	Parms.WorldPosition = std::move(WorldPosition);
	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.AddBendModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WorldPosition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VegetationModifierComponent_C::AddBendModifier(const struct FVector& WorldPosition, float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "AddBendModifier");

	Params::BP_VegetationModifierComponent_C_AddBendModifier Parms{};

	Parms.WorldPosition = std::move(WorldPosition);
	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.DebugPrint
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_VegetationModifierComponent_C::DebugPrint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "DebugPrint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VegetationModifierComponent.BP_VegetationModifierComponent_C.GetModifierWorldPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VegetationModifierComponent_C::GetModifierWorldPosition(struct FVector* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationModifierComponent_C", "GetModifierWorldPosition");

	Params::BP_VegetationModifierComponent_C_GetModifierWorldPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}

}

