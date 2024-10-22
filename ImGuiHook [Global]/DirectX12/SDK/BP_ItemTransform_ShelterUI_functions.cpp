#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTransform_ShelterUI

#include "Basic.hpp"

#include "BP_ItemTransform_ShelterUI_classes.hpp"
#include "BP_ItemTransform_ShelterUI_parameters.hpp"


namespace SDK
{

// Function BP_ItemTransform_ShelterUI.BP_ItemTransform_ShelterUI_C.Get Transform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OptionalPreviewParam                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemTransformSetting          ItemTransform                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTransform_ShelterUI_C::Get_Transform(class UClass* ItemClass, int32 OptionalPreviewParam, struct FS_ItemTransformSetting* ItemTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTransform_ShelterUI_C", "Get Transform");

	Params::BP_ItemTransform_ShelterUI_C_Get_Transform Parms{};

	Parms.ItemClass = ItemClass;
	Parms.OptionalPreviewParam = OptionalPreviewParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemTransform != nullptr)
		*ItemTransform = std::move(Parms.ItemTransform);
}

}

