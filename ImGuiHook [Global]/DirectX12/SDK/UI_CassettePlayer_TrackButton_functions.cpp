#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CassettePlayer_TrackButton

#include "Basic.hpp"

#include "UI_CassettePlayer_TrackButton_classes.hpp"
#include "UI_CassettePlayer_TrackButton_parameters.hpp"


namespace SDK
{

// Function UI_CassettePlayer_TrackButton.UI_CassettePlayer_TrackButton_C.ExecuteUbergraph_UI_CassettePlayer_TrackButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CassettePlayer_TrackButton_C::ExecuteUbergraph_UI_CassettePlayer_TrackButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CassettePlayer_TrackButton_C", "ExecuteUbergraph_UI_CassettePlayer_TrackButton");

	Params::UI_CassettePlayer_TrackButton_C_ExecuteUbergraph_UI_CassettePlayer_TrackButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CassettePlayer_TrackButton.UI_CassettePlayer_TrackButton_C.BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CassettePlayer_TrackButton_C::BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CassettePlayer_TrackButton_C", "BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UI_CassettePlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CassettePlayer_TrackButton.UI_CassettePlayer_TrackButton_C.BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CassettePlayer_TrackButton_C::BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CassettePlayer_TrackButton_C", "BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	Params::UI_CassettePlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CassettePlayer_TrackButton.UI_CassettePlayer_TrackButton_C.BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CassettePlayer_TrackButton_C::BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CassettePlayer_TrackButton_C", "BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	Params::UI_CassettePlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CassettePlayer_TrackButton.UI_CassettePlayer_TrackButton_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CassettePlayer_C*             MusicPlayerUI                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CassetteTrack_C*              Track_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TrackIndex_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CassettePlayer_TrackButton_C::Initialize(class UUI_CassettePlayer_C* MusicPlayerUI, class UBP_CassetteTrack_C* Track_0, int32 TrackIndex_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CassettePlayer_TrackButton_C", "Initialize");

	Params::UI_CassettePlayer_TrackButton_C_Initialize Parms{};

	Parms.MusicPlayerUI = MusicPlayerUI;
	Parms.Track_0 = Track_0;
	Parms.TrackIndex_0 = TrackIndex_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CassettePlayer_TrackButton.UI_CassettePlayer_TrackButton_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CassettePlayer_TrackButton_C::SelectButton(bool IsSelected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CassettePlayer_TrackButton_C", "SelectButton");

	Params::UI_CassettePlayer_TrackButton_C_SelectButton Parms{};

	Parms.IsSelected_0 = IsSelected_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CassettePlayer_TrackButton.UI_CassettePlayer_TrackButton_C.PlayingThisButtonTrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaying                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CassettePlayer_TrackButton_C::PlayingThisButtonTrack(bool IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CassettePlayer_TrackButton_C", "PlayingThisButtonTrack");

	Params::UI_CassettePlayer_TrackButton_C_PlayingThisButtonTrack Parms{};

	Parms.IsPlaying = IsPlaying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CassettePlayer_TrackButton.UI_CassettePlayer_TrackButton_C.SetTrackInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CassetteTrackInfo             TrackInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_CassettePlayer_TrackButton_C::SetTrackInfo(const struct FS_CassetteTrackInfo& TrackInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CassettePlayer_TrackButton_C", "SetTrackInfo");

	Params::UI_CassettePlayer_TrackButton_C_SetTrackInfo Parms{};

	Parms.TrackInfo = std::move(TrackInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

