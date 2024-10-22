#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnvQueryContext_BlackboardLocation

#include "Basic.hpp"

#include "EnvQueryContext_BlackboardLocation_classes.hpp"
#include "EnvQueryContext_BlackboardLocation_parameters.hpp"


namespace SDK
{

// Function EnvQueryContext_BlackboardLocation.EnvQueryContext_BlackboardLocation_C.ProvideSingleActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          QuerierObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           QuerierActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ResultingActor                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnvQueryContext_BlackboardLocation_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnvQueryContext_BlackboardLocation_C", "ProvideSingleActor");

	Params::EnvQueryContext_BlackboardLocation_C_ProvideSingleActor Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActor != nullptr)
		*ResultingActor = Parms.ResultingActor;
}

}

