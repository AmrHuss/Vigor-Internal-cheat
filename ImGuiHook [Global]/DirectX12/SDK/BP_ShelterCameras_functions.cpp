#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShelterCameras

#include "Basic.hpp"

#include "BP_ShelterCameras_classes.hpp"
#include "BP_ShelterCameras_parameters.hpp"


namespace SDK
{

// Function BP_ShelterCameras.BP_ShelterCameras_C.ViewportCaptured__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           TextureTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterCameras_C::ViewportCaptured__DelegateSignature(class UTextureRenderTarget2D* TextureTarget, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "ViewportCaptured__DelegateSignature");

	Params::BP_ShelterCameras_C_ViewportCaptured__DelegateSignature Parms{};

	Parms.TextureTarget = TextureTarget;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.ShelterUpgradeCaptureVisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CaptureIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ShelterCameras_C::ShelterUpgradeCaptureVisibilityChanged__DelegateSignature(int32 CaptureIndex, bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "ShelterUpgradeCaptureVisibilityChanged__DelegateSignature");

	Params::BP_ShelterCameras_C_ShelterUpgradeCaptureVisibilityChanged__DelegateSignature Parms{};

	Parms.CaptureIndex = CaptureIndex;
	Parms.bVisibility = bVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.LevelSequenceEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ShelterCameras_C::LevelSequenceEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "LevelSequenceEnded__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.ShelterInfoDetailChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ShelterCameras_C::ShelterInfoDetailChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "ShelterInfoDetailChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.ExecuteUbergraph_BP_ShelterCameras
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterCameras_C::ExecuteUbergraph_BP_ShelterCameras(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "ExecuteUbergraph_BP_ShelterCameras");

	Params::BP_ShelterCameras_C_ExecuteUbergraph_BP_ShelterCameras Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.PlaySequenceDelayed
// (BlueprintCallable, BlueprintEvent)

void ABP_ShelterCameras_C::PlaySequenceDelayed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "PlaySequenceDelayed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void ABP_ShelterCameras_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.FrameDelayedShelterPreviewCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterCameras_C::FrameDelayedShelterPreviewCamera(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "FrameDelayedShelterPreviewCamera");

	Params::BP_ShelterCameras_C_FrameDelayedShelterPreviewCamera Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.PassContextChangeToUI
// (BlueprintCallable, BlueprintEvent)

void ABP_ShelterCameras_C::PassContextChangeToUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "PassContextChangeToUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.OnLevelSequenceFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_ShelterCameras_C::OnLevelSequenceFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "OnLevelSequenceFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ShelterCameras_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.SelectShelterLevelUpCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                PlayerControler                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterCameras_C::SelectShelterLevelUpCamera(int32 Level, class APlayerController* PlayerControler)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "SelectShelterLevelUpCamera");

	Params::BP_ShelterCameras_C_SelectShelterLevelUpCamera Parms{};

	Parms.Level = Level;
	Parms.PlayerControler = PlayerControler;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.SelectImprovementCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           SlotClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                PlayerControler                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterCameras_C::SelectImprovementCamera(class UClass* SlotClass, class APlayerController* PlayerControler)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "SelectImprovementCamera");

	Params::BP_ShelterCameras_C_SelectImprovementCamera Parms{};

	Parms.SlotClass = SlotClass;
	Parms.PlayerControler = PlayerControler;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.DeactivateAllCameras
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ShelterCameras_C::DeactivateAllCameras()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "DeactivateAllCameras");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.DestroyLastSequence
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShelterCameras_C::DestroyLastSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "DestroyLastSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.PlaySequencer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterCameras_C::PlaySequencer(class ULevelSequence* InputPin, class APlayerController* PlayerController, int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "PlaySequencer");

	Params::BP_ShelterCameras_C_PlaySequencer Parms{};

	Parms.InputPin = InputPin;
	Parms.PlayerController = PlayerController;
	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.Capture Upgrade Snapshot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       OptionalCaptureTransform                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABP_ShelterCameras_C::Capture_Upgrade_Snapshot(int32 Index_0, const struct FTransform& OptionalCaptureTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "Capture Upgrade Snapshot");

	Params::BP_ShelterCameras_C_Capture_Upgrade_Snapshot Parms{};

	Parms.Index_0 = Index_0;
	Parms.OptionalCaptureTransform = std::move(OptionalCaptureTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.SetUpgradeUI_CaptureVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CaptureIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ShelterCameras_C::SetUpgradeUI_CaptureVisibility(int32 CaptureIndex, bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "SetUpgradeUI_CaptureVisibility");

	Params::BP_ShelterCameras_C_SetUpgradeUI_CaptureVisibility Parms{};

	Parms.CaptureIndex = CaptureIndex;
	Parms.bVisibility = bVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.PreviewShelterUpgradeCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CapturedTransformIndex                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterCameras_C::PreviewShelterUpgradeCamera(int32 CapturedTransformIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "PreviewShelterUpgradeCamera");

	Params::BP_ShelterCameras_C_PreviewShelterUpgradeCamera Parms{};

	Parms.CapturedTransformIndex = CapturedTransformIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.CaptureAllUsedCameras
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CaptureTotalCount                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterCameras_C::CaptureAllUsedCameras(int32 CaptureTotalCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "CaptureAllUsedCameras");

	Params::BP_ShelterCameras_C_CaptureAllUsedCameras Parms{};

	Parms.CaptureTotalCount = CaptureTotalCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterCameras.BP_ShelterCameras_C.StopCapture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ShelterCameras_C::StopCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterCameras_C", "StopCapture");

	UObject::ProcessEvent(Func, nullptr);
}

}

