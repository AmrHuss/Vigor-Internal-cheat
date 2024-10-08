#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTransform_Render

#include "Basic.hpp"

#include "BP_ItemTransform_Render_classes.hpp"
#include "BP_ItemTransform_Render_parameters.hpp"


namespace SDK
{

// Function BP_ItemTransform_Render.BP_ItemTransform_Render_C.GetTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemTransformSetting          ItemTransform                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTransform_Render_C::GetTransform(class UClass* ItemClass, struct FS_ItemTransformSetting* ItemTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTransform_Render_C", "GetTransform");

	Params::BP_ItemTransform_Render_C_GetTransform Parms{};

	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemTransform != nullptr)
		*ItemTransform = std::move(Parms.ItemTransform);
}

}

