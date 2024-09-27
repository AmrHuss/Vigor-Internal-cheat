#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrackedResource_SaveGame

#include "Basic.hpp"

#include "BP_TrackedResource_SaveGame_classes.hpp"
#include "BP_TrackedResource_SaveGame_parameters.hpp"


namespace SDK
{

// Function BP_TrackedResource_SaveGame.BP_TrackedResource_SaveGame_C.FillNeededResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           HumanPlayerController                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TrackedResource_SaveGame_C::FillNeededResources(class AHumanPlayerController* HumanPlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrackedResource_SaveGame_C", "FillNeededResources");

	Params::BP_TrackedResource_SaveGame_C_FillNeededResources Parms{};

	Parms.HumanPlayerController = HumanPlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrackedResource_SaveGame.BP_TrackedResource_SaveGame_C.FillOwnedResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           HumanPlayerController                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TrackedResource_SaveGame_C::FillOwnedResources(class AHumanPlayerController* HumanPlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrackedResource_SaveGame_C", "FillOwnedResources");

	Params::BP_TrackedResource_SaveGame_C_FillOwnedResources Parms{};

	Parms.HumanPlayerController = HumanPlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrackedResource_SaveGame.BP_TrackedResource_SaveGame_C.FillData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ShelterSlot_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanPlayerController*           HumanPlayerController                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TrackedResource_SaveGame_C::FillData(class UClass* ShelterSlot_0, class AHumanPlayerController* HumanPlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrackedResource_SaveGame_C", "FillData");

	Params::BP_TrackedResource_SaveGame_C_FillData Parms{};

	Parms.ShelterSlot_0 = ShelterSlot_0;
	Parms.HumanPlayerController = HumanPlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

}
