#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MusicPlayer_Notification

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MusicPlayer_Notification.UI_MusicPlayer_Notification_C
// 0x0030 (0x0300 - 0x02D0)
class UUI_MusicPlayer_Notification_C final : public UNotificationBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFlameTextBlock*                        AuthorName_Text;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_124;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_281;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SongName_Text;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_MusicPlayer_Notification(int32 EntryPoint);
	void HideWidget();
	void OnHide();
	void OnShow();
	void SetTrackInfo(const struct FMusicTrackRow& TrackInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MusicPlayer_Notification_C">();
	}
	static class UUI_MusicPlayer_Notification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MusicPlayer_Notification_C>();
	}
};
static_assert(alignof(UUI_MusicPlayer_Notification_C) == 0x000008, "Wrong alignment on UUI_MusicPlayer_Notification_C");
static_assert(sizeof(UUI_MusicPlayer_Notification_C) == 0x000300, "Wrong size on UUI_MusicPlayer_Notification_C");
static_assert(offsetof(UUI_MusicPlayer_Notification_C, UberGraphFrame) == 0x0002D0, "Member 'UUI_MusicPlayer_Notification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_Notification_C, FadeIn) == 0x0002D8, "Member 'UUI_MusicPlayer_Notification_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_Notification_C, AuthorName_Text) == 0x0002E0, "Member 'UUI_MusicPlayer_Notification_C::AuthorName_Text' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_Notification_C, Image_124) == 0x0002E8, "Member 'UUI_MusicPlayer_Notification_C::Image_124' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_Notification_C, Image_281) == 0x0002F0, "Member 'UUI_MusicPlayer_Notification_C::Image_281' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_Notification_C, SongName_Text) == 0x0002F8, "Member 'UUI_MusicPlayer_Notification_C::SongName_Text' has a wrong offset!");

}

