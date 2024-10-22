#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Snowball_Thrown

#include "Basic.hpp"

#include "BP_Snowball_Thrown_classes.hpp"
#include "BP_Snowball_Thrown_parameters.hpp"


namespace SDK
{

// Function BP_Snowball_Thrown.BP_Snowball_Thrown_C.ExecuteUbergraph_BP_Snowball_Thrown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Snowball_Thrown_C::ExecuteUbergraph_BP_Snowball_Thrown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snowball_Thrown_C", "ExecuteUbergraph_BP_Snowball_Thrown");

	Params::BP_Snowball_Thrown_C_ExecuteUbergraph_BP_Snowball_Thrown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Snowball_Thrown.BP_Snowball_Thrown_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Snowball_Thrown_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snowball_Thrown_C", "ReceiveEndPlay");

	Params::BP_Snowball_Thrown_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Snowball_Thrown.BP_Snowball_Thrown_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Snowball_Thrown_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snowball_Thrown_C", "ReceiveTick");

	Params::BP_Snowball_Thrown_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Snowball_Thrown.BP_Snowball_Thrown_C.OnImpact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Snowball_Thrown_C::OnImpact(const struct FVector& HitLocation, const struct FVector& NormalImpulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snowball_Thrown_C", "OnImpact");

	Params::BP_Snowball_Thrown_C_OnImpact Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.NormalImpulse = std::move(NormalImpulse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Snowball_Thrown.BP_Snowball_Thrown_C.PlayImpact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Impact_Normal                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Snowball_Thrown_C::PlayImpact(const struct FVector& Impact_Normal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snowball_Thrown_C", "PlayImpact");

	Params::BP_Snowball_Thrown_C_PlayImpact Parms{};

	Parms.Impact_Normal = std::move(Impact_Normal);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Snowball_Thrown.BP_Snowball_Thrown_C.OnComponentBeginOverlap_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Snowball_Thrown_C::OnComponentBeginOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snowball_Thrown_C", "OnComponentBeginOverlap_Event_0");

	Params::BP_Snowball_Thrown_C_OnComponentBeginOverlap_Event_0 Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Snowball_Thrown.BP_Snowball_Thrown_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Snowball_Thrown_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snowball_Thrown_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Snowball_Thrown.BP_Snowball_Thrown_C.DestroyAfterRoundFinish
// (BlueprintCallable, BlueprintEvent)

void ABP_Snowball_Thrown_C::DestroyAfterRoundFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snowball_Thrown_C", "DestroyAfterRoundFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Snowball_Thrown.BP_Snowball_Thrown_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Snowball_Thrown_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snowball_Thrown_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Snowball_Thrown.BP_Snowball_Thrown_C.OnThrow
// (Event, Public, BlueprintEvent)

void ABP_Snowball_Thrown_C::OnThrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snowball_Thrown_C", "OnThrow");

	UObject::ProcessEvent(Func, nullptr);
}

}

