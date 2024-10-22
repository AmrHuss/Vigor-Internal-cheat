#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MusicPlayer

#include "Basic.hpp"

#include "UI_MusicPlayer_classes.hpp"
#include "UI_MusicPlayer_parameters.hpp"


namespace SDK
{

// Function UI_MusicPlayer.UI_MusicPlayer_C.ExecuteUbergraph_UI_MusicPlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_C::ExecuteUbergraph_UI_MusicPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "ExecuteUbergraph_UI_MusicPlayer");

	Params::UI_MusicPlayer_C_ExecuteUbergraph_UI_MusicPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.PlayTrack
// (BlueprintCallable, BlueprintEvent)

void UUI_MusicPlayer_C::PlayTrack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "PlayTrack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.CloseMusicPlayer
// (BlueprintCallable, BlueprintEvent)

void UUI_MusicPlayer_C::CloseMusicPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "CloseMusicPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.BndEvt__UI_BlacklistButton_K2Node_ComponentBoundEvent_6_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MusicPlayer_C::BndEvt__UI_BlacklistButton_K2Node_ComponentBoundEvent_6_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "BndEvt__UI_BlacklistButton_K2Node_ComponentBoundEvent_6_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.LookUpDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_C::LookUpDown(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "LookUpDown");

	Params::UI_MusicPlayer_C_LookUpDown Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.Start Track Time Update
// (BlueprintCallable, BlueprintEvent)

void UUI_MusicPlayer_C::Start_Track_Time_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "Start Track Time Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MusicPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.Started New Song
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MusicTrack_C*                 Previous                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MusicTrack_C*                 Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_C::Started_New_Song(class UBP_MusicTrack_C* Previous, class UBP_MusicTrack_C* Current)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "Started New Song");

	Params::UI_MusicPlayer_C_Started_New_Song Parms{};

	Parms.Previous = Previous;
	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.BndEvt__UI_ShuffleButton_K2Node_ComponentBoundEvent_5_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MusicPlayer_C::BndEvt__UI_ShuffleButton_K2Node_ComponentBoundEvent_5_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "BndEvt__UI_ShuffleButton_K2Node_ComponentBoundEvent_5_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.BndEvt__UI_StopButton_K2Node_ComponentBoundEvent_4_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MusicPlayer_C::BndEvt__UI_StopButton_K2Node_ComponentBoundEvent_4_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "BndEvt__UI_StopButton_K2Node_ComponentBoundEvent_4_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.BndEvt__UI_CloseButton_K2Node_ComponentBoundEvent_3_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MusicPlayer_C::BndEvt__UI_CloseButton_K2Node_ComponentBoundEvent_3_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "BndEvt__UI_CloseButton_K2Node_ComponentBoundEvent_3_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.BndEvt__UI_ScrollUp_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MusicPlayer_C::BndEvt__UI_ScrollUp_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "BndEvt__UI_ScrollUp_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.BndEvt__UI_ScrollDown_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MusicPlayer_C::BndEvt__UI_ScrollDown_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "BndEvt__UI_ScrollDown_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MusicPlayer_C::BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.Populate Track List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_MusicTrack_C*>         Tracks                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBP_MusicTrack_C*                 PlayedTrack                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_C::Populate_Track_List(TArray<class UBP_MusicTrack_C*>& Tracks, class UBP_MusicTrack_C* PlayedTrack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "Populate Track List");

	Params::UI_MusicPlayer_C_Populate_Track_List Parms{};

	Parms.Tracks = std::move(Tracks);
	Parms.PlayedTrack = PlayedTrack;

	UObject::ProcessEvent(Func, &Parms);

	Tracks = std::move(Parms.Tracks);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.SelectTrackButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TrackIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_C::SelectTrackButton(int32 TrackIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "SelectTrackButton");

	Params::UI_MusicPlayer_C_SelectTrackButton Parms{};

	Parms.TrackIndex = TrackIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.SelectNextTrack
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_MusicPlayer_C::SelectNextTrack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "SelectNextTrack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.SelectPreviousTrack
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_MusicPlayer_C::SelectPreviousTrack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "SelectPreviousTrack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.PlaySelectedButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MusicPlayer_C::PlaySelectedButton(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "PlaySelectedButton");

	Params::UI_MusicPlayer_C_PlaySelectedButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.GetSelectedTrackButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MusicPlayer_TrackButton_C*    SelectedTrackButton                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MusicPlayer_C::GetSelectedTrackButton(class UUI_MusicPlayer_TrackButton_C** SelectedTrackButton, int32* Index_0, bool* IsFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "GetSelectedTrackButton");

	Params::UI_MusicPlayer_C_GetSelectedTrackButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedTrackButton != nullptr)
		*SelectedTrackButton = Parms.SelectedTrackButton;

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.GetPlayedTrackButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MusicPlayer_TrackButton_C*    SelectedTrackButton                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_C::GetPlayedTrackButton(class UUI_MusicPlayer_TrackButton_C** SelectedTrackButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "GetPlayedTrackButton");

	Params::UI_MusicPlayer_C_GetPlayedTrackButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedTrackButton != nullptr)
		*SelectedTrackButton = Parms.SelectedTrackButton;
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.GetTrackButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MusicTrack_C*                 MusicTrack                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MusicPlayer_TrackButton_C*    Button                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_C::GetTrackButton(class UBP_MusicTrack_C* MusicTrack, class UUI_MusicPlayer_TrackButton_C** Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "GetTrackButton");

	Params::UI_MusicPlayer_C_GetTrackButton Parms{};

	Parms.MusicTrack = MusicTrack;

	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.SetIsShuffle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShuffle                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MusicPlayer_C::SetIsShuffle(bool IsShuffle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "SetIsShuffle");

	Params::UI_MusicPlayer_C_SetIsShuffle Parms{};

	Parms.IsShuffle = IsShuffle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.SetCurrentTrackInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MusicTrack_C*                 Track                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_C::SetCurrentTrackInfo(class UBP_MusicTrack_C* Track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "SetCurrentTrackInfo");

	Params::UI_MusicPlayer_C_SetCurrentTrackInfo Parms{};

	Parms.Track = Track;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.UpdateTrackTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_MusicPlayer_C::UpdateTrackTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "UpdateTrackTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.Get Time Text From Float
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UUI_MusicPlayer_C::Get_Time_Text_From_Float(float Value, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "Get Time Text From Float");

	Params::UI_MusicPlayer_C_Get_Time_Text_From_Float Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.Enable Axis Scroll
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_MusicPlayer_C::Enable_Axis_Scroll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "Enable Axis Scroll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.UpdateBlacklistButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsBlacklisted                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MusicPlayer_C::UpdateBlacklistButton(bool bIsBlacklisted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "UpdateBlacklistButton");

	Params::UI_MusicPlayer_C_UpdateBlacklistButton Parms{};

	Parms.bIsBlacklisted = bIsBlacklisted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MusicPlayer.UI_MusicPlayer_C.SelectTrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TrackIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MusicPlayer_C::SelectTrack(int32 TrackIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MusicPlayer_C", "SelectTrack");

	Params::UI_MusicPlayer_C_SelectTrack Parms{};

	Parms.TrackIndex = TrackIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

