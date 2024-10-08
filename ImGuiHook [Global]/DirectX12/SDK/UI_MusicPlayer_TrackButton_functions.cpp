#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MusicPlayer_TrackButton

#include "Basic.hpp"

#include "UI_MusicPlayer_TrackButton_classes.hpp"
#include "UI_MusicPlayer_TrackButton_parameters.hpp"


namespace SDK
{

// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.ExecuteUbergraph_UI_MusicPlayer_TrackButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_TrackButton_C::ExecuteUbergraph_UI_MusicPlayer_TrackButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_TrackButton_C", "ExecuteUbergraph_UI_MusicPlayer_TrackButton");

	Params::UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_TrackButton_C::BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_TrackButton_C", "BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	Params::UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_TrackButton_C::BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_TrackButton_C", "BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	Params::UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_TrackButton_C::BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_TrackButton_C", "BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MusicPlayer_C*                MusicPlayerUI_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MusicTrack_C*                 Track_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TrackIndex_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_TrackButton_C::Initialize(class UUI_MusicPlayer_C* MusicPlayerUI_0, class UBP_MusicTrack_C* Track_0, int32 TrackIndex_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_TrackButton_C", "Initialize");

	Params::UI_MusicPlayer_TrackButton_C_Initialize Parms{};

	Parms.MusicPlayerUI_0 = MusicPlayerUI_0;
	Parms.Track_0 = Track_0;
	Parms.TrackIndex_0 = TrackIndex_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MusicPlayer_TrackButton_C::SelectButton(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_TrackButton_C", "SelectButton");

	Params::UI_MusicPlayer_TrackButton_C_SelectButton Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.PlayingThisButtonTrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaying                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MusicPlayer_TrackButton_C::PlayingThisButtonTrack(bool IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_TrackButton_C", "PlayingThisButtonTrack");

	Params::UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack Parms{};

	Parms.IsPlaying = IsPlaying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.SetTrackInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMusicTrackRow                   TrackInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_MusicPlayer_TrackButton_C::SetTrackInfo(const struct FMusicTrackRow& TrackInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_TrackButton_C", "SetTrackInfo");

	Params::UI_MusicPlayer_TrackButton_C_SetTrackInfo Parms{};

	Parms.TrackInfo = std::move(TrackInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.UpdateTrackOverlay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBlacklisted                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MusicPlayer_TrackButton_C::UpdateTrackOverlay(bool IsUnlocked, bool IsBlacklisted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_TrackButton_C", "UpdateTrackOverlay");

	Params::UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay Parms{};

	Parms.IsUnlocked = IsUnlocked;
	Parms.IsBlacklisted = IsBlacklisted;

	UObject::ProcessEvent(Func, &Parms);
}

}

